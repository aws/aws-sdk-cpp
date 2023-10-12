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

static constexpr uint32_t CONFLICT_HASH = ConstExprHashingUtils::HashString("ConflictException");
static constexpr uint32_t VERSION_CONFLICT_HASH = ConstExprHashingUtils::HashString("VersionConflictException");
static constexpr uint32_t DELETE_CONFLICT_HASH = ConstExprHashingUtils::HashString("DeleteConflictException");
static constexpr uint32_t NOT_CONFIGURED_HASH = ConstExprHashingUtils::HashString("NotConfiguredException");
static constexpr uint32_t LIMIT_EXCEEDED_HASH = ConstExprHashingUtils::HashString("LimitExceededException");
static constexpr uint32_t MALFORMED_POLICY_HASH = ConstExprHashingUtils::HashString("MalformedPolicyException");
static constexpr uint32_t INVALID_AGGREGATION_HASH = ConstExprHashingUtils::HashString("InvalidAggregationException");
static constexpr uint32_t SERVICE_QUOTA_EXCEEDED_HASH = ConstExprHashingUtils::HashString("ServiceQuotaExceededException");
static constexpr uint32_t UNAUTHORIZED_HASH = ConstExprHashingUtils::HashString("UnauthorizedException");
static constexpr uint32_t INVALID_RESPONSE_HASH = ConstExprHashingUtils::HashString("InvalidResponseException");
static constexpr uint32_t TRANSFER_ALREADY_COMPLETED_HASH = ConstExprHashingUtils::HashString("TransferAlreadyCompletedException");
static constexpr uint32_t INVALID_REQUEST_HASH = ConstExprHashingUtils::HashString("InvalidRequestException");
static constexpr uint32_t INVALID_STATE_TRANSITION_HASH = ConstExprHashingUtils::HashString("InvalidStateTransitionException");
static constexpr uint32_t CERTIFICATE_VALIDATION_HASH = ConstExprHashingUtils::HashString("CertificateValidationException");
static constexpr uint32_t CONFLICTING_RESOURCE_UPDATE_HASH = ConstExprHashingUtils::HashString("ConflictingResourceUpdateException");
static constexpr uint32_t INTERNAL_SERVER_HASH = ConstExprHashingUtils::HashString("InternalServerException");
static constexpr uint32_t RESOURCE_ALREADY_EXISTS_HASH = ConstExprHashingUtils::HashString("ResourceAlreadyExistsException");
static constexpr uint32_t TRANSFER_CONFLICT_HASH = ConstExprHashingUtils::HashString("TransferConflictException");
static constexpr uint32_t SQL_PARSE_HASH = ConstExprHashingUtils::HashString("SqlParseException");
static constexpr uint32_t REGISTRATION_CODE_VALIDATION_HASH = ConstExprHashingUtils::HashString("RegistrationCodeValidationException");
static constexpr uint32_t CERTIFICATE_CONFLICT_HASH = ConstExprHashingUtils::HashString("CertificateConflictException");
static constexpr uint32_t INTERNAL_HASH = ConstExprHashingUtils::HashString("InternalException");
static constexpr uint32_t TASK_ALREADY_EXISTS_HASH = ConstExprHashingUtils::HashString("TaskAlreadyExistsException");
static constexpr uint32_t RESOURCE_REGISTRATION_FAILURE_HASH = ConstExprHashingUtils::HashString("ResourceRegistrationFailureException");
static constexpr uint32_t INVALID_QUERY_HASH = ConstExprHashingUtils::HashString("InvalidQueryException");
static constexpr uint32_t INDEX_NOT_READY_HASH = ConstExprHashingUtils::HashString("IndexNotReadyException");
static constexpr uint32_t VERSIONS_LIMIT_EXCEEDED_HASH = ConstExprHashingUtils::HashString("VersionsLimitExceededException");
static constexpr uint32_t CERTIFICATE_STATE_HASH = ConstExprHashingUtils::HashString("CertificateStateException");


