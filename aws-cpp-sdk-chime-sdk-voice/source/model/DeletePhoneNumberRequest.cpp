/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/chime-sdk-voice/model/DeletePhoneNumberRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::ChimeSDKVoice::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DeletePhoneNumberRequest::DeletePhoneNumberRequest() : 
    m_phoneNumberIdHasBeenSet(false)
{
}

Aws::String DeletePhoneNumberRequest::SerializePayload() const
{
  return {};
}




