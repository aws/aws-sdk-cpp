/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/client/AWSError.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/connect/ConnectErrors.h>
#include <aws/connect/model/PropertyValidationException.h>
#include <aws/connect/model/InvalidContactFlowException.h>
#include <aws/connect/model/InvalidContactFlowModuleException.h>
#include <aws/connect/model/ResourceInUseException.h>

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

template<> AWS_CONNECT_API InvalidContactFlowModuleException ConnectError::GetModeledError()
{
  assert(this->GetErrorType() == ConnectErrors::INVALID_CONTACT_FLOW_MODULE);
  return InvalidContactFlowModuleException(this->GetJsonPayload().View());
}

template<> AWS_CONNECT_API ResourceInUseException ConnectError::GetModeledError()
{
  assert(this->GetErrorType() == ConnectErrors::RESOURCE_IN_USE);
  return ResourceInUseException(this->GetJsonPayload().View());
}

namespace ConnectErrorMapper
{

static constexpr uint32_t IDEMPOTENCY_HASH = ConstExprHashingUtils::HashString("IdempotencyException");
static constexpr uint32_t RESOURCE_NOT_READY_HASH = ConstExprHashingUtils::HashString("ResourceNotReadyException");
static constexpr uint32_t MAXIMUM_RESULT_RETURNED_HASH = ConstExprHashingUtils::HashString("MaximumResultReturnedException");
static constexpr uint32_t PROPERTY_VALIDATION_HASH = ConstExprHashingUtils::HashString("PropertyValidationException");
static constexpr uint32_t INVALID_CONTACT_FLOW_HASH = ConstExprHashingUtils::HashString("InvalidContactFlowException");
static constexpr uint32_t USER_NOT_FOUND_HASH = ConstExprHashingUtils::HashString("UserNotFoundException");
static constexpr uint32_t LIMIT_EXCEEDED_HASH = ConstExprHashingUtils::HashString("LimitExceededException");
static constexpr uint32_t DUPLICATE_RESOURCE_HASH = ConstExprHashingUtils::HashString("DuplicateResourceException");
static constexpr uint32_t DESTINATION_NOT_ALLOWED_HASH = ConstExprHashingUtils::HashString("DestinationNotAllowedException");
static constexpr uint32_t INTERNAL_SERVICE_HASH = ConstExprHashingUtils::HashString("InternalServiceException");
static constexpr uint32_t CONTACT_FLOW_NOT_PUBLISHED_HASH = ConstExprHashingUtils::HashString("ContactFlowNotPublishedException");
static constexpr uint32_t INVALID_CONTACT_FLOW_MODULE_HASH = ConstExprHashingUtils::HashString("InvalidContactFlowModuleException");
static constexpr uint32_t OUTBOUND_CONTACT_NOT_PERMITTED_HASH = ConstExprHashingUtils::HashString("OutboundContactNotPermittedException");
static constexpr uint32_t SERVICE_QUOTA_EXCEEDED_HASH = ConstExprHashingUtils::HashString("ServiceQuotaExceededException");
static constexpr uint32_t CONTACT_NOT_FOUND_HASH = ConstExprHashingUtils::HashString("ContactNotFoundException");
static constexpr uint32_t INVALID_PARAMETER_HASH = ConstExprHashingUtils::HashString("InvalidParameterException");
static constexpr uint32_t RESOURCE_CONFLICT_HASH = ConstExprHashingUtils::HashString("ResourceConflictException");
static constexpr uint32_t TOO_MANY_REQUESTS_HASH = ConstExprHashingUtils::HashString("TooManyRequestsException");
static constexpr uint32_t RESOURCE_IN_USE_HASH = ConstExprHashingUtils::HashString("ResourceInUseException");
static constexpr uint32_t INVALID_REQUEST_HASH = ConstExprHashingUtils::HashString("InvalidRequestException");


AWSError<CoreErrors> GetErrorForName(const char* errorName)
{
  uint32_t hashCode = HashingUtils::HashString(errorName);

  if (hashCode == IDEMPOTENCY_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(ConnectErrors::IDEMPOTENCY), false);
  }
  else if (hashCode == RESOURCE_NOT_READY_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(ConnectErrors::RESOURCE_NOT_READY), false);
  }
  else if (hashCode == MAXIMUM_RESULT_RETURNED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(ConnectErrors::MAXIMUM_RESULT_RETURNED), false);
  }
  else if (hashCode == PROPERTY_VALIDATION_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(ConnectErrors::PROPERTY_VALIDATION), false);
  }
  else if (hashCode == INVALID_CONTACT_FLOW_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(ConnectErrors::INVALID_CONTACT_FLOW), false);
  }
  else if (hashCode == USER_NOT_FOUND_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(ConnectErrors::USER_NOT_FOUND), false);
  }
  else if (hashCode == LIMIT_EXCEEDED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(ConnectErrors::LIMIT_EXCEEDED), true);
  }
  else if (hashCode == DUPLICATE_RESOURCE_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(ConnectErrors::DUPLICATE_RESOURCE), false);
  }
  else if (hashCode == DESTINATION_NOT_ALLOWED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(ConnectErrors::DESTINATION_NOT_ALLOWED), false);
  }
  else if (hashCode == INTERNAL_SERVICE_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(ConnectErrors::INTERNAL_SERVICE), false);
  }
  else if (hashCode == CONTACT_FLOW_NOT_PUBLISHED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(ConnectErrors::CONTACT_FLOW_NOT_PUBLISHED), false);
  }
  else if (hashCode == INVALID_CONTACT_FLOW_MODULE_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(ConnectErrors::INVALID_CONTACT_FLOW_MODULE), false);
  }
  else if (hashCode == OUTBOUND_CONTACT_NOT_PERMITTED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(ConnectErrors::OUTBOUND_CONTACT_NOT_PERMITTED), false);
  }
  else if (hashCode == SERVICE_QUOTA_EXCEEDED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(ConnectErrors::SERVICE_QUOTA_EXCEEDED), false);
  }
  else if (hashCode == CONTACT_NOT_FOUND_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(ConnectErrors::CONTACT_NOT_FOUND), false);
  }
  else if (hashCode == INVALID_PARAMETER_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(ConnectErrors::INVALID_PARAMETER), false);
  }
  else if (hashCode == RESOURCE_CONFLICT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(ConnectErrors::RESOURCE_CONFLICT), false);
  }
  else if (hashCode == TOO_MANY_REQUESTS_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(ConnectErrors::TOO_MANY_REQUESTS), true);
  }
  else if (hashCode == RESOURCE_IN_USE_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(ConnectErrors::RESOURCE_IN_USE), false);
  }
  else if (hashCode == INVALID_REQUEST_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(ConnectErrors::INVALID_REQUEST), false);
  }
  return AWSError<CoreErrors>(CoreErrors::UNKNOWN, false);
}

} // namespace ConnectErrorMapper
} // namespace Connect
} // namespace Aws
