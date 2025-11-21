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
enum class BeaconStackOperationStatus { NOT_SET, IN_PROGRESS, SUCCEEDED, FAILED };

namespace BeaconStackOperationStatusMapper {
AWS_CLOUDFORMATION_API BeaconStackOperationStatus GetBeaconStackOperationStatusForName(const Aws::String& name);

AWS_CLOUDFORMATION_API Aws::String GetNameForBeaconStackOperationStatus(BeaconStackOperationStatus value);
}  // namespace BeaconStackOperationStatusMapper
}  // namespace Model
}  // namespace CloudFormation
}  // namespace Aws
