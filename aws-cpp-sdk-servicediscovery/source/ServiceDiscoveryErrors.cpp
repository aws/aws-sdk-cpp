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

#include <aws/core/client/AWSError.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/servicediscovery/ServiceDiscoveryErrors.h>

using namespace Aws::Client;
using namespace Aws::ServiceDiscovery;
using namespace Aws::Utils;

namespace Aws
{
namespace ServiceDiscovery
{
namespace ServiceDiscoveryErrorMapper
{

static const int SERVICE_ALREADY_EXISTS_HASH = HashingUtils::HashString("ServiceAlreadyExists");
static const int INVALID_INPUT_HASH = HashingUtils::HashString("InvalidInput");
static const int NAMESPACE_ALREADY_EXISTS_HASH = HashingUtils::HashString("NamespaceAlreadyExists");
static const int NAMESPACE_NOT_FOUND_HASH = HashingUtils::HashString("NamespaceNotFound");
static const int OPERATION_NOT_FOUND_HASH = HashingUtils::HashString("OperationNotFound");
static const int INSTANCE_NOT_FOUND_HASH = HashingUtils::HashString("InstanceNotFound");
static const int RESOURCE_IN_USE_HASH = HashingUtils::HashString("ResourceInUse");
static const int DUPLICATE_REQUEST_HASH = HashingUtils::HashString("DuplicateRequest");
static const int SERVICE_NOT_FOUND_HASH = HashingUtils::HashString("ServiceNotFound");
static const int RESOURCE_LIMIT_EXCEEDED_HASH = HashingUtils::HashString("ResourceLimitExceeded");
static const int CUSTOM_HEALTH_NOT_FOUND_HASH = HashingUtils::HashString("CustomHealthNotFound");


AWSError<CoreErrors> GetErrorForName(const char* errorName)
{
  int hashCode = HashingUtils::HashString(errorName);

  if (hashCode == SERVICE_ALREADY_EXISTS_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(ServiceDiscoveryErrors::SERVICE_ALREADY_EXISTS), false);
  }
  else if (hashCode == INVALID_INPUT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(ServiceDiscoveryErrors::INVALID_INPUT), false);
  }
  else if (hashCode == NAMESPACE_ALREADY_EXISTS_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(ServiceDiscoveryErrors::NAMESPACE_ALREADY_EXISTS), false);
  }
  else if (hashCode == NAMESPACE_NOT_FOUND_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(ServiceDiscoveryErrors::NAMESPACE_NOT_FOUND), false);
  }
  else if (hashCode == OPERATION_NOT_FOUND_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(ServiceDiscoveryErrors::OPERATION_NOT_FOUND), false);
  }
  else if (hashCode == INSTANCE_NOT_FOUND_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(ServiceDiscoveryErrors::INSTANCE_NOT_FOUND), false);
  }
  else if (hashCode == RESOURCE_IN_USE_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(ServiceDiscoveryErrors::RESOURCE_IN_USE), false);
  }
  else if (hashCode == DUPLICATE_REQUEST_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(ServiceDiscoveryErrors::DUPLICATE_REQUEST), false);
  }
  else if (hashCode == SERVICE_NOT_FOUND_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(ServiceDiscoveryErrors::SERVICE_NOT_FOUND), false);
  }
  else if (hashCode == RESOURCE_LIMIT_EXCEEDED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(ServiceDiscoveryErrors::RESOURCE_LIMIT_EXCEEDED), false);
  }
  else if (hashCode == CUSTOM_HEALTH_NOT_FOUND_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(ServiceDiscoveryErrors::CUSTOM_HEALTH_NOT_FOUND), false);
  }
  return AWSError<CoreErrors>(CoreErrors::UNKNOWN, false);
}

} // namespace ServiceDiscoveryErrorMapper
} // namespace ServiceDiscovery
} // namespace Aws
