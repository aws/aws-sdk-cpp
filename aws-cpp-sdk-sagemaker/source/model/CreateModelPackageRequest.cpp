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
    m_modelPackageDescriptionHasBeenSet(false),
    m_inferenceSpecificationHasBeenSet(false),
    m_validationSpecificationHasBeenSet(false),
    m_sourceAlgorithmSpecificationHasBeenSet(false),
    m_certifyForMarketplace(false),
    m_certifyForMarketplaceHasBeenSet(false)
{
}

Aws::String CreateModelPackageRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_modelPackageNameHasBeenSet)
  {
   payload.WithString("ModelPackageName", m_modelPackageName);

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

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection CreateModelPackageRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "SageMaker.CreateModelPackage"));
  return headers;

}




