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
#include <utility>

namespace Aws
{
namespace ServiceCatalog
{
namespace Model
{

  /**
   */
  class AWS_SERVICECATALOG_API DescribePortfolioShareStatusRequest : public ServiceCatalogRequest
  {
  public:
    DescribePortfolioShareStatusRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribePortfolioShareStatus"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The token for the portfolio share operation. This token is returned either by
     * CreatePortfolioShare or by DeletePortfolioShare.</p>
     */
    inline const Aws::String& GetPortfolioShareToken() const{ return m_portfolioShareToken; }

    /**
     * <p>The token for the portfolio share operation. This token is returned either by
     * CreatePortfolioShare or by DeletePortfolioShare.</p>
     */
    inline bool PortfolioShareTokenHasBeenSet() const { return m_portfolioShareTokenHasBeenSet; }

    /**
     * <p>The token for the portfolio share operation. This token is returned either by
     * CreatePortfolioShare or by DeletePortfolioShare.</p>
     */
    inline void SetPortfolioShareToken(const Aws::String& value) { m_portfolioShareTokenHasBeenSet = true; m_portfolioShareToken = value; }

    /**
     * <p>The token for the portfolio share operation. This token is returned either by
     * CreatePortfolioShare or by DeletePortfolioShare.</p>
     */
    inline void SetPortfolioShareToken(Aws::String&& value) { m_portfolioShareTokenHasBeenSet = true; m_portfolioShareToken = std::move(value); }

    /**
     * <p>The token for the portfolio share operation. This token is returned either by
     * CreatePortfolioShare or by DeletePortfolioShare.</p>
     */
    inline void SetPortfolioShareToken(const char* value) { m_portfolioShareTokenHasBeenSet = true; m_portfolioShareToken.assign(value); }

    /**
     * <p>The token for the portfolio share operation. This token is returned either by
     * CreatePortfolioShare or by DeletePortfolioShare.</p>
     */
    inline DescribePortfolioShareStatusRequest& WithPortfolioShareToken(const Aws::String& value) { SetPortfolioShareToken(value); return *this;}

    /**
     * <p>The token for the portfolio share operation. This token is returned either by
     * CreatePortfolioShare or by DeletePortfolioShare.</p>
     */
    inline DescribePortfolioShareStatusRequest& WithPortfolioShareToken(Aws::String&& value) { SetPortfolioShareToken(std::move(value)); return *this;}

    /**
     * <p>The token for the portfolio share operation. This token is returned either by
     * CreatePortfolioShare or by DeletePortfolioShare.</p>
     */
    inline DescribePortfolioShareStatusRequest& WithPortfolioShareToken(const char* value) { SetPortfolioShareToken(value); return *this;}

  private:

    Aws::String m_portfolioShareToken;
    bool m_portfolioShareTokenHasBeenSet;
  };

} // namespace Model
} // namespace ServiceCatalog
} // namespace Aws
