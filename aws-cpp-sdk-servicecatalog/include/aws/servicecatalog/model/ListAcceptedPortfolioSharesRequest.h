/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/servicecatalog/ServiceCatalog_EXPORTS.h>
#include <aws/servicecatalog/ServiceCatalogRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/servicecatalog/model/PortfolioShareType.h>
#include <utility>

namespace Aws
{
namespace ServiceCatalog
{
namespace Model
{

  /**
   */
  class ListAcceptedPortfolioSharesRequest : public ServiceCatalogRequest
  {
  public:
    AWS_SERVICECATALOG_API ListAcceptedPortfolioSharesRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListAcceptedPortfolioShares"; }

    AWS_SERVICECATALOG_API Aws::String SerializePayload() const override;

    AWS_SERVICECATALOG_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The language code.</p> <ul> <li> <p> <code>en</code> - English (default)</p>
     * </li> <li> <p> <code>jp</code> - Japanese</p> </li> <li> <p> <code>zh</code> -
     * Chinese</p> </li> </ul>
     */
    inline const Aws::String& GetAcceptLanguage() const{ return m_acceptLanguage; }

    /**
     * <p>The language code.</p> <ul> <li> <p> <code>en</code> - English (default)</p>
     * </li> <li> <p> <code>jp</code> - Japanese</p> </li> <li> <p> <code>zh</code> -
     * Chinese</p> </li> </ul>
     */
    inline bool AcceptLanguageHasBeenSet() const { return m_acceptLanguageHasBeenSet; }

    /**
     * <p>The language code.</p> <ul> <li> <p> <code>en</code> - English (default)</p>
     * </li> <li> <p> <code>jp</code> - Japanese</p> </li> <li> <p> <code>zh</code> -
     * Chinese</p> </li> </ul>
     */
    inline void SetAcceptLanguage(const Aws::String& value) { m_acceptLanguageHasBeenSet = true; m_acceptLanguage = value; }

    /**
     * <p>The language code.</p> <ul> <li> <p> <code>en</code> - English (default)</p>
     * </li> <li> <p> <code>jp</code> - Japanese</p> </li> <li> <p> <code>zh</code> -
     * Chinese</p> </li> </ul>
     */
    inline void SetAcceptLanguage(Aws::String&& value) { m_acceptLanguageHasBeenSet = true; m_acceptLanguage = std::move(value); }

    /**
     * <p>The language code.</p> <ul> <li> <p> <code>en</code> - English (default)</p>
     * </li> <li> <p> <code>jp</code> - Japanese</p> </li> <li> <p> <code>zh</code> -
     * Chinese</p> </li> </ul>
     */
    inline void SetAcceptLanguage(const char* value) { m_acceptLanguageHasBeenSet = true; m_acceptLanguage.assign(value); }

    /**
     * <p>The language code.</p> <ul> <li> <p> <code>en</code> - English (default)</p>
     * </li> <li> <p> <code>jp</code> - Japanese</p> </li> <li> <p> <code>zh</code> -
     * Chinese</p> </li> </ul>
     */
    inline ListAcceptedPortfolioSharesRequest& WithAcceptLanguage(const Aws::String& value) { SetAcceptLanguage(value); return *this;}

    /**
     * <p>The language code.</p> <ul> <li> <p> <code>en</code> - English (default)</p>
     * </li> <li> <p> <code>jp</code> - Japanese</p> </li> <li> <p> <code>zh</code> -
     * Chinese</p> </li> </ul>
     */
    inline ListAcceptedPortfolioSharesRequest& WithAcceptLanguage(Aws::String&& value) { SetAcceptLanguage(std::move(value)); return *this;}

    /**
     * <p>The language code.</p> <ul> <li> <p> <code>en</code> - English (default)</p>
     * </li> <li> <p> <code>jp</code> - Japanese</p> </li> <li> <p> <code>zh</code> -
     * Chinese</p> </li> </ul>
     */
    inline ListAcceptedPortfolioSharesRequest& WithAcceptLanguage(const char* value) { SetAcceptLanguage(value); return *this;}


    /**
     * <p>The page token for the next set of results. To retrieve the first set of
     * results, use null.</p>
     */
    inline const Aws::String& GetPageToken() const{ return m_pageToken; }

    /**
     * <p>The page token for the next set of results. To retrieve the first set of
     * results, use null.</p>
     */
    inline bool PageTokenHasBeenSet() const { return m_pageTokenHasBeenSet; }

    /**
     * <p>The page token for the next set of results. To retrieve the first set of
     * results, use null.</p>
     */
    inline void SetPageToken(const Aws::String& value) { m_pageTokenHasBeenSet = true; m_pageToken = value; }

    /**
     * <p>The page token for the next set of results. To retrieve the first set of
     * results, use null.</p>
     */
    inline void SetPageToken(Aws::String&& value) { m_pageTokenHasBeenSet = true; m_pageToken = std::move(value); }

    /**
     * <p>The page token for the next set of results. To retrieve the first set of
     * results, use null.</p>
     */
    inline void SetPageToken(const char* value) { m_pageTokenHasBeenSet = true; m_pageToken.assign(value); }

    /**
     * <p>The page token for the next set of results. To retrieve the first set of
     * results, use null.</p>
     */
    inline ListAcceptedPortfolioSharesRequest& WithPageToken(const Aws::String& value) { SetPageToken(value); return *this;}

    /**
     * <p>The page token for the next set of results. To retrieve the first set of
     * results, use null.</p>
     */
    inline ListAcceptedPortfolioSharesRequest& WithPageToken(Aws::String&& value) { SetPageToken(std::move(value)); return *this;}

