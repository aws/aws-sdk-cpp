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

#pragma once
#include <aws/servicecatalog/ServiceCatalog_EXPORTS.h>
#include <aws/servicecatalog/ServiceCatalogRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/servicecatalog/model/OrganizationNodeType.h>
#include <utility>

namespace Aws
{
namespace ServiceCatalog
{
namespace Model
{

  /**
   */
  class AWS_SERVICECATALOG_API ListOrganizationPortfolioAccessRequest : public ServiceCatalogRequest
  {
  public:
    ListOrganizationPortfolioAccessRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListOrganizationPortfolioAccess"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


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
    inline ListOrganizationPortfolioAccessRequest& WithAcceptLanguage(const Aws::String& value) { SetAcceptLanguage(value); return *this;}

    /**
     * <p>The language code.</p> <ul> <li> <p> <code>en</code> - English (default)</p>
     * </li> <li> <p> <code>jp</code> - Japanese</p> </li> <li> <p> <code>zh</code> -
     * Chinese</p> </li> </ul>
     */
    inline ListOrganizationPortfolioAccessRequest& WithAcceptLanguage(Aws::String&& value) { SetAcceptLanguage(std::move(value)); return *this;}

    /**
     * <p>The language code.</p> <ul> <li> <p> <code>en</code> - English (default)</p>
     * </li> <li> <p> <code>jp</code> - Japanese</p> </li> <li> <p> <code>zh</code> -
     * Chinese</p> </li> </ul>
     */
    inline ListOrganizationPortfolioAccessRequest& WithAcceptLanguage(const char* value) { SetAcceptLanguage(value); return *this;}


    /**
     * <p>The portfolio identifier. For example, <code>port-2abcdext3y5fk</code>.</p>
     */
    inline const Aws::String& GetPortfolioId() const{ return m_portfolioId; }

    /**
     * <p>The portfolio identifier. For example, <code>port-2abcdext3y5fk</code>.</p>
     */
    inline bool PortfolioIdHasBeenSet() const { return m_portfolioIdHasBeenSet; }

    /**
     * <p>The portfolio identifier. For example, <code>port-2abcdext3y5fk</code>.</p>
     */
    inline void SetPortfolioId(const Aws::String& value) { m_portfolioIdHasBeenSet = true; m_portfolioId = value; }

    /**
     * <p>The portfolio identifier. For example, <code>port-2abcdext3y5fk</code>.</p>
     */
    inline void SetPortfolioId(Aws::String&& value) { m_portfolioIdHasBeenSet = true; m_portfolioId = std::move(value); }

    /**
     * <p>The portfolio identifier. For example, <code>port-2abcdext3y5fk</code>.</p>
     */
    inline void SetPortfolioId(const char* value) { m_portfolioIdHasBeenSet = true; m_portfolioId.assign(value); }

    /**
     * <p>The portfolio identifier. For example, <code>port-2abcdext3y5fk</code>.</p>
     */
    inline ListOrganizationPortfolioAccessRequest& WithPortfolioId(const Aws::String& value) { SetPortfolioId(value); return *this;}

    /**
     * <p>The portfolio identifier. For example, <code>port-2abcdext3y5fk</code>.</p>
     */
    inline ListOrganizationPortfolioAccessRequest& WithPortfolioId(Aws::String&& value) { SetPortfolioId(std::move(value)); return *this;}

    /**
     * <p>The portfolio identifier. For example, <code>port-2abcdext3y5fk</code>.</p>
     */
    inline ListOrganizationPortfolioAccessRequest& WithPortfolioId(const char* value) { SetPortfolioId(value); return *this;}


    /**
     * <p>The organization node type that will be returned in the output.</p> <ul> <li>
     * <p> <code>ORGANIZATION</code> - Organization that has access to the portfolio.
     * </p> </li> <li> <p> <code>ORGANIZATIONAL_UNIT</code> - Organizational unit that
     * has access to the portfolio within your organization.</p> </li> <li> <p>
     * <code>ACCOUNT</code> - Account that has access to the portfolio within your
     * organization.</p> </li> </ul>
     */
    inline const OrganizationNodeType& GetOrganizationNodeType() const{ return m_organizationNodeType; }

