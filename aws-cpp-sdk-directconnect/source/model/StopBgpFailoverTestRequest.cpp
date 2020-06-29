/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/directconnect/model/StopBgpFailoverTestRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::DirectConnect::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

StopBgpFailoverTestRequest::StopBgpFailoverTestRequest() : 
    m_virtualInterfaceIdHasBeenSet(false)
{
}

Aws::String StopBgpFailoverTestRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_virtualInterfaceIdHasBeenSet)
  {
   payload.WithString("virtualInterfaceId", m_virtualInterfaceId);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection StopBgpFailoverTestRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "OvertureService.StopBgpFailoverTest"));
  return headers;

}




