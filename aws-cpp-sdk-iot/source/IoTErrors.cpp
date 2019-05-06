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
#include <aws/iot/IoTErrors.h>

using namespace Aws::Client;
using namespace Aws::IoT;
using namespace Aws::Utils;

namespace Aws
{
namespace IoT
{
namespace IoTErrorMapper
{

static const int CONFLICTING_RESOURCE_UPDATE_HASH = HashingUtils::HashString("ConflictingResourceUpdateException");
static const int VERSION_CONFLICT_HASH = HashingUtils::HashString("VersionConflictException");
static const int RESOURCE_ALREADY_EXISTS_HASH = HashingUtils::HashString("ResourceAlreadyExistsException");
static const int DELETE_CONFLICT_HASH = HashingUtils::HashString("DeleteConflictException");
static const int NOT_CONFIGURED_HASH = HashingUtils::HashString("NotConfiguredException");
static const int LIMIT_EXCEEDED_HASH = HashingUtils::HashString("LimitExceededException");
static const int TRANSFER_CONFLICT_HASH = HashingUtils::HashString("TransferConflictException");
static const int SQL_PARSE_HASH = HashingUtils::HashString("SqlParseException");
static const int MALFORMED_POLICY_HASH = HashingUtils::HashString("MalformedPolicyException");
static const int REGISTRATION_CODE_VALIDATION_HASH = HashingUtils::HashString("RegistrationCodeValidationException");
static const int CERTIFICATE_CONFLICT_HASH = HashingUtils::HashString("CertificateConflictException");
static const int INVALID_AGGREGATION_HASH = HashingUtils::HashString("InvalidAggregationException");
static const int INTERNAL_HASH = HashingUtils::HashString("InternalException");
static const int UNAUTHORIZED_HASH = HashingUtils::HashString("UnauthorizedException");
static const int RESOURCE_REGISTRATION_FAILURE_HASH = HashingUtils::HashString("ResourceRegistrationFailureException");
static const int INVALID_RESPONSE_HASH = HashingUtils::HashString("InvalidResponseException");
static const int INVALID_QUERY_HASH = HashingUtils::HashString("InvalidQueryException");
static const int INDEX_NOT_READY_HASH = HashingUtils::HashString("IndexNotReadyException");
static const int TRANSFER_ALREADY_COMPLETED_HASH = HashingUtils::HashString("TransferAlreadyCompletedException");
static const int VERSIONS_LIMIT_EXCEEDED_HASH = HashingUtils::HashString("VersionsLimitExceededException");
static const int INVALID_REQUEST_HASH = HashingUtils::HashString("InvalidRequestException");
static const int INVALID_STATE_TRANSITION_HASH = HashingUtils::HashString("InvalidStateTransitionException");
static const int CERTIFICATE_VALIDATION_HASH = HashingUtils::HashString("CertificateValidationException");
static const int CERTIFICATE_STATE_HASH = HashingUtils::HashString("CertificateStateException");


AWSError<CoreErrors> GetErrorForName(const char* errorName)
{
  int hashCode = HashingUtils::HashString(errorName);

  if (hashCode == CONFLICTING_RESOURCE_UPDATE_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(IoTErrors::CONFLICTING_RESOURCE_UPDATE), false);
  }
  else if (hashCode == VERSION_CONFLICT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(IoTErrors::VERSION_CONFLICT), false);
  }
  else if (hashCode == RESOURCE_ALREADY_EXISTS_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(IoTErrors::RESOURCE_ALREADY_EXISTS), false);
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
    return AWSError<CoreErrors>(static_cast<CoreErrors>(IoTErrors::LIMIT_EXCEEDED), false);
  }
  else if (hashCode == TRANSFER_CONFLICT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(IoTErrors::TRANSFER_CONFLICT), false);
  }
  else if (hashCode == SQL_PARSE_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(IoTErrors::SQL_PARSE), false);
  }
  else if (hashCode == MALFORMED_POLICY_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(IoTErrors::MALFORMED_POLICY), false);
  }
  else if (hashCode == REGISTRATION_CODE_VALIDATION_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(IoTErrors::REGISTRATION_CODE_VALIDATION), false);
  }
  else if (hashCode == CERTIFICATE_CONFLICT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(IoTErrors::CERTIFICATE_CONFLICT), false);
  }
  else if (hashCode == INVALID_AGGREGATION_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(IoTErrors::INVALID_AGGREGATION), false);
  }
  else if (hashCode == INTERNAL_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(IoTErrors::INTERNAL), false);
  }
  else if (hashCode == UNAUTHORIZED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(IoTErrors::UNAUTHORIZED), false);
  }
  else if (hashCode == RESOURCE_REGISTRATION_FAILURE_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(IoTErrors::RESOURCE_REGISTRATION_FAILURE), false);
  }
  else if (hashCode == INVALID_RESPONSE_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(IoTErrors::INVALID_RESPONSE), false);
  }
  else if (hashCode == INVALID_QUERY_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(IoTErrors::INVALID_QUERY), false);
  }
  else if (hashCode == INDEX_NOT_READY_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(IoTErrors::INDEX_NOT_READY), false);
  }
  else if (hashCode == TRANSFER_ALREADY_COMPLETED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(IoTErrors::TRANSFER_ALREADY_COMPLETED), false);
  }
  else if (hashCode == VERSIONS_LIMIT_EXCEEDED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(IoTErrors::VERSIONS_LIMIT_EXCEEDED), false);
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
  else if (hashCode == CERTIFICATE_STATE_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(IoTErrors::CERTIFICATE_STATE), false);
  }
  return AWSError<CoreErrors>(CoreErrors::UNKNOWN, false);
}

} // namespace IoTErrorMapper
} // namespace IoT
} // namespace Aws
