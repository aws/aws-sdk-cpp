/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/client/AWSError.h>
#include <aws/mediapackage/MediaPackageErrorMarshaller.h>
#include <aws/mediapackage/MediaPackageErrors.h>

using namespace Aws::Client;
using namespace Aws::MediaPackage;

AWSError<CoreErrors> MediaPackageErrorMarshaller::FindErrorByName(const char* errorName) const
{
  AWSError<CoreErrors> error = MediaPackageErrorMapper::GetErrorForName(errorName);
  if(error.GetErrorType() != CoreErrors::UNKNOWN)
  {
    return error;
  }

  return AWSErrorMarshaller::FindErrorByName(errorName);
}