/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/servicecatalog/model/DescribePortfolioSharesRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::ServiceCatalog::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DescribePortfolioSharesRequest::DescribePortfolioSharesRequest() : 
    m_portfolioIdHasBeenSet(false),
    m_type(DescribePortfolioShareType::NOT_SET),
    m_typeHasBeenSet(false),
    m_pageTokenHasBeenSet(false),
    m_pageSize(0),
    m_pageSizeHasBeenSet(false)
{
}

Aws::String DescribePortfolioSharesRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_portfolioIdHasBeenSet)
  {
   payload.WithString("PortfolioId", m_portfolioId);

  }

  if(m_typeHasBeenSet)
  {
   payload.WithString("Type", DescribePortfolioShareTypeMapper::GetNameForDescribePortfolioShareType(m_type));
  }

  if(m_pageTokenHasBeenSet)
  {
   payload.WithString("PageToken", m_pageToken);

  }

  if(m_pageSizeHasBeenSet)
  {
   payload.WithInteger("PageSize", m_pageSize);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection DescribePortfolioSharesRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AWS242ServiceCatalogService.DescribePortfolioShares"));
  return headers;

}




