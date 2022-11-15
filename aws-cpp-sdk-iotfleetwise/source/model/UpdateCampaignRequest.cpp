/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iotfleetwise/model/UpdateCampaignRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::IoTFleetWise::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

UpdateCampaignRequest::UpdateCampaignRequest() : 
    m_nameHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_dataExtraDimensionsHasBeenSet(false),
    m_action(UpdateCampaignAction::NOT_SET),
    m_actionHasBeenSet(false)
{
}

Aws::String UpdateCampaignRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_nameHasBeenSet)
  {
   payload.WithString("name", m_name);

  }

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("description", m_description);

  }

  if(m_dataExtraDimensionsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> dataExtraDimensionsJsonList(m_dataExtraDimensions.size());
   for(unsigned dataExtraDimensionsIndex = 0; dataExtraDimensionsIndex < dataExtraDimensionsJsonList.GetLength(); ++dataExtraDimensionsIndex)
   {
     dataExtraDimensionsJsonList[dataExtraDimensionsIndex].AsString(m_dataExtraDimensions[dataExtraDimensionsIndex]);
   }
   payload.WithArray("dataExtraDimensions", std::move(dataExtraDimensionsJsonList));

  }

  if(m_actionHasBeenSet)
  {
   payload.WithString("action", UpdateCampaignActionMapper::GetNameForUpdateCampaignAction(m_action));
  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection UpdateCampaignRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "IoTAutobahnControlPlane.UpdateCampaign"));
  return headers;

}




