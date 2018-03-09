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
#include <aws/servicecatalog/model/PortfolioDetail.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/servicecatalog/model/Tag.h>
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
  class AWS_SERVICECATALOG_API CreatePortfolioResult
  {
  public:
    CreatePortfolioResult();
    CreatePortfolioResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    CreatePortfolioResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Information about the portfolio.</p>
     */
    inline const PortfolioDetail& GetPortfolioDetail() const{ return m_portfolioDetail; }

    /**
     * <p>Information about the portfolio.</p>
     */
    inline void SetPortfolioDetail(const PortfolioDetail& value) { m_portfolioDetail = value; }

    /**
     * <p>Information about the portfolio.</p>
     */
    inline void SetPortfolioDetail(PortfolioDetail&& value) { m_portfolioDetail = std::move(value); }

    /**
     * <p>Information about the portfolio.</p>
     */
    inline CreatePortfolioResult& WithPortfolioDetail(const PortfolioDetail& value) { SetPortfolioDetail(value); return *this;}

    /**
     * <p>Information about the portfolio.</p>
     */
    inline CreatePortfolioResult& WithPortfolioDetail(PortfolioDetail&& value) { SetPortfolioDetail(std::move(value)); return *this;}


    /**
     * <p>Information about the tags associated with the portfolio.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }

    /**
     * <p>Information about the tags associated with the portfolio.</p>
     */
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tags = value; }

    /**
     * <p>Information about the tags associated with the portfolio.</p>
     */
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tags = std::move(value); }

    /**
     * <p>Information about the tags associated with the portfolio.</p>
     */
    inline CreatePortfolioResult& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}

    /**
     * <p>Information about the tags associated with the portfolio.</p>
     */
    inline CreatePortfolioResult& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>Information about the tags associated with the portfolio.</p>
     */
    inline CreatePortfolioResult& AddTags(const Tag& value) { m_tags.push_back(value); return *this; }

    /**
     * <p>Information about the tags associated with the portfolio.</p>
     */
    inline CreatePortfolioResult& AddTags(Tag&& value) { m_tags.push_back(std::move(value)); return *this; }

  private:

    PortfolioDetail m_portfolioDetail;

    Aws::Vector<Tag> m_tags;
  };

} // namespace Model
} // namespace ServiceCatalog
} // namespace Aws
