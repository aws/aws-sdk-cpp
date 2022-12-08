/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/servicecatalog/ServiceCatalog_EXPORTS.h>
#include <aws/servicecatalog/ServiceCatalogRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/servicecatalog/model/DescribePortfolioShareType.h>
#include <utility>

namespace Aws
{
namespace ServiceCatalog
{
namespace Model
{

  /**
   */
  class DescribePortfolioSharesRequest : public ServiceCatalogRequest
  {
  public:
    AWS_SERVICECATALOG_API DescribePortfolioSharesRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribePortfolioShares"; }

    AWS_SERVICECATALOG_API Aws::String SerializePayload() const override;

    AWS_SERVICECATALOG_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The unique identifier of the portfolio for which shares will be
     * retrieved.</p>
     */
    inline const Aws::String& GetPortfolioId() const{ return m_portfolioId; }

    /**
     * <p>The unique identifier of the portfolio for which shares will be
     * retrieved.</p>
     */
    inline bool PortfolioIdHasBeenSet() const { return m_portfolioIdHasBeenSet; }

    /**
     * <p>The unique identifier of the portfolio for which shares will be
     * retrieved.</p>
     */
    inline void SetPortfolioId(const Aws::String& value) { m_portfolioIdHasBeenSet = true; m_portfolioId = value; }

    /**
     * <p>The unique identifier of the portfolio for which shares will be
     * retrieved.</p>
     */
    inline void SetPortfolioId(Aws::String&& value) { m_portfolioIdHasBeenSet = true; m_portfolioId = std::move(value); }

    /**
     * <p>The unique identifier of the portfolio for which shares will be
     * retrieved.</p>
     */
    inline void SetPortfolioId(const char* value) { m_portfolioIdHasBeenSet = true; m_portfolioId.assign(value); }

    /**
     * <p>The unique identifier of the portfolio for which shares will be
     * retrieved.</p>
     */
    inline DescribePortfolioSharesRequest& WithPortfolioId(const Aws::String& value) { SetPortfolioId(value); return *this;}

    /**
     * <p>The unique identifier of the portfolio for which shares will be
     * retrieved.</p>
     */
    inline DescribePortfolioSharesRequest& WithPortfolioId(Aws::String&& value) { SetPortfolioId(std::move(value)); return *this;}

    /**
     * <p>The unique identifier of the portfolio for which shares will be
     * retrieved.</p>
     */
    inline DescribePortfolioSharesRequest& WithPortfolioId(const char* value) { SetPortfolioId(value); return *this;}


    /**
     * <p>The type of portfolio share to summarize. This field acts as a filter on the
     * type of portfolio share, which can be one of the following:</p> <p>1.
     * <code>ACCOUNT</code> - Represents an external account to account share.</p>
     * <p>2. <code>ORGANIZATION</code> - Represents a share to an organization. This
     * share is available to every account in the organization.</p> <p>3.
     * <code>ORGANIZATIONAL_UNIT</code> - Represents a share to an organizational
     * unit.</p> <p>4. <code>ORGANIZATION_MEMBER_ACCOUNT</code> - Represents a share to
     * an account in the organization.</p>
     */
    inline const DescribePortfolioShareType& GetType() const{ return m_type; }

    /**
     * <p>The type of portfolio share to summarize. This field acts as a filter on the
     * type of portfolio share, which can be one of the following:</p> <p>1.
     * <code>ACCOUNT</code> - Represents an external account to account share.</p>
     * <p>2. <code>ORGANIZATION</code> - Represents a share to an organization. This
     * share is available to every account in the organization.</p> <p>3.
     * <code>ORGANIZATIONAL_UNIT</code> - Represents a share to an organizational
     * unit.</p> <p>4. <code>ORGANIZATION_MEMBER_ACCOUNT</code> - Represents a share to
     * an account in the organization.</p>
     */
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }

