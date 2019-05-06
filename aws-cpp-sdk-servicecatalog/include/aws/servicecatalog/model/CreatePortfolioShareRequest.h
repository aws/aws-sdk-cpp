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
#include <aws/servicecatalog/model/OrganizationNode.h>
#include <utility>

namespace Aws
{
namespace ServiceCatalog
{
namespace Model
{

  /**
   */
  class AWS_SERVICECATALOG_API CreatePortfolioShareRequest : public ServiceCatalogRequest
  {
  public:
    CreatePortfolioShareRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreatePortfolioShare"; }

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
    inline CreatePortfolioShareRequest& WithAcceptLanguage(const Aws::String& value) { SetAcceptLanguage(value); return *this;}

    /**
     * <p>The language code.</p> <ul> <li> <p> <code>en</code> - English (default)</p>
     * </li> <li> <p> <code>jp</code> - Japanese</p> </li> <li> <p> <code>zh</code> -
     * Chinese</p> </li> </ul>
     */
    inline CreatePortfolioShareRequest& WithAcceptLanguage(Aws::String&& value) { SetAcceptLanguage(std::move(value)); return *this;}

    /**
     * <p>The language code.</p> <ul> <li> <p> <code>en</code> - English (default)</p>
     * </li> <li> <p> <code>jp</code> - Japanese</p> </li> <li> <p> <code>zh</code> -
     * Chinese</p> </li> </ul>
     */
    inline CreatePortfolioShareRequest& WithAcceptLanguage(const char* value) { SetAcceptLanguage(value); return *this;}


    /**
     * <p>The portfolio identifier.</p>
     */
    inline const Aws::String& GetPortfolioId() const{ return m_portfolioId; }

    /**
     * <p>The portfolio identifier.</p>
     */
    inline bool PortfolioIdHasBeenSet() const { return m_portfolioIdHasBeenSet; }

    /**
     * <p>The portfolio identifier.</p>
     */
    inline void SetPortfolioId(const Aws::String& value) { m_portfolioIdHasBeenSet = true; m_portfolioId = value; }

    /**
     * <p>The portfolio identifier.</p>
     */
    inline void SetPortfolioId(Aws::String&& value) { m_portfolioIdHasBeenSet = true; m_portfolioId = std::move(value); }

    /**
     * <p>The portfolio identifier.</p>
     */
    inline void SetPortfolioId(const char* value) { m_portfolioIdHasBeenSet = true; m_portfolioId.assign(value); }

    /**
     * <p>The portfolio identifier.</p>
     */
    inline CreatePortfolioShareRequest& WithPortfolioId(const Aws::String& value) { SetPortfolioId(value); return *this;}

    /**
     * <p>The portfolio identifier.</p>
     */
    inline CreatePortfolioShareRequest& WithPortfolioId(Aws::String&& value) { SetPortfolioId(std::move(value)); return *this;}

    /**
     * <p>The portfolio identifier.</p>
     */
    inline CreatePortfolioShareRequest& WithPortfolioId(const char* value) { SetPortfolioId(value); return *this;}


    /**
     * <p>The AWS account ID. For example, <code>123456789012</code>.</p>
     */
    inline const Aws::String& GetAccountId() const{ return m_accountId; }

    /**
     * <p>The AWS account ID. For example, <code>123456789012</code>.</p>
     */
    inline bool AccountIdHasBeenSet() const { return m_accountIdHasBeenSet; }

    /**
     * <p>The AWS account ID. For example, <code>123456789012</code>.</p>
     */
    inline void SetAccountId(const Aws::String& value) { m_accountIdHasBeenSet = true; m_accountId = value; }

    /**
     * <p>The AWS account ID. For example, <code>123456789012</code>.</p>
     */
    inline void SetAccountId(Aws::String&& value) { m_accountIdHasBeenSet = true; m_accountId = std::move(value); }

    /**
     * <p>The AWS account ID. For example, <code>123456789012</code>.</p>
     */
    inline void SetAccountId(const char* value) { m_accountIdHasBeenSet = true; m_accountId.assign(value); }

