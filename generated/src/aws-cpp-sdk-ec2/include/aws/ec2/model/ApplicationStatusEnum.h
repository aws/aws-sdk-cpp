/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ec2/EC2_EXPORTS.h>

namespace Aws {
namespace EC2 {
namespace Model {
enum class ApplicationStatusEnum { NOT_SET, ok, impaired, initializing, insufficient_data, not_applicable, suppressed };

namespace ApplicationStatusEnumMapper {
AWS_EC2_API ApplicationStatusEnum GetApplicationStatusEnumForName(const Aws::String& name);

AWS_EC2_API Aws::String GetNameForApplicationStatusEnum(ApplicationStatusEnum value);
}  // namespace ApplicationStatusEnumMapper
}  // namespace Model
}  // namespace EC2
}  // namespace Aws
