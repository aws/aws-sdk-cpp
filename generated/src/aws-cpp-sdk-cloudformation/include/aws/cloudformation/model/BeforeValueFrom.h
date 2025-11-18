/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudformation/CloudFormation_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws {
namespace CloudFormation {
namespace Model {
enum class BeforeValueFrom { NOT_SET, PREVIOUS_DEPLOYMENT_STATE, ACTUAL_STATE };

namespace BeforeValueFromMapper {
AWS_CLOUDFORMATION_API BeforeValueFrom GetBeforeValueFromForName(const Aws::String& name);

AWS_CLOUDFORMATION_API Aws::String GetNameForBeforeValueFrom(BeforeValueFrom value);
}  // namespace BeforeValueFromMapper
}  // namespace Model
}  // namespace CloudFormation
}  // namespace Aws
