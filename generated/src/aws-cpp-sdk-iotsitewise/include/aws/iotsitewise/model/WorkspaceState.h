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
enum class WorkspaceState { NOT_SET, CREATING, ACTIVE, UPDATING, DELETING, FAILED };

namespace WorkspaceStateMapper {
AWS_IOTSITEWISE_API WorkspaceState GetWorkspaceStateForName(const Aws::String& name);

AWS_IOTSITEWISE_API Aws::String GetNameForWorkspaceState(WorkspaceState value);
}  // namespace WorkspaceStateMapper
}  // namespace Model
}  // namespace IoTSiteWise
}  // namespace Aws