    /**
     * <p>The page token for the next set of results. To retrieve the first set of
     * results, use null.</p>
     */
    inline ListAcceptedPortfolioSharesRequest& WithPageToken(const char* value) { SetPageToken(value); return *this;}


    /**
     * <p>The maximum number of items to return with this call.</p>
     */
    inline int GetPageSize() const{ return m_pageSize; }

    /**
     * <p>The maximum number of items to return with this call.</p>
     */
    inline bool PageSizeHasBeenSet() const { return m_pageSizeHasBeenSet; }

    /**
     * <p>The maximum number of items to return with this call.</p>
     */
    inline void SetPageSize(int value) { m_pageSizeHasBeenSet = true; m_pageSize = value; }

    /**
     * <p>The maximum number of items to return with this call.</p>
     */
    inline ListAcceptedPortfolioSharesRequest& WithPageSize(int value) { SetPageSize(value); return *this;}


    /**
     * <p>The type of shared portfolios to list. The default is to list imported
     * portfolios.</p> <ul> <li> <p> <code>AWS_ORGANIZATIONS</code> - List portfolios
     * accepted and shared via organizational sharing by the management account or
     * delegated administrator of your organization.</p> </li> <li> <p>
     * <code>AWS_SERVICECATALOG</code> - Deprecated type.</p> </li> <li> <p>
     * <code>IMPORTED</code> - List imported portfolios that have been accepted and
     * shared through account-to-account sharing.</p> </li> </ul>
     */
    inline const PortfolioShareType& GetPortfolioShareType() const{ return m_portfolioShareType; }

    /**
     * <p>The type of shared portfolios to list. The default is to list imported
     * portfolios.</p> <ul> <li> <p> <code>AWS_ORGANIZATIONS</code> - List portfolios
     * accepted and shared via organizational sharing by the management account or
     * delegated administrator of your organization.</p> </li> <li> <p>
     * <code>AWS_SERVICECATALOG</code> - Deprecated type.</p> </li> <li> <p>
     * <code>IMPORTED</code> - List imported portfolios that have been accepted and
     * shared through account-to-account sharing.</p> </li> </ul>
     */
    inline bool PortfolioShareTypeHasBeenSet() const { return m_portfolioShareTypeHasBeenSet; }

    /**
     * <p>The type of shared portfolios to list. The default is to list imported
     * portfolios.</p> <ul> <li> <p> <code>AWS_ORGANIZATIONS</code> - List portfolios
     * accepted and shared via organizational sharing by the management account or
     * delegated administrator of your organization.</p> </li> <li> <p>
     * <code>AWS_SERVICECATALOG</code> - Deprecated type.</p> </li> <li> <p>
     * <code>IMPORTED</code> - List imported portfolios that have been accepted and
     * shared through account-to-account sharing.</p> </li> </ul>
     */
    inline void SetPortfolioShareType(const PortfolioShareType& value) { m_portfolioShareTypeHasBeenSet = true; m_portfolioShareType = value; }

    /**
     * <p>The type of shared portfolios to list. The default is to list imported
     * portfolios.</p> <ul> <li> <p> <code>AWS_ORGANIZATIONS</code> - List portfolios
     * accepted and shared via organizational sharing by the management account or
     * delegated administrator of your organization.</p> </li> <li> <p>
     * <code>AWS_SERVICECATALOG</code> - Deprecated type.</p> </li> <li> <p>
     * <code>IMPORTED</code> - List imported portfolios that have been accepted and
     * shared through account-to-account sharing.</p> </li> </ul>
     */
    inline void SetPortfolioShareType(PortfolioShareType&& value) { m_portfolioShareTypeHasBeenSet = true; m_portfolioShareType = std::move(value); }

    /**
     * <p>The type of shared portfolios to list. The default is to list imported
     * portfolios.</p> <ul> <li> <p> <code>AWS_ORGANIZATIONS</code> - List portfolios
     * accepted and shared via organizational sharing by the management account or
     * delegated administrator of your organization.</p> </li> <li> <p>
     * <code>AWS_SERVICECATALOG</code> - Deprecated type.</p> </li> <li> <p>
     * <code>IMPORTED</code> - List imported portfolios that have been accepted and
     * shared through account-to-account sharing.</p> </li> </ul>
     */
    inline ListAcceptedPortfolioSharesRequest& WithPortfolioShareType(const PortfolioShareType& value) { SetPortfolioShareType(value); return *this;}

    /**
     * <p>The type of shared portfolios to list. The default is to list imported
     * portfolios.</p> <ul> <li> <p> <code>AWS_ORGANIZATIONS</code> - List portfolios
     * accepted and shared via organizational sharing by the management account or
     * delegated administrator of your organization.</p> </li> <li> <p>
     * <code>AWS_SERVICECATALOG</code> - Deprecated type.</p> </li> <li> <p>
     * <code>IMPORTED</code> - List imported portfolios that have been accepted and
     * shared through account-to-account sharing.</p> </li> </ul>
     */
    inline ListAcceptedPortfolioSharesRequest& WithPortfolioShareType(PortfolioShareType&& value) { SetPortfolioShareType(std::move(value)); return *this;}

  private:

    Aws::String m_acceptLanguage;
    bool m_acceptLanguageHasBeenSet = false;

    Aws::String m_pageToken;
    bool m_pageTokenHasBeenSet = false;

    int m_pageSize;
    bool m_pageSizeHasBeenSet = false;

    PortfolioShareType m_portfolioShareType;
    bool m_portfolioShareTypeHasBeenSet = false;
  };

} // namespace Model
} // namespace ServiceCatalog
} // namespace Aws
