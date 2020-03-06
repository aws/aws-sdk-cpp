---
name: "\U0001F4AC Questions / Help"
about: If you have questions, please check AWS Forums or StackOverflow
title: ''
labels: guidance, needs-triage
assignees: ''

---

Confirm by changing [ ] to [x] below:
- [ ] I've gone though [Developer Guide](https://docs.aws.amazon.com/sdk-for-cpp/v1/developer-guide/welcome.html) and [API reference](http://sdk.amazonaws.com/cpp/api/LATEST/index.html)
- [ ] I've searched for [previous similar issues](https://github.com/aws/aws-sdk-cpp/issues) and didn't find any solution

**Platform/OS/Hardware/Device**
What are you running the sdk on?

**Describe the question**


**Logs/output**
If applicable, add logs or error output.

To enable logging, set the following system properties:

*REMEMBER TO SANITIZE YOUR PERSONAL INFO*

```
options.loggingOptions.logLevel = Aws::Utils::Logging::LogLevel::Trace;
Aws::InitAPI(options)
```
