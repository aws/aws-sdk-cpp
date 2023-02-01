/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/client/AWSError.h>
#include <aws/kinesis-video-webrtc-storage/KinesisVideoWebRTCStorageErrorMarshaller.h>
#include <aws/kinesis-video-webrtc-storage/KinesisVideoWebRTCStorageErrors.h>

using namespace Aws::Client;
using namespace Aws::KinesisVideoWebRTCStorage;

AWSError<CoreErrors> KinesisVideoWebRTCStorageErrorMarshaller::FindErrorByName(const char* errorName) const
{
  AWSError<CoreErrors> error = KinesisVideoWebRTCStorageErrorMapper::GetErrorForName(errorName);
  if(error.GetErrorType() != CoreErrors::UNKNOWN)
  {
    return error;
  }

  return AWSErrorMarshaller::FindErrorByName(errorName);
}