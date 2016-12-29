/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
    CreatePortfolioResult(const AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    CreatePortfolioResult& operator=(const AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

    /**
     * <p>The resulting detailed portfolio information.</p>
     */
    inline const PortfolioDetail& GetPortfolioDetail() const{ return m_portfolioDetail; }

    /**
     * <p>The resulting detailed portfolio information.</p>
     */
    inline void SetPortfolioDetail(const PortfolioDetail& value) { m_portfolioDetail = value; }

    /**
     * <p>The resulting detailed portfolio information.</p>
     */
    inline void SetPortfolioDetail(PortfolioDetail&& value) { m_portfolioDetail = value; }

    /**
     * <p>The resulting detailed portfolio information.</p>
     */
    inline CreatePortfolioResult& WithPortfolioDetail(const PortfolioDetail& value) { SetPortfolioDetail(value); return *this;}

    /**
     * <p>The resulting detailed portfolio information.</p>
     */
    inline CreatePortfolioResult& WithPortfolioDetail(PortfolioDetail&& value) { SetPortfolioDetail(value); return *this;}

    /**
     * <p>Tags successfully associated with the new portfolio.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }

    /**
     * <p>Tags successfully associated with the new portfolio.</p>
     */
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tags = value; }

    /**
     * <p>Tags successfully associated with the new portfolio.</p>
     */
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tags = value; }

    /**
     * <p>Tags successfully associated with the new portfolio.</p>
     */
    inline CreatePortfolioResult& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}

    /**
     * <p>Tags successfully associated with the new portfolio.</p>
     */
    inline CreatePortfolioResult& WithTags(Aws::Vector<Tag>&& value) { SetTags(value); return *this;}

    /**
     * <p>Tags successfully associated with the new portfolio.</p>
     */
    inline CreatePortfolioResult& AddTags(const Tag& value) { m_tags.push_back(value); return *this; }

    /**
     * <p>Tags successfully associated with the new portfolio.</p>
     */
    inline CreatePortfolioResult& AddTags(Tag&& value) { m_tags.push_back(value); return *this; }

  private:
    PortfolioDetail m_portfolioDetail;
    Aws::Vector<Tag> m_tags;
  };

} // namespace Model
} // namespace ServiceCatalog
} // namespace Aws
