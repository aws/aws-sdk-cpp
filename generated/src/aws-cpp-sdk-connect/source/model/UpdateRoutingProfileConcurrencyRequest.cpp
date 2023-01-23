/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connect/model/UpdateRoutingProfileConcurrencyRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Connect::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

UpdateRoutingProfileConcurrencyRequest::UpdateRoutingProfileConcurrencyRequest() : 
    m_instanceIdHasBeenSet(false),
    m_routingProfileIdHasBeenSet(false),
    m_mediaConcurrenciesHasBeenSet(false)
{
}

Aws::String UpdateRoutingProfileConcurrencyRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_mediaConcurrenciesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> mediaConcurrenciesJsonList(m_mediaConcurrencies.size());
   for(unsigned mediaConcurrenciesIndex = 0; mediaConcurrenciesIndex < mediaConcurrenciesJsonList.GetLength(); ++mediaConcurrenciesIndex)
   {
     mediaConcurrenciesJsonList[mediaConcurrenciesIndex].AsObject(m_mediaConcurrencies[mediaConcurrenciesIndex].Jsonize());
   }
   payload.WithArray("MediaConcurrencies", std::move(mediaConcurrenciesJsonList));

  }

  return payload.View().WriteReadable();
}




