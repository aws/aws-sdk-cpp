/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotthingsgraph/IoTThingsGraph_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace IoTThingsGraph
{
namespace Model
{
  enum class SystemInstanceDeploymentStatus
  {
    NOT_SET,
    NOT_DEPLOYED,
    BOOTSTRAP,
    DEPLOY_IN_PROGRESS,
    DEPLOYED_IN_TARGET,
    UNDEPLOY_IN_PROGRESS,
    FAILED,
    PENDING_DELETE,
    DELETED_IN_TARGET
  };

namespace SystemInstanceDeploymentStatusMapper
{
AWS_IOTTHINGSGRAPH_API SystemInstanceDeploymentStatus GetSystemInstanceDeploymentStatusForName(const Aws::String& name);

AWS_IOTTHINGSGRAPH_API Aws::String GetNameForSystemInstanceDeploymentStatus(SystemInstanceDeploymentStatus value);
} // namespace SystemInstanceDeploymentStatusMapper
} // namespace Model
} // namespace IoTThingsGraph
} // namespace Aws
