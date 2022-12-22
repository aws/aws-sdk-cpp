/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/CreateEndpointConfigRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::SageMaker::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

CreateEndpointConfigRequest::CreateEndpointConfigRequest() : 
    m_endpointConfigNameHasBeenSet(false),
    m_productionVariantsHasBeenSet(false),
    m_dataCaptureConfigHasBeenSet(false),
    m_tagsHasBeenSet(false),
    m_kmsKeyIdHasBeenSet(false),
    m_asyncInferenceConfigHasBeenSet(false),
    m_explainerConfigHasBeenSet(false),
    m_shadowProductionVariantsHasBeenSet(false)
{
}

Aws::String CreateEndpointConfigRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_endpointConfigNameHasBeenSet)
  {
   payload.WithString("EndpointConfigName", m_endpointConfigName);

  }

  if(m_productionVariantsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> productionVariantsJsonList(m_productionVariants.size());
   for(unsigned productionVariantsIndex = 0; productionVariantsIndex < productionVariantsJsonList.GetLength(); ++productionVariantsIndex)
   {
     productionVariantsJsonList[productionVariantsIndex].AsObject(m_productionVariants[productionVariantsIndex].Jsonize());
   }
   payload.WithArray("ProductionVariants", std::move(productionVariantsJsonList));

  }

  if(m_dataCaptureConfigHasBeenSet)
  {
   payload.WithObject("DataCaptureConfig", m_dataCaptureConfig.Jsonize());

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

  if(m_kmsKeyIdHasBeenSet)
  {
   payload.WithString("KmsKeyId", m_kmsKeyId);

  }

  if(m_asyncInferenceConfigHasBeenSet)
  {
   payload.WithObject("AsyncInferenceConfig", m_asyncInferenceConfig.Jsonize());

  }

  if(m_explainerConfigHasBeenSet)
  {
   payload.WithObject("ExplainerConfig", m_explainerConfig.Jsonize());

  }

  if(m_shadowProductionVariantsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> shadowProductionVariantsJsonList(m_shadowProductionVariants.size());
   for(unsigned shadowProductionVariantsIndex = 0; shadowProductionVariantsIndex < shadowProductionVariantsJsonList.GetLength(); ++shadowProductionVariantsIndex)
   {
     shadowProductionVariantsJsonList[shadowProductionVariantsIndex].AsObject(m_shadowProductionVariants[shadowProductionVariantsIndex].Jsonize());
   }
   payload.WithArray("ShadowProductionVariants", std::move(shadowProductionVariantsJsonList));

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection CreateEndpointConfigRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "SageMaker.CreateEndpointConfig"));
  return headers;

}




