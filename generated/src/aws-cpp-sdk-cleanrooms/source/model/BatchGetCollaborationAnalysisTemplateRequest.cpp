/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cleanrooms/model/BatchGetCollaborationAnalysisTemplateRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::CleanRooms::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

BatchGetCollaborationAnalysisTemplateRequest::BatchGetCollaborationAnalysisTemplateRequest() : 
    m_collaborationIdentifierHasBeenSet(false),
    m_analysisTemplateArnsHasBeenSet(false)
{
}

Aws::String BatchGetCollaborationAnalysisTemplateRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_analysisTemplateArnsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> analysisTemplateArnsJsonList(m_analysisTemplateArns.size());
   for(unsigned analysisTemplateArnsIndex = 0; analysisTemplateArnsIndex < analysisTemplateArnsJsonList.GetLength(); ++analysisTemplateArnsIndex)
   {
     analysisTemplateArnsJsonList[analysisTemplateArnsIndex].AsString(m_analysisTemplateArns[analysisTemplateArnsIndex]);
   }
   payload.WithArray("analysisTemplateArns", std::move(analysisTemplateArnsJsonList));

  }

  return payload.View().WriteReadable();
}




