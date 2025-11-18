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
enum class AfterValueFrom { NOT_SET, TEMPLATE };

namespace AfterValueFromMapper {
AWS_CLOUDFORMATION_API AfterValueFrom GetAfterValueFromForName(const Aws::String& name);

AWS_CLOUDFORMATION_API Aws::String GetNameForAfterValueFrom(AfterValueFrom value);
}  // namespace AfterValueFromMapper
}  // namespace Model
}  // namespace CloudFormation
}  // namespace Aws
