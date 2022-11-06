/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/textract/model/StartDocumentAnalysisRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Textract::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

StartDocumentAnalysisRequest::StartDocumentAnalysisRequest() : 
    m_documentLocationHasBeenSet(false),
    m_featureTypesHasBeenSet(false),
    m_clientRequestTokenHasBeenSet(false),
    m_jobTagHasBeenSet(false),
    m_notificationChannelHasBeenSet(false),
    m_outputConfigHasBeenSet(false),
    m_kMSKeyIdHasBeenSet(false),
    m_queriesConfigHasBeenSet(false)
{
}

Aws::String StartDocumentAnalysisRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_documentLocationHasBeenSet)
  {
   payload.WithObject("DocumentLocation", m_documentLocation.Jsonize());

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

  if(m_clientRequestTokenHasBeenSet)
  {
   payload.WithString("ClientRequestToken", m_clientRequestToken);

  }

  if(m_jobTagHasBeenSet)
  {
   payload.WithString("JobTag", m_jobTag);

  }

  if(m_notificationChannelHasBeenSet)
  {
   payload.WithObject("NotificationChannel", m_notificationChannel.Jsonize());

  }

  if(m_outputConfigHasBeenSet)
  {
   payload.WithObject("OutputConfig", m_outputConfig.Jsonize());

  }

  if(m_kMSKeyIdHasBeenSet)
  {
   payload.WithString("KMSKeyId", m_kMSKeyId);

  }

  if(m_queriesConfigHasBeenSet)
  {
   payload.WithObject("QueriesConfig", m_queriesConfig.Jsonize());

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection StartDocumentAnalysisRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "Textract.StartDocumentAnalysis"));
  return headers;

}




