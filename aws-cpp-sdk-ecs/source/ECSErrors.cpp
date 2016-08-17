/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/core/client/AWSError.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/ecs/ECSErrors.h>

using namespace Aws::Client;
using namespace Aws::ECS;
using namespace Aws::Utils;

namespace Aws
{
namespace ECS
{
namespace ECSErrorMapper
{

static const int UPDATE_IN_PROGRESS_HASH = HashingUtils::HashString("UpdateInProgressException");
static const int CLIENT_HASH = HashingUtils::HashString("ClientException");
static const int CLUSTER_CONTAINS_CONTAINER_INSTANCES_HASH = HashingUtils::HashString("ClusterContainsContainerInstancesException");
static const int NO_UPDATE_AVAILABLE_HASH = HashingUtils::HashString("NoUpdateAvailableException");
static const int CLUSTER_CONTAINS_SERVICES_HASH = HashingUtils::HashString("ClusterContainsServicesException");
static const int SERVER_HASH = HashingUtils::HashString("ServerException");
static const int CLUSTER_NOT_FOUND_HASH = HashingUtils::HashString("ClusterNotFoundException");
static const int SERVICE_NOT_ACTIVE_HASH = HashingUtils::HashString("ServiceNotActiveException");
static const int INVALID_PARAMETER_HASH = HashingUtils::HashString("InvalidParameterException");
static const int SERVICE_NOT_FOUND_HASH = HashingUtils::HashString("ServiceNotFoundException");
static const int MISSING_VERSION_HASH = HashingUtils::HashString("MissingVersionException");


AWSError<CoreErrors> GetErrorForName(const char* errorName)
{
  int hashCode = HashingUtils::HashString(errorName);

  if (hashCode == UPDATE_IN_PROGRESS_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(ECSErrors::UPDATE_IN_PROGRESS), false);
  }
  else if (hashCode == CLIENT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(ECSErrors::CLIENT), false);
  }
  else if (hashCode == CLUSTER_CONTAINS_CONTAINER_INSTANCES_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(ECSErrors::CLUSTER_CONTAINS_CONTAINER_INSTANCES), false);
  }
  else if (hashCode == NO_UPDATE_AVAILABLE_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(ECSErrors::NO_UPDATE_AVAILABLE), false);
  }
  else if (hashCode == CLUSTER_CONTAINS_SERVICES_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(ECSErrors::CLUSTER_CONTAINS_SERVICES), false);
  }
  else if (hashCode == SERVER_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(ECSErrors::SERVER), false);
  }
  else if (hashCode == CLUSTER_NOT_FOUND_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(ECSErrors::CLUSTER_NOT_FOUND), false);
  }
  else if (hashCode == SERVICE_NOT_ACTIVE_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(ECSErrors::SERVICE_NOT_ACTIVE), false);
  }
  else if (hashCode == INVALID_PARAMETER_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(ECSErrors::INVALID_PARAMETER), false);
  }
  else if (hashCode == SERVICE_NOT_FOUND_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(ECSErrors::SERVICE_NOT_FOUND), false);
  }
  else if (hashCode == MISSING_VERSION_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(ECSErrors::MISSING_VERSION), false);
  }
  return AWSError<CoreErrors>(CoreErrors::UNKNOWN, false);
}

} // namespace ECSErrorMapper
} // namespace ECS
} // namespace Aws
