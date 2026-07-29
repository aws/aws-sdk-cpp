/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/iotsitewise/IoTSiteWise_EXPORTS.h>

namespace Aws {
namespace IoTSiteWise {
namespace Model {
enum class ResourceState { NOT_SET, CREATING, ACTIVE, UPDATING, DELETING, FAILED };

namespace ResourceStateMapper {
AWS_IOTSITEWISE_API ResourceState GetResourceStateForName(const Aws::String& name);

AWS_IOTSITEWISE_API Aws::String GetNameForResourceState(ResourceState value);
}  // namespace ResourceStateMapper
}  // namespace Model
}  // namespace IoTSiteWise
}  // namespace Aws
