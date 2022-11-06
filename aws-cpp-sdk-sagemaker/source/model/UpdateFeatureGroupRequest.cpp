/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/UpdateFeatureGroupRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::SageMaker::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

UpdateFeatureGroupRequest::UpdateFeatureGroupRequest() : 
    m_featureGroupNameHasBeenSet(false),
    m_featureAdditionsHasBeenSet(false)
{
}

Aws::String UpdateFeatureGroupRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_featureGroupNameHasBeenSet)
  {
   payload.WithString("FeatureGroupName", m_featureGroupName);

  }

  if(m_featureAdditionsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> featureAdditionsJsonList(m_featureAdditions.size());
   for(unsigned featureAdditionsIndex = 0; featureAdditionsIndex < featureAdditionsJsonList.GetLength(); ++featureAdditionsIndex)
   {
     featureAdditionsJsonList[featureAdditionsIndex].AsObject(m_featureAdditions[featureAdditionsIndex].Jsonize());
   }
   payload.WithArray("FeatureAdditions", std::move(featureAdditionsJsonList));

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection UpdateFeatureGroupRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "SageMaker.UpdateFeatureGroup"));
  return headers;

}




