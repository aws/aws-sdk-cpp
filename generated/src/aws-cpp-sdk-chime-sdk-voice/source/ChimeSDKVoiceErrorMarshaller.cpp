/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/chime-sdk-voice/ChimeSDKVoiceErrorMarshaller.h>
#include <aws/chime-sdk-voice/ChimeSDKVoiceErrors.h>
#include <aws/core/client/AWSError.h>

using namespace Aws::Client;
using namespace Aws::ChimeSDKVoice;

AWSError<CoreErrors> ChimeSDKVoiceErrorMarshaller::FindErrorByName(const char* errorName) const {
  AWSError<CoreErrors> error = ChimeSDKVoiceErrorMapper::GetErrorForName(errorName);
  if (error.GetErrorType() != CoreErrors::UNKNOWN) {
    return error;
  }

  return AWSErrorMarshaller::FindErrorByName(errorName);
}