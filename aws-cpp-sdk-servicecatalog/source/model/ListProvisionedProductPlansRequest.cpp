/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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

#include <aws/servicecatalog/model/ListProvisionedProductPlansRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::ServiceCatalog::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

ListProvisionedProductPlansRequest::ListProvisionedProductPlansRequest() : 
    m_acceptLanguageHasBeenSet(false),
    m_provisionProductIdHasBeenSet(false),
    m_pageSize(0),
    m_pageSizeHasBeenSet(false),
    m_pageTokenHasBeenSet(false),
    m_accessLevelFilterHasBeenSet(false)
{
}

Aws::String ListProvisionedProductPlansRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_acceptLanguageHasBeenSet)
  {
   payload.WithString("AcceptLanguage", m_acceptLanguage);

  }

  if(m_provisionProductIdHasBeenSet)
  {
   payload.WithString("ProvisionProductId", m_provisionProductId);

  }

  if(m_pageSizeHasBeenSet)
  {
   payload.WithInteger("PageSize", m_pageSize);

  }

  if(m_pageTokenHasBeenSet)
  {
   payload.WithString("PageToken", m_pageToken);

  }

  if(m_accessLevelFilterHasBeenSet)
  {
   payload.WithObject("AccessLevelFilter", m_accessLevelFilter.Jsonize());

  }

  return payload.WriteReadable();
}

Aws::Http::HeaderValueCollection ListProvisionedProductPlansRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AWS242ServiceCatalogService.ListProvisionedProductPlans"));
  return headers;

}




