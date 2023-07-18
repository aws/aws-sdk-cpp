/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/client/AWSError.h>
#include <aws/chime-sdk-media-pipelines/ChimeSDKMediaPipelinesErrorMarshaller.h>
#include <aws/chime-sdk-media-pipelines/ChimeSDKMediaPipelinesErrors.h>

using namespace Aws::Client;
using namespace Aws::ChimeSDKMediaPipelines;

AWSError<CoreErrors> ChimeSDKMediaPipelinesErrorMarshaller::FindErrorByName(const char* errorName) const
{
  AWSError<CoreErrors> error = ChimeSDKMediaPipelinesErrorMapper::GetErrorForName(errorName);
  if(error.GetErrorType() != CoreErrors::UNKNOWN)
  {
    return error;
  }

  return AWSErrorMarshaller::FindErrorByName(errorName);
}