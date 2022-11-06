/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/CreateAlgorithmRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::SageMaker::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

CreateAlgorithmRequest::CreateAlgorithmRequest() : 
    m_algorithmNameHasBeenSet(false),
    m_algorithmDescriptionHasBeenSet(false),
    m_trainingSpecificationHasBeenSet(false),
    m_inferenceSpecificationHasBeenSet(false),
    m_validationSpecificationHasBeenSet(false),
    m_certifyForMarketplace(false),
    m_certifyForMarketplaceHasBeenSet(false),
    m_tagsHasBeenSet(false)
{
}

Aws::String CreateAlgorithmRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_algorithmNameHasBeenSet)
  {
   payload.WithString("AlgorithmName", m_algorithmName);

  }

  if(m_algorithmDescriptionHasBeenSet)
  {
   payload.WithString("AlgorithmDescription", m_algorithmDescription);

  }

  if(m_trainingSpecificationHasBeenSet)
  {
   payload.WithObject("TrainingSpecification", m_trainingSpecification.Jsonize());

  }

  if(m_inferenceSpecificationHasBeenSet)
  {
   payload.WithObject("InferenceSpecification", m_inferenceSpecification.Jsonize());

  }

  if(m_validationSpecificationHasBeenSet)
  {
   payload.WithObject("ValidationSpecification", m_validationSpecification.Jsonize());

  }

  if(m_certifyForMarketplaceHasBeenSet)
  {
   payload.WithBool("CertifyForMarketplace", m_certifyForMarketplace);

  }

  if(m_tagsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> tagsJsonList(m_tags.size());
   for(unsigned tagsIndex = 0; tagsIndex < tagsJsonList.GetLength(); ++tagsIndex)
   {
     tagsJsonList[tagsIndex].AsObject(m_tags[tagsIndex].Jsonize());
   }
   payload.WithArray("Tags", std::move(tagsJsonList));

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection CreateAlgorithmRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "SageMaker.CreateAlgorithm"));
  return headers;

}




