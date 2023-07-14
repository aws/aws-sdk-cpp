/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/servicecatalog/model/AssociateProductWithPortfolioRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::ServiceCatalog::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

AssociateProductWithPortfolioRequest::AssociateProductWithPortfolioRequest() : 
    m_acceptLanguageHasBeenSet(false),
    m_productIdHasBeenSet(false),
    m_portfolioIdHasBeenSet(false),
    m_sourcePortfolioIdHasBeenSet(false)
{
}

Aws::String AssociateProductWithPortfolioRequest::SerializePayload() const
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

  if(m_portfolioIdHasBeenSet)
  {
   payload.WithString("PortfolioId", m_portfolioId);

  }

  if(m_sourcePortfolioIdHasBeenSet)
  {
   payload.WithString("SourcePortfolioId", m_sourcePortfolioId);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection AssociateProductWithPortfolioRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AWS242ServiceCatalogService.AssociateProductWithPortfolio"));
  return headers;

}




