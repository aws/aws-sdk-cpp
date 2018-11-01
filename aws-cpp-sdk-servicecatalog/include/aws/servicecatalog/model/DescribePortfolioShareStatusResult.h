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
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/servicecatalog/model/ShareStatus.h>
#include <aws/servicecatalog/model/ShareDetails.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace ServiceCatalog
{
namespace Model
{
  class AWS_SERVICECATALOG_API DescribePortfolioShareStatusResult
  {
  public:
    DescribePortfolioShareStatusResult();
    DescribePortfolioShareStatusResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    DescribePortfolioShareStatusResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The token for the portfolio share operation. For example,
     * <code>share-6v24abcdefghi</code>.</p>
     */
    inline const Aws::String& GetPortfolioShareToken() const{ return m_portfolioShareToken; }

    /**
     * <p>The token for the portfolio share operation. For example,
     * <code>share-6v24abcdefghi</code>.</p>
     */
    inline void SetPortfolioShareToken(const Aws::String& value) { m_portfolioShareToken = value; }

    /**
     * <p>The token for the portfolio share operation. For example,
     * <code>share-6v24abcdefghi</code>.</p>
     */
    inline void SetPortfolioShareToken(Aws::String&& value) { m_portfolioShareToken = std::move(value); }

    /**
     * <p>The token for the portfolio share operation. For example,
     * <code>share-6v24abcdefghi</code>.</p>
     */
    inline void SetPortfolioShareToken(const char* value) { m_portfolioShareToken.assign(value); }

    /**
     * <p>The token for the portfolio share operation. For example,
     * <code>share-6v24abcdefghi</code>.</p>
     */
    inline DescribePortfolioShareStatusResult& WithPortfolioShareToken(const Aws::String& value) { SetPortfolioShareToken(value); return *this;}

    /**
     * <p>The token for the portfolio share operation. For example,
     * <code>share-6v24abcdefghi</code>.</p>
     */
    inline DescribePortfolioShareStatusResult& WithPortfolioShareToken(Aws::String&& value) { SetPortfolioShareToken(std::move(value)); return *this;}

    /**
     * <p>The token for the portfolio share operation. For example,
     * <code>share-6v24abcdefghi</code>.</p>
     */
    inline DescribePortfolioShareStatusResult& WithPortfolioShareToken(const char* value) { SetPortfolioShareToken(value); return *this;}


    /**
     * <p>The portfolio identifier.</p>
     */
    inline const Aws::String& GetPortfolioId() const{ return m_portfolioId; }

    /**
     * <p>The portfolio identifier.</p>
     */
    inline void SetPortfolioId(const Aws::String& value) { m_portfolioId = value; }

    /**
     * <p>The portfolio identifier.</p>
     */
    inline void SetPortfolioId(Aws::String&& value) { m_portfolioId = std::move(value); }

    /**
     * <p>The portfolio identifier.</p>
     */
    inline void SetPortfolioId(const char* value) { m_portfolioId.assign(value); }

    /**
     * <p>The portfolio identifier.</p>
     */
    inline DescribePortfolioShareStatusResult& WithPortfolioId(const Aws::String& value) { SetPortfolioId(value); return *this;}

    /**
     * <p>The portfolio identifier.</p>
     */
    inline DescribePortfolioShareStatusResult& WithPortfolioId(Aws::String&& value) { SetPortfolioId(std::move(value)); return *this;}

    /**
     * <p>The portfolio identifier.</p>
     */
    inline DescribePortfolioShareStatusResult& WithPortfolioId(const char* value) { SetPortfolioId(value); return *this;}


    /**
     * <p>Organization node identifier. It can be either account id, organizational
     * unit id or organization id.</p>
     */
    inline const Aws::String& GetOrganizationNodeValue() const{ return m_organizationNodeValue; }

    /**
     * <p>Organization node identifier. It can be either account id, organizational
     * unit id or organization id.</p>
     */
    inline void SetOrganizationNodeValue(const Aws::String& value) { m_organizationNodeValue = value; }

    /**
     * <p>Organization node identifier. It can be either account id, organizational
     * unit id or organization id.</p>
     */
    inline void SetOrganizationNodeValue(Aws::String&& value) { m_organizationNodeValue = std::move(value); }

    /**
     * <p>Organization node identifier. It can be either account id, organizational
     * unit id or organization id.</p>
     */
    inline void SetOrganizationNodeValue(const char* value) { m_organizationNodeValue.assign(value); }

    /**
     * <p>Organization node identifier. It can be either account id, organizational
     * unit id or organization id.</p>
     */
    inline DescribePortfolioShareStatusResult& WithOrganizationNodeValue(const Aws::String& value) { SetOrganizationNodeValue(value); return *this;}

    /**
     * <p>Organization node identifier. It can be either account id, organizational
     * unit id or organization id.</p>
     */
    inline DescribePortfolioShareStatusResult& WithOrganizationNodeValue(Aws::String&& value) { SetOrganizationNodeValue(std::move(value)); return *this;}

    /**
     * <p>Organization node identifier. It can be either account id, organizational
     * unit id or organization id.</p>
     */
    inline DescribePortfolioShareStatusResult& WithOrganizationNodeValue(const char* value) { SetOrganizationNodeValue(value); return *this;}


    /**
     * <p>Status of the portfolio share operation.</p>
     */
    inline const ShareStatus& GetStatus() const{ return m_status; }

    /**
     * <p>Status of the portfolio share operation.</p>
     */
    inline void SetStatus(const ShareStatus& value) { m_status = value; }

    /**
     * <p>Status of the portfolio share operation.</p>
     */
    inline void SetStatus(ShareStatus&& value) { m_status = std::move(value); }

    /**
     * <p>Status of the portfolio share operation.</p>
     */
    inline DescribePortfolioShareStatusResult& WithStatus(const ShareStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>Status of the portfolio share operation.</p>
     */
    inline DescribePortfolioShareStatusResult& WithStatus(ShareStatus&& value) { SetStatus(std::move(value)); return *this;}


    /**
     * <p>Information about the portfolio share operation.</p>
     */
    inline const ShareDetails& GetShareDetails() const{ return m_shareDetails; }

    /**
     * <p>Information about the portfolio share operation.</p>
     */
    inline void SetShareDetails(const ShareDetails& value) { m_shareDetails = value; }

    /**
     * <p>Information about the portfolio share operation.</p>
     */
    inline void SetShareDetails(ShareDetails&& value) { m_shareDetails = std::move(value); }

    /**
     * <p>Information about the portfolio share operation.</p>
     */
    inline DescribePortfolioShareStatusResult& WithShareDetails(const ShareDetails& value) { SetShareDetails(value); return *this;}

    /**
     * <p>Information about the portfolio share operation.</p>
     */
    inline DescribePortfolioShareStatusResult& WithShareDetails(ShareDetails&& value) { SetShareDetails(std::move(value)); return *this;}

  private:

    Aws::String m_portfolioShareToken;

    Aws::String m_portfolioId;

    Aws::String m_organizationNodeValue;

    ShareStatus m_status;

    ShareDetails m_shareDetails;
  };

} // namespace Model
} // namespace ServiceCatalog
} // namespace Aws
