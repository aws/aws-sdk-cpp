/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/chime-sdk-voice/model/GetSipMediaApplicationLoggingConfigurationRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::ChimeSDKVoice::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

GetSipMediaApplicationLoggingConfigurationRequest::GetSipMediaApplicationLoggingConfigurationRequest() : 
    m_sipMediaApplicationIdHasBeenSet(false)
{
}

Aws::String GetSipMediaApplicationLoggingConfigurationRequest::SerializePayload() const
{
  return {};
}




