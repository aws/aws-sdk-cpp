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
enum class PortalState { NOT_SET, CREATING, PENDING, UPDATING, DELETING, ACTIVE, FAILED };

namespace PortalStateMapper {
AWS_IOTSITEWISE_API PortalState GetPortalStateForName(const Aws::String& name);

AWS_IOTSITEWISE_API Aws::String GetNameForPortalState(PortalState value);
}  // namespace PortalStateMapper
}  // namespace Model
}  // namespace IoTSiteWise
}  // namespace Aws
