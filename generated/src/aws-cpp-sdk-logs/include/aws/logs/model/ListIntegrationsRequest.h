/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/logs/CloudWatchLogs_EXPORTS.h>
#include <aws/logs/CloudWatchLogsRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/logs/model/IntegrationType.h>
#include <aws/logs/model/IntegrationStatus.h>
#include <utility>

namespace Aws
{
namespace CloudWatchLogs
{
namespace Model
{

  /**
   */
  class ListIntegrationsRequest : public CloudWatchLogsRequest
  {
  public:
    AWS_CLOUDWATCHLOGS_API ListIntegrationsRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListIntegrations"; }

    AWS_CLOUDWATCHLOGS_API Aws::String SerializePayload() const override;

    AWS_CLOUDWATCHLOGS_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>To limit the results to integrations that start with a certain name prefix,
     * specify that name prefix here.</p>
     */
    inline const Aws::String& GetIntegrationNamePrefix() const { return m_integrationNamePrefix; }
    inline bool IntegrationNamePrefixHasBeenSet() const { return m_integrationNamePrefixHasBeenSet; }
    template<typename IntegrationNamePrefixT = Aws::String>
    void SetIntegrationNamePrefix(IntegrationNamePrefixT&& value) { m_integrationNamePrefixHasBeenSet = true; m_integrationNamePrefix = std::forward<IntegrationNamePrefixT>(value); }
    template<typename IntegrationNamePrefixT = Aws::String>
    ListIntegrationsRequest& WithIntegrationNamePrefix(IntegrationNamePrefixT&& value) { SetIntegrationNamePrefix(std::forward<IntegrationNamePrefixT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>To limit the results to integrations of a certain type, specify that type
     * here.</p>
     */
    inline IntegrationType GetIntegrationType() const { return m_integrationType; }
    inline bool IntegrationTypeHasBeenSet() const { return m_integrationTypeHasBeenSet; }
    inline void SetIntegrationType(IntegrationType value) { m_integrationTypeHasBeenSet = true; m_integrationType = value; }
    inline ListIntegrationsRequest& WithIntegrationType(IntegrationType value) { SetIntegrationType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>To limit the results to integrations with a certain status, specify that
     * status here.</p>
     */
    inline IntegrationStatus GetIntegrationStatus() const { return m_integrationStatus; }
    inline bool IntegrationStatusHasBeenSet() const { return m_integrationStatusHasBeenSet; }
    inline void SetIntegrationStatus(IntegrationStatus value) { m_integrationStatusHasBeenSet = true; m_integrationStatus = value; }
    inline ListIntegrationsRequest& WithIntegrationStatus(IntegrationStatus value) { SetIntegrationStatus(value); return *this;}
    ///@}
  private:

    Aws::String m_integrationNamePrefix;
    bool m_integrationNamePrefixHasBeenSet = false;

    IntegrationType m_integrationType{IntegrationType::NOT_SET};
    bool m_integrationTypeHasBeenSet = false;

    IntegrationStatus m_integrationStatus{IntegrationStatus::NOT_SET};
    bool m_integrationStatusHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudWatchLogs
} // namespace Aws
