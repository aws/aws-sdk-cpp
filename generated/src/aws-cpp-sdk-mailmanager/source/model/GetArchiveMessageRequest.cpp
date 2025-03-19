/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mailmanager/model/GetArchiveMessageRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::MailManager::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String GetArchiveMessageRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_archivedMessageIdHasBeenSet)
  {
   payload.WithString("ArchivedMessageId", m_archivedMessageId);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection GetArchiveMessageRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "MailManagerSvc.GetArchiveMessage"));
  return headers;

}




