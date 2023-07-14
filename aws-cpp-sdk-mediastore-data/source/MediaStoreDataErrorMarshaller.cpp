/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/client/AWSError.h>
#include <aws/mediastore-data/MediaStoreDataErrorMarshaller.h>
#include <aws/mediastore-data/MediaStoreDataErrors.h>

using namespace Aws::Client;
using namespace Aws::MediaStoreData;

AWSError<CoreErrors> MediaStoreDataErrorMarshaller::FindErrorByName(const char* errorName) const
{
  AWSError<CoreErrors> error = MediaStoreDataErrorMapper::GetErrorForName(errorName);
  if(error.GetErrorType() != CoreErrors::UNKNOWN)
  {
    return error;
  }

  return AWSErrorMarshaller::FindErrorByName(errorName);
}