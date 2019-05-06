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
#include <aws/importexport/ImportExportErrors.h>

using namespace Aws::Client;
using namespace Aws::ImportExport;
using namespace Aws::Utils;

namespace Aws
{
namespace ImportExport
{
namespace ImportExportErrorMapper
{

static const int INVALID_VERSION_HASH = HashingUtils::HashString("InvalidVersionException");
static const int INVALID_ADDRESS_HASH = HashingUtils::HashString("InvalidAddressException");
static const int EXPIRED_JOB_ID_HASH = HashingUtils::HashString("ExpiredJobIdException");
static const int UNABLE_TO_CANCEL_JOB_ID_HASH = HashingUtils::HashString("UnableToCancelJobIdException");
static const int INVALID_CUSTOMS_HASH = HashingUtils::HashString("InvalidCustomsException");
static const int INVALID_JOB_ID_HASH = HashingUtils::HashString("InvalidJobIdException");
static const int CREATE_JOB_QUOTA_EXCEEDED_HASH = HashingUtils::HashString("CreateJobQuotaExceededException");
static const int UNABLE_TO_UPDATE_JOB_ID_HASH = HashingUtils::HashString("UnableToUpdateJobIdException");
static const int MISSING_MANIFEST_FIELD_HASH = HashingUtils::HashString("MissingManifestFieldException");
static const int INVALID_PARAMETER_HASH = HashingUtils::HashString("InvalidParameterException");
static const int CANCELED_JOB_ID_HASH = HashingUtils::HashString("CanceledJobIdException");
static const int NO_SUCH_BUCKET_HASH = HashingUtils::HashString("NoSuchBucketException");
static const int MALFORMED_MANIFEST_HASH = HashingUtils::HashString("MalformedManifestException");
static const int INVALID_FILE_SYSTEM_HASH = HashingUtils::HashString("InvalidFileSystemException");
static const int BUCKET_PERMISSION_HASH = HashingUtils::HashString("BucketPermissionException");
static const int MULTIPLE_REGIONS_HASH = HashingUtils::HashString("MultipleRegionsException");
static const int INVALID_MANIFEST_FIELD_HASH = HashingUtils::HashString("InvalidManifestFieldException");
static const int MISSING_CUSTOMS_HASH = HashingUtils::HashString("MissingCustomsException");


AWSError<CoreErrors> GetErrorForName(const char* errorName)
{
  int hashCode = HashingUtils::HashString(errorName);

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
