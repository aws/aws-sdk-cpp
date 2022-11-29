/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/omics/model/BatchDeleteReadSetRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Omics::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

BatchDeleteReadSetRequest::BatchDeleteReadSetRequest() : 
    m_idsHasBeenSet(false),
    m_sequenceStoreIdHasBeenSet(false)
{
}

Aws::String BatchDeleteReadSetRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_idsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> idsJsonList(m_ids.size());
   for(unsigned idsIndex = 0; idsIndex < idsJsonList.GetLength(); ++idsIndex)
   {
     idsJsonList[idsIndex].AsString(m_ids[idsIndex]);
   }
   payload.WithArray("ids", std::move(idsJsonList));

  }

  return payload.View().WriteReadable();
}




