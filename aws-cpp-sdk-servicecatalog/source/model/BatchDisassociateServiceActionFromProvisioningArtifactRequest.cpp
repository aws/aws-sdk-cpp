/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/servicecatalog/model/BatchDisassociateServiceActionFromProvisioningArtifactRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::ServiceCatalog::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

BatchDisassociateServiceActionFromProvisioningArtifactRequest::BatchDisassociateServiceActionFromProvisioningArtifactRequest() : 
    m_serviceActionAssociationsHasBeenSet(false),
    m_acceptLanguageHasBeenSet(false)
{
}

Aws::String BatchDisassociateServiceActionFromProvisioningArtifactRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_serviceActionAssociationsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> serviceActionAssociationsJsonList(m_serviceActionAssociations.size());
   for(unsigned serviceActionAssociationsIndex = 0; serviceActionAssociationsIndex < serviceActionAssociationsJsonList.GetLength(); ++serviceActionAssociationsIndex)
   {
     serviceActionAssociationsJsonList[serviceActionAssociationsIndex].AsObject(m_serviceActionAssociations[serviceActionAssociationsIndex].Jsonize());
   }
   payload.WithArray("ServiceActionAssociations", std::move(serviceActionAssociationsJsonList));

  }

  if(m_acceptLanguageHasBeenSet)
  {
   payload.WithString("AcceptLanguage", m_acceptLanguage);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection BatchDisassociateServiceActionFromProvisioningArtifactRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AWS242ServiceCatalogService.BatchDisassociateServiceActionFromProvisioningArtifact"));
  return headers;

}




