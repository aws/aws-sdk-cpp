/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/client/AWSError.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/lightsail/LightsailErrors.h>
#include <aws/lightsail/model/OperationFailureException.h>
#include <aws/lightsail/model/NotFoundException.h>
#include <aws/lightsail/model/AccessDeniedException.h>
#include <aws/lightsail/model/UnauthenticatedException.h>
#include <aws/lightsail/model/InvalidInputException.h>
#include <aws/lightsail/model/ServiceException.h>
#include <aws/lightsail/model/AccountSetupInProgressException.h>

using namespace Aws::Client;
using namespace Aws::Utils;
using namespace Aws::Lightsail;
using namespace Aws::Lightsail::Model;

namespace Aws
{
namespace Lightsail
{
template<> AWS_LIGHTSAIL_API OperationFailureException LightsailError::GetModeledError()
{
  assert(this->GetErrorType() == LightsailErrors::OPERATION_FAILURE);
  return OperationFailureException(this->GetJsonPayload().View());
}

template<> AWS_LIGHTSAIL_API NotFoundException LightsailError::GetModeledError()
{
  assert(this->GetErrorType() == LightsailErrors::NOT_FOUND);
  return NotFoundException(this->GetJsonPayload().View());
}

template<> AWS_LIGHTSAIL_API AccessDeniedException LightsailError::GetModeledError()
{
  assert(this->GetErrorType() == LightsailErrors::ACCESS_DENIED);
  return AccessDeniedException(this->GetJsonPayload().View());
}

template<> AWS_LIGHTSAIL_API UnauthenticatedException LightsailError::GetModeledError()
{
  assert(this->GetErrorType() == LightsailErrors::UNAUTHENTICATED);
  return UnauthenticatedException(this->GetJsonPayload().View());
}

template<> AWS_LIGHTSAIL_API InvalidInputException LightsailError::GetModeledError()
{
  assert(this->GetErrorType() == LightsailErrors::INVALID_INPUT);
  return InvalidInputException(this->GetJsonPayload().View());
}

template<> AWS_LIGHTSAIL_API ServiceException LightsailError::GetModeledError()
{
  assert(this->GetErrorType() == LightsailErrors::SERVICE);
  return ServiceException(this->GetJsonPayload().View());
}

template<> AWS_LIGHTSAIL_API AccountSetupInProgressException LightsailError::GetModeledError()
{
  assert(this->GetErrorType() == LightsailErrors::ACCOUNT_SETUP_IN_PROGRESS);
  return AccountSetupInProgressException(this->GetJsonPayload().View());
}

namespace LightsailErrorMapper
{

static const int OPERATION_FAILURE_HASH = HashingUtils::HashString("OperationFailureException");
static const int NOT_FOUND_HASH = HashingUtils::HashString("NotFoundException");
static const int UNAUTHENTICATED_HASH = HashingUtils::HashString("UnauthenticatedException");
static const int INVALID_INPUT_HASH = HashingUtils::HashString("InvalidInputException");
static const int SERVICE_HASH = HashingUtils::HashString("ServiceException");
static const int ACCOUNT_SETUP_IN_PROGRESS_HASH = HashingUtils::HashString("AccountSetupInProgressException");


AWSError<CoreErrors> GetErrorForName(const char* errorName)
{
  int hashCode = HashingUtils::HashString(errorName);

  if (hashCode == OPERATION_FAILURE_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(LightsailErrors::OPERATION_FAILURE), false);
  }
  else if (hashCode == NOT_FOUND_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(LightsailErrors::NOT_FOUND), false);
  }
  else if (hashCode == UNAUTHENTICATED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(LightsailErrors::UNAUTHENTICATED), false);
  }
  else if (hashCode == INVALID_INPUT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(LightsailErrors::INVALID_INPUT), false);
  }
  else if (hashCode == SERVICE_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(LightsailErrors::SERVICE), false);
  }
  else if (hashCode == ACCOUNT_SETUP_IN_PROGRESS_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(LightsailErrors::ACCOUNT_SETUP_IN_PROGRESS), false);
  }
  return AWSError<CoreErrors>(CoreErrors::UNKNOWN, false);
}

} // namespace LightsailErrorMapper
} // namespace Lightsail
} // namespace Aws
