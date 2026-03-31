/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agentcore/model/LanguageRuntime.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>

using namespace Aws::Utils;

namespace Aws {
namespace BedrockAgentCore {
namespace Model {
namespace LanguageRuntimeMapper {

static const int nodejs_HASH = HashingUtils::HashString("nodejs");
static const int deno_HASH = HashingUtils::HashString("deno");
static const int python_HASH = HashingUtils::HashString("python");

LanguageRuntime GetLanguageRuntimeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == nodejs_HASH) {
    return LanguageRuntime::nodejs;
  } else if (hashCode == deno_HASH) {
    return LanguageRuntime::deno;
  } else if (hashCode == python_HASH) {
    return LanguageRuntime::python;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<LanguageRuntime>(hashCode);
  }

  return LanguageRuntime::NOT_SET;
}

Aws::String GetNameForLanguageRuntime(LanguageRuntime enumValue) {
  switch (enumValue) {
    case LanguageRuntime::NOT_SET:
      return {};
    case LanguageRuntime::nodejs:
      return "nodejs";
    case LanguageRuntime::deno:
      return "deno";
    case LanguageRuntime::python:
      return "python";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace LanguageRuntimeMapper
}  // namespace Model
}  // namespace BedrockAgentCore
}  // namespace Aws
