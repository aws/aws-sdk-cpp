/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#include <aws/pinpoint-email/model/PutConfigurationSetSendingOptionsRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::PinpointEmail::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

PutConfigurationSetSendingOptionsRequest::PutConfigurationSetSendingOptionsRequest() : 
    m_configurationSetNameHasBeenSet(false),
    m_sendingEnabled(false),
    m_sendingEnabledHasBeenSet(false)
{
}

Aws::String PutConfigurationSetSendingOptionsRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_sendingEnabledHasBeenSet)
  {
   payload.WithBool("SendingEnabled", m_sendingEnabled);

  }

  return payload.View().WriteReadable();
}




