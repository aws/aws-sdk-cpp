﻿/*
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
#include <aws/servicecatalog/model/ListPrincipalsForPortfolioRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::ServiceCatalog::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

ListPrincipalsForPortfolioRequest::ListPrincipalsForPortfolioRequest() : 
    m_acceptLanguageHasBeenSet(false),
    m_portfolioIdHasBeenSet(false),
    m_pageSize(0),
    m_pageSizeHasBeenSet(false),
    m_pageTokenHasBeenSet(false)
{
}

Aws::String ListPrincipalsForPortfolioRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_acceptLanguageHasBeenSet)
  {
   payload.WithString("AcceptLanguage", m_acceptLanguage);

  }

  if(m_portfolioIdHasBeenSet)
  {
   payload.WithString("PortfolioId", m_portfolioId);

  }

  if(m_pageSizeHasBeenSet)
  {
   payload.WithInteger("PageSize", m_pageSize);

  }

  if(m_pageTokenHasBeenSet)
  {
   payload.WithString("PageToken", m_pageToken);

  }

  return payload.WriteReadable();
}

Aws::Http::HeaderValueCollection ListPrincipalsForPortfolioRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AWS242ServiceCatalogService.ListPrincipalsForPortfolio"));
  return headers;

}



