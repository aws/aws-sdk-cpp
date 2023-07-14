/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/servicecatalog/model/RejectPortfolioShareRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::ServiceCatalog::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

RejectPortfolioShareRequest::RejectPortfolioShareRequest() : 
    m_acceptLanguageHasBeenSet(false),
    m_portfolioIdHasBeenSet(false),
    m_portfolioShareType(PortfolioShareType::NOT_SET),
    m_portfolioShareTypeHasBeenSet(false)
{
}

Aws::String RejectPortfolioShareRequest::SerializePayload() const
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

  if(m_portfolioShareTypeHasBeenSet)
  {
   payload.WithString("PortfolioShareType", PortfolioShareTypeMapper::GetNameForPortfolioShareType(m_portfolioShareType));
  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection RejectPortfolioShareRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AWS242ServiceCatalogService.RejectPortfolioShare"));
  return headers;

}




