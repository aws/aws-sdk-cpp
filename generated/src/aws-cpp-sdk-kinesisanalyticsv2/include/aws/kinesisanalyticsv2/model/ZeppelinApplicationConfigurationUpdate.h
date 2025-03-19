/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/kinesisanalyticsv2/KinesisAnalyticsV2_EXPORTS.h>
#include <aws/kinesisanalyticsv2/model/ZeppelinMonitoringConfigurationUpdate.h>
#include <aws/kinesisanalyticsv2/model/CatalogConfigurationUpdate.h>
#include <aws/kinesisanalyticsv2/model/DeployAsApplicationConfigurationUpdate.h>
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
   * <p>Updates to the configuration of Managed Service for Apache Flink Studio
   * notebook.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/kinesisanalyticsv2-2018-05-23/ZeppelinApplicationConfigurationUpdate">AWS
   * API Reference</a></p>
   */
  class ZeppelinApplicationConfigurationUpdate
  {
  public:
    AWS_KINESISANALYTICSV2_API ZeppelinApplicationConfigurationUpdate() = default;
    AWS_KINESISANALYTICSV2_API ZeppelinApplicationConfigurationUpdate(Aws::Utils::Json::JsonView jsonValue);
    AWS_KINESISANALYTICSV2_API ZeppelinApplicationConfigurationUpdate& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_KINESISANALYTICSV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Updates to the monitoring configuration of a Managed Service for Apache Flink
     * Studio notebook.</p>
     */
    inline const ZeppelinMonitoringConfigurationUpdate& GetMonitoringConfigurationUpdate() const { return m_monitoringConfigurationUpdate; }
    inline bool MonitoringConfigurationUpdateHasBeenSet() const { return m_monitoringConfigurationUpdateHasBeenSet; }
    template<typename MonitoringConfigurationUpdateT = ZeppelinMonitoringConfigurationUpdate>
    void SetMonitoringConfigurationUpdate(MonitoringConfigurationUpdateT&& value) { m_monitoringConfigurationUpdateHasBeenSet = true; m_monitoringConfigurationUpdate = std::forward<MonitoringConfigurationUpdateT>(value); }
    template<typename MonitoringConfigurationUpdateT = ZeppelinMonitoringConfigurationUpdate>
    ZeppelinApplicationConfigurationUpdate& WithMonitoringConfigurationUpdate(MonitoringConfigurationUpdateT&& value) { SetMonitoringConfigurationUpdate(std::forward<MonitoringConfigurationUpdateT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Updates to the configuration of the Amazon Glue Data Catalog that is
     * associated with the Managed Service for Apache Flink Studio notebook.</p>
     */
    inline const CatalogConfigurationUpdate& GetCatalogConfigurationUpdate() const { return m_catalogConfigurationUpdate; }
    inline bool CatalogConfigurationUpdateHasBeenSet() const { return m_catalogConfigurationUpdateHasBeenSet; }
    template<typename CatalogConfigurationUpdateT = CatalogConfigurationUpdate>
    void SetCatalogConfigurationUpdate(CatalogConfigurationUpdateT&& value) { m_catalogConfigurationUpdateHasBeenSet = true; m_catalogConfigurationUpdate = std::forward<CatalogConfigurationUpdateT>(value); }
    template<typename CatalogConfigurationUpdateT = CatalogConfigurationUpdate>
    ZeppelinApplicationConfigurationUpdate& WithCatalogConfigurationUpdate(CatalogConfigurationUpdateT&& value) { SetCatalogConfigurationUpdate(std::forward<CatalogConfigurationUpdateT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const DeployAsApplicationConfigurationUpdate& GetDeployAsApplicationConfigurationUpdate() const { return m_deployAsApplicationConfigurationUpdate; }
    inline bool DeployAsApplicationConfigurationUpdateHasBeenSet() const { return m_deployAsApplicationConfigurationUpdateHasBeenSet; }
    template<typename DeployAsApplicationConfigurationUpdateT = DeployAsApplicationConfigurationUpdate>
    void SetDeployAsApplicationConfigurationUpdate(DeployAsApplicationConfigurationUpdateT&& value) { m_deployAsApplicationConfigurationUpdateHasBeenSet = true; m_deployAsApplicationConfigurationUpdate = std::forward<DeployAsApplicationConfigurationUpdateT>(value); }
    template<typename DeployAsApplicationConfigurationUpdateT = DeployAsApplicationConfigurationUpdate>
    ZeppelinApplicationConfigurationUpdate& WithDeployAsApplicationConfigurationUpdate(DeployAsApplicationConfigurationUpdateT&& value) { SetDeployAsApplicationConfigurationUpdate(std::forward<DeployAsApplicationConfigurationUpdateT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Updates to the customer artifacts. Custom artifacts are dependency JAR files
     * and user-defined functions (UDF).</p>
     */
    inline const Aws::Vector<CustomArtifactConfiguration>& GetCustomArtifactsConfigurationUpdate() const { return m_customArtifactsConfigurationUpdate; }
    inline bool CustomArtifactsConfigurationUpdateHasBeenSet() const { return m_customArtifactsConfigurationUpdateHasBeenSet; }
    template<typename CustomArtifactsConfigurationUpdateT = Aws::Vector<CustomArtifactConfiguration>>
    void SetCustomArtifactsConfigurationUpdate(CustomArtifactsConfigurationUpdateT&& value) { m_customArtifactsConfigurationUpdateHasBeenSet = true; m_customArtifactsConfigurationUpdate = std::forward<CustomArtifactsConfigurationUpdateT>(value); }
    template<typename CustomArtifactsConfigurationUpdateT = Aws::Vector<CustomArtifactConfiguration>>
    ZeppelinApplicationConfigurationUpdate& WithCustomArtifactsConfigurationUpdate(CustomArtifactsConfigurationUpdateT&& value) { SetCustomArtifactsConfigurationUpdate(std::forward<CustomArtifactsConfigurationUpdateT>(value)); return *this;}
    template<typename CustomArtifactsConfigurationUpdateT = CustomArtifactConfiguration>
    ZeppelinApplicationConfigurationUpdate& AddCustomArtifactsConfigurationUpdate(CustomArtifactsConfigurationUpdateT&& value) { m_customArtifactsConfigurationUpdateHasBeenSet = true; m_customArtifactsConfigurationUpdate.emplace_back(std::forward<CustomArtifactsConfigurationUpdateT>(value)); return *this; }
    ///@}
  private:

    ZeppelinMonitoringConfigurationUpdate m_monitoringConfigurationUpdate;
    bool m_monitoringConfigurationUpdateHasBeenSet = false;

    CatalogConfigurationUpdate m_catalogConfigurationUpdate;
    bool m_catalogConfigurationUpdateHasBeenSet = false;

    DeployAsApplicationConfigurationUpdate m_deployAsApplicationConfigurationUpdate;
    bool m_deployAsApplicationConfigurationUpdateHasBeenSet = false;

    Aws::Vector<CustomArtifactConfiguration> m_customArtifactsConfigurationUpdate;
    bool m_customArtifactsConfigurationUpdateHasBeenSet = false;
  };

} // namespace Model
} // namespace KinesisAnalyticsV2
} // namespace Aws