    /**
     * <p>The AWS account ID. For example, <code>123456789012</code>.</p>
     */
    inline CreatePortfolioShareRequest& WithAccountId(const Aws::String& value) { SetAccountId(value); return *this;}

    /**
     * <p>The AWS account ID. For example, <code>123456789012</code>.</p>
     */
    inline CreatePortfolioShareRequest& WithAccountId(Aws::String&& value) { SetAccountId(std::move(value)); return *this;}

    /**
     * <p>The AWS account ID. For example, <code>123456789012</code>.</p>
     */
    inline CreatePortfolioShareRequest& WithAccountId(const char* value) { SetAccountId(value); return *this;}


    /**
     * <p>The organization node to whom you are going to share. If
     * <code>OrganizationNode</code> is passed in, <code>PortfolioShare</code> will be
     * created for the node and its children (when applies), and a
     * <code>PortfolioShareToken</code> will be returned in the output in order for the
     * administrator to monitor the status of the <code>PortfolioShare</code> creation
     * process.</p>
     */
    inline const OrganizationNode& GetOrganizationNode() const{ return m_organizationNode; }

    /**
     * <p>The organization node to whom you are going to share. If
     * <code>OrganizationNode</code> is passed in, <code>PortfolioShare</code> will be
     * created for the node and its children (when applies), and a
     * <code>PortfolioShareToken</code> will be returned in the output in order for the
     * administrator to monitor the status of the <code>PortfolioShare</code> creation
     * process.</p>
     */
    inline bool OrganizationNodeHasBeenSet() const { return m_organizationNodeHasBeenSet; }

    /**
     * <p>The organization node to whom you are going to share. If
     * <code>OrganizationNode</code> is passed in, <code>PortfolioShare</code> will be
     * created for the node and its children (when applies), and a
     * <code>PortfolioShareToken</code> will be returned in the output in order for the
     * administrator to monitor the status of the <code>PortfolioShare</code> creation
     * process.</p>
     */
    inline void SetOrganizationNode(const OrganizationNode& value) { m_organizationNodeHasBeenSet = true; m_organizationNode = value; }

    /**
     * <p>The organization node to whom you are going to share. If
     * <code>OrganizationNode</code> is passed in, <code>PortfolioShare</code> will be
     * created for the node and its children (when applies), and a
     * <code>PortfolioShareToken</code> will be returned in the output in order for the
     * administrator to monitor the status of the <code>PortfolioShare</code> creation
     * process.</p>
     */
    inline void SetOrganizationNode(OrganizationNode&& value) { m_organizationNodeHasBeenSet = true; m_organizationNode = std::move(value); }

    /**
     * <p>The organization node to whom you are going to share. If
     * <code>OrganizationNode</code> is passed in, <code>PortfolioShare</code> will be
     * created for the node and its children (when applies), and a
     * <code>PortfolioShareToken</code> will be returned in the output in order for the
     * administrator to monitor the status of the <code>PortfolioShare</code> creation
     * process.</p>
     */
    inline CreatePortfolioShareRequest& WithOrganizationNode(const OrganizationNode& value) { SetOrganizationNode(value); return *this;}

    /**
     * <p>The organization node to whom you are going to share. If
     * <code>OrganizationNode</code> is passed in, <code>PortfolioShare</code> will be
     * created for the node and its children (when applies), and a
     * <code>PortfolioShareToken</code> will be returned in the output in order for the
     * administrator to monitor the status of the <code>PortfolioShare</code> creation
     * process.</p>
     */
    inline CreatePortfolioShareRequest& WithOrganizationNode(OrganizationNode&& value) { SetOrganizationNode(std::move(value)); return *this;}

  private:

    Aws::String m_acceptLanguage;
    bool m_acceptLanguageHasBeenSet;

    Aws::String m_portfolioId;
    bool m_portfolioIdHasBeenSet;

    Aws::String m_accountId;
    bool m_accountIdHasBeenSet;

    OrganizationNode m_organizationNode;
    bool m_organizationNodeHasBeenSet;
  };

} // namespace Model
} // namespace ServiceCatalog
} // namespace Aws
