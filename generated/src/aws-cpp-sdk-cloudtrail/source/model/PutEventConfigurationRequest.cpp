/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cloudtrail/model/PutEventConfigurationRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::CloudTrail::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String PutEventConfigurationRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_eventDataStoreHasBeenSet)
  {
   payload.WithString("EventDataStore", m_eventDataStore);

  }

  if(m_maxEventSizeHasBeenSet)
  {
   payload.WithString("MaxEventSize", MaxEventSizeMapper::GetNameForMaxEventSize(m_maxEventSize));
  }

  if(m_contextKeySelectorsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> contextKeySelectorsJsonList(m_contextKeySelectors.size());
   for(unsigned contextKeySelectorsIndex = 0; contextKeySelectorsIndex < contextKeySelectorsJsonList.GetLength(); ++contextKeySelectorsIndex)
   {
     contextKeySelectorsJsonList[contextKeySelectorsIndex].AsObject(m_contextKeySelectors[contextKeySelectorsIndex].Jsonize());
   }
   payload.WithArray("ContextKeySelectors", std::move(contextKeySelectorsJsonList));

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection PutEventConfigurationRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "com.amazonaws.cloudtrail.v20131101.CloudTrail_20131101.PutEventConfiguration"));
  return headers;

}




