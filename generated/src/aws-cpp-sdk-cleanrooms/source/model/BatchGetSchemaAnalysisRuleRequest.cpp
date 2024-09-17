/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cleanrooms/model/BatchGetSchemaAnalysisRuleRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::CleanRooms::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

BatchGetSchemaAnalysisRuleRequest::BatchGetSchemaAnalysisRuleRequest() : 
    m_collaborationIdentifierHasBeenSet(false),
    m_schemaAnalysisRuleRequestsHasBeenSet(false)
{
}

Aws::String BatchGetSchemaAnalysisRuleRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_schemaAnalysisRuleRequestsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> schemaAnalysisRuleRequestsJsonList(m_schemaAnalysisRuleRequests.size());
   for(unsigned schemaAnalysisRuleRequestsIndex = 0; schemaAnalysisRuleRequestsIndex < schemaAnalysisRuleRequestsJsonList.GetLength(); ++schemaAnalysisRuleRequestsIndex)
   {
     schemaAnalysisRuleRequestsJsonList[schemaAnalysisRuleRequestsIndex].AsObject(m_schemaAnalysisRuleRequests[schemaAnalysisRuleRequestsIndex].Jsonize());
   }
   payload.WithArray("schemaAnalysisRuleRequests", std::move(schemaAnalysisRuleRequestsJsonList));

  }

  return payload.View().WriteReadable();
}




