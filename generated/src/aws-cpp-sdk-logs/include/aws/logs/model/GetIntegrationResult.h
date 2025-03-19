/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/logs/CloudWatchLogs_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/logs/model/IntegrationType.h>
#include <aws/logs/model/IntegrationStatus.h>
#include <aws/logs/model/IntegrationDetails.h>
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
  class GetIntegrationResult
  {
  public:
    AWS_CLOUDWATCHLOGS_API GetIntegrationResult() = default;
    AWS_CLOUDWATCHLOGS_API GetIntegrationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CLOUDWATCHLOGS_API GetIntegrationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The name of the integration.</p>
     */
    inline const Aws::String& GetIntegrationName() const { return m_integrationName; }
    template<typename IntegrationNameT = Aws::String>
    void SetIntegrationName(IntegrationNameT&& value) { m_integrationNameHasBeenSet = true; m_integrationName = std::forward<IntegrationNameT>(value); }
    template<typename IntegrationNameT = Aws::String>
    GetIntegrationResult& WithIntegrationName(IntegrationNameT&& value) { SetIntegrationName(std::forward<IntegrationNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of integration. Integrations with OpenSearch Service have the type
     * <code>OPENSEARCH</code>.</p>
     */
    inline IntegrationType GetIntegrationType() const { return m_integrationType; }
    inline void SetIntegrationType(IntegrationType value) { m_integrationTypeHasBeenSet = true; m_integrationType = value; }
    inline GetIntegrationResult& WithIntegrationType(IntegrationType value) { SetIntegrationType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The current status of this integration.</p>
     */
    inline IntegrationStatus GetIntegrationStatus() const { return m_integrationStatus; }
    inline void SetIntegrationStatus(IntegrationStatus value) { m_integrationStatusHasBeenSet = true; m_integrationStatus = value; }
    inline GetIntegrationResult& WithIntegrationStatus(IntegrationStatus value) { SetIntegrationStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A structure that contains information about the integration configuration.
     * For an integration with OpenSearch Service, this includes information about
     * OpenSearch Service resources such as the collection, the workspace, and
     * policies.</p>
     */
    inline const IntegrationDetails& GetIntegrationDetails() const { return m_integrationDetails; }
    template<typename IntegrationDetailsT = IntegrationDetails>
    void SetIntegrationDetails(IntegrationDetailsT&& value) { m_integrationDetailsHasBeenSet = true; m_integrationDetails = std::forward<IntegrationDetailsT>(value); }
    template<typename IntegrationDetailsT = IntegrationDetails>
    GetIntegrationResult& WithIntegrationDetails(IntegrationDetailsT&& value) { SetIntegrationDetails(std::forward<IntegrationDetailsT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetIntegrationResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_integrationName;
    bool m_integrationNameHasBeenSet = false;

    IntegrationType m_integrationType{IntegrationType::NOT_SET};
    bool m_integrationTypeHasBeenSet = false;

    IntegrationStatus m_integrationStatus{IntegrationStatus::NOT_SET};
    bool m_integrationStatusHasBeenSet = false;

    IntegrationDetails m_integrationDetails;
    bool m_integrationDetailsHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudWatchLogs
} // namespace Aws
