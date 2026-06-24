/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/application-signals/ApplicationSignals_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws {
namespace ApplicationSignals {
namespace Model {
enum class ProgrammingLanguage { NOT_SET, Java, Python, Javascript };

namespace ProgrammingLanguageMapper {
AWS_APPLICATIONSIGNALS_API ProgrammingLanguage GetProgrammingLanguageForName(const Aws::String& name);

AWS_APPLICATIONSIGNALS_API Aws::String GetNameForProgrammingLanguage(ProgrammingLanguage value);
}  // namespace ProgrammingLanguageMapper
}  // namespace Model
}  // namespace ApplicationSignals
}  // namespace Aws
