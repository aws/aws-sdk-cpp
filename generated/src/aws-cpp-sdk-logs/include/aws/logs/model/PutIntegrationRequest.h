/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/logs/CloudWatchLogs_EXPORTS.h>
#include <aws/logs/CloudWatchLogsRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/logs/model/ResourceConfig.h>
#include <aws/logs/model/IntegrationType.h>
#include <utility>

namespace Aws
{
namespace CloudWatchLogs
{
namespace Model
{

  /**
   */
  class PutIntegrationRequest : public CloudWatchLogsRequest
  {
  public:
    AWS_CLOUDWATCHLOGS_API PutIntegrationRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "PutIntegration"; }

    AWS_CLOUDWATCHLOGS_API Aws::String SerializePayload() const override;

    AWS_CLOUDWATCHLOGS_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>A name for the integration.</p>
     */
    inline const Aws::String& GetIntegrationName() const { return m_integrationName; }
    inline bool IntegrationNameHasBeenSet() const { return m_integrationNameHasBeenSet; }
    template<typename IntegrationNameT = Aws::String>
    void SetIntegrationName(IntegrationNameT&& value) { m_integrationNameHasBeenSet = true; m_integrationName = std::forward<IntegrationNameT>(value); }
    template<typename IntegrationNameT = Aws::String>
    PutIntegrationRequest& WithIntegrationName(IntegrationNameT&& value) { SetIntegrationName(std::forward<IntegrationNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A structure that contains configuration information for the integration that
     * you are creating.</p>
     */
    inline const ResourceConfig& GetResourceConfig() const { return m_resourceConfig; }
    inline bool ResourceConfigHasBeenSet() const { return m_resourceConfigHasBeenSet; }
    template<typename ResourceConfigT = ResourceConfig>
    void SetResourceConfig(ResourceConfigT&& value) { m_resourceConfigHasBeenSet = true; m_resourceConfig = std::forward<ResourceConfigT>(value); }
    template<typename ResourceConfigT = ResourceConfig>
    PutIntegrationRequest& WithResourceConfig(ResourceConfigT&& value) { SetResourceConfig(std::forward<ResourceConfigT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of integration. Currently, the only supported type is
     * <code>OPENSEARCH</code>.</p>
     */
    inline IntegrationType GetIntegrationType() const { return m_integrationType; }
    inline bool IntegrationTypeHasBeenSet() const { return m_integrationTypeHasBeenSet; }
    inline void SetIntegrationType(IntegrationType value) { m_integrationTypeHasBeenSet = true; m_integrationType = value; }
    inline PutIntegrationRequest& WithIntegrationType(IntegrationType value) { SetIntegrationType(value); return *this;}
    ///@}
  private:

    Aws::String m_integrationName;
    bool m_integrationNameHasBeenSet = false;

    ResourceConfig m_resourceConfig;
    bool m_resourceConfigHasBeenSet = false;

    IntegrationType m_integrationType{IntegrationType::NOT_SET};
    bool m_integrationTypeHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudWatchLogs
} // namespace Aws
