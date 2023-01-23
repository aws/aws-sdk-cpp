/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/client/AWSError.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/fsx/FSxErrors.h>
#include <aws/fsx/model/IncompatibleParameterError.h>
#include <aws/fsx/model/ActiveDirectoryError.h>
#include <aws/fsx/model/InvalidNetworkSettings.h>
#include <aws/fsx/model/SourceBackupUnavailable.h>
#include <aws/fsx/model/BackupBeingCopied.h>
#include <aws/fsx/model/ResourceNotFound.h>
#include <aws/fsx/model/BackupRestoring.h>
#include <aws/fsx/model/ServiceLimitExceeded.h>
#include <aws/fsx/model/NotServiceResourceError.h>
#include <aws/fsx/model/ResourceDoesNotSupportTagging.h>

using namespace Aws::Client;
using namespace Aws::Utils;
using namespace Aws::FSx;
using namespace Aws::FSx::Model;

namespace Aws
{
namespace FSx
{
template<> AWS_FSX_API IncompatibleParameterError FSxError::GetModeledError()
{
  assert(this->GetErrorType() == FSxErrors::INCOMPATIBLE_PARAMETER);
  return IncompatibleParameterError(this->GetJsonPayload().View());
}

template<> AWS_FSX_API ActiveDirectoryError FSxError::GetModeledError()
{
  assert(this->GetErrorType() == FSxErrors::ACTIVE_DIRECTORY);
  return ActiveDirectoryError(this->GetJsonPayload().View());
}

template<> AWS_FSX_API InvalidNetworkSettings FSxError::GetModeledError()
{
  assert(this->GetErrorType() == FSxErrors::INVALID_NETWORK_SETTINGS);
  return InvalidNetworkSettings(this->GetJsonPayload().View());
}

template<> AWS_FSX_API SourceBackupUnavailable FSxError::GetModeledError()
{
  assert(this->GetErrorType() == FSxErrors::SOURCE_BACKUP_UNAVAILABLE);
  return SourceBackupUnavailable(this->GetJsonPayload().View());
}

template<> AWS_FSX_API BackupBeingCopied FSxError::GetModeledError()
{
  assert(this->GetErrorType() == FSxErrors::BACKUP_BEING_COPIED);
  return BackupBeingCopied(this->GetJsonPayload().View());
}

template<> AWS_FSX_API ResourceNotFound FSxError::GetModeledError()
{
  assert(this->GetErrorType() == FSxErrors::RESOURCE_NOT_FOUND);
  return ResourceNotFound(this->GetJsonPayload().View());
}

template<> AWS_FSX_API BackupRestoring FSxError::GetModeledError()
{
  assert(this->GetErrorType() == FSxErrors::BACKUP_RESTORING);
  return BackupRestoring(this->GetJsonPayload().View());
}

template<> AWS_FSX_API ServiceLimitExceeded FSxError::GetModeledError()
{
  assert(this->GetErrorType() == FSxErrors::SERVICE_LIMIT_EXCEEDED);
  return ServiceLimitExceeded(this->GetJsonPayload().View());
}

template<> AWS_FSX_API NotServiceResourceError FSxError::GetModeledError()
{
  assert(this->GetErrorType() == FSxErrors::NOT_SERVICE_RESOURCE);
  return NotServiceResourceError(this->GetJsonPayload().View());
}

template<> AWS_FSX_API ResourceDoesNotSupportTagging FSxError::GetModeledError()
{
  assert(this->GetErrorType() == FSxErrors::RESOURCE_DOES_NOT_SUPPORT_TAGGING);
  return ResourceDoesNotSupportTagging(this->GetJsonPayload().View());
}

namespace FSxErrorMapper
{

static const int INCOMPATIBLE_PARAMETER_HASH = HashingUtils::HashString("IncompatibleParameterError");
static const int SNAPSHOT_NOT_FOUND_HASH = HashingUtils::HashString("SnapshotNotFound");
static const int DATA_REPOSITORY_ASSOCIATION_NOT_FOUND_HASH = HashingUtils::HashString("DataRepositoryAssociationNotFound");
static const int ACTIVE_DIRECTORY_HASH = HashingUtils::HashString("ActiveDirectoryError");
static const int FILE_SYSTEM_NOT_FOUND_HASH = HashingUtils::HashString("FileSystemNotFound");
static const int INVALID_DATA_REPOSITORY_TYPE_HASH = HashingUtils::HashString("InvalidDataRepositoryType");
static const int INVALID_NETWORK_SETTINGS_HASH = HashingUtils::HashString("InvalidNetworkSettings");
static const int INVALID_SOURCE_KMS_KEY_HASH = HashingUtils::HashString("InvalidSourceKmsKey");
static const int INVALID_IMPORT_PATH_HASH = HashingUtils::HashString("InvalidImportPath");
static const int SOURCE_BACKUP_UNAVAILABLE_HASH = HashingUtils::HashString("SourceBackupUnavailable");
static const int BACKUP_BEING_COPIED_HASH = HashingUtils::HashString("BackupBeingCopied");
static const int INVALID_PER_UNIT_STORAGE_THROUGHPUT_HASH = HashingUtils::HashString("InvalidPerUnitStorageThroughput");
static const int INVALID_REGION_HASH = HashingUtils::HashString("InvalidRegion");
static const int INVALID_EXPORT_PATH_HASH = HashingUtils::HashString("InvalidExportPath");
static const int BACKUP_IN_PROGRESS_HASH = HashingUtils::HashString("BackupInProgress");
static const int BACKUP_NOT_FOUND_HASH = HashingUtils::HashString("BackupNotFound");
static const int DATA_REPOSITORY_TASK_NOT_FOUND_HASH = HashingUtils::HashString("DataRepositoryTaskNotFound");
static const int MISSING_FILE_CACHE_CONFIGURATION_HASH = HashingUtils::HashString("MissingFileCacheConfiguration");
static const int BACKUP_RESTORING_HASH = HashingUtils::HashString("BackupRestoring");
static const int INCOMPATIBLE_REGION_FOR_MULTI_A_Z_HASH = HashingUtils::HashString("IncompatibleRegionForMultiAZ");
static const int SERVICE_LIMIT_EXCEEDED_HASH = HashingUtils::HashString("ServiceLimitExceeded");
static const int UNSUPPORTED_OPERATION_HASH = HashingUtils::HashString("UnsupportedOperation");
static const int DATA_REPOSITORY_TASK_ENDED_HASH = HashingUtils::HashString("DataRepositoryTaskEnded");
static const int NOT_SERVICE_RESOURCE_HASH = HashingUtils::HashString("NotServiceResourceError");
static const int INVALID_DESTINATION_KMS_KEY_HASH = HashingUtils::HashString("InvalidDestinationKmsKey");
static const int RESOURCE_DOES_NOT_SUPPORT_TAGGING_HASH = HashingUtils::HashString("ResourceDoesNotSupportTagging");
static const int DATA_REPOSITORY_TASK_EXECUTING_HASH = HashingUtils::HashString("DataRepositoryTaskExecuting");
static const int STORAGE_VIRTUAL_MACHINE_NOT_FOUND_HASH = HashingUtils::HashString("StorageVirtualMachineNotFound");
static const int FILE_CACHE_NOT_FOUND_HASH = HashingUtils::HashString("FileCacheNotFound");
static const int VOLUME_NOT_FOUND_HASH = HashingUtils::HashString("VolumeNotFound");
static const int MISSING_VOLUME_CONFIGURATION_HASH = HashingUtils::HashString("MissingVolumeConfiguration");
static const int BAD_REQUEST_HASH = HashingUtils::HashString("BadRequest");
static const int MISSING_FILE_SYSTEM_CONFIGURATION_HASH = HashingUtils::HashString("MissingFileSystemConfiguration");


AWSError<CoreErrors> GetErrorForName(const char* errorName)
{
  int hashCode = HashingUtils::HashString(errorName);

  if (hashCode == INCOMPATIBLE_PARAMETER_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(FSxErrors::INCOMPATIBLE_PARAMETER), false);
  }
  else if (hashCode == SNAPSHOT_NOT_FOUND_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(FSxErrors::SNAPSHOT_NOT_FOUND), false);
  }
  else if (hashCode == DATA_REPOSITORY_ASSOCIATION_NOT_FOUND_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(FSxErrors::DATA_REPOSITORY_ASSOCIATION_NOT_FOUND), false);
  }
  else if (hashCode == ACTIVE_DIRECTORY_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(FSxErrors::ACTIVE_DIRECTORY), false);
  }
  else if (hashCode == FILE_SYSTEM_NOT_FOUND_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(FSxErrors::FILE_SYSTEM_NOT_FOUND), false);
  }
  else if (hashCode == INVALID_DATA_REPOSITORY_TYPE_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(FSxErrors::INVALID_DATA_REPOSITORY_TYPE), false);
  }
  else if (hashCode == INVALID_NETWORK_SETTINGS_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(FSxErrors::INVALID_NETWORK_SETTINGS), false);
  }
  else if (hashCode == INVALID_SOURCE_KMS_KEY_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(FSxErrors::INVALID_SOURCE_KMS_KEY), false);
  }
  else if (hashCode == INVALID_IMPORT_PATH_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(FSxErrors::INVALID_IMPORT_PATH), false);
  }
  else if (hashCode == SOURCE_BACKUP_UNAVAILABLE_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(FSxErrors::SOURCE_BACKUP_UNAVAILABLE), false);
  }
  else if (hashCode == BACKUP_BEING_COPIED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(FSxErrors::BACKUP_BEING_COPIED), false);
  }
  else if (hashCode == INVALID_PER_UNIT_STORAGE_THROUGHPUT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(FSxErrors::INVALID_PER_UNIT_STORAGE_THROUGHPUT), false);
  }
  else if (hashCode == INVALID_REGION_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(FSxErrors::INVALID_REGION), false);
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
  else if (hashCode == DATA_REPOSITORY_TASK_NOT_FOUND_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(FSxErrors::DATA_REPOSITORY_TASK_NOT_FOUND), false);
  }
  else if (hashCode == MISSING_FILE_CACHE_CONFIGURATION_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(FSxErrors::MISSING_FILE_CACHE_CONFIGURATION), false);
  }
  else if (hashCode == BACKUP_RESTORING_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(FSxErrors::BACKUP_RESTORING), false);
  }
  else if (hashCode == INCOMPATIBLE_REGION_FOR_MULTI_A_Z_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(FSxErrors::INCOMPATIBLE_REGION_FOR_MULTI_A_Z), false);
  }
  else if (hashCode == SERVICE_LIMIT_EXCEEDED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(FSxErrors::SERVICE_LIMIT_EXCEEDED), false);
  }
  else if (hashCode == UNSUPPORTED_OPERATION_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(FSxErrors::UNSUPPORTED_OPERATION), false);
  }
  else if (hashCode == DATA_REPOSITORY_TASK_ENDED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(FSxErrors::DATA_REPOSITORY_TASK_ENDED), false);
  }
  else if (hashCode == NOT_SERVICE_RESOURCE_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(FSxErrors::NOT_SERVICE_RESOURCE), false);
  }
  else if (hashCode == INVALID_DESTINATION_KMS_KEY_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(FSxErrors::INVALID_DESTINATION_KMS_KEY), false);
  }
  else if (hashCode == RESOURCE_DOES_NOT_SUPPORT_TAGGING_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(FSxErrors::RESOURCE_DOES_NOT_SUPPORT_TAGGING), false);
  }
  else if (hashCode == DATA_REPOSITORY_TASK_EXECUTING_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(FSxErrors::DATA_REPOSITORY_TASK_EXECUTING), false);
  }
  else if (hashCode == STORAGE_VIRTUAL_MACHINE_NOT_FOUND_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(FSxErrors::STORAGE_VIRTUAL_MACHINE_NOT_FOUND), false);
  }
  else if (hashCode == FILE_CACHE_NOT_FOUND_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(FSxErrors::FILE_CACHE_NOT_FOUND), false);
  }
  else if (hashCode == VOLUME_NOT_FOUND_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(FSxErrors::VOLUME_NOT_FOUND), false);
  }
  else if (hashCode == MISSING_VOLUME_CONFIGURATION_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(FSxErrors::MISSING_VOLUME_CONFIGURATION), false);
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
