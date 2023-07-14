## Contributing Back
**Please Do!**

__Jump To:__
* [Bug Reports](#bug-reports)
* [Feature Requests](#feature-requests)
* [Code Contributions](#code-contributions)
* [Contribution Guidelines](#Contribution-Guidelines)

## Bug Reports
Bug reports are accepted through the [Issues][issues] page.

### Before Submitting a Bug Report

Before submitting a bug report, please do the following:

1. Do a search through the existing issues to make sure it has not already been reported. If there's an existing one, be sure give a +1 reaction which will help us prioritize which issues to address first.

2. If possible, upgrade to the latest release of the SDK. The SDK has a near daily release cadence so it's possible the bug has already been fixed in the latest version.

If, after doing the above steps, you determine that you need to submit a bug report, refer to the next section.

### Submitting a Bug Report
So that we are able to assist you as effectively as possible with the issue, please ensure that your bug report has the following:

* A short, descriptive title. Ideally, other community members should be able to get a good idea of the issue just from reading the title.
* A succint, detailed description of the problem you're experiencing. This should include:
  * Expected behavior of the SDK and the actual behavior exhibited.
  * Any details of your application environment that may be relevant. At minimum, this should include the __SDK version__ and __Operating System__ you're using.
  * If applicable, the exception stacktrace.
  * If you are able to create one, include a [Minimal Working Example][mwe] that reproduces the issue.
* [Markdown][markdown] formatting as appropriate to make the report easier to read; for example use code blocks when pasting a code snippet and exception stacktraces.

## Feature Requests
Like bug reports, feature requests are submitted through the [Issues][issues] page.

As with Bug Reports, please do a search of the open requests first before submitting a new one to avoid duplicates. If you find an existing one, give it a +1.

__NOTE:__ If this is a feature you intend to implement, please submit the feature request *before* working on any code changes. This will allow members on the SDK team to have a discussion with you to ensure that it's the right design and that it makes sense to include in the SDK. Keep in mind that other concerns like source and binary compatibility will also play a deciding factor.

### Submitting a Feature Request
Open an [issue][issues] with the following:

* A short, descriptive title. s should be able to get a good idea of the feature just from reading the title.Ideally, other community member
* A detailed description of the the proposed feature. Include justification for why it should be added to the SDK, and possibly example code to illustrate how it should work.
* [Markdown][markdown] formatting as appropriate to make the request easier to read.
* If you intend to implement this feature, indicate that you'd like to the issue to be assigned to you


## Code Contributions
Code contributions to the SDK are done through [Pull Requests][pull-requests]. Please keep the following in mind when considering a code contribution:

* The SDK is released under the [Apache 2.0 License][license].

   Any code you submit will be released under this license. If you are contributing a large/substantial feature, you may be asked to sign a Contributor License Agreement (CLA).
* For anything but very small or quick changes, you should always start by checking the [Issues][issues] page to see if the work is already being done by another person.

  If you're working on a bug fix, check to see if the bug has already been reported. If it has but no one is assigned to it, ask one of the maintainers to assign it to you before beginning work.  If you're confident the bug hasn't been reported yet, create a new [Bug Report](#bug-reports) then ask to be assigned to it.

  If you are thinking about adding entirely new functionality, open a [Feature Request](#feature-requests) first before beginning work; again this is to make sure that no one else is already working on it, and also that it makes sense to be included in the SDK.
* All code contributions must be accompanied with new or modified tests that verify that the code works as expected; i.e. that the issue has been fixed or that the functionality works as intended.

## Your First Code Change
Before submitting your pull request, refer to the pull request readiness
checklist below:

* [ ] Includes tests to exercise the new behavior
* [ ] Code is documented, especially public and user-facing constructs
* [ ] Git commit message is detailed and includes context behind the change
* [ ] If the change is related to an existing Bug Report or Feature Request, the issue number is referenced

__Note__: Some changes have additional requirements. Refer to the section below
to see if your change will require additional work to be accepted.

All Pull Requests must be approved by at least one member of the SDK team before it can be merged in. The members only have limited bandwitdth to review Pull Requests so it's not unusual for a Pull Request to go unreviewed for a few days, especially if it's a large or complex one. If, after a week, your Pull Request has not had any engagement from the SDK team, feel free to comment and tag a member to ask for a review.

If your branch has more than one commit when it's approved, you will also be asked to squash them into a single commit before it is merged in.

## Contribution Guidelines
* Don't make changes to generated clients directly, make your changes in the generator. Changes to Core, Scripts, and High-Level interfaces are fine directly in the code.
* Do not use non-trivial statics anywhere. This will cause custom memory managers to crash in random places.
* Use 4 spaces for indents and never use tabs.
* No exceptions.... no exceptions. Use the Outcome pattern for returning data if you need to also return an optional error code.
* Always think about platform independence. If this is impossible, put a nice abstraction on top of it and use an abstract factory.
* Use RAII, Aws::New and Aws::Delete should only appear in constructors and destructors.
* Be sure to follow the rule of 5.
* Use the C++ 11 standard where possible.
* Use UpperCamelCase for custom type names and function names. Use m_* for member variables. Don't use statics. If you must, use UpperCammelCase for static variables
* Always be const correct, and be mindful of when you need to support r-values. We don't trust compilers to optimize this uniformly accross builds so please be explicit.
* Namespace names should be UpperCammelCase. Never put a using namespace statement in a header file unless it is scoped by a class. It is fine to use a using namespace statement in a cpp file.
* Use enum class, not enum
* Prefer `#pragma once` for include guards.
* Forward declare whenever possible.
* Use nullptr instead of NULL.

[license]: ./LICENSE.txt
[mwe]: https://en.wikipedia.org/wiki/Minimal_Working_Example
[markdown]: https://guides.github.com/features/mastering-markdown/
[issues]: https://github.com/aws/aws-sdk-cpp/issues
[pull-requests]: https://github.com/aws/aws-sdk-cpp/pulls