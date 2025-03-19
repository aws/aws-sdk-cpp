/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/es/ElasticsearchService_EXPORTS.h>
#include <aws/es/model/ElasticsearchDomainConfig.h>
#include <aws/es/model/DryRunResults.h>
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
   * <p>The result of an <code>UpdateElasticsearchDomain</code> request. Contains the
   * status of the Elasticsearch domain being updated.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/es-2015-01-01/UpdateElasticsearchDomainConfigResponse">AWS
   * API Reference</a></p>
   */
  class UpdateElasticsearchDomainConfigResult
  {
  public:
    AWS_ELASTICSEARCHSERVICE_API UpdateElasticsearchDomainConfigResult() = default;
    AWS_ELASTICSEARCHSERVICE_API UpdateElasticsearchDomainConfigResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_ELASTICSEARCHSERVICE_API UpdateElasticsearchDomainConfigResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The status of the updated Elasticsearch domain. </p>
     */
    inline const ElasticsearchDomainConfig& GetDomainConfig() const { return m_domainConfig; }
    template<typename DomainConfigT = ElasticsearchDomainConfig>
    void SetDomainConfig(DomainConfigT&& value) { m_domainConfigHasBeenSet = true; m_domainConfig = std::forward<DomainConfigT>(value); }
    template<typename DomainConfigT = ElasticsearchDomainConfig>
    UpdateElasticsearchDomainConfigResult& WithDomainConfig(DomainConfigT&& value) { SetDomainConfig(std::forward<DomainConfigT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Contains result of DryRun. </p>
     */
    inline const DryRunResults& GetDryRunResults() const { return m_dryRunResults; }
    template<typename DryRunResultsT = DryRunResults>
    void SetDryRunResults(DryRunResultsT&& value) { m_dryRunResultsHasBeenSet = true; m_dryRunResults = std::forward<DryRunResultsT>(value); }
    template<typename DryRunResultsT = DryRunResults>
    UpdateElasticsearchDomainConfigResult& WithDryRunResults(DryRunResultsT&& value) { SetDryRunResults(std::forward<DryRunResultsT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    UpdateElasticsearchDomainConfigResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    ElasticsearchDomainConfig m_domainConfig;
    bool m_domainConfigHasBeenSet = false;

    DryRunResults m_dryRunResults;
    bool m_dryRunResultsHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace ElasticsearchService
} // namespace Aws
