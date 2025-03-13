/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/kinesisanalyticsv2/KinesisAnalyticsV2_EXPORTS.h>
#include <aws/kinesisanalyticsv2/model/ZeppelinMonitoringConfigurationDescription.h>
#include <aws/kinesisanalyticsv2/model/CatalogConfigurationDescription.h>
#include <aws/kinesisanalyticsv2/model/DeployAsApplicationConfigurationDescription.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/kinesisanalyticsv2/model/CustomArtifactConfigurationDescription.h>
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
   * href="http://docs.aws.amazon.com/goto/WebAPI/kinesisanalyticsv2-2018-05-23/ZeppelinApplicationConfigurationDescription">AWS
   * API Reference</a></p>
   */
  class ZeppelinApplicationConfigurationDescription
  {
  public:
    AWS_KINESISANALYTICSV2_API ZeppelinApplicationConfigurationDescription() = default;
    AWS_KINESISANALYTICSV2_API ZeppelinApplicationConfigurationDescription(Aws::Utils::Json::JsonView jsonValue);
    AWS_KINESISANALYTICSV2_API ZeppelinApplicationConfigurationDescription& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_KINESISANALYTICSV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The monitoring configuration of a Managed Service for Apache Flink Studio
     * notebook.</p>
     */
    inline const ZeppelinMonitoringConfigurationDescription& GetMonitoringConfigurationDescription() const { return m_monitoringConfigurationDescription; }
    inline bool MonitoringConfigurationDescriptionHasBeenSet() const { return m_monitoringConfigurationDescriptionHasBeenSet; }
    template<typename MonitoringConfigurationDescriptionT = ZeppelinMonitoringConfigurationDescription>
    void SetMonitoringConfigurationDescription(MonitoringConfigurationDescriptionT&& value) { m_monitoringConfigurationDescriptionHasBeenSet = true; m_monitoringConfigurationDescription = std::forward<MonitoringConfigurationDescriptionT>(value); }
    template<typename MonitoringConfigurationDescriptionT = ZeppelinMonitoringConfigurationDescription>
    ZeppelinApplicationConfigurationDescription& WithMonitoringConfigurationDescription(MonitoringConfigurationDescriptionT&& value) { SetMonitoringConfigurationDescription(std::forward<MonitoringConfigurationDescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Glue Data Catalog that is associated with the Managed Service for
     * Apache Flink Studio notebook.</p>
     */
    inline const CatalogConfigurationDescription& GetCatalogConfigurationDescription() const { return m_catalogConfigurationDescription; }
    inline bool CatalogConfigurationDescriptionHasBeenSet() const { return m_catalogConfigurationDescriptionHasBeenSet; }
    template<typename CatalogConfigurationDescriptionT = CatalogConfigurationDescription>
    void SetCatalogConfigurationDescription(CatalogConfigurationDescriptionT&& value) { m_catalogConfigurationDescriptionHasBeenSet = true; m_catalogConfigurationDescription = std::forward<CatalogConfigurationDescriptionT>(value); }
    template<typename CatalogConfigurationDescriptionT = CatalogConfigurationDescription>
    ZeppelinApplicationConfigurationDescription& WithCatalogConfigurationDescription(CatalogConfigurationDescriptionT&& value) { SetCatalogConfigurationDescription(std::forward<CatalogConfigurationDescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The parameters required to deploy a Managed Service for Apache Flink Studio
     * notebook as an application with durable state.</p>
     */
    inline const DeployAsApplicationConfigurationDescription& GetDeployAsApplicationConfigurationDescription() const { return m_deployAsApplicationConfigurationDescription; }
    inline bool DeployAsApplicationConfigurationDescriptionHasBeenSet() const { return m_deployAsApplicationConfigurationDescriptionHasBeenSet; }
    template<typename DeployAsApplicationConfigurationDescriptionT = DeployAsApplicationConfigurationDescription>
    void SetDeployAsApplicationConfigurationDescription(DeployAsApplicationConfigurationDescriptionT&& value) { m_deployAsApplicationConfigurationDescriptionHasBeenSet = true; m_deployAsApplicationConfigurationDescription = std::forward<DeployAsApplicationConfigurationDescriptionT>(value); }
    template<typename DeployAsApplicationConfigurationDescriptionT = DeployAsApplicationConfigurationDescription>
    ZeppelinApplicationConfigurationDescription& WithDeployAsApplicationConfigurationDescription(DeployAsApplicationConfigurationDescriptionT&& value) { SetDeployAsApplicationConfigurationDescription(std::forward<DeployAsApplicationConfigurationDescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Custom artifacts are dependency JARs and user-defined functions (UDF).</p>
     */
    inline const Aws::Vector<CustomArtifactConfigurationDescription>& GetCustomArtifactsConfigurationDescription() const { return m_customArtifactsConfigurationDescription; }
    inline bool CustomArtifactsConfigurationDescriptionHasBeenSet() const { return m_customArtifactsConfigurationDescriptionHasBeenSet; }
    template<typename CustomArtifactsConfigurationDescriptionT = Aws::Vector<CustomArtifactConfigurationDescription>>
    void SetCustomArtifactsConfigurationDescription(CustomArtifactsConfigurationDescriptionT&& value) { m_customArtifactsConfigurationDescriptionHasBeenSet = true; m_customArtifactsConfigurationDescription = std::forward<CustomArtifactsConfigurationDescriptionT>(value); }
    template<typename CustomArtifactsConfigurationDescriptionT = Aws::Vector<CustomArtifactConfigurationDescription>>
    ZeppelinApplicationConfigurationDescription& WithCustomArtifactsConfigurationDescription(CustomArtifactsConfigurationDescriptionT&& value) { SetCustomArtifactsConfigurationDescription(std::forward<CustomArtifactsConfigurationDescriptionT>(value)); return *this;}
    template<typename CustomArtifactsConfigurationDescriptionT = CustomArtifactConfigurationDescription>
    ZeppelinApplicationConfigurationDescription& AddCustomArtifactsConfigurationDescription(CustomArtifactsConfigurationDescriptionT&& value) { m_customArtifactsConfigurationDescriptionHasBeenSet = true; m_customArtifactsConfigurationDescription.emplace_back(std::forward<CustomArtifactsConfigurationDescriptionT>(value)); return *this; }
    ///@}
  private:

    ZeppelinMonitoringConfigurationDescription m_monitoringConfigurationDescription;
    bool m_monitoringConfigurationDescriptionHasBeenSet = false;

    CatalogConfigurationDescription m_catalogConfigurationDescription;
    bool m_catalogConfigurationDescriptionHasBeenSet = false;

    DeployAsApplicationConfigurationDescription m_deployAsApplicationConfigurationDescription;
    bool m_deployAsApplicationConfigurationDescriptionHasBeenSet = false;

    Aws::Vector<CustomArtifactConfigurationDescription> m_customArtifactsConfigurationDescription;
    bool m_customArtifactsConfigurationDescriptionHasBeenSet = false;
  };

} // namespace Model
} // namespace KinesisAnalyticsV2
} // namespace Aws
