/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/client/AWSError.h>
#include <aws/kinesisvideo/KinesisVideoErrorMarshaller.h>
#include <aws/kinesisvideo/KinesisVideoErrors.h>

using namespace Aws::Client;
using namespace Aws::KinesisVideo;

AWSError<CoreErrors> KinesisVideoErrorMarshaller::FindErrorByName(const char* errorName) const
{
  AWSError<CoreErrors> error = KinesisVideoErrorMapper::GetErrorForName(errorName);
  if(error.GetErrorType() != CoreErrors::UNKNOWN)
  {
    return error;
  }

  return AWSErrorMarshaller::FindErrorByName(errorName);
}