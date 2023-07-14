/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/client/AWSError.h>
#include <aws/mediapackage-vod/MediaPackageVodErrorMarshaller.h>
#include <aws/mediapackage-vod/MediaPackageVodErrors.h>

using namespace Aws::Client;
using namespace Aws::MediaPackageVod;

AWSError<CoreErrors> MediaPackageVodErrorMarshaller::FindErrorByName(const char* errorName) const
{
  AWSError<CoreErrors> error = MediaPackageVodErrorMapper::GetErrorForName(errorName);
  if(error.GetErrorType() != CoreErrors::UNKNOWN)
  {
    return error;
  }

  return AWSErrorMarshaller::FindErrorByName(errorName);
}