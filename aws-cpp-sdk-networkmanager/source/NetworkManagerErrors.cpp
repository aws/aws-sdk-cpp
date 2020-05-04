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
#include <aws/networkmanager/NetworkManagerErrors.h>
#include <aws/networkmanager/model/ConflictException.h>
#include <aws/networkmanager/model/ServiceQuotaExceededException.h>
#include <aws/networkmanager/model/ThrottlingException.h>
#include <aws/networkmanager/model/ResourceNotFoundException.h>
#include <aws/networkmanager/model/InternalServerException.h>
#include <aws/networkmanager/model/ValidationException.h>

using namespace Aws::Client;
using namespace Aws::Utils;
using namespace Aws::NetworkManager;
using namespace Aws::NetworkManager::Model;

namespace Aws
{
namespace NetworkManager
{
template<> AWS_NETWORKMANAGER_API ConflictException NetworkManagerError::GetModeledError()
{
  assert(this->GetErrorType() == NetworkManagerErrors::CONFLICT);
  return ConflictException(this->GetJsonPayload().View());
}

template<> AWS_NETWORKMANAGER_API ServiceQuotaExceededException NetworkManagerError::GetModeledError()
{
  assert(this->GetErrorType() == NetworkManagerErrors::SERVICE_QUOTA_EXCEEDED);
  return ServiceQuotaExceededException(this->GetJsonPayload().View());
}

template<> AWS_NETWORKMANAGER_API ThrottlingException NetworkManagerError::GetModeledError()
{
  assert(this->GetErrorType() == NetworkManagerErrors::THROTTLING);
  return ThrottlingException(this->GetJsonPayload().View());
}

template<> AWS_NETWORKMANAGER_API ResourceNotFoundException NetworkManagerError::GetModeledError()
{
  assert(this->GetErrorType() == NetworkManagerErrors::RESOURCE_NOT_FOUND);
  return ResourceNotFoundException(this->GetJsonPayload().View());
}

template<> AWS_NETWORKMANAGER_API InternalServerException NetworkManagerError::GetModeledError()
{
  assert(this->GetErrorType() == NetworkManagerErrors::INTERNAL_SERVER);
  return InternalServerException(this->GetJsonPayload().View());
}

template<> AWS_NETWORKMANAGER_API ValidationException NetworkManagerError::GetModeledError()
{
  assert(this->GetErrorType() == NetworkManagerErrors::VALIDATION);
  return ValidationException(this->GetJsonPayload().View());
}

namespace NetworkManagerErrorMapper
{

static const int CONFLICT_HASH = HashingUtils::HashString("ConflictException");
static const int SERVICE_QUOTA_EXCEEDED_HASH = HashingUtils::HashString("ServiceQuotaExceededException");
static const int INTERNAL_SERVER_HASH = HashingUtils::HashString("InternalServerException");


AWSError<CoreErrors> GetErrorForName(const char* errorName)
{
  int hashCode = HashingUtils::HashString(errorName);

  if (hashCode == CONFLICT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(NetworkManagerErrors::CONFLICT), false);
  }
  else if (hashCode == SERVICE_QUOTA_EXCEEDED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(NetworkManagerErrors::SERVICE_QUOTA_EXCEEDED), false);
  }
  else if (hashCode == INTERNAL_SERVER_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(NetworkManagerErrors::INTERNAL_SERVER), false);
  }
  return AWSError<CoreErrors>(CoreErrors::UNKNOWN, false);
}

} // namespace NetworkManagerErrorMapper
} // namespace NetworkManager
} // namespace Aws
