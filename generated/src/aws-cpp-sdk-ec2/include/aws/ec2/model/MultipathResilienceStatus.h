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
enum class MultipathResilienceStatus { NOT_SET, pending, enabled, disabled };

namespace MultipathResilienceStatusMapper {
AWS_EC2_API MultipathResilienceStatus GetMultipathResilienceStatusForName(const Aws::String& name);

AWS_EC2_API Aws::String GetNameForMultipathResilienceStatus(MultipathResilienceStatus value);
}  // namespace MultipathResilienceStatusMapper
}  // namespace Model
}  // namespace EC2
}  // namespace Aws
