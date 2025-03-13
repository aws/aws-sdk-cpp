/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mailmanager/model/DeleteIngressPointRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::MailManager::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String DeleteIngressPointRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_ingressPointIdHasBeenSet)
  {
   payload.WithString("IngressPointId", m_ingressPointId);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection DeleteIngressPointRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "MailManagerSvc.DeleteIngressPoint"));
  return headers;

}




