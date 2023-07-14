/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/servicecatalog/model/DescribeProvisioningParametersRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::ServiceCatalog::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DescribeProvisioningParametersRequest::DescribeProvisioningParametersRequest() : 
    m_acceptLanguageHasBeenSet(false),
    m_productIdHasBeenSet(false),
    m_productNameHasBeenSet(false),
    m_provisioningArtifactIdHasBeenSet(false),
    m_provisioningArtifactNameHasBeenSet(false),
    m_pathIdHasBeenSet(false),
    m_pathNameHasBeenSet(false)
{
}

Aws::String DescribeProvisioningParametersRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_acceptLanguageHasBeenSet)
  {
   payload.WithString("AcceptLanguage", m_acceptLanguage);

  }

  if(m_productIdHasBeenSet)
  {
   payload.WithString("ProductId", m_productId);

  }

  if(m_productNameHasBeenSet)
  {
   payload.WithString("ProductName", m_productName);

  }

  if(m_provisioningArtifactIdHasBeenSet)
  {
   payload.WithString("ProvisioningArtifactId", m_provisioningArtifactId);

  }

  if(m_provisioningArtifactNameHasBeenSet)
  {
   payload.WithString("ProvisioningArtifactName", m_provisioningArtifactName);

  }

  if(m_pathIdHasBeenSet)
  {
   payload.WithString("PathId", m_pathId);

  }

  if(m_pathNameHasBeenSet)
  {
   payload.WithString("PathName", m_pathName);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection DescribeProvisioningParametersRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AWS242ServiceCatalogService.DescribeProvisioningParameters"));
  return headers;

}




