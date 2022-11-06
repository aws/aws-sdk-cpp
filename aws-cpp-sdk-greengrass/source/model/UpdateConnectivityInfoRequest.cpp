/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/greengrass/model/UpdateConnectivityInfoRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Greengrass::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

UpdateConnectivityInfoRequest::UpdateConnectivityInfoRequest() : 
    m_connectivityInfoHasBeenSet(false),
    m_thingNameHasBeenSet(false)
{
}

Aws::String UpdateConnectivityInfoRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_connectivityInfoHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> connectivityInfoJsonList(m_connectivityInfo.size());
   for(unsigned connectivityInfoIndex = 0; connectivityInfoIndex < connectivityInfoJsonList.GetLength(); ++connectivityInfoIndex)
   {
     connectivityInfoJsonList[connectivityInfoIndex].AsObject(m_connectivityInfo[connectivityInfoIndex].Jsonize());
   }
   payload.WithArray("ConnectivityInfo", std::move(connectivityInfoJsonList));

  }

  return payload.View().WriteReadable();
}




