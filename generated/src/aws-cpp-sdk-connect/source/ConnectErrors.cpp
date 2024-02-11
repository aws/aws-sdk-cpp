/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/client/AWSError.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/connect/ConnectErrors.h>
#include <aws/connect/model/PropertyValidationException.h>
#include <aws/connect/model/InvalidContactFlowException.h>
#include <aws/connect/model/ResourceInUseException.h>
#include <aws/connect/model/InvalidContactFlowModuleException.h>

using namespace Aws::Client;
using namespace Aws::Utils;
using namespace Aws::Connect;
using namespace Aws::Connect::Model;

namespace Aws
{
namespace Connect
{
template<> AWS_CONNECT_API PropertyValidationException ConnectError::GetModeledError()
{
  assert(this->GetErrorType() == ConnectErrors::PROPERTY_VALIDATION);
  return PropertyValidationException(this->GetJsonPayload().View());
}

template<> AWS_CONNECT_API InvalidContactFlowException ConnectError::GetModeledError()
{
  assert(this->GetErrorType() == ConnectErrors::INVALID_CONTACT_FLOW);
  return InvalidContactFlowException(this->GetJsonPayload().View());
}

template<> AWS_CONNECT_API ResourceInUseException ConnectError::GetModeledError()
{
  assert(this->GetErrorType() == ConnectErrors::RESOURCE_IN_USE);
  return ResourceInUseException(this->GetJsonPayload().View());
}

template<> AWS_CONNECT_API InvalidContactFlowModuleException ConnectError::GetModeledError()
{
  assert(this->GetErrorType() == ConnectErrors::INVALID_CONTACT_FLOW_MODULE);
  return InvalidContactFlowModuleException(this->GetJsonPayload().View());
}

namespace ConnectErrorMapper
{

static const int RESOURCE_NOT_READY_HASH = HashingUtils::HashString("ResourceNotReadyException");
static const int CONFLICT_HASH = HashingUtils::HashString("ConflictException");
static const int IDEMPOTENCY_HASH = HashingUtils::HashString("IdempotencyException");
static const int MAXIMUM_RESULT_RETURNED_HASH = HashingUtils::HashString("MaximumResultReturnedException");
static const int PROPERTY_VALIDATION_HASH = HashingUtils::HashString("PropertyValidationException");
static const int INVALID_CONTACT_FLOW_HASH = HashingUtils::HashString("InvalidContactFlowException");
static const int USER_NOT_FOUND_HASH = HashingUtils::HashString("UserNotFoundException");
static const int LIMIT_EXCEEDED_HASH = HashingUtils::HashString("LimitExceededException");
static const int DUPLICATE_RESOURCE_HASH = HashingUtils::HashString("DuplicateResourceException");
static const int DESTINATION_NOT_ALLOWED_HASH = HashingUtils::HashString("DestinationNotAllowedException");
static const int CONTACT_FLOW_NOT_PUBLISHED_HASH = HashingUtils::HashString("ContactFlowNotPublishedException");
static const int INTERNAL_SERVICE_HASH = HashingUtils::HashString("InternalServiceException");
static const int INVALID_CONTACT_FLOW_MODULE_HASH = HashingUtils::HashString("InvalidContactFlowModuleException");
static const int OUTBOUND_CONTACT_NOT_PERMITTED_HASH = HashingUtils::HashString("OutboundContactNotPermittedException");
static const int SERVICE_QUOTA_EXCEEDED_HASH = HashingUtils::HashString("ServiceQuotaExceededException");
static const int CONTACT_NOT_FOUND_HASH = HashingUtils::HashString("ContactNotFoundException");
static const int INVALID_PARAMETER_HASH = HashingUtils::HashString("InvalidParameterException");
static const int RESOURCE_CONFLICT_HASH = HashingUtils::HashString("ResourceConflictException");
static const int TOO_MANY_REQUESTS_HASH = HashingUtils::HashString("TooManyRequestsException");
static const int RESOURCE_IN_USE_HASH = HashingUtils::HashString("ResourceInUseException");
static const int OUTPUT_TYPE_NOT_FOUND_HASH = HashingUtils::HashString("OutputTypeNotFoundException");
static const int INVALID_REQUEST_HASH = HashingUtils::HashString("InvalidRequestException");


AWSError<CoreErrors> GetErrorForName(const char* errorName)
{
  int hashCode = HashingUtils::HashString(errorName);

  if (hashCode == RESOURCE_NOT_READY_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(ConnectErrors::RESOURCE_NOT_READY), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == CONFLICT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(ConnectErrors::CONFLICT), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == IDEMPOTENCY_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(ConnectErrors::IDEMPOTENCY), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == MAXIMUM_RESULT_RETURNED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(ConnectErrors::MAXIMUM_RESULT_RETURNED), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == PROPERTY_VALIDATION_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(ConnectErrors::PROPERTY_VALIDATION), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == INVALID_CONTACT_FLOW_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(ConnectErrors::INVALID_CONTACT_FLOW), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == USER_NOT_FOUND_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(ConnectErrors::USER_NOT_FOUND), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == LIMIT_EXCEEDED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(ConnectErrors::LIMIT_EXCEEDED), RetryableType::RETRYABLE);
  }
  else if (hashCode == DUPLICATE_RESOURCE_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(ConnectErrors::DUPLICATE_RESOURCE), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == DESTINATION_NOT_ALLOWED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(ConnectErrors::DESTINATION_NOT_ALLOWED), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == CONTACT_FLOW_NOT_PUBLISHED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(ConnectErrors::CONTACT_FLOW_NOT_PUBLISHED), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == INTERNAL_SERVICE_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(ConnectErrors::INTERNAL_SERVICE), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == INVALID_CONTACT_FLOW_MODULE_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(ConnectErrors::INVALID_CONTACT_FLOW_MODULE), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == OUTBOUND_CONTACT_NOT_PERMITTED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(ConnectErrors::OUTBOUND_CONTACT_NOT_PERMITTED), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == SERVICE_QUOTA_EXCEEDED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(ConnectErrors::SERVICE_QUOTA_EXCEEDED), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == CONTACT_NOT_FOUND_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(ConnectErrors::CONTACT_NOT_FOUND), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == INVALID_PARAMETER_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(ConnectErrors::INVALID_PARAMETER), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == RESOURCE_CONFLICT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(ConnectErrors::RESOURCE_CONFLICT), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == TOO_MANY_REQUESTS_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(ConnectErrors::TOO_MANY_REQUESTS), RetryableType::RETRYABLE);
  }
  else if (hashCode == RESOURCE_IN_USE_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(ConnectErrors::RESOURCE_IN_USE), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == OUTPUT_TYPE_NOT_FOUND_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(ConnectErrors::OUTPUT_TYPE_NOT_FOUND), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == INVALID_REQUEST_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(ConnectErrors::INVALID_REQUEST), RetryableType::NOT_RETRYABLE);
  }
  return AWSError<CoreErrors>(CoreErrors::UNKNOWN, false);
}

} // namespace ConnectErrorMapper
} // namespace Connect
} // namespace Aws
