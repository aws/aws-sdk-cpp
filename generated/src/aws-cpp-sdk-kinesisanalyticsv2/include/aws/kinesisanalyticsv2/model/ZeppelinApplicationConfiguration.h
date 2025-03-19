/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/kinesisanalyticsv2/KinesisAnalyticsV2_EXPORTS.h>
#include <aws/kinesisanalyticsv2/model/ZeppelinMonitoringConfiguration.h>
#include <aws/kinesisanalyticsv2/model/CatalogConfiguration.h>
#include <aws/kinesisanalyticsv2/model/DeployAsApplicationConfiguration.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/kinesisanalyticsv2/model/CustomArtifactConfiguration.h>
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
namespace KinesisAnalyticsV2
{
namespace Model
{

  /**
   * <p>The configuration of a Managed Service for Apache Flink Studio
   * notebook.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/kinesisanalyticsv2-2018-05-23/ZeppelinApplicationConfiguration">AWS
   * API Reference</a></p>
   */
  class ZeppelinApplicationConfiguration
  {
  public:
    AWS_KINESISANALYTICSV2_API ZeppelinApplicationConfiguration() = default;
    AWS_KINESISANALYTICSV2_API ZeppelinApplicationConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_KINESISANALYTICSV2_API ZeppelinApplicationConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_KINESISANALYTICSV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The monitoring configuration of a Managed Service for Apache Flink Studio
     * notebook.</p>
     */
    inline const ZeppelinMonitoringConfiguration& GetMonitoringConfiguration() const { return m_monitoringConfiguration; }
    inline bool MonitoringConfigurationHasBeenSet() const { return m_monitoringConfigurationHasBeenSet; }
    template<typename MonitoringConfigurationT = ZeppelinMonitoringConfiguration>
    void SetMonitoringConfiguration(MonitoringConfigurationT&& value) { m_monitoringConfigurationHasBeenSet = true; m_monitoringConfiguration = std::forward<MonitoringConfigurationT>(value); }
    template<typename MonitoringConfigurationT = ZeppelinMonitoringConfiguration>
    ZeppelinApplicationConfiguration& WithMonitoringConfiguration(MonitoringConfigurationT&& value) { SetMonitoringConfiguration(std::forward<MonitoringConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Glue Data Catalog that you use in queries in a Managed Service for
     * Apache Flink Studio notebook.</p>
     */
    inline const CatalogConfiguration& GetCatalogConfiguration() const { return m_catalogConfiguration; }
    inline bool CatalogConfigurationHasBeenSet() const { return m_catalogConfigurationHasBeenSet; }
    template<typename CatalogConfigurationT = CatalogConfiguration>
    void SetCatalogConfiguration(CatalogConfigurationT&& value) { m_catalogConfigurationHasBeenSet = true; m_catalogConfiguration = std::forward<CatalogConfigurationT>(value); }
    template<typename CatalogConfigurationT = CatalogConfiguration>
    ZeppelinApplicationConfiguration& WithCatalogConfiguration(CatalogConfigurationT&& value) { SetCatalogConfiguration(std::forward<CatalogConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The information required to deploy a Managed Service for Apache Flink Studio
     * notebook as an application with durable state.</p>
     */
    inline const DeployAsApplicationConfiguration& GetDeployAsApplicationConfiguration() const { return m_deployAsApplicationConfiguration; }
    inline bool DeployAsApplicationConfigurationHasBeenSet() const { return m_deployAsApplicationConfigurationHasBeenSet; }
    template<typename DeployAsApplicationConfigurationT = DeployAsApplicationConfiguration>
    void SetDeployAsApplicationConfiguration(DeployAsApplicationConfigurationT&& value) { m_deployAsApplicationConfigurationHasBeenSet = true; m_deployAsApplicationConfiguration = std::forward<DeployAsApplicationConfigurationT>(value); }
    template<typename DeployAsApplicationConfigurationT = DeployAsApplicationConfiguration>
    ZeppelinApplicationConfiguration& WithDeployAsApplicationConfiguration(DeployAsApplicationConfigurationT&& value) { SetDeployAsApplicationConfiguration(std::forward<DeployAsApplicationConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Custom artifacts are dependency JARs and user-defined functions (UDF).</p>
     */
    inline const Aws::Vector<CustomArtifactConfiguration>& GetCustomArtifactsConfiguration() const { return m_customArtifactsConfiguration; }
    inline bool CustomArtifactsConfigurationHasBeenSet() const { return m_customArtifactsConfigurationHasBeenSet; }
    template<typename CustomArtifactsConfigurationT = Aws::Vector<CustomArtifactConfiguration>>
    void SetCustomArtifactsConfiguration(CustomArtifactsConfigurationT&& value) { m_customArtifactsConfigurationHasBeenSet = true; m_customArtifactsConfiguration = std::forward<CustomArtifactsConfigurationT>(value); }
    template<typename CustomArtifactsConfigurationT = Aws::Vector<CustomArtifactConfiguration>>
    ZeppelinApplicationConfiguration& WithCustomArtifactsConfiguration(CustomArtifactsConfigurationT&& value) { SetCustomArtifactsConfiguration(std::forward<CustomArtifactsConfigurationT>(value)); return *this;}
    template<typename CustomArtifactsConfigurationT = CustomArtifactConfiguration>
    ZeppelinApplicationConfiguration& AddCustomArtifactsConfiguration(CustomArtifactsConfigurationT&& value) { m_customArtifactsConfigurationHasBeenSet = true; m_customArtifactsConfiguration.emplace_back(std::forward<CustomArtifactsConfigurationT>(value)); return *this; }
    ///@}
  private:

    ZeppelinMonitoringConfiguration m_monitoringConfiguration;
    bool m_monitoringConfigurationHasBeenSet = false;

    CatalogConfiguration m_catalogConfiguration;
    bool m_catalogConfigurationHasBeenSet = false;

    DeployAsApplicationConfiguration m_deployAsApplicationConfiguration;
    bool m_deployAsApplicationConfigurationHasBeenSet = false;

    Aws::Vector<CustomArtifactConfiguration> m_customArtifactsConfiguration;
    bool m_customArtifactsConfigurationHasBeenSet = false;
  };

} // namespace Model
} // namespace KinesisAnalyticsV2
} // namespace Aws
