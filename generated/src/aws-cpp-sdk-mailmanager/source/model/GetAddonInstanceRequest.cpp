﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mailmanager/model/GetAddonInstanceRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::MailManager::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String GetAddonInstanceRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_addonInstanceIdHasBeenSet)
  {
   payload.WithString("AddonInstanceId", m_addonInstanceId);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection GetAddonInstanceRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "MailManagerSvc.GetAddonInstance"));
  return headers;

}




