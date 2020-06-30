/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/client/AWSError.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/eks/EKSErrors.h>
#include <aws/eks/model/ClientException.h>
#include <aws/eks/model/ResourceNotFoundException.h>
#include <aws/eks/model/InvalidParameterException.h>
#include <aws/eks/model/ResourceLimitExceededException.h>
#include <aws/eks/model/UnsupportedAvailabilityZoneException.h>
#include <aws/eks/model/ServerException.h>
#include <aws/eks/model/ResourceInUseException.h>
#include <aws/eks/model/InvalidRequestException.h>

using namespace Aws::Client;
using namespace Aws::Utils;
using namespace Aws::EKS;
using namespace Aws::EKS::Model;

namespace Aws
{
namespace EKS
{
template<> AWS_EKS_API ClientException EKSError::GetModeledError()
{
  assert(this->GetErrorType() == EKSErrors::CLIENT);
  return ClientException(this->GetJsonPayload().View());
}

template<> AWS_EKS_API ResourceNotFoundException EKSError::GetModeledError()
{
  assert(this->GetErrorType() == EKSErrors::RESOURCE_NOT_FOUND);
  return ResourceNotFoundException(this->GetJsonPayload().View());
}

template<> AWS_EKS_API InvalidParameterException EKSError::GetModeledError()
{
  assert(this->GetErrorType() == EKSErrors::INVALID_PARAMETER);
  return InvalidParameterException(this->GetJsonPayload().View());
}

template<> AWS_EKS_API ResourceLimitExceededException EKSError::GetModeledError()
{
  assert(this->GetErrorType() == EKSErrors::RESOURCE_LIMIT_EXCEEDED);
  return ResourceLimitExceededException(this->GetJsonPayload().View());
}

template<> AWS_EKS_API UnsupportedAvailabilityZoneException EKSError::GetModeledError()
{
  assert(this->GetErrorType() == EKSErrors::UNSUPPORTED_AVAILABILITY_ZONE);
  return UnsupportedAvailabilityZoneException(this->GetJsonPayload().View());
}

template<> AWS_EKS_API ServerException EKSError::GetModeledError()
{
  assert(this->GetErrorType() == EKSErrors::SERVER);
  return ServerException(this->GetJsonPayload().View());
}

template<> AWS_EKS_API ResourceInUseException EKSError::GetModeledError()
{
  assert(this->GetErrorType() == EKSErrors::RESOURCE_IN_USE);
  return ResourceInUseException(this->GetJsonPayload().View());
}

template<> AWS_EKS_API InvalidRequestException EKSError::GetModeledError()
{
  assert(this->GetErrorType() == EKSErrors::INVALID_REQUEST);
  return InvalidRequestException(this->GetJsonPayload().View());
}

namespace EKSErrorMapper
{

static const int CLIENT_HASH = HashingUtils::HashString("ClientException");
static const int NOT_FOUND_HASH = HashingUtils::HashString("NotFoundException");
static const int INVALID_PARAMETER_HASH = HashingUtils::HashString("InvalidParameterException");
static const int RESOURCE_LIMIT_EXCEEDED_HASH = HashingUtils::HashString("ResourceLimitExceededException");
static const int UNSUPPORTED_AVAILABILITY_ZONE_HASH = HashingUtils::HashString("UnsupportedAvailabilityZoneException");
static const int SERVER_HASH = HashingUtils::HashString("ServerException");
static const int RESOURCE_IN_USE_HASH = HashingUtils::HashString("ResourceInUseException");
static const int BAD_REQUEST_HASH = HashingUtils::HashString("BadRequestException");
static const int INVALID_REQUEST_HASH = HashingUtils::HashString("InvalidRequestException");


AWSError<CoreErrors> GetErrorForName(const char* errorName)
{
  int hashCode = HashingUtils::HashString(errorName);

  if (hashCode == CLIENT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(EKSErrors::CLIENT), false);
  }
  else if (hashCode == NOT_FOUND_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(EKSErrors::NOT_FOUND), false);
  }
  else if (hashCode == INVALID_PARAMETER_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(EKSErrors::INVALID_PARAMETER), false);
  }
  else if (hashCode == RESOURCE_LIMIT_EXCEEDED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(EKSErrors::RESOURCE_LIMIT_EXCEEDED), false);
  }
  else if (hashCode == UNSUPPORTED_AVAILABILITY_ZONE_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(EKSErrors::UNSUPPORTED_AVAILABILITY_ZONE), false);
  }
  else if (hashCode == SERVER_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(EKSErrors::SERVER), false);
  }
  else if (hashCode == RESOURCE_IN_USE_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(EKSErrors::RESOURCE_IN_USE), false);
  }
  else if (hashCode == BAD_REQUEST_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(EKSErrors::BAD_REQUEST), false);
  }
  else if (hashCode == INVALID_REQUEST_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(EKSErrors::INVALID_REQUEST), false);
  }
  return AWSError<CoreErrors>(CoreErrors::UNKNOWN, false);
}

} // namespace EKSErrorMapper
} // namespace EKS
} // namespace Aws
