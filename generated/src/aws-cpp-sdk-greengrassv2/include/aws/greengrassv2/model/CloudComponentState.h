/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/greengrassv2/GreengrassV2_EXPORTS.h>

namespace Aws {
namespace GreengrassV2 {
namespace Model {
enum class CloudComponentState { NOT_SET, REQUESTED, INITIATED, DEPLOYABLE, FAILED, DEPRECATED };

namespace CloudComponentStateMapper {
AWS_GREENGRASSV2_API CloudComponentState GetCloudComponentStateForName(const Aws::String& name);

AWS_GREENGRASSV2_API Aws::String GetNameForCloudComponentState(CloudComponentState value);
}  // namespace CloudComponentStateMapper
}  // namespace Model
}  // namespace GreengrassV2
}  // namespace Aws
