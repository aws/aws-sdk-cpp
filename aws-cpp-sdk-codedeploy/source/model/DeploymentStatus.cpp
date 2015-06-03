/*
* Copyright 2010-2015 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/codedeploy/model/DeploymentStatus.h>
#include <aws/core/utils/HashingUtils.h>

using namespace Aws::Utils;

static const int Created_HASH = HashingUtils::HashString("Created");
static const int Queued_HASH = HashingUtils::HashString("Queued");
static const int InProgress_HASH = HashingUtils::HashString("InProgress");
static const int Succeeded_HASH = HashingUtils::HashString("Succeeded");
static const int Failed_HASH = HashingUtils::HashString("Failed");
static const int Stopped_HASH = HashingUtils::HashString("Stopped");

namespace Aws
{
namespace codedeploy
{
namespace Model
{
namespace DeploymentStatusMapper
{
DeploymentStatus GetDeploymentStatusForName(const Aws::String& name)
{
  int hashCode = HashingUtils::HashString(name.c_str());

  if (hashCode == Created_HASH)
  {
    return DeploymentStatus::Created;
  }
  else if (hashCode == Queued_HASH)
  {
    return DeploymentStatus::Queued;
  }
  else if (hashCode == InProgress_HASH)
  {
    return DeploymentStatus::InProgress;
  }
  else if (hashCode == Succeeded_HASH)
  {
    return DeploymentStatus::Succeeded;
  }
  else if (hashCode == Failed_HASH)
  {
    return DeploymentStatus::Failed;
  }
  else if (hashCode == Stopped_HASH)
  {
    return DeploymentStatus::Stopped;
  }

  return DeploymentStatus::Created;
}

Aws::String GetNameForDeploymentStatus(DeploymentStatus value)
{
  switch(value)
  {
  case DeploymentStatus::Created:
    return "Created";
  case DeploymentStatus::Queued:
    return "Queued";
  case DeploymentStatus::InProgress:
    return "InProgress";
  case DeploymentStatus::Succeeded:
    return "Succeeded";
  case DeploymentStatus::Failed:
    return "Failed";
  case DeploymentStatus::Stopped:
    return "Stopped";
  default:
    return "Created";
  }
}

} // namespace DeploymentStatusMapper
} // namespace Model
} // namespace codedeploy
} // namespace Aws
