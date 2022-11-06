/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/CreateModelPackageRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::SageMaker::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

CreateModelPackageRequest::CreateModelPackageRequest() : 
    m_modelPackageNameHasBeenSet(false),
    m_modelPackageGroupNameHasBeenSet(false),
    m_modelPackageDescriptionHasBeenSet(false),
    m_inferenceSpecificationHasBeenSet(false),
    m_validationSpecificationHasBeenSet(false),
    m_sourceAlgorithmSpecificationHasBeenSet(false),
    m_certifyForMarketplace(false),
    m_certifyForMarketplaceHasBeenSet(false),
    m_tagsHasBeenSet(false),
    m_modelApprovalStatus(ModelApprovalStatus::NOT_SET),
    m_modelApprovalStatusHasBeenSet(false),
    m_metadataPropertiesHasBeenSet(false),
    m_modelMetricsHasBeenSet(false),
    m_clientToken(Aws::Utils::UUID::RandomUUID()),
    m_clientTokenHasBeenSet(true),
    m_customerMetadataPropertiesHasBeenSet(false),
    m_driftCheckBaselinesHasBeenSet(false),
    m_domainHasBeenSet(false),
    m_taskHasBeenSet(false),
    m_samplePayloadUrlHasBeenSet(false),
    m_additionalInferenceSpecificationsHasBeenSet(false)
{
}

Aws::String CreateModelPackageRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_modelPackageNameHasBeenSet)
  {
   payload.WithString("ModelPackageName", m_modelPackageName);

  }

  if(m_modelPackageGroupNameHasBeenSet)
  {
   payload.WithString("ModelPackageGroupName", m_modelPackageGroupName);

  }

  if(m_modelPackageDescriptionHasBeenSet)
  {
   payload.WithString("ModelPackageDescription", m_modelPackageDescription);

  }

  if(m_inferenceSpecificationHasBeenSet)
  {
   payload.WithObject("InferenceSpecification", m_inferenceSpecification.Jsonize());

  }

  if(m_validationSpecificationHasBeenSet)
  {
   payload.WithObject("ValidationSpecification", m_validationSpecification.Jsonize());

  }

  if(m_sourceAlgorithmSpecificationHasBeenSet)
  {
   payload.WithObject("SourceAlgorithmSpecification", m_sourceAlgorithmSpecification.Jsonize());

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

  if(m_modelApprovalStatusHasBeenSet)
  {
   payload.WithString("ModelApprovalStatus", ModelApprovalStatusMapper::GetNameForModelApprovalStatus(m_modelApprovalStatus));
  }

  if(m_metadataPropertiesHasBeenSet)
  {
   payload.WithObject("MetadataProperties", m_metadataProperties.Jsonize());

  }

  if(m_modelMetricsHasBeenSet)
  {
   payload.WithObject("ModelMetrics", m_modelMetrics.Jsonize());

  }

  if(m_clientTokenHasBeenSet)
  {
   payload.WithString("ClientToken", m_clientToken);

  }

  if(m_customerMetadataPropertiesHasBeenSet)
  {
   JsonValue customerMetadataPropertiesJsonMap;
   for(auto& customerMetadataPropertiesItem : m_customerMetadataProperties)
   {
     customerMetadataPropertiesJsonMap.WithString(customerMetadataPropertiesItem.first, customerMetadataPropertiesItem.second);
   }
   payload.WithObject("CustomerMetadataProperties", std::move(customerMetadataPropertiesJsonMap));

  }

  if(m_driftCheckBaselinesHasBeenSet)
  {
   payload.WithObject("DriftCheckBaselines", m_driftCheckBaselines.Jsonize());

  }

  if(m_domainHasBeenSet)
  {
   payload.WithString("Domain", m_domain);

  }

  if(m_taskHasBeenSet)
  {
   payload.WithString("Task", m_task);

  }

  if(m_samplePayloadUrlHasBeenSet)
  {
   payload.WithString("SamplePayloadUrl", m_samplePayloadUrl);

  }

  if(m_additionalInferenceSpecificationsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> additionalInferenceSpecificationsJsonList(m_additionalInferenceSpecifications.size());
   for(unsigned additionalInferenceSpecificationsIndex = 0; additionalInferenceSpecificationsIndex < additionalInferenceSpecificationsJsonList.GetLength(); ++additionalInferenceSpecificationsIndex)
   {
     additionalInferenceSpecificationsJsonList[additionalInferenceSpecificationsIndex].AsObject(m_additionalInferenceSpecifications[additionalInferenceSpecificationsIndex].Jsonize());
   }
   payload.WithArray("AdditionalInferenceSpecifications", std::move(additionalInferenceSpecificationsJsonList));

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection CreateModelPackageRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "SageMaker.CreateModelPackage"));
  return headers;

}




