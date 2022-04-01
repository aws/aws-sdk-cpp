/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/fms/model/GetProtocolsListRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::FMS::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

GetProtocolsListRequest::GetProtocolsListRequest() : 
    m_listIdHasBeenSet(false),
    m_defaultList(false),
    m_defaultListHasBeenSet(false)
{
}

Aws::String GetProtocolsListRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_listIdHasBeenSet)
  {
   payload.WithString("ListId", m_listId);

  }

  if(m_defaultListHasBeenSet)
  {
   payload.WithBool("DefaultList", m_defaultList);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection GetProtocolsListRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AWSFMS_20180101.GetProtocolsList"));
  return headers;

}