AWSError<CoreErrors> GetErrorForName(const char* errorName)
{
  uint32_t hashCode = HashingUtils::HashString(errorName);

  if (hashCode == CONFLICT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(IoTErrors::CONFLICT), false);
  }
  else if (hashCode == VERSION_CONFLICT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(IoTErrors::VERSION_CONFLICT), false);
  }
  else if (hashCode == DELETE_CONFLICT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(IoTErrors::DELETE_CONFLICT), false);
  }
  else if (hashCode == NOT_CONFIGURED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(IoTErrors::NOT_CONFIGURED), false);
  }
  else if (hashCode == LIMIT_EXCEEDED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(IoTErrors::LIMIT_EXCEEDED), true);
  }
  else if (hashCode == MALFORMED_POLICY_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(IoTErrors::MALFORMED_POLICY), false);
  }
  else if (hashCode == INVALID_AGGREGATION_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(IoTErrors::INVALID_AGGREGATION), false);
  }
  else if (hashCode == SERVICE_QUOTA_EXCEEDED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(IoTErrors::SERVICE_QUOTA_EXCEEDED), false);
  }
  else if (hashCode == UNAUTHORIZED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(IoTErrors::UNAUTHORIZED), false);
  }
  else if (hashCode == INVALID_RESPONSE_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(IoTErrors::INVALID_RESPONSE), false);
  }
  else if (hashCode == TRANSFER_ALREADY_COMPLETED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(IoTErrors::TRANSFER_ALREADY_COMPLETED), false);
  }
  else if (hashCode == INVALID_REQUEST_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(IoTErrors::INVALID_REQUEST), false);
  }
  else if (hashCode == INVALID_STATE_TRANSITION_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(IoTErrors::INVALID_STATE_TRANSITION), false);
  }
  else if (hashCode == CERTIFICATE_VALIDATION_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(IoTErrors::CERTIFICATE_VALIDATION), false);
  }
  else if (hashCode == CONFLICTING_RESOURCE_UPDATE_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(IoTErrors::CONFLICTING_RESOURCE_UPDATE), false);
  }
  else if (hashCode == INTERNAL_SERVER_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(IoTErrors::INTERNAL_SERVER), false);
  }
  else if (hashCode == RESOURCE_ALREADY_EXISTS_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(IoTErrors::RESOURCE_ALREADY_EXISTS), false);
  }
  else if (hashCode == TRANSFER_CONFLICT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(IoTErrors::TRANSFER_CONFLICT), false);
  }
  else if (hashCode == SQL_PARSE_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(IoTErrors::SQL_PARSE), false);
  }
  else if (hashCode == REGISTRATION_CODE_VALIDATION_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(IoTErrors::REGISTRATION_CODE_VALIDATION), false);
  }
  else if (hashCode == CERTIFICATE_CONFLICT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(IoTErrors::CERTIFICATE_CONFLICT), false);
  }
  else if (hashCode == INTERNAL_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(IoTErrors::INTERNAL), false);
  }
  else if (hashCode == TASK_ALREADY_EXISTS_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(IoTErrors::TASK_ALREADY_EXISTS), false);
  }
  else if (hashCode == RESOURCE_REGISTRATION_FAILURE_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(IoTErrors::RESOURCE_REGISTRATION_FAILURE), false);
  }
  else if (hashCode == INVALID_QUERY_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(IoTErrors::INVALID_QUERY), false);
  }
  else if (hashCode == INDEX_NOT_READY_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(IoTErrors::INDEX_NOT_READY), false);
  }
  else if (hashCode == VERSIONS_LIMIT_EXCEEDED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(IoTErrors::VERSIONS_LIMIT_EXCEEDED), false);
  }
  else if (hashCode == CERTIFICATE_STATE_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(IoTErrors::CERTIFICATE_STATE), false);
  }
  return AWSError<CoreErrors>(CoreErrors::UNKNOWN, false);
}

} // namespace IoTErrorMapper
} // namespace IoT
} // namespace Aws
