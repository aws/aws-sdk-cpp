/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/logs/CloudWatchLogs_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/logs/model/IntegrationType.h>
#include <aws/logs/model/IntegrationStatus.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace CloudWatchLogs
{
namespace Model
{

  /**
   * <p>This structure contains information about one CloudWatch Logs integration.
   * This structure is returned by a <a
   * href="https://docs.aws.amazon.com/AmazonCloudWatchLogs/latest/APIReference/API_ListIntegrations.html">ListIntegrations</a>
   * operation.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/logs-2014-03-28/IntegrationSummary">AWS
   * API Reference</a></p>
   */
  class IntegrationSummary
  {
  public:
    AWS_CLOUDWATCHLOGS_API IntegrationSummary() = default;
    AWS_CLOUDWATCHLOGS_API IntegrationSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLOUDWATCHLOGS_API IntegrationSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLOUDWATCHLOGS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of this integration.</p>
     */
    inline const Aws::String& GetIntegrationName() const { return m_integrationName; }
    inline bool IntegrationNameHasBeenSet() const { return m_integrationNameHasBeenSet; }
    template<typename IntegrationNameT = Aws::String>
    void SetIntegrationName(IntegrationNameT&& value) { m_integrationNameHasBeenSet = true; m_integrationName = std::forward<IntegrationNameT>(value); }
    template<typename IntegrationNameT = Aws::String>
    IntegrationSummary& WithIntegrationName(IntegrationNameT&& value) { SetIntegrationName(std::forward<IntegrationNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of integration. Integrations with OpenSearch Service have the type
     * <code>OPENSEARCH</code>.</p>
     */
    inline IntegrationType GetIntegrationType() const { return m_integrationType; }
    inline bool IntegrationTypeHasBeenSet() const { return m_integrationTypeHasBeenSet; }
    inline void SetIntegrationType(IntegrationType value) { m_integrationTypeHasBeenSet = true; m_integrationType = value; }
    inline IntegrationSummary& WithIntegrationType(IntegrationType value) { SetIntegrationType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The current status of this integration.</p>
     */
    inline IntegrationStatus GetIntegrationStatus() const { return m_integrationStatus; }
    inline bool IntegrationStatusHasBeenSet() const { return m_integrationStatusHasBeenSet; }
    inline void SetIntegrationStatus(IntegrationStatus value) { m_integrationStatusHasBeenSet = true; m_integrationStatus = value; }
    inline IntegrationSummary& WithIntegrationStatus(IntegrationStatus value) { SetIntegrationStatus(value); return *this;}
    ///@}
  private:

    Aws::String m_integrationName;
    bool m_integrationNameHasBeenSet = false;

    IntegrationType m_integrationType{IntegrationType::NOT_SET};
    bool m_integrationTypeHasBeenSet = false;

    IntegrationStatus m_integrationStatus{IntegrationStatus::NOT_SET};
    bool m_integrationStatusHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudWatchLogs
} // namespace Aws
