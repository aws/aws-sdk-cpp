/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/client/AWSError.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/importexport/ImportExportErrors.h>

using namespace Aws::Client;
using namespace Aws::Utils;
using namespace Aws::ImportExport;

namespace Aws
{
namespace ImportExport
{
namespace ImportExportErrorMapper
{

static constexpr uint32_t INVALID_VERSION_HASH = ConstExprHashingUtils::HashString("InvalidVersionException");
static constexpr uint32_t INVALID_ADDRESS_HASH = ConstExprHashingUtils::HashString("InvalidAddressException");
static constexpr uint32_t EXPIRED_JOB_ID_HASH = ConstExprHashingUtils::HashString("ExpiredJobIdException");
static constexpr uint32_t UNABLE_TO_CANCEL_JOB_ID_HASH = ConstExprHashingUtils::HashString("UnableToCancelJobIdException");
static constexpr uint32_t INVALID_CUSTOMS_HASH = ConstExprHashingUtils::HashString("InvalidCustomsException");
static constexpr uint32_t INVALID_JOB_ID_HASH = ConstExprHashingUtils::HashString("InvalidJobIdException");
static constexpr uint32_t CREATE_JOB_QUOTA_EXCEEDED_HASH = ConstExprHashingUtils::HashString("CreateJobQuotaExceededException");
static constexpr uint32_t UNABLE_TO_UPDATE_JOB_ID_HASH = ConstExprHashingUtils::HashString("UnableToUpdateJobIdException");
static constexpr uint32_t MISSING_MANIFEST_FIELD_HASH = ConstExprHashingUtils::HashString("MissingManifestFieldException");
static constexpr uint32_t INVALID_PARAMETER_HASH = ConstExprHashingUtils::HashString("InvalidParameterException");
static constexpr uint32_t CANCELED_JOB_ID_HASH = ConstExprHashingUtils::HashString("CanceledJobIdException");
static constexpr uint32_t NO_SUCH_BUCKET_HASH = ConstExprHashingUtils::HashString("NoSuchBucketException");
static constexpr uint32_t MALFORMED_MANIFEST_HASH = ConstExprHashingUtils::HashString("MalformedManifestException");
static constexpr uint32_t INVALID_FILE_SYSTEM_HASH = ConstExprHashingUtils::HashString("InvalidFileSystemException");
static constexpr uint32_t BUCKET_PERMISSION_HASH = ConstExprHashingUtils::HashString("BucketPermissionException");
static constexpr uint32_t MULTIPLE_REGIONS_HASH = ConstExprHashingUtils::HashString("MultipleRegionsException");
static constexpr uint32_t INVALID_MANIFEST_FIELD_HASH = ConstExprHashingUtils::HashString("InvalidManifestFieldException");
static constexpr uint32_t MISSING_CUSTOMS_HASH = ConstExprHashingUtils::HashString("MissingCustomsException");


AWSError<CoreErrors> GetErrorForName(const char* errorName)
{
  uint32_t hashCode = HashingUtils::HashString(errorName);

  if (hashCode == INVALID_VERSION_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(ImportExportErrors::INVALID_VERSION), false);
  }
  else if (hashCode == INVALID_ADDRESS_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(ImportExportErrors::INVALID_ADDRESS), false);
  }
  else if (hashCode == EXPIRED_JOB_ID_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(ImportExportErrors::EXPIRED_JOB_ID), false);
  }
  else if (hashCode == UNABLE_TO_CANCEL_JOB_ID_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(ImportExportErrors::UNABLE_TO_CANCEL_JOB_ID), false);
  }
  else if (hashCode == INVALID_CUSTOMS_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(ImportExportErrors::INVALID_CUSTOMS), false);
  }
  else if (hashCode == INVALID_JOB_ID_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(ImportExportErrors::INVALID_JOB_ID), false);
  }
  else if (hashCode == CREATE_JOB_QUOTA_EXCEEDED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(ImportExportErrors::CREATE_JOB_QUOTA_EXCEEDED), false);
  }
  else if (hashCode == UNABLE_TO_UPDATE_JOB_ID_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(ImportExportErrors::UNABLE_TO_UPDATE_JOB_ID), false);
  }
  else if (hashCode == MISSING_MANIFEST_FIELD_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(ImportExportErrors::MISSING_MANIFEST_FIELD), false);
  }
  else if (hashCode == INVALID_PARAMETER_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(ImportExportErrors::INVALID_PARAMETER), false);
  }
  else if (hashCode == CANCELED_JOB_ID_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(ImportExportErrors::CANCELED_JOB_ID), false);
  }
  else if (hashCode == NO_SUCH_BUCKET_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(ImportExportErrors::NO_SUCH_BUCKET), false);
  }
  else if (hashCode == MALFORMED_MANIFEST_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(ImportExportErrors::MALFORMED_MANIFEST), false);
  }
  else if (hashCode == INVALID_FILE_SYSTEM_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(ImportExportErrors::INVALID_FILE_SYSTEM), false);
  }
  else if (hashCode == BUCKET_PERMISSION_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(ImportExportErrors::BUCKET_PERMISSION), false);
  }
  else if (hashCode == MULTIPLE_REGIONS_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(ImportExportErrors::MULTIPLE_REGIONS), false);
  }
  else if (hashCode == INVALID_MANIFEST_FIELD_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(ImportExportErrors::INVALID_MANIFEST_FIELD), false);
  }
  else if (hashCode == MISSING_CUSTOMS_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(ImportExportErrors::MISSING_CUSTOMS), false);
  }
  return AWSError<CoreErrors>(CoreErrors::UNKNOWN, false);
}

} // namespace ImportExportErrorMapper
} // namespace ImportExport
} // namespace Aws
