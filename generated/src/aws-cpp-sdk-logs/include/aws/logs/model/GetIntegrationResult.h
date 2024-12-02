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
    AWS_CLOUDWATCHLOGS_API GetIntegrationResult();
    AWS_CLOUDWATCHLOGS_API GetIntegrationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CLOUDWATCHLOGS_API GetIntegrationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The name of the integration.</p>
     */
    inline const Aws::String& GetIntegrationName() const{ return m_integrationName; }
    inline void SetIntegrationName(const Aws::String& value) { m_integrationName = value; }
    inline void SetIntegrationName(Aws::String&& value) { m_integrationName = std::move(value); }
    inline void SetIntegrationName(const char* value) { m_integrationName.assign(value); }
    inline GetIntegrationResult& WithIntegrationName(const Aws::String& value) { SetIntegrationName(value); return *this;}
    inline GetIntegrationResult& WithIntegrationName(Aws::String&& value) { SetIntegrationName(std::move(value)); return *this;}
    inline GetIntegrationResult& WithIntegrationName(const char* value) { SetIntegrationName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of integration. Integrations with OpenSearch Service have the type
     * <code>OPENSEARCH</code>.</p>
     */
    inline const IntegrationType& GetIntegrationType() const{ return m_integrationType; }
    inline void SetIntegrationType(const IntegrationType& value) { m_integrationType = value; }
    inline void SetIntegrationType(IntegrationType&& value) { m_integrationType = std::move(value); }
    inline GetIntegrationResult& WithIntegrationType(const IntegrationType& value) { SetIntegrationType(value); return *this;}
    inline GetIntegrationResult& WithIntegrationType(IntegrationType&& value) { SetIntegrationType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The current status of this integration.</p>
     */
    inline const IntegrationStatus& GetIntegrationStatus() const{ return m_integrationStatus; }
    inline void SetIntegrationStatus(const IntegrationStatus& value) { m_integrationStatus = value; }
    inline void SetIntegrationStatus(IntegrationStatus&& value) { m_integrationStatus = std::move(value); }
    inline GetIntegrationResult& WithIntegrationStatus(const IntegrationStatus& value) { SetIntegrationStatus(value); return *this;}
    inline GetIntegrationResult& WithIntegrationStatus(IntegrationStatus&& value) { SetIntegrationStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A structure that contains information about the integration configuration.
     * For an integration with OpenSearch Service, this includes information about
     * OpenSearch Service resources such as the collection, the workspace, and
     * policies.</p>
     */
    inline const IntegrationDetails& GetIntegrationDetails() const{ return m_integrationDetails; }
    inline void SetIntegrationDetails(const IntegrationDetails& value) { m_integrationDetails = value; }
    inline void SetIntegrationDetails(IntegrationDetails&& value) { m_integrationDetails = std::move(value); }
    inline GetIntegrationResult& WithIntegrationDetails(const IntegrationDetails& value) { SetIntegrationDetails(value); return *this;}
    inline GetIntegrationResult& WithIntegrationDetails(IntegrationDetails&& value) { SetIntegrationDetails(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline GetIntegrationResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline GetIntegrationResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline GetIntegrationResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_integrationName;

    IntegrationType m_integrationType;

    IntegrationStatus m_integrationStatus;

    IntegrationDetails m_integrationDetails;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace CloudWatchLogs
} // namespace Aws
