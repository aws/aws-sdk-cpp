/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
    m_modelVersionsHasBeenSet(false),
    m_ruleExecutionMode(RuleExecutionMode::NOT_SET),
    m_ruleExecutionModeHasBeenSet(false)
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

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("description", m_description);

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

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection UpdateDetectorVersionRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AWSHawksNestServiceFacade.UpdateDetectorVersion"));
  return headers;

}




