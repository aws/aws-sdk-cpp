/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ivs/model/BatchGetChannelRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::IVS::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

BatchGetChannelRequest::BatchGetChannelRequest() : 
    m_arnsHasBeenSet(false)
{
}

Aws::String BatchGetChannelRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_arnsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> arnsJsonList(m_arns.size());
   for(unsigned arnsIndex = 0; arnsIndex < arnsJsonList.GetLength(); ++arnsIndex)
   {
     arnsJsonList[arnsIndex].AsString(m_arns[arnsIndex]);
   }
   payload.WithArray("arns", std::move(arnsJsonList));

  }

  return payload.View().WriteReadable();
}




