/**
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
    AWS_ELASTICSEARCHSERVICE_API DescribeElasticsearchDomainsResult() = default;
    AWS_ELASTICSEARCHSERVICE_API DescribeElasticsearchDomainsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_ELASTICSEARCHSERVICE_API DescribeElasticsearchDomainsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The status of the domains requested in the
     * <code>DescribeElasticsearchDomains</code> request.</p>
     */
    inline const Aws::Vector<ElasticsearchDomainStatus>& GetDomainStatusList() const { return m_domainStatusList; }
    template<typename DomainStatusListT = Aws::Vector<ElasticsearchDomainStatus>>
    void SetDomainStatusList(DomainStatusListT&& value) { m_domainStatusListHasBeenSet = true; m_domainStatusList = std::forward<DomainStatusListT>(value); }
    template<typename DomainStatusListT = Aws::Vector<ElasticsearchDomainStatus>>
    DescribeElasticsearchDomainsResult& WithDomainStatusList(DomainStatusListT&& value) { SetDomainStatusList(std::forward<DomainStatusListT>(value)); return *this;}
    template<typename DomainStatusListT = ElasticsearchDomainStatus>
    DescribeElasticsearchDomainsResult& AddDomainStatusList(DomainStatusListT&& value) { m_domainStatusListHasBeenSet = true; m_domainStatusList.emplace_back(std::forward<DomainStatusListT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    DescribeElasticsearchDomainsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<ElasticsearchDomainStatus> m_domainStatusList;
    bool m_domainStatusListHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace ElasticsearchService
} // namespace Aws
