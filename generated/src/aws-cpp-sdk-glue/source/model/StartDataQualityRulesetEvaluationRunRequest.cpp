/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/glue/model/StartDataQualityRulesetEvaluationRunRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Glue::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

StartDataQualityRulesetEvaluationRunRequest::StartDataQualityRulesetEvaluationRunRequest() : 
    m_dataSourceHasBeenSet(false),
    m_roleHasBeenSet(false),
    m_numberOfWorkers(0),
    m_numberOfWorkersHasBeenSet(false),
    m_timeout(0),
    m_timeoutHasBeenSet(false),
    m_clientTokenHasBeenSet(false),
    m_additionalRunOptionsHasBeenSet(false),
    m_rulesetNamesHasBeenSet(false)
{
}

Aws::String StartDataQualityRulesetEvaluationRunRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_dataSourceHasBeenSet)
  {
   payload.WithObject("DataSource", m_dataSource.Jsonize());

  }

  if(m_roleHasBeenSet)
  {
   payload.WithString("Role", m_role);

  }

  if(m_numberOfWorkersHasBeenSet)
  {
   payload.WithInteger("NumberOfWorkers", m_numberOfWorkers);

  }

  if(m_timeoutHasBeenSet)
  {
   payload.WithInteger("Timeout", m_timeout);

  }

  if(m_clientTokenHasBeenSet)
  {
   payload.WithString("ClientToken", m_clientToken);

  }

  if(m_additionalRunOptionsHasBeenSet)
  {
   payload.WithObject("AdditionalRunOptions", m_additionalRunOptions.Jsonize());

  }

  if(m_rulesetNamesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> rulesetNamesJsonList(m_rulesetNames.size());
   for(unsigned rulesetNamesIndex = 0; rulesetNamesIndex < rulesetNamesJsonList.GetLength(); ++rulesetNamesIndex)
   {
     rulesetNamesJsonList[rulesetNamesIndex].AsString(m_rulesetNames[rulesetNamesIndex]);
   }
   payload.WithArray("RulesetNames", std::move(rulesetNamesJsonList));

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection StartDataQualityRulesetEvaluationRunRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AWSGlue.StartDataQualityRulesetEvaluationRun"));
  return headers;

}