    /**
     * <p>The organization node type that will be returned in the output.</p> <ul> <li>
     * <p> <code>ORGANIZATION</code> - Organization that has access to the portfolio.
     * </p> </li> <li> <p> <code>ORGANIZATIONAL_UNIT</code> - Organizational unit that
     * has access to the portfolio within your organization.</p> </li> <li> <p>
     * <code>ACCOUNT</code> - Account that has access to the portfolio within your
     * organization.</p> </li> </ul>
     */
    inline bool OrganizationNodeTypeHasBeenSet() const { return m_organizationNodeTypeHasBeenSet; }

    /**
     * <p>The organization node type that will be returned in the output.</p> <ul> <li>
     * <p> <code>ORGANIZATION</code> - Organization that has access to the portfolio.
     * </p> </li> <li> <p> <code>ORGANIZATIONAL_UNIT</code> - Organizational unit that
     * has access to the portfolio within your organization.</p> </li> <li> <p>
     * <code>ACCOUNT</code> - Account that has access to the portfolio within your
     * organization.</p> </li> </ul>
     */
    inline void SetOrganizationNodeType(const OrganizationNodeType& value) { m_organizationNodeTypeHasBeenSet = true; m_organizationNodeType = value; }

    /**
     * <p>The organization node type that will be returned in the output.</p> <ul> <li>
     * <p> <code>ORGANIZATION</code> - Organization that has access to the portfolio.
     * </p> </li> <li> <p> <code>ORGANIZATIONAL_UNIT</code> - Organizational unit that
     * has access to the portfolio within your organization.</p> </li> <li> <p>
     * <code>ACCOUNT</code> - Account that has access to the portfolio within your
     * organization.</p> </li> </ul>
     */
    inline void SetOrganizationNodeType(OrganizationNodeType&& value) { m_organizationNodeTypeHasBeenSet = true; m_organizationNodeType = std::move(value); }

    /**
     * <p>The organization node type that will be returned in the output.</p> <ul> <li>
     * <p> <code>ORGANIZATION</code> - Organization that has access to the portfolio.
     * </p> </li> <li> <p> <code>ORGANIZATIONAL_UNIT</code> - Organizational unit that
     * has access to the portfolio within your organization.</p> </li> <li> <p>
     * <code>ACCOUNT</code> - Account that has access to the portfolio within your
     * organization.</p> </li> </ul>
     */
    inline ListOrganizationPortfolioAccessRequest& WithOrganizationNodeType(const OrganizationNodeType& value) { SetOrganizationNodeType(value); return *this;}

    /**
     * <p>The organization node type that will be returned in the output.</p> <ul> <li>
     * <p> <code>ORGANIZATION</code> - Organization that has access to the portfolio.
     * </p> </li> <li> <p> <code>ORGANIZATIONAL_UNIT</code> - Organizational unit that
     * has access to the portfolio within your organization.</p> </li> <li> <p>
     * <code>ACCOUNT</code> - Account that has access to the portfolio within your
     * organization.</p> </li> </ul>
     */
    inline ListOrganizationPortfolioAccessRequest& WithOrganizationNodeType(OrganizationNodeType&& value) { SetOrganizationNodeType(std::move(value)); return *this;}


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
    inline ListOrganizationPortfolioAccessRequest& WithPageToken(const Aws::String& value) { SetPageToken(value); return *this;}

    /**
     * <p>The page token for the next set of results. To retrieve the first set of
     * results, use null.</p>
     */
    inline ListOrganizationPortfolioAccessRequest& WithPageToken(Aws::String&& value) { SetPageToken(std::move(value)); return *this;}

    /**
     * <p>The page token for the next set of results. To retrieve the first set of
     * results, use null.</p>
     */
    inline ListOrganizationPortfolioAccessRequest& WithPageToken(const char* value) { SetPageToken(value); return *this;}


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
    inline ListOrganizationPortfolioAccessRequest& WithPageSize(int value) { SetPageSize(value); return *this;}

  private:

    Aws::String m_acceptLanguage;
    bool m_acceptLanguageHasBeenSet;

    Aws::String m_portfolioId;
    bool m_portfolioIdHasBeenSet;

    OrganizationNodeType m_organizationNodeType;
    bool m_organizationNodeTypeHasBeenSet;

    Aws::String m_pageToken;
    bool m_pageTokenHasBeenSet;

    int m_pageSize;
    bool m_pageSizeHasBeenSet;
  };

} // namespace Model
} // namespace ServiceCatalog
} // namespace Aws
