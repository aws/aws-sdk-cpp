/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/es/ElasticsearchService_EXPORTS.h>
#include <aws/es/model/ElasticsearchDomainStatus.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
   * <p>The result of a <code>CreateElasticsearchDomain</code> operation. Contains
   * the status of the newly created Elasticsearch domain.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/es-2015-01-01/CreateElasticsearchDomainResponse">AWS
   * API Reference</a></p>
   */
  class CreateElasticsearchDomainResult
  {
  public:
    AWS_ELASTICSEARCHSERVICE_API CreateElasticsearchDomainResult() = default;
    AWS_ELASTICSEARCHSERVICE_API CreateElasticsearchDomainResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_ELASTICSEARCHSERVICE_API CreateElasticsearchDomainResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The status of the newly created Elasticsearch domain. </p>
     */
    inline const ElasticsearchDomainStatus& GetDomainStatus() const { return m_domainStatus; }
    template<typename DomainStatusT = ElasticsearchDomainStatus>
    void SetDomainStatus(DomainStatusT&& value) { m_domainStatusHasBeenSet = true; m_domainStatus = std::forward<DomainStatusT>(value); }
    template<typename DomainStatusT = ElasticsearchDomainStatus>
    CreateElasticsearchDomainResult& WithDomainStatus(DomainStatusT&& value) { SetDomainStatus(std::forward<DomainStatusT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    CreateElasticsearchDomainResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    ElasticsearchDomainStatus m_domainStatus;
    bool m_domainStatusHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace ElasticsearchService
} // namespace Aws
