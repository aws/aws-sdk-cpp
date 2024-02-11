/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/client/AWSError.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/iot/IoTErrors.h>
#include <aws/iot/model/ConflictException.h>
#include <aws/iot/model/ResourceAlreadyExistsException.h>

using namespace Aws::Client;
using namespace Aws::Utils;
using namespace Aws::IoT;
using namespace Aws::IoT::Model;

namespace Aws
{
namespace IoT
{
template<> AWS_IOT_API ConflictException IoTError::GetModeledError()
{
  assert(this->GetErrorType() == IoTErrors::CONFLICT);
  return ConflictException(this->GetJsonPayload().View());
}

template<> AWS_IOT_API ResourceAlreadyExistsException IoTError::GetModeledError()
{
  assert(this->GetErrorType() == IoTErrors::RESOURCE_ALREADY_EXISTS);
  return ResourceAlreadyExistsException(this->GetJsonPayload().View());
}

namespace IoTErrorMapper
{

static const int CONFLICT_HASH = HashingUtils::HashString("ConflictException");
static const int VERSION_CONFLICT_HASH = HashingUtils::HashString("VersionConflictException");
static const int DELETE_CONFLICT_HASH = HashingUtils::HashString("DeleteConflictException");
static const int NOT_CONFIGURED_HASH = HashingUtils::HashString("NotConfiguredException");
static const int LIMIT_EXCEEDED_HASH = HashingUtils::HashString("LimitExceededException");
static const int MALFORMED_POLICY_HASH = HashingUtils::HashString("MalformedPolicyException");
static const int INVALID_AGGREGATION_HASH = HashingUtils::HashString("InvalidAggregationException");
static const int SERVICE_QUOTA_EXCEEDED_HASH = HashingUtils::HashString("ServiceQuotaExceededException");
static const int UNAUTHORIZED_HASH = HashingUtils::HashString("UnauthorizedException");
static const int INVALID_RESPONSE_HASH = HashingUtils::HashString("InvalidResponseException");
static const int TRANSFER_ALREADY_COMPLETED_HASH = HashingUtils::HashString("TransferAlreadyCompletedException");
static const int INVALID_REQUEST_HASH = HashingUtils::HashString("InvalidRequestException");
static const int INVALID_STATE_TRANSITION_HASH = HashingUtils::HashString("InvalidStateTransitionException");
static const int CERTIFICATE_VALIDATION_HASH = HashingUtils::HashString("CertificateValidationException");
static const int CONFLICTING_RESOURCE_UPDATE_HASH = HashingUtils::HashString("ConflictingResourceUpdateException");
static const int INTERNAL_SERVER_HASH = HashingUtils::HashString("InternalServerException");
static const int RESOURCE_ALREADY_EXISTS_HASH = HashingUtils::HashString("ResourceAlreadyExistsException");
static const int TRANSFER_CONFLICT_HASH = HashingUtils::HashString("TransferConflictException");
static const int SQL_PARSE_HASH = HashingUtils::HashString("SqlParseException");
static const int REGISTRATION_CODE_VALIDATION_HASH = HashingUtils::HashString("RegistrationCodeValidationException");
static const int CERTIFICATE_CONFLICT_HASH = HashingUtils::HashString("CertificateConflictException");
static const int INTERNAL_HASH = HashingUtils::HashString("InternalException");
static const int TASK_ALREADY_EXISTS_HASH = HashingUtils::HashString("TaskAlreadyExistsException");
static const int RESOURCE_REGISTRATION_FAILURE_HASH = HashingUtils::HashString("ResourceRegistrationFailureException");
static const int INVALID_QUERY_HASH = HashingUtils::HashString("InvalidQueryException");
static const int INDEX_NOT_READY_HASH = HashingUtils::HashString("IndexNotReadyException");
static const int VERSIONS_LIMIT_EXCEEDED_HASH = HashingUtils::HashString("VersionsLimitExceededException");
static const int CERTIFICATE_STATE_HASH = HashingUtils::HashString("CertificateStateException");


AWSError<CoreErrors> GetErrorForName(const char* errorName)
{
  int hashCode = HashingUtils::HashString(errorName);

  if (hashCode == CONFLICT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(IoTErrors::CONFLICT), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == VERSION_CONFLICT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(IoTErrors::VERSION_CONFLICT), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == DELETE_CONFLICT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(IoTErrors::DELETE_CONFLICT), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == NOT_CONFIGURED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(IoTErrors::NOT_CONFIGURED), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == LIMIT_EXCEEDED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(IoTErrors::LIMIT_EXCEEDED), RetryableType::RETRYABLE);
  }
  else if (hashCode == MALFORMED_POLICY_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(IoTErrors::MALFORMED_POLICY), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == INVALID_AGGREGATION_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(IoTErrors::INVALID_AGGREGATION), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == SERVICE_QUOTA_EXCEEDED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(IoTErrors::SERVICE_QUOTA_EXCEEDED), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == UNAUTHORIZED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(IoTErrors::UNAUTHORIZED), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == INVALID_RESPONSE_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(IoTErrors::INVALID_RESPONSE), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == TRANSFER_ALREADY_COMPLETED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(IoTErrors::TRANSFER_ALREADY_COMPLETED), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == INVALID_REQUEST_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(IoTErrors::INVALID_REQUEST), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == INVALID_STATE_TRANSITION_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(IoTErrors::INVALID_STATE_TRANSITION), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == CERTIFICATE_VALIDATION_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(IoTErrors::CERTIFICATE_VALIDATION), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == CONFLICTING_RESOURCE_UPDATE_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(IoTErrors::CONFLICTING_RESOURCE_UPDATE), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == INTERNAL_SERVER_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(IoTErrors::INTERNAL_SERVER), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == RESOURCE_ALREADY_EXISTS_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(IoTErrors::RESOURCE_ALREADY_EXISTS), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == TRANSFER_CONFLICT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(IoTErrors::TRANSFER_CONFLICT), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == SQL_PARSE_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(IoTErrors::SQL_PARSE), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == REGISTRATION_CODE_VALIDATION_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(IoTErrors::REGISTRATION_CODE_VALIDATION), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == CERTIFICATE_CONFLICT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(IoTErrors::CERTIFICATE_CONFLICT), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == INTERNAL_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(IoTErrors::INTERNAL), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == TASK_ALREADY_EXISTS_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(IoTErrors::TASK_ALREADY_EXISTS), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == RESOURCE_REGISTRATION_FAILURE_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(IoTErrors::RESOURCE_REGISTRATION_FAILURE), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == INVALID_QUERY_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(IoTErrors::INVALID_QUERY), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == INDEX_NOT_READY_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(IoTErrors::INDEX_NOT_READY), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == VERSIONS_LIMIT_EXCEEDED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(IoTErrors::VERSIONS_LIMIT_EXCEEDED), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == CERTIFICATE_STATE_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(IoTErrors::CERTIFICATE_STATE), RetryableType::NOT_RETRYABLE);
  }
  return AWSError<CoreErrors>(CoreErrors::UNKNOWN, false);
}

} // namespace IoTErrorMapper
} // namespace IoT
} // namespace Aws
