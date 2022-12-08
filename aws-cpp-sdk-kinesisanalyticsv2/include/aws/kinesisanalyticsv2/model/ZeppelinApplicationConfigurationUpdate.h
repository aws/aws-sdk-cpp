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
   * <p>Updates to the configuration of Kinesis Data Analytics Studio
   * notebook.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/kinesisanalyticsv2-2018-05-23/ZeppelinApplicationConfigurationUpdate">AWS
   * API Reference</a></p>
   */
  class ZeppelinApplicationConfigurationUpdate
  {
  public:
    AWS_KINESISANALYTICSV2_API ZeppelinApplicationConfigurationUpdate();
    AWS_KINESISANALYTICSV2_API ZeppelinApplicationConfigurationUpdate(Aws::Utils::Json::JsonView jsonValue);
    AWS_KINESISANALYTICSV2_API ZeppelinApplicationConfigurationUpdate& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_KINESISANALYTICSV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Updates to the monitoring configuration of a Kinesis Data Analytics Studio
     * notebook.</p>
     */
    inline const ZeppelinMonitoringConfigurationUpdate& GetMonitoringConfigurationUpdate() const{ return m_monitoringConfigurationUpdate; }

    /**
     * <p>Updates to the monitoring configuration of a Kinesis Data Analytics Studio
     * notebook.</p>
     */
    inline bool MonitoringConfigurationUpdateHasBeenSet() const { return m_monitoringConfigurationUpdateHasBeenSet; }

    /**
     * <p>Updates to the monitoring configuration of a Kinesis Data Analytics Studio
     * notebook.</p>
     */
    inline void SetMonitoringConfigurationUpdate(const ZeppelinMonitoringConfigurationUpdate& value) { m_monitoringConfigurationUpdateHasBeenSet = true; m_monitoringConfigurationUpdate = value; }

    /**
     * <p>Updates to the monitoring configuration of a Kinesis Data Analytics Studio
     * notebook.</p>
     */
    inline void SetMonitoringConfigurationUpdate(ZeppelinMonitoringConfigurationUpdate&& value) { m_monitoringConfigurationUpdateHasBeenSet = true; m_monitoringConfigurationUpdate = std::move(value); }

    /**
     * <p>Updates to the monitoring configuration of a Kinesis Data Analytics Studio
     * notebook.</p>
     */
    inline ZeppelinApplicationConfigurationUpdate& WithMonitoringConfigurationUpdate(const ZeppelinMonitoringConfigurationUpdate& value) { SetMonitoringConfigurationUpdate(value); return *this;}

    /**
     * <p>Updates to the monitoring configuration of a Kinesis Data Analytics Studio
     * notebook.</p>
     */
    inline ZeppelinApplicationConfigurationUpdate& WithMonitoringConfigurationUpdate(ZeppelinMonitoringConfigurationUpdate&& value) { SetMonitoringConfigurationUpdate(std::move(value)); return *this;}


    /**
     * <p>Updates to the configuration of the Amazon Glue Data Catalog that is
     * associated with the Kinesis Data Analytics Studio notebook.</p>
     */
    inline const CatalogConfigurationUpdate& GetCatalogConfigurationUpdate() const{ return m_catalogConfigurationUpdate; }

    /**
     * <p>Updates to the configuration of the Amazon Glue Data Catalog that is
     * associated with the Kinesis Data Analytics Studio notebook.</p>
     */
    inline bool CatalogConfigurationUpdateHasBeenSet() const { return m_catalogConfigurationUpdateHasBeenSet; }

    /**
     * <p>Updates to the configuration of the Amazon Glue Data Catalog that is
     * associated with the Kinesis Data Analytics Studio notebook.</p>
     */
    inline void SetCatalogConfigurationUpdate(const CatalogConfigurationUpdate& value) { m_catalogConfigurationUpdateHasBeenSet = true; m_catalogConfigurationUpdate = value; }

    /**
     * <p>Updates to the configuration of the Amazon Glue Data Catalog that is
     * associated with the Kinesis Data Analytics Studio notebook.</p>
     */
    inline void SetCatalogConfigurationUpdate(CatalogConfigurationUpdate&& value) { m_catalogConfigurationUpdateHasBeenSet = true; m_catalogConfigurationUpdate = std::move(value); }

    /**
     * <p>Updates to the configuration of the Amazon Glue Data Catalog that is
     * associated with the Kinesis Data Analytics Studio notebook.</p>
     */
    inline ZeppelinApplicationConfigurationUpdate& WithCatalogConfigurationUpdate(const CatalogConfigurationUpdate& value) { SetCatalogConfigurationUpdate(value); return *this;}

    /**
     * <p>Updates to the configuration of the Amazon Glue Data Catalog that is
     * associated with the Kinesis Data Analytics Studio notebook.</p>
     */
    inline ZeppelinApplicationConfigurationUpdate& WithCatalogConfigurationUpdate(CatalogConfigurationUpdate&& value) { SetCatalogConfigurationUpdate(std::move(value)); return *this;}


    
    inline const DeployAsApplicationConfigurationUpdate& GetDeployAsApplicationConfigurationUpdate() const{ return m_deployAsApplicationConfigurationUpdate; }

    
    inline bool DeployAsApplicationConfigurationUpdateHasBeenSet() const { return m_deployAsApplicationConfigurationUpdateHasBeenSet; }

    
    inline void SetDeployAsApplicationConfigurationUpdate(const DeployAsApplicationConfigurationUpdate& value) { m_deployAsApplicationConfigurationUpdateHasBeenSet = true; m_deployAsApplicationConfigurationUpdate = value; }

    
    inline void SetDeployAsApplicationConfigurationUpdate(DeployAsApplicationConfigurationUpdate&& value) { m_deployAsApplicationConfigurationUpdateHasBeenSet = true; m_deployAsApplicationConfigurationUpdate = std::move(value); }

    
    inline ZeppelinApplicationConfigurationUpdate& WithDeployAsApplicationConfigurationUpdate(const DeployAsApplicationConfigurationUpdate& value) { SetDeployAsApplicationConfigurationUpdate(value); return *this;}

    
    inline ZeppelinApplicationConfigurationUpdate& WithDeployAsApplicationConfigurationUpdate(DeployAsApplicationConfigurationUpdate&& value) { SetDeployAsApplicationConfigurationUpdate(std::move(value)); return *this;}


    /**
     * <p>Updates to the customer artifacts. Custom artifacts are dependency JAR files
     * and user-defined functions (UDF).</p>
     */
    inline const Aws::Vector<CustomArtifactConfiguration>& GetCustomArtifactsConfigurationUpdate() const{ return m_customArtifactsConfigurationUpdate; }

    /**
     * <p>Updates to the customer artifacts. Custom artifacts are dependency JAR files
     * and user-defined functions (UDF).</p>
     */
    inline bool CustomArtifactsConfigurationUpdateHasBeenSet() const { return m_customArtifactsConfigurationUpdateHasBeenSet; }

    /**
     * <p>Updates to the customer artifacts. Custom artifacts are dependency JAR files
     * and user-defined functions (UDF).</p>
     */
    inline void SetCustomArtifactsConfigurationUpdate(const Aws::Vector<CustomArtifactConfiguration>& value) { m_customArtifactsConfigurationUpdateHasBeenSet = true; m_customArtifactsConfigurationUpdate = value; }

    /**
     * <p>Updates to the customer artifacts. Custom artifacts are dependency JAR files
     * and user-defined functions (UDF).</p>
     */
    inline void SetCustomArtifactsConfigurationUpdate(Aws::Vector<CustomArtifactConfiguration>&& value) { m_customArtifactsConfigurationUpdateHasBeenSet = true; m_customArtifactsConfigurationUpdate = std::move(value); }

    /**
     * <p>Updates to the customer artifacts. Custom artifacts are dependency JAR files
     * and user-defined functions (UDF).</p>
     */
    inline ZeppelinApplicationConfigurationUpdate& WithCustomArtifactsConfigurationUpdate(const Aws::Vector<CustomArtifactConfiguration>& value) { SetCustomArtifactsConfigurationUpdate(value); return *this;}

    /**
     * <p>Updates to the customer artifacts. Custom artifacts are dependency JAR files
     * and user-defined functions (UDF).</p>
     */
    inline ZeppelinApplicationConfigurationUpdate& WithCustomArtifactsConfigurationUpdate(Aws::Vector<CustomArtifactConfiguration>&& value) { SetCustomArtifactsConfigurationUpdate(std::move(value)); return *this;}

    /**
     * <p>Updates to the customer artifacts. Custom artifacts are dependency JAR files
     * and user-defined functions (UDF).</p>
     */
    inline ZeppelinApplicationConfigurationUpdate& AddCustomArtifactsConfigurationUpdate(const CustomArtifactConfiguration& value) { m_customArtifactsConfigurationUpdateHasBeenSet = true; m_customArtifactsConfigurationUpdate.push_back(value); return *this; }

    /**
     * <p>Updates to the customer artifacts. Custom artifacts are dependency JAR files
     * and user-defined functions (UDF).</p>
     */
    inline ZeppelinApplicationConfigurationUpdate& AddCustomArtifactsConfigurationUpdate(CustomArtifactConfiguration&& value) { m_customArtifactsConfigurationUpdateHasBeenSet = true; m_customArtifactsConfigurationUpdate.push_back(std::move(value)); return *this; }

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
