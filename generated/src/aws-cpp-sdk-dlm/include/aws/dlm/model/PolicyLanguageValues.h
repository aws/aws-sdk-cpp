/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/dlm/DLM_EXPORTS.h>

namespace Aws {
namespace DLM {
namespace Model {
enum class PolicyLanguageValues { NOT_SET, SIMPLIFIED, STANDARD };

namespace PolicyLanguageValuesMapper {
AWS_DLM_API PolicyLanguageValues GetPolicyLanguageValuesForName(const Aws::String& name);

AWS_DLM_API Aws::String GetNameForPolicyLanguageValues(PolicyLanguageValues value);
}  // namespace PolicyLanguageValuesMapper
}  // namespace Model
}  // namespace DLM
}  // namespace Aws
