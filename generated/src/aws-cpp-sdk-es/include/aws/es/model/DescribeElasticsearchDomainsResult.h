﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/es/ElasticsearchService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/es/model/ElasticsearchDomainStatus.h>
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
namespace ElasticsearchService
{
namespace Model
{
  /**
   * <p>The result of a <code>DescribeElasticsearchDomains</code> request. Contains
   * the status of the specified domains or all domains owned by the
   * account.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/es-2015-01-01/DescribeElasticsearchDomainsResponse">AWS
   * API Reference</a></p>
   */
  class DescribeElasticsearchDomainsResult
  {
  public:
    AWS_ELASTICSEARCHSERVICE_API DescribeElasticsearchDomainsResult();
    AWS_ELASTICSEARCHSERVICE_API DescribeElasticsearchDomainsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_ELASTICSEARCHSERVICE_API DescribeElasticsearchDomainsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The status of the domains requested in the
     * <code>DescribeElasticsearchDomains</code> request.</p>
     */
    inline const Aws::Vector<ElasticsearchDomainStatus>& GetDomainStatusList() const{ return m_domainStatusList; }
    inline void SetDomainStatusList(const Aws::Vector<ElasticsearchDomainStatus>& value) { m_domainStatusList = value; }
    inline void SetDomainStatusList(Aws::Vector<ElasticsearchDomainStatus>&& value) { m_domainStatusList = std::move(value); }
    inline DescribeElasticsearchDomainsResult& WithDomainStatusList(const Aws::Vector<ElasticsearchDomainStatus>& value) { SetDomainStatusList(value); return *this;}
    inline DescribeElasticsearchDomainsResult& WithDomainStatusList(Aws::Vector<ElasticsearchDomainStatus>&& value) { SetDomainStatusList(std::move(value)); return *this;}
    inline DescribeElasticsearchDomainsResult& AddDomainStatusList(const ElasticsearchDomainStatus& value) { m_domainStatusList.push_back(value); return *this; }
    inline DescribeElasticsearchDomainsResult& AddDomainStatusList(ElasticsearchDomainStatus&& value) { m_domainStatusList.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline DescribeElasticsearchDomainsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline DescribeElasticsearchDomainsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline DescribeElasticsearchDomainsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<ElasticsearchDomainStatus> m_domainStatusList;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace ElasticsearchService
} // namespace Aws
