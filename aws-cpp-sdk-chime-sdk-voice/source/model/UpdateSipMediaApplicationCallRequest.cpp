/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/chime-sdk-voice/model/UpdateSipMediaApplicationCallRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::ChimeSDKVoice::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

UpdateSipMediaApplicationCallRequest::UpdateSipMediaApplicationCallRequest() : 
    m_sipMediaApplicationIdHasBeenSet(false),
    m_transactionIdHasBeenSet(false),
    m_argumentsHasBeenSet(false)
{
}

Aws::String UpdateSipMediaApplicationCallRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_argumentsHasBeenSet)
  {
   JsonValue argumentsJsonMap;
   for(auto& argumentsItem : m_arguments)
   {
     argumentsJsonMap.WithString(argumentsItem.first, argumentsItem.second);
   }
   payload.WithObject("Arguments", std::move(argumentsJsonMap));

  }

  return payload.View().WriteReadable();
}




