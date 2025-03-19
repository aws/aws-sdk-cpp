/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/es/ElasticsearchService_EXPORTS.h>
#include <aws/es/model/ElasticsearchDomainConfig.h>
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
   * <p>The result of a <code>DescribeElasticsearchDomainConfig</code> request.
   * Contains the configuration information of the requested domain.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/es-2015-01-01/DescribeElasticsearchDomainConfigResponse">AWS
   * API Reference</a></p>
   */
  class DescribeElasticsearchDomainConfigResult
  {
  public:
    AWS_ELASTICSEARCHSERVICE_API DescribeElasticsearchDomainConfigResult() = default;
    AWS_ELASTICSEARCHSERVICE_API DescribeElasticsearchDomainConfigResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_ELASTICSEARCHSERVICE_API DescribeElasticsearchDomainConfigResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The configuration information of the domain requested in the
     * <code>DescribeElasticsearchDomainConfig</code> request.</p>
     */
    inline const ElasticsearchDomainConfig& GetDomainConfig() const { return m_domainConfig; }
    template<typename DomainConfigT = ElasticsearchDomainConfig>
    void SetDomainConfig(DomainConfigT&& value) { m_domainConfigHasBeenSet = true; m_domainConfig = std::forward<DomainConfigT>(value); }
    template<typename DomainConfigT = ElasticsearchDomainConfig>
    DescribeElasticsearchDomainConfigResult& WithDomainConfig(DomainConfigT&& value) { SetDomainConfig(std::forward<DomainConfigT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    DescribeElasticsearchDomainConfigResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    ElasticsearchDomainConfig m_domainConfig;
    bool m_domainConfigHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace ElasticsearchService
} // namespace Aws
