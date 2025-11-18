/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/iam/IAM_EXPORTS.h>

namespace Aws {
namespace IAM {
namespace Model {
enum class PolicyParameterTypeEnum { NOT_SET, string, stringList };

namespace PolicyParameterTypeEnumMapper {
AWS_IAM_API PolicyParameterTypeEnum GetPolicyParameterTypeEnumForName(const Aws::String& name);

AWS_IAM_API Aws::String GetNameForPolicyParameterTypeEnum(PolicyParameterTypeEnum value);
}  // namespace PolicyParameterTypeEnumMapper
}  // namespace Model
}  // namespace IAM
}  // namespace Aws
