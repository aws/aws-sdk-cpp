/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#include <aws/frauddetector/model/UpdateDetectorVersionRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::FraudDetector::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

UpdateDetectorVersionRequest::UpdateDetectorVersionRequest() : 
    m_detectorIdHasBeenSet(false),
    m_detectorVersionIdHasBeenSet(false),
    m_externalModelEndpointsHasBeenSet(false),
    m_rulesHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_modelVersionsHasBeenSet(false)
{
}

Aws::String UpdateDetectorVersionRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_detectorIdHasBeenSet)
  {
   payload.WithString("detectorId", m_detectorId);

  }

  if(m_detectorVersionIdHasBeenSet)
  {
   payload.WithString("detectorVersionId", m_detectorVersionId);

  }

  if(m_externalModelEndpointsHasBeenSet)
  {
   Array<JsonValue> externalModelEndpointsJsonList(m_externalModelEndpoints.size());
   for(unsigned externalModelEndpointsIndex = 0; externalModelEndpointsIndex < externalModelEndpointsJsonList.GetLength(); ++externalModelEndpointsIndex)
   {
     externalModelEndpointsJsonList[externalModelEndpointsIndex].AsString(m_externalModelEndpoints[externalModelEndpointsIndex]);
   }
   payload.WithArray("externalModelEndpoints", std::move(externalModelEndpointsJsonList));

  }

  if(m_rulesHasBeenSet)
  {
   Array<JsonValue> rulesJsonList(m_rules.size());
   for(unsigned rulesIndex = 0; rulesIndex < rulesJsonList.GetLength(); ++rulesIndex)
   {
     rulesJsonList[rulesIndex].AsObject(m_rules[rulesIndex].Jsonize());
   }
   payload.WithArray("rules", std::move(rulesJsonList));

  }

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("description", m_description);

  }

  if(m_modelVersionsHasBeenSet)
  {
   Array<JsonValue> modelVersionsJsonList(m_modelVersions.size());
   for(unsigned modelVersionsIndex = 0; modelVersionsIndex < modelVersionsJsonList.GetLength(); ++modelVersionsIndex)
   {
     modelVersionsJsonList[modelVersionsIndex].AsObject(m_modelVersions[modelVersionsIndex].Jsonize());
   }
   payload.WithArray("modelVersions", std::move(modelVersionsJsonList));

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection UpdateDetectorVersionRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AWSHawksNestServiceFacade.UpdateDetectorVersion"));
  return headers;

}




