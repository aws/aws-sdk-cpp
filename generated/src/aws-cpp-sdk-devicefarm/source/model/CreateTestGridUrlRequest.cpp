/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/devicefarm/model/CreateTestGridUrlRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::DeviceFarm::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

CreateTestGridUrlRequest::CreateTestGridUrlRequest() : 
    m_projectArnHasBeenSet(false),
    m_expiresInSeconds(0),
    m_expiresInSecondsHasBeenSet(false)
{
}

Aws::String CreateTestGridUrlRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_projectArnHasBeenSet)
  {
   payload.WithString("projectArn", m_projectArn);

  }

  if(m_expiresInSecondsHasBeenSet)
  {
   payload.WithInteger("expiresInSeconds", m_expiresInSeconds);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection CreateTestGridUrlRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "DeviceFarm_20150623.CreateTestGridUrl"));
  return headers;

}




