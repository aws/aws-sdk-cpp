/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/UpdateFeatureMetadataRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::SageMaker::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

UpdateFeatureMetadataRequest::UpdateFeatureMetadataRequest() : 
    m_featureGroupNameHasBeenSet(false),
    m_featureNameHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_parameterAdditionsHasBeenSet(false),
    m_parameterRemovalsHasBeenSet(false)
{
}

Aws::String UpdateFeatureMetadataRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_featureGroupNameHasBeenSet)
  {
   payload.WithString("FeatureGroupName", m_featureGroupName);

  }

  if(m_featureNameHasBeenSet)
  {
   payload.WithString("FeatureName", m_featureName);

  }

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("Description", m_description);

  }

  if(m_parameterAdditionsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> parameterAdditionsJsonList(m_parameterAdditions.size());
   for(unsigned parameterAdditionsIndex = 0; parameterAdditionsIndex < parameterAdditionsJsonList.GetLength(); ++parameterAdditionsIndex)
   {
     parameterAdditionsJsonList[parameterAdditionsIndex].AsObject(m_parameterAdditions[parameterAdditionsIndex].Jsonize());
   }
   payload.WithArray("ParameterAdditions", std::move(parameterAdditionsJsonList));

  }

  if(m_parameterRemovalsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> parameterRemovalsJsonList(m_parameterRemovals.size());
   for(unsigned parameterRemovalsIndex = 0; parameterRemovalsIndex < parameterRemovalsJsonList.GetLength(); ++parameterRemovalsIndex)
   {
     parameterRemovalsJsonList[parameterRemovalsIndex].AsString(m_parameterRemovals[parameterRemovalsIndex]);
   }
   payload.WithArray("ParameterRemovals", std::move(parameterRemovalsJsonList));

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection UpdateFeatureMetadataRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "SageMaker.UpdateFeatureMetadata"));
  return headers;

}




