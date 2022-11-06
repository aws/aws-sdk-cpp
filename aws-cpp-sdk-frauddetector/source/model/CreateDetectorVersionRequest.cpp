/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/frauddetector/model/CreateDetectorVersionRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::FraudDetector::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

CreateDetectorVersionRequest::CreateDetectorVersionRequest() : 
    m_detectorIdHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_externalModelEndpointsHasBeenSet(false),
    m_rulesHasBeenSet(false),
    m_modelVersionsHasBeenSet(false),
    m_ruleExecutionMode(RuleExecutionMode::NOT_SET),
    m_ruleExecutionModeHasBeenSet(false),
    m_tagsHasBeenSet(false)
{
}

Aws::String CreateDetectorVersionRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_detectorIdHasBeenSet)
  {
   payload.WithString("detectorId", m_detectorId);

  }

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("description", m_description);

  }

  if(m_externalModelEndpointsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> externalModelEndpointsJsonList(m_externalModelEndpoints.size());
   for(unsigned externalModelEndpointsIndex = 0; externalModelEndpointsIndex < externalModelEndpointsJsonList.GetLength(); ++externalModelEndpointsIndex)
   {
     externalModelEndpointsJsonList[externalModelEndpointsIndex].AsString(m_externalModelEndpoints[externalModelEndpointsIndex]);
   }
   payload.WithArray("externalModelEndpoints", std::move(externalModelEndpointsJsonList));

  }

  if(m_rulesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> rulesJsonList(m_rules.size());
   for(unsigned rulesIndex = 0; rulesIndex < rulesJsonList.GetLength(); ++rulesIndex)
   {
     rulesJsonList[rulesIndex].AsObject(m_rules[rulesIndex].Jsonize());
   }
   payload.WithArray("rules", std::move(rulesJsonList));

  }

  if(m_modelVersionsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> modelVersionsJsonList(m_modelVersions.size());
   for(unsigned modelVersionsIndex = 0; modelVersionsIndex < modelVersionsJsonList.GetLength(); ++modelVersionsIndex)
   {
     modelVersionsJsonList[modelVersionsIndex].AsObject(m_modelVersions[modelVersionsIndex].Jsonize());
   }
   payload.WithArray("modelVersions", std::move(modelVersionsJsonList));

  }

  if(m_ruleExecutionModeHasBeenSet)
  {
   payload.WithString("ruleExecutionMode", RuleExecutionModeMapper::GetNameForRuleExecutionMode(m_ruleExecutionMode));
  }

  if(m_tagsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> tagsJsonList(m_tags.size());
   for(unsigned tagsIndex = 0; tagsIndex < tagsJsonList.GetLength(); ++tagsIndex)
   {
     tagsJsonList[tagsIndex].AsObject(m_tags[tagsIndex].Jsonize());
   }
   payload.WithArray("tags", std::move(tagsJsonList));

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection CreateDetectorVersionRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AWSHawksNestServiceFacade.CreateDetectorVersion"));
  return headers;

}




