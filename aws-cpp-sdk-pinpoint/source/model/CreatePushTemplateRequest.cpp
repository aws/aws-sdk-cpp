/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/pinpoint/model/CreatePushTemplateRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Pinpoint::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

CreatePushTemplateRequest::CreatePushTemplateRequest() : 
    m_pushNotificationTemplateRequestHasBeenSet(false),
    m_templateNameHasBeenSet(false)
{
}

Aws::String CreatePushTemplateRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_pushNotificationTemplateRequestHasBeenSet)
  {
   payload = m_pushNotificationTemplateRequest.Jsonize();
  }

  return payload.View().WriteReadable();
}




