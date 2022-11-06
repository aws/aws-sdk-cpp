/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/textract/model/AnalyzeDocumentRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Textract::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

AnalyzeDocumentRequest::AnalyzeDocumentRequest() : 
    m_documentHasBeenSet(false),
    m_featureTypesHasBeenSet(false),
    m_humanLoopConfigHasBeenSet(false),
    m_queriesConfigHasBeenSet(false)
{
}

Aws::String AnalyzeDocumentRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_documentHasBeenSet)
  {
   payload.WithObject("Document", m_document.Jsonize());

  }

  if(m_featureTypesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> featureTypesJsonList(m_featureTypes.size());
   for(unsigned featureTypesIndex = 0; featureTypesIndex < featureTypesJsonList.GetLength(); ++featureTypesIndex)
   {
     featureTypesJsonList[featureTypesIndex].AsString(FeatureTypeMapper::GetNameForFeatureType(m_featureTypes[featureTypesIndex]));
   }
   payload.WithArray("FeatureTypes", std::move(featureTypesJsonList));

  }

  if(m_humanLoopConfigHasBeenSet)
  {
   payload.WithObject("HumanLoopConfig", m_humanLoopConfig.Jsonize());

  }

  if(m_queriesConfigHasBeenSet)
  {
   payload.WithObject("QueriesConfig", m_queriesConfig.Jsonize());

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection AnalyzeDocumentRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "Textract.AnalyzeDocument"));
  return headers;

}




