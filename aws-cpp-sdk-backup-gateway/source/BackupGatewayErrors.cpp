/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/client/AWSError.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/backup-gateway/BackupGatewayErrors.h>
#include <aws/backup-gateway/model/ConflictException.h>
#include <aws/backup-gateway/model/ThrottlingException.h>
#include <aws/backup-gateway/model/InternalServerException.h>
#include <aws/backup-gateway/model/ResourceNotFoundException.h>
#include <aws/backup-gateway/model/ValidationException.h>
#include <aws/backup-gateway/model/AccessDeniedException.h>

using namespace Aws::Client;
using namespace Aws::Utils;
using namespace Aws::BackupGateway;
using namespace Aws::BackupGateway::Model;

namespace Aws
{
namespace BackupGateway
{
template<> AWS_BACKUPGATEWAY_API ConflictException BackupGatewayError::GetModeledError()
{
  assert(this->GetErrorType() == BackupGatewayErrors::CONFLICT);
  return ConflictException(this->GetJsonPayload().View());
}

template<> AWS_BACKUPGATEWAY_API ThrottlingException BackupGatewayError::GetModeledError()
{
  assert(this->GetErrorType() == BackupGatewayErrors::THROTTLING);
  return ThrottlingException(this->GetJsonPayload().View());
}

template<> AWS_BACKUPGATEWAY_API InternalServerException BackupGatewayError::GetModeledError()
{
  assert(this->GetErrorType() == BackupGatewayErrors::INTERNAL_SERVER);
  return InternalServerException(this->GetJsonPayload().View());
}

template<> AWS_BACKUPGATEWAY_API ResourceNotFoundException BackupGatewayError::GetModeledError()
{
  assert(this->GetErrorType() == BackupGatewayErrors::RESOURCE_NOT_FOUND);
  return ResourceNotFoundException(this->GetJsonPayload().View());
}

template<> AWS_BACKUPGATEWAY_API ValidationException BackupGatewayError::GetModeledError()
{
  assert(this->GetErrorType() == BackupGatewayErrors::VALIDATION);
  return ValidationException(this->GetJsonPayload().View());
}

template<> AWS_BACKUPGATEWAY_API AccessDeniedException BackupGatewayError::GetModeledError()
{
  assert(this->GetErrorType() == BackupGatewayErrors::ACCESS_DENIED);
  return AccessDeniedException(this->GetJsonPayload().View());
}

namespace BackupGatewayErrorMapper
{

static const int CONFLICT_HASH = HashingUtils::HashString("ConflictException");
static const int INTERNAL_SERVER_HASH = HashingUtils::HashString("InternalServerException");


AWSError<CoreErrors> GetErrorForName(const char* errorName)
{
  int hashCode = HashingUtils::HashString(errorName);

  if (hashCode == CONFLICT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(BackupGatewayErrors::CONFLICT), false);
  }
  else if (hashCode == INTERNAL_SERVER_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(BackupGatewayErrors::INTERNAL_SERVER), false);
  }
  return AWSError<CoreErrors>(CoreErrors::UNKNOWN, false);
}

} // namespace BackupGatewayErrorMapper
} // namespace BackupGateway
} // namespace Aws
