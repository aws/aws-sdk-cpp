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
    m_kmsKeyIdHasBeenSet(false)
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
   Array<JsonValue> productionVariantsJsonList(m_productionVariants.size());
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
   Array<JsonValue> tagsJsonList(m_tags.size());
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

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection CreateEndpointConfigRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "SageMaker.CreateEndpointConfig"));
  return headers;

}




