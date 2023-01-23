/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/fms/model/PutProtocolsListRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::FMS::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

PutProtocolsListRequest::PutProtocolsListRequest() : 
    m_protocolsListHasBeenSet(false),
    m_tagListHasBeenSet(false)
{
}

Aws::String PutProtocolsListRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_protocolsListHasBeenSet)
  {
   payload.WithObject("ProtocolsList", m_protocolsList.Jsonize());

  }

  if(m_tagListHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> tagListJsonList(m_tagList.size());
   for(unsigned tagListIndex = 0; tagListIndex < tagListJsonList.GetLength(); ++tagListIndex)
   {
     tagListJsonList[tagListIndex].AsObject(m_tagList[tagListIndex].Jsonize());
   }
   payload.WithArray("TagList", std::move(tagListJsonList));

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection PutProtocolsListRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AWSFMS_20180101.PutProtocolsList"));
  return headers;

}




