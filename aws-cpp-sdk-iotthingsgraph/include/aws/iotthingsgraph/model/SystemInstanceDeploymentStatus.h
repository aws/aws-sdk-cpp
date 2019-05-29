/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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
