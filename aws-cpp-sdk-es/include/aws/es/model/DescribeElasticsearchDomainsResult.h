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
#include <aws/es/ElasticsearchService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/es/model/ElasticsearchDomainStatus.h>

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
namespace ElasticsearchService
{
namespace Model
{
  /**
   * <p>The result of a <code>DescribeElasticsearchDomains</code> request. Contains
   * the status of the specified domains or all domains owned by the account.</p>
   */
  class AWS_ELASTICSEARCHSERVICE_API DescribeElasticsearchDomainsResult
  {
  public:
    DescribeElasticsearchDomainsResult();
    DescribeElasticsearchDomainsResult(const AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    DescribeElasticsearchDomainsResult& operator=(const AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

    /**
     * <p>The status of the domains requested in the
     * <code>DescribeElasticsearchDomains</code> request.</p>
     */
    inline const Aws::Vector<ElasticsearchDomainStatus>& GetDomainStatusList() const{ return m_domainStatusList; }

    /**
     * <p>The status of the domains requested in the
     * <code>DescribeElasticsearchDomains</code> request.</p>
     */
    inline void SetDomainStatusList(const Aws::Vector<ElasticsearchDomainStatus>& value) { m_domainStatusList = value; }

    /**
     * <p>The status of the domains requested in the
     * <code>DescribeElasticsearchDomains</code> request.</p>
     */
    inline void SetDomainStatusList(Aws::Vector<ElasticsearchDomainStatus>&& value) { m_domainStatusList = value; }

    /**
     * <p>The status of the domains requested in the
     * <code>DescribeElasticsearchDomains</code> request.</p>
     */
    inline DescribeElasticsearchDomainsResult& WithDomainStatusList(const Aws::Vector<ElasticsearchDomainStatus>& value) { SetDomainStatusList(value); return *this;}

    /**
     * <p>The status of the domains requested in the
     * <code>DescribeElasticsearchDomains</code> request.</p>
     */
    inline DescribeElasticsearchDomainsResult& WithDomainStatusList(Aws::Vector<ElasticsearchDomainStatus>&& value) { SetDomainStatusList(value); return *this;}

    /**
     * <p>The status of the domains requested in the
     * <code>DescribeElasticsearchDomains</code> request.</p>
     */
    inline DescribeElasticsearchDomainsResult& AddDomainStatusList(const ElasticsearchDomainStatus& value) { m_domainStatusList.push_back(value); return *this; }

    /**
     * <p>The status of the domains requested in the
     * <code>DescribeElasticsearchDomains</code> request.</p>
     */
    inline DescribeElasticsearchDomainsResult& AddDomainStatusList(ElasticsearchDomainStatus&& value) { m_domainStatusList.push_back(value); return *this; }

  private:
    Aws::Vector<ElasticsearchDomainStatus> m_domainStatusList;
  };

} // namespace Model
} // namespace ElasticsearchService
} // namespace Aws
