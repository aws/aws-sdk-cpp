/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/client/AWSError.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/backup/BackupErrors.h>
#include <aws/backup/model/ServiceUnavailableException.h>
#include <aws/backup/model/DependencyFailureException.h>
#include <aws/backup/model/ResourceNotFoundException.h>
#include <aws/backup/model/LimitExceededException.h>
#include <aws/backup/model/AlreadyExistsException.h>
#include <aws/backup/model/InvalidResourceStateException.h>
#include <aws/backup/model/InvalidParameterValueException.h>
#include <aws/backup/model/MissingParameterValueException.h>
#include <aws/backup/model/InvalidRequestException.h>

using namespace Aws::Client;
using namespace Aws::Utils;
using namespace Aws::Backup;
using namespace Aws::Backup::Model;

namespace Aws
{
namespace Backup
{
template<> AWS_BACKUP_API ServiceUnavailableException BackupError::GetModeledError()
{
  assert(this->GetErrorType() == BackupErrors::SERVICE_UNAVAILABLE);
  return ServiceUnavailableException(this->GetJsonPayload().View());
}

template<> AWS_BACKUP_API DependencyFailureException BackupError::GetModeledError()
{
  assert(this->GetErrorType() == BackupErrors::DEPENDENCY_FAILURE);
  return DependencyFailureException(this->GetJsonPayload().View());
}

template<> AWS_BACKUP_API ResourceNotFoundException BackupError::GetModeledError()
{
  assert(this->GetErrorType() == BackupErrors::RESOURCE_NOT_FOUND);
  return ResourceNotFoundException(this->GetJsonPayload().View());
}

template<> AWS_BACKUP_API LimitExceededException BackupError::GetModeledError()
{
  assert(this->GetErrorType() == BackupErrors::LIMIT_EXCEEDED);
  return LimitExceededException(this->GetJsonPayload().View());
}

template<> AWS_BACKUP_API AlreadyExistsException BackupError::GetModeledError()
{
  assert(this->GetErrorType() == BackupErrors::ALREADY_EXISTS);
  return AlreadyExistsException(this->GetJsonPayload().View());
}

template<> AWS_BACKUP_API InvalidResourceStateException BackupError::GetModeledError()
{
  assert(this->GetErrorType() == BackupErrors::INVALID_RESOURCE_STATE);
  return InvalidResourceStateException(this->GetJsonPayload().View());
}

template<> AWS_BACKUP_API InvalidParameterValueException BackupError::GetModeledError()
{
  assert(this->GetErrorType() == BackupErrors::INVALID_PARAMETER_VALUE);
  return InvalidParameterValueException(this->GetJsonPayload().View());
}

template<> AWS_BACKUP_API MissingParameterValueException BackupError::GetModeledError()
{
  assert(this->GetErrorType() == BackupErrors::MISSING_PARAMETER_VALUE);
  return MissingParameterValueException(this->GetJsonPayload().View());
}

template<> AWS_BACKUP_API InvalidRequestException BackupError::GetModeledError()
{
  assert(this->GetErrorType() == BackupErrors::INVALID_REQUEST);
  return InvalidRequestException(this->GetJsonPayload().View());
}

namespace BackupErrorMapper
{

static const int DEPENDENCY_FAILURE_HASH = HashingUtils::HashString("DependencyFailureException");
static const int LIMIT_EXCEEDED_HASH = HashingUtils::HashString("LimitExceededException");
static const int ALREADY_EXISTS_HASH = HashingUtils::HashString("AlreadyExistsException");
static const int INVALID_RESOURCE_STATE_HASH = HashingUtils::HashString("InvalidResourceStateException");
static const int MISSING_PARAMETER_VALUE_HASH = HashingUtils::HashString("MissingParameterValueException");
static const int INVALID_REQUEST_HASH = HashingUtils::HashString("InvalidRequestException");


AWSError<CoreErrors> GetErrorForName(const char* errorName)
{
  int hashCode = HashingUtils::HashString(errorName);

  if (hashCode == DEPENDENCY_FAILURE_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(BackupErrors::DEPENDENCY_FAILURE), false);
  }
  else if (hashCode == LIMIT_EXCEEDED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(BackupErrors::LIMIT_EXCEEDED), true);
  }
  else if (hashCode == ALREADY_EXISTS_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(BackupErrors::ALREADY_EXISTS), false);
  }
  else if (hashCode == INVALID_RESOURCE_STATE_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(BackupErrors::INVALID_RESOURCE_STATE), false);
  }
  else if (hashCode == MISSING_PARAMETER_VALUE_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(BackupErrors::MISSING_PARAMETER_VALUE), false);
  }
  else if (hashCode == INVALID_REQUEST_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(BackupErrors::INVALID_REQUEST), false);
  }
  return AWSError<CoreErrors>(CoreErrors::UNKNOWN, false);
}

} // namespace BackupErrorMapper
} // namespace Backup
} // namespace Aws
