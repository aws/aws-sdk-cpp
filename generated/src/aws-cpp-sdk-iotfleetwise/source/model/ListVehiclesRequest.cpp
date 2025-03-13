/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iotfleetwise/model/ListVehiclesRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::IoTFleetWise::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String ListVehiclesRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_modelManifestArnHasBeenSet)
  {
   payload.WithString("modelManifestArn", m_modelManifestArn);

  }

  if(m_attributeNamesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> attributeNamesJsonList(m_attributeNames.size());
   for(unsigned attributeNamesIndex = 0; attributeNamesIndex < attributeNamesJsonList.GetLength(); ++attributeNamesIndex)
   {
     attributeNamesJsonList[attributeNamesIndex].AsString(m_attributeNames[attributeNamesIndex]);
   }
   payload.WithArray("attributeNames", std::move(attributeNamesJsonList));

  }

  if(m_attributeValuesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> attributeValuesJsonList(m_attributeValues.size());
   for(unsigned attributeValuesIndex = 0; attributeValuesIndex < attributeValuesJsonList.GetLength(); ++attributeValuesIndex)
   {
     attributeValuesJsonList[attributeValuesIndex].AsString(m_attributeValues[attributeValuesIndex]);
   }
   payload.WithArray("attributeValues", std::move(attributeValuesJsonList));

  }

  if(m_nextTokenHasBeenSet)
  {
   payload.WithString("nextToken", m_nextToken);

  }

  if(m_maxResultsHasBeenSet)
  {
   payload.WithInteger("maxResults", m_maxResults);

  }

  if(m_listResponseScopeHasBeenSet)
  {
   payload.WithString("listResponseScope", ListResponseScopeMapper::GetNameForListResponseScope(m_listResponseScope));
  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection ListVehiclesRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "IoTAutobahnControlPlane.ListVehicles"));
  return headers;

}




