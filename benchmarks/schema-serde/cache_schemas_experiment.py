"""Experiment only: make every generated BuildSchema() in a service build its schema once.

Rewrites, in place, each
    std::shared_ptr<const smithy::schema::Schema> X::BuildSchema() { return <expr>; }
in the generated model sources of one service into
    { static const auto* cached = new std::shared_ptr<const smithy::schema::Schema>(<expr>); return *cached; }

The cached schemas are deliberately never freed, which sidesteps the ShutdownAPI lifetime problem that a real
implementation has to solve (a function-local static would be destroyed after ShutdownAPI). Not for production use.

Usage: python3 cache_schemas_experiment.py <sdk root> <service, e.g. dynamodb>
"""
import glob
import re
import sys

root, service = sys.argv[1], sys.argv[2]
pattern = re.compile(r'(std::shared_ptr<const smithy::schema::Schema> (\w+)::BuildSchema\(\) \{\n)(\s*)return (.*?);\n\}', re.S)
files = functions = 0
for path in glob.glob(f"{root}/generated/src/aws-cpp-sdk-{service}/source/model/*.cpp"):
    text = open(path).read()
    new, count = pattern.subn(
        lambda m: f"{m.group(1)}{m.group(3)}// EXPERIMENT: build once, never freed (sidesteps ShutdownAPI lifetime)\n"
                  f"{m.group(3)}static const auto* cached = new std::shared_ptr<const smithy::schema::Schema>({m.group(4)});\n"
                  f"{m.group(3)}return *cached;\n}}",
        text)
    if count:
        open(path, "w").write(new)
        files += 1
        functions += count
print(f"patched {functions} BuildSchema() in {files} files")
