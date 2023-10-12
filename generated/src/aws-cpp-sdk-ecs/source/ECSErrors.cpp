/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/client/AWSError.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/ecs/ECSErrors.h>

using namespace Aws::Client;
using namespace Aws::Utils;
using namespace Aws::ECS;

namespace Aws
{
namespace ECS
{
namespace ECSErrorMapper
{

static constexpr uint32_t CLIENT_HASH = ConstExprHashingUtils::HashString("ClientException");
static constexpr uint32_t NO_UPDATE_AVAILABLE_HASH = ConstExprHashingUtils::HashString("NoUpdateAvailableException");
static constexpr uint32_t UNSUPPORTED_FEATURE_HASH = ConstExprHashingUtils::HashString("UnsupportedFeatureException");
static constexpr uint32_t TARGET_NOT_FOUND_HASH = ConstExprHashingUtils::HashString("TargetNotFoundException");
static constexpr uint32_t CLUSTER_CONTAINS_CONTAINER_INSTANCES_HASH = ConstExprHashingUtils::HashString("ClusterContainsContainerInstancesException");
static constexpr uint32_t LIMIT_EXCEEDED_HASH = ConstExprHashingUtils::HashString("LimitExceededException");
static constexpr uint32_t PLATFORM_TASK_DEFINITION_INCOMPATIBILITY_HASH = ConstExprHashingUtils::HashString("PlatformTaskDefinitionIncompatibilityException");
static constexpr uint32_t MISSING_VERSION_HASH = ConstExprHashingUtils::HashString("MissingVersionException");
static constexpr uint32_t SERVER_HASH = ConstExprHashingUtils::HashString("ServerException");
static constexpr uint32_t UPDATE_IN_PROGRESS_HASH = ConstExprHashingUtils::HashString("UpdateInProgressException");
static constexpr uint32_t NAMESPACE_NOT_FOUND_HASH = ConstExprHashingUtils::HashString("NamespaceNotFoundException");
static constexpr uint32_t BLOCKED_HASH = ConstExprHashingUtils::HashString("BlockedException");
static constexpr uint32_t INVALID_PARAMETER_HASH = ConstExprHashingUtils::HashString("InvalidParameterException");
static constexpr uint32_t PLATFORM_UNKNOWN_HASH = ConstExprHashingUtils::HashString("PlatformUnknownException");
static constexpr uint32_t CLUSTER_NOT_FOUND_HASH = ConstExprHashingUtils::HashString("ClusterNotFoundException");
static constexpr uint32_t CLUSTER_CONTAINS_SERVICES_HASH = ConstExprHashingUtils::HashString("ClusterContainsServicesException");
static constexpr uint32_t TARGET_NOT_CONNECTED_HASH = ConstExprHashingUtils::HashString("TargetNotConnectedException");
static constexpr uint32_t CLUSTER_CONTAINS_TASKS_HASH = ConstExprHashingUtils::HashString("ClusterContainsTasksException");
static constexpr uint32_t RESOURCE_IN_USE_HASH = ConstExprHashingUtils::HashString("ResourceInUseException");
static constexpr uint32_t TASK_SET_NOT_FOUND_HASH = ConstExprHashingUtils::HashString("TaskSetNotFoundException");
static constexpr uint32_t SERVICE_NOT_FOUND_HASH = ConstExprHashingUtils::HashString("ServiceNotFoundException");
static constexpr uint32_t SERVICE_NOT_ACTIVE_HASH = ConstExprHashingUtils::HashString("ServiceNotActiveException");
static constexpr uint32_t ATTRIBUTE_LIMIT_EXCEEDED_HASH = ConstExprHashingUtils::HashString("AttributeLimitExceededException");


AWSError<CoreErrors> GetErrorForName(const char* errorName)
{
  uint32_t hashCode = HashingUtils::HashString(errorName);

  if (hashCode == CLIENT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(ECSErrors::CLIENT), false);
  }
  else if (hashCode == NO_UPDATE_AVAILABLE_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(ECSErrors::NO_UPDATE_AVAILABLE), false);
  }
  else if (hashCode == UNSUPPORTED_FEATURE_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(ECSErrors::UNSUPPORTED_FEATURE), false);
  }
  else if (hashCode == TARGET_NOT_FOUND_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(ECSErrors::TARGET_NOT_FOUND), false);
  }
  else if (hashCode == CLUSTER_CONTAINS_CONTAINER_INSTANCES_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(ECSErrors::CLUSTER_CONTAINS_CONTAINER_INSTANCES), false);
  }
  else if (hashCode == LIMIT_EXCEEDED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(ECSErrors::LIMIT_EXCEEDED), true);
  }
  else if (hashCode == PLATFORM_TASK_DEFINITION_INCOMPATIBILITY_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(ECSErrors::PLATFORM_TASK_DEFINITION_INCOMPATIBILITY), false);
  }
  else if (hashCode == MISSING_VERSION_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(ECSErrors::MISSING_VERSION), false);
  }
  else if (hashCode == SERVER_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(ECSErrors::SERVER), false);
  }
  else if (hashCode == UPDATE_IN_PROGRESS_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(ECSErrors::UPDATE_IN_PROGRESS), false);
  }
  else if (hashCode == NAMESPACE_NOT_FOUND_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(ECSErrors::NAMESPACE_NOT_FOUND), false);
  }
  else if (hashCode == BLOCKED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(ECSErrors::BLOCKED), false);
  }
  else if (hashCode == INVALID_PARAMETER_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(ECSErrors::INVALID_PARAMETER), false);
  }
  else if (hashCode == PLATFORM_UNKNOWN_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(ECSErrors::PLATFORM_UNKNOWN), false);
  }
  else if (hashCode == CLUSTER_NOT_FOUND_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(ECSErrors::CLUSTER_NOT_FOUND), false);
  }
  else if (hashCode == CLUSTER_CONTAINS_SERVICES_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(ECSErrors::CLUSTER_CONTAINS_SERVICES), false);
  }
  else if (hashCode == TARGET_NOT_CONNECTED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(ECSErrors::TARGET_NOT_CONNECTED), false);
  }
  else if (hashCode == CLUSTER_CONTAINS_TASKS_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(ECSErrors::CLUSTER_CONTAINS_TASKS), false);
  }
  else if (hashCode == RESOURCE_IN_USE_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(ECSErrors::RESOURCE_IN_USE), false);
  }
  else if (hashCode == TASK_SET_NOT_FOUND_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(ECSErrors::TASK_SET_NOT_FOUND), false);
  }
  else if (hashCode == SERVICE_NOT_FOUND_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(ECSErrors::SERVICE_NOT_FOUND), false);
  }
  else if (hashCode == SERVICE_NOT_ACTIVE_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(ECSErrors::SERVICE_NOT_ACTIVE), false);
  }
  else if (hashCode == ATTRIBUTE_LIMIT_EXCEEDED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(ECSErrors::ATTRIBUTE_LIMIT_EXCEEDED), false);
  }
  return AWSError<CoreErrors>(CoreErrors::UNKNOWN, false);
}

} // namespace ECSErrorMapper
} // namespace ECS
} // namespace Aws
