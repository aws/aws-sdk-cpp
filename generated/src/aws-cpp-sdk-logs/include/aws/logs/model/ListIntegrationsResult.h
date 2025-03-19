/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/logs/CloudWatchLogs_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/logs/model/IntegrationSummary.h>
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
namespace CloudWatchLogs
{
namespace Model
{
  class ListIntegrationsResult
  {
  public:
    AWS_CLOUDWATCHLOGS_API ListIntegrationsResult() = default;
    AWS_CLOUDWATCHLOGS_API ListIntegrationsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CLOUDWATCHLOGS_API ListIntegrationsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>An array, where each object in the array contains information about one
     * CloudWatch Logs integration in this account. </p>
     */
    inline const Aws::Vector<IntegrationSummary>& GetIntegrationSummaries() const { return m_integrationSummaries; }
    template<typename IntegrationSummariesT = Aws::Vector<IntegrationSummary>>
    void SetIntegrationSummaries(IntegrationSummariesT&& value) { m_integrationSummariesHasBeenSet = true; m_integrationSummaries = std::forward<IntegrationSummariesT>(value); }
    template<typename IntegrationSummariesT = Aws::Vector<IntegrationSummary>>
    ListIntegrationsResult& WithIntegrationSummaries(IntegrationSummariesT&& value) { SetIntegrationSummaries(std::forward<IntegrationSummariesT>(value)); return *this;}
    template<typename IntegrationSummariesT = IntegrationSummary>
    ListIntegrationsResult& AddIntegrationSummaries(IntegrationSummariesT&& value) { m_integrationSummariesHasBeenSet = true; m_integrationSummaries.emplace_back(std::forward<IntegrationSummariesT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListIntegrationsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<IntegrationSummary> m_integrationSummaries;
    bool m_integrationSummariesHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudWatchLogs
} // namespace Aws
