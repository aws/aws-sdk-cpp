/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/devicefarm/model/ListTestGridProjectsRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::DeviceFarm::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

ListTestGridProjectsRequest::ListTestGridProjectsRequest() : 
    m_maxResult(0),
    m_maxResultHasBeenSet(false),
    m_nextTokenHasBeenSet(false)
{
}

Aws::String ListTestGridProjectsRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_maxResultHasBeenSet)
  {
   payload.WithInteger("maxResult", m_maxResult);

  }

  if(m_nextTokenHasBeenSet)
  {
   payload.WithString("nextToken", m_nextToken);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection ListTestGridProjectsRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "DeviceFarm_20150623.ListTestGridProjects"));
  return headers;

}




