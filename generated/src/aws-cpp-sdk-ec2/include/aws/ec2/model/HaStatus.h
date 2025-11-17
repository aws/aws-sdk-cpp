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
enum class HaStatus { NOT_SET, processing, active, standby, invalid };

namespace HaStatusMapper {
AWS_EC2_API HaStatus GetHaStatusForName(const Aws::String& name);

AWS_EC2_API Aws::String GetNameForHaStatus(HaStatus value);
}  // namespace HaStatusMapper
}  // namespace Model
}  // namespace EC2
}  // namespace Aws
