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
    AWS_KINESISANALYTICSV2_API ZeppelinApplicationConfiguration();
    AWS_KINESISANALYTICSV2_API ZeppelinApplicationConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_KINESISANALYTICSV2_API ZeppelinApplicationConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_KINESISANALYTICSV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The monitoring configuration of a Managed Service for Apache Flink Studio
     * notebook.</p>
     */
    inline const ZeppelinMonitoringConfiguration& GetMonitoringConfiguration() const{ return m_monitoringConfiguration; }
    inline bool MonitoringConfigurationHasBeenSet() const { return m_monitoringConfigurationHasBeenSet; }
    inline void SetMonitoringConfiguration(const ZeppelinMonitoringConfiguration& value) { m_monitoringConfigurationHasBeenSet = true; m_monitoringConfiguration = value; }
    inline void SetMonitoringConfiguration(ZeppelinMonitoringConfiguration&& value) { m_monitoringConfigurationHasBeenSet = true; m_monitoringConfiguration = std::move(value); }
    inline ZeppelinApplicationConfiguration& WithMonitoringConfiguration(const ZeppelinMonitoringConfiguration& value) { SetMonitoringConfiguration(value); return *this;}
    inline ZeppelinApplicationConfiguration& WithMonitoringConfiguration(ZeppelinMonitoringConfiguration&& value) { SetMonitoringConfiguration(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Glue Data Catalog that you use in queries in a Managed Service for
     * Apache Flink Studio notebook.</p>
     */
    inline const CatalogConfiguration& GetCatalogConfiguration() const{ return m_catalogConfiguration; }
    inline bool CatalogConfigurationHasBeenSet() const { return m_catalogConfigurationHasBeenSet; }
    inline void SetCatalogConfiguration(const CatalogConfiguration& value) { m_catalogConfigurationHasBeenSet = true; m_catalogConfiguration = value; }
    inline void SetCatalogConfiguration(CatalogConfiguration&& value) { m_catalogConfigurationHasBeenSet = true; m_catalogConfiguration = std::move(value); }
    inline ZeppelinApplicationConfiguration& WithCatalogConfiguration(const CatalogConfiguration& value) { SetCatalogConfiguration(value); return *this;}
    inline ZeppelinApplicationConfiguration& WithCatalogConfiguration(CatalogConfiguration&& value) { SetCatalogConfiguration(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The information required to deploy a Managed Service for Apache Flink Studio
     * notebook as an application with durable state.</p>
     */
    inline const DeployAsApplicationConfiguration& GetDeployAsApplicationConfiguration() const{ return m_deployAsApplicationConfiguration; }
    inline bool DeployAsApplicationConfigurationHasBeenSet() const { return m_deployAsApplicationConfigurationHasBeenSet; }
    inline void SetDeployAsApplicationConfiguration(const DeployAsApplicationConfiguration& value) { m_deployAsApplicationConfigurationHasBeenSet = true; m_deployAsApplicationConfiguration = value; }
    inline void SetDeployAsApplicationConfiguration(DeployAsApplicationConfiguration&& value) { m_deployAsApplicationConfigurationHasBeenSet = true; m_deployAsApplicationConfiguration = std::move(value); }
    inline ZeppelinApplicationConfiguration& WithDeployAsApplicationConfiguration(const DeployAsApplicationConfiguration& value) { SetDeployAsApplicationConfiguration(value); return *this;}
    inline ZeppelinApplicationConfiguration& WithDeployAsApplicationConfiguration(DeployAsApplicationConfiguration&& value) { SetDeployAsApplicationConfiguration(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Custom artifacts are dependency JARs and user-defined functions (UDF).</p>
     */
    inline const Aws::Vector<CustomArtifactConfiguration>& GetCustomArtifactsConfiguration() const{ return m_customArtifactsConfiguration; }
    inline bool CustomArtifactsConfigurationHasBeenSet() const { return m_customArtifactsConfigurationHasBeenSet; }
    inline void SetCustomArtifactsConfiguration(const Aws::Vector<CustomArtifactConfiguration>& value) { m_customArtifactsConfigurationHasBeenSet = true; m_customArtifactsConfiguration = value; }
    inline void SetCustomArtifactsConfiguration(Aws::Vector<CustomArtifactConfiguration>&& value) { m_customArtifactsConfigurationHasBeenSet = true; m_customArtifactsConfiguration = std::move(value); }
    inline ZeppelinApplicationConfiguration& WithCustomArtifactsConfiguration(const Aws::Vector<CustomArtifactConfiguration>& value) { SetCustomArtifactsConfiguration(value); return *this;}
    inline ZeppelinApplicationConfiguration& WithCustomArtifactsConfiguration(Aws::Vector<CustomArtifactConfiguration>&& value) { SetCustomArtifactsConfiguration(std::move(value)); return *this;}
    inline ZeppelinApplicationConfiguration& AddCustomArtifactsConfiguration(const CustomArtifactConfiguration& value) { m_customArtifactsConfigurationHasBeenSet = true; m_customArtifactsConfiguration.push_back(value); return *this; }
    inline ZeppelinApplicationConfiguration& AddCustomArtifactsConfiguration(CustomArtifactConfiguration&& value) { m_customArtifactsConfigurationHasBeenSet = true; m_customArtifactsConfiguration.push_back(std::move(value)); return *this; }
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
