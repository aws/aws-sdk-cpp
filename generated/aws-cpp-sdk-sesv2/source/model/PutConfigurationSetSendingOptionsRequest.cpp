/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sesv2/model/PutConfigurationSetSendingOptionsRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::SESV2::Model;
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




