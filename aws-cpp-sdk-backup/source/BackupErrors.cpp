/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/client/AWSError.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/backup/BackupErrors.h>

using namespace Aws::Client;
using namespace Aws::Backup;
using namespace Aws::Utils;

namespace Aws
{
namespace Backup
{
namespace BackupErrorMapper
{

static const int DEPENDENCY_FAILURE_HASH = HashingUtils::HashString("DependencyFailureException");
static const int LIMIT_EXCEEDED_HASH = HashingUtils::HashString("LimitExceededException");
static const int ALREADY_EXISTS_HASH = HashingUtils::HashString("AlreadyExistsException");
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
