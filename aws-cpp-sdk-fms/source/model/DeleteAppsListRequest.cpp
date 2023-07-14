/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/fms/model/DeleteAppsListRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::FMS::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DeleteAppsListRequest::DeleteAppsListRequest() : 
    m_listIdHasBeenSet(false)
{
}

Aws::String DeleteAppsListRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_listIdHasBeenSet)
  {
   payload.WithString("ListId", m_listId);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection DeleteAppsListRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AWSFMS_20180101.DeleteAppsList"));
  return headers;

}




