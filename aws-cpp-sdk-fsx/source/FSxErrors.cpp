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
#include <aws/fsx/FSxErrors.h>

using namespace Aws::Client;
using namespace Aws::FSx;
using namespace Aws::Utils;

namespace Aws
{
namespace FSx
{
namespace FSxErrorMapper
{

static const int INCOMPATIBLE_PARAMETER_HASH = HashingUtils::HashString("IncompatibleParameterError");
static const int INVALID_EXPORT_PATH_HASH = HashingUtils::HashString("InvalidExportPath");
static const int BACKUP_IN_PROGRESS_HASH = HashingUtils::HashString("BackupInProgress");
static const int BACKUP_NOT_FOUND_HASH = HashingUtils::HashString("BackupNotFound");
static const int BACKUP_RESTORING_HASH = HashingUtils::HashString("BackupRestoring");
static const int SERVICE_LIMIT_EXCEEDED_HASH = HashingUtils::HashString("ServiceLimitExceeded");
static const int ACTIVE_DIRECTORY_HASH = HashingUtils::HashString("ActiveDirectoryError");
static const int FILE_SYSTEM_NOT_FOUND_HASH = HashingUtils::HashString("FileSystemNotFound");
static const int UNSUPPORTED_OPERATION_HASH = HashingUtils::HashString("UnsupportedOperation");
static const int INVALID_NETWORK_SETTINGS_HASH = HashingUtils::HashString("InvalidNetworkSettings");
static const int NOT_SERVICE_RESOURCE_HASH = HashingUtils::HashString("NotServiceResourceError");
static const int RESOURCE_DOES_NOT_SUPPORT_TAGGING_HASH = HashingUtils::HashString("ResourceDoesNotSupportTagging");
static const int INVALID_IMPORT_PATH_HASH = HashingUtils::HashString("InvalidImportPath");
static const int BAD_REQUEST_HASH = HashingUtils::HashString("BadRequest");
static const int MISSING_FILE_SYSTEM_CONFIGURATION_HASH = HashingUtils::HashString("MissingFileSystemConfiguration");


AWSError<CoreErrors> GetErrorForName(const char* errorName)
{
  int hashCode = HashingUtils::HashString(errorName);

  if (hashCode == INCOMPATIBLE_PARAMETER_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(FSxErrors::INCOMPATIBLE_PARAMETER), false);
  }
  else if (hashCode == INVALID_EXPORT_PATH_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(FSxErrors::INVALID_EXPORT_PATH), false);
  }
  else if (hashCode == BACKUP_IN_PROGRESS_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(FSxErrors::BACKUP_IN_PROGRESS), false);
  }
  else if (hashCode == BACKUP_NOT_FOUND_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(FSxErrors::BACKUP_NOT_FOUND), false);
  }
  else if (hashCode == BACKUP_RESTORING_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(FSxErrors::BACKUP_RESTORING), false);
  }
  else if (hashCode == SERVICE_LIMIT_EXCEEDED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(FSxErrors::SERVICE_LIMIT_EXCEEDED), false);
  }
  else if (hashCode == ACTIVE_DIRECTORY_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(FSxErrors::ACTIVE_DIRECTORY), false);
  }
  else if (hashCode == FILE_SYSTEM_NOT_FOUND_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(FSxErrors::FILE_SYSTEM_NOT_FOUND), false);
  }
  else if (hashCode == UNSUPPORTED_OPERATION_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(FSxErrors::UNSUPPORTED_OPERATION), false);
  }
  else if (hashCode == INVALID_NETWORK_SETTINGS_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(FSxErrors::INVALID_NETWORK_SETTINGS), false);
  }
  else if (hashCode == NOT_SERVICE_RESOURCE_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(FSxErrors::NOT_SERVICE_RESOURCE), false);
  }
  else if (hashCode == RESOURCE_DOES_NOT_SUPPORT_TAGGING_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(FSxErrors::RESOURCE_DOES_NOT_SUPPORT_TAGGING), false);
  }
  else if (hashCode == INVALID_IMPORT_PATH_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(FSxErrors::INVALID_IMPORT_PATH), false);
  }
  else if (hashCode == BAD_REQUEST_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(FSxErrors::BAD_REQUEST), false);
  }
  else if (hashCode == MISSING_FILE_SYSTEM_CONFIGURATION_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(FSxErrors::MISSING_FILE_SYSTEM_CONFIGURATION), false);
  }
  return AWSError<CoreErrors>(CoreErrors::UNKNOWN, false);
}

} // namespace FSxErrorMapper
} // namespace FSx
} // namespace Aws
