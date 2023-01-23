/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/greengrassv2/model/UpdateConnectivityInfoRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::GreengrassV2::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

UpdateConnectivityInfoRequest::UpdateConnectivityInfoRequest() : 
    m_thingNameHasBeenSet(false),
    m_connectivityInfoHasBeenSet(false)
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




