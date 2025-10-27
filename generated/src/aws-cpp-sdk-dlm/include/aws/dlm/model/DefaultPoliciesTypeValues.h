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
enum class DefaultPoliciesTypeValues { NOT_SET, VOLUME, INSTANCE, ALL };

namespace DefaultPoliciesTypeValuesMapper {
AWS_DLM_API DefaultPoliciesTypeValues GetDefaultPoliciesTypeValuesForName(const Aws::String& name);

AWS_DLM_API Aws::String GetNameForDefaultPoliciesTypeValues(DefaultPoliciesTypeValues value);
}  // namespace DefaultPoliciesTypeValuesMapper
}  // namespace Model
}  // namespace DLM
}  // namespace Aws
