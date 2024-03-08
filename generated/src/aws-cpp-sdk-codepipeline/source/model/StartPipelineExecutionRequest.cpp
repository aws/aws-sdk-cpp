/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/codepipeline/model/StartPipelineExecutionRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::CodePipeline::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

StartPipelineExecutionRequest::StartPipelineExecutionRequest() : 
    m_nameHasBeenSet(false),
    m_variablesHasBeenSet(false),
    m_clientRequestToken(Aws::Utils::UUID::PseudoRandomUUID()),
    m_clientRequestTokenHasBeenSet(true),
    m_sourceRevisionsHasBeenSet(false)
{
}

Aws::String StartPipelineExecutionRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_nameHasBeenSet)
  {
   payload.WithString("name", m_name);

  }

  if(m_variablesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> variablesJsonList(m_variables.size());
   for(unsigned variablesIndex = 0; variablesIndex < variablesJsonList.GetLength(); ++variablesIndex)
   {
     variablesJsonList[variablesIndex].AsObject(m_variables[variablesIndex].Jsonize());
   }
   payload.WithArray("variables", std::move(variablesJsonList));

  }

  if(m_clientRequestTokenHasBeenSet)
  {
   payload.WithString("clientRequestToken", m_clientRequestToken);

  }

  if(m_sourceRevisionsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> sourceRevisionsJsonList(m_sourceRevisions.size());
   for(unsigned sourceRevisionsIndex = 0; sourceRevisionsIndex < sourceRevisionsJsonList.GetLength(); ++sourceRevisionsIndex)
   {
     sourceRevisionsJsonList[sourceRevisionsIndex].AsObject(m_sourceRevisions[sourceRevisionsIndex].Jsonize());
   }
   payload.WithArray("sourceRevisions", std::move(sourceRevisionsJsonList));

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection StartPipelineExecutionRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "CodePipeline_20150709.StartPipelineExecution"));
  return headers;

}