    /**
     * <p>The type of portfolio share to summarize. This field acts as a filter on the
     * type of portfolio share, which can be one of the following:</p> <p>1.
     * <code>ACCOUNT</code> - Represents an external account to account share.</p>
     * <p>2. <code>ORGANIZATION</code> - Represents a share to an organization. This
     * share is available to every account in the organization.</p> <p>3.
     * <code>ORGANIZATIONAL_UNIT</code> - Represents a share to an organizational
     * unit.</p> <p>4. <code>ORGANIZATION_MEMBER_ACCOUNT</code> - Represents a share to
     * an account in the organization.</p>
     */
    inline void SetType(const DescribePortfolioShareType& value) { m_typeHasBeenSet = true; m_type = value; }

    /**
     * <p>The type of portfolio share to summarize. This field acts as a filter on the
     * type of portfolio share, which can be one of the following:</p> <p>1.
     * <code>ACCOUNT</code> - Represents an external account to account share.</p>
     * <p>2. <code>ORGANIZATION</code> - Represents a share to an organization. This
     * share is available to every account in the organization.</p> <p>3.
     * <code>ORGANIZATIONAL_UNIT</code> - Represents a share to an organizational
     * unit.</p> <p>4. <code>ORGANIZATION_MEMBER_ACCOUNT</code> - Represents a share to
     * an account in the organization.</p>
     */
    inline void SetType(DescribePortfolioShareType&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }

    /**
     * <p>The type of portfolio share to summarize. This field acts as a filter on the
     * type of portfolio share, which can be one of the following:</p> <p>1.
     * <code>ACCOUNT</code> - Represents an external account to account share.</p>
     * <p>2. <code>ORGANIZATION</code> - Represents a share to an organization. This
     * share is available to every account in the organization.</p> <p>3.
     * <code>ORGANIZATIONAL_UNIT</code> - Represents a share to an organizational
     * unit.</p> <p>4. <code>ORGANIZATION_MEMBER_ACCOUNT</code> - Represents a share to
     * an account in the organization.</p>
     */
    inline DescribePortfolioSharesRequest& WithType(const DescribePortfolioShareType& value) { SetType(value); return *this;}

    /**
     * <p>The type of portfolio share to summarize. This field acts as a filter on the
     * type of portfolio share, which can be one of the following:</p> <p>1.
     * <code>ACCOUNT</code> - Represents an external account to account share.</p>
     * <p>2. <code>ORGANIZATION</code> - Represents a share to an organization. This
     * share is available to every account in the organization.</p> <p>3.
     * <code>ORGANIZATIONAL_UNIT</code> - Represents a share to an organizational
     * unit.</p> <p>4. <code>ORGANIZATION_MEMBER_ACCOUNT</code> - Represents a share to
     * an account in the organization.</p>
     */
    inline DescribePortfolioSharesRequest& WithType(DescribePortfolioShareType&& value) { SetType(std::move(value)); return *this;}


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
    inline DescribePortfolioSharesRequest& WithPageToken(const Aws::String& value) { SetPageToken(value); return *this;}

    /**
     * <p>The page token for the next set of results. To retrieve the first set of
     * results, use null.</p>
     */
    inline DescribePortfolioSharesRequest& WithPageToken(Aws::String&& value) { SetPageToken(std::move(value)); return *this;}

    /**
     * <p>The page token for the next set of results. To retrieve the first set of
     * results, use null.</p>
     */
    inline DescribePortfolioSharesRequest& WithPageToken(const char* value) { SetPageToken(value); return *this;}


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
    inline DescribePortfolioSharesRequest& WithPageSize(int value) { SetPageSize(value); return *this;}

  private:

    Aws::String m_portfolioId;
    bool m_portfolioIdHasBeenSet = false;

    DescribePortfolioShareType m_type;
    bool m_typeHasBeenSet = false;

    Aws::String m_pageToken;
    bool m_pageTokenHasBeenSet = false;

    int m_pageSize;
    bool m_pageSizeHasBeenSet = false;
  };

} // namespace Model
} // namespace ServiceCatalog
} // namespace Aws
