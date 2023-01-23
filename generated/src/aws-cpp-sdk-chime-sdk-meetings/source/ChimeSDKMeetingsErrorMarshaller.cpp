/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/client/AWSError.h>
#include <aws/chime-sdk-meetings/ChimeSDKMeetingsErrorMarshaller.h>
#include <aws/chime-sdk-meetings/ChimeSDKMeetingsErrors.h>

using namespace Aws::Client;
using namespace Aws::ChimeSDKMeetings;

AWSError<CoreErrors> ChimeSDKMeetingsErrorMarshaller::FindErrorByName(const char* errorName) const
{
  AWSError<CoreErrors> error = ChimeSDKMeetingsErrorMapper::GetErrorForName(errorName);
  if(error.GetErrorType() != CoreErrors::UNKNOWN)
  {
    return error;
  }

  return AWSErrorMarshaller::FindErrorByName(errorName);
}