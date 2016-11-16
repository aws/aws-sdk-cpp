/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/
#include <aws/servicecatalog/model/TerminateProvisionedProductRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::ServiceCatalog::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

TerminateProvisionedProductRequest::TerminateProvisionedProductRequest() : 
    m_provisionedProductNameHasBeenSet(false),
    m_provisionedProductIdHasBeenSet(false),
    m_terminateToken(Aws::Utils::UUID::RandomUUID()),
    m_terminateTokenHasBeenSet(true),
    m_ignoreErrors(false),
    m_ignoreErrorsHasBeenSet(false),
    m_acceptLanguageHasBeenSet(false)
{
}

Aws::String TerminateProvisionedProductRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_provisionedProductNameHasBeenSet)
  {
   payload.WithString("ProvisionedProductName", m_provisionedProductName);

  }

  if(m_provisionedProductIdHasBeenSet)
  {
   payload.WithString("ProvisionedProductId", m_provisionedProductId);

  }

  if(m_terminateTokenHasBeenSet)
  {
   payload.WithString("TerminateToken", m_terminateToken);

  }

  if(m_ignoreErrorsHasBeenSet)
  {
   payload.WithBool("IgnoreErrors", m_ignoreErrors);

  }

  if(m_acceptLanguageHasBeenSet)
  {
   payload.WithString("AcceptLanguage", m_acceptLanguage);

  }

  return payload.WriteReadable();
}

Aws::Http::HeaderValueCollection TerminateProvisionedProductRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AWS242ServiceCatalogService.TerminateProvisionedProduct"));
  return headers;

}



