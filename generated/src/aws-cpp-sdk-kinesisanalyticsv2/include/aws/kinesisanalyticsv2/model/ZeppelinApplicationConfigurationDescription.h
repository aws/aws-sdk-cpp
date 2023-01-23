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
   * <p>The configuration of a Kinesis Data Analytics Studio notebook.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/kinesisanalyticsv2-2018-05-23/ZeppelinApplicationConfigurationDescription">AWS
   * API Reference</a></p>
   */
  class ZeppelinApplicationConfigurationDescription
  {
  public:
    AWS_KINESISANALYTICSV2_API ZeppelinApplicationConfigurationDescription();
    AWS_KINESISANALYTICSV2_API ZeppelinApplicationConfigurationDescription(Aws::Utils::Json::JsonView jsonValue);
    AWS_KINESISANALYTICSV2_API ZeppelinApplicationConfigurationDescription& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_KINESISANALYTICSV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The monitoring configuration of a Kinesis Data Analytics Studio notebook.</p>
     */
    inline const ZeppelinMonitoringConfigurationDescription& GetMonitoringConfigurationDescription() const{ return m_monitoringConfigurationDescription; }

    /**
     * <p>The monitoring configuration of a Kinesis Data Analytics Studio notebook.</p>
     */
    inline bool MonitoringConfigurationDescriptionHasBeenSet() const { return m_monitoringConfigurationDescriptionHasBeenSet; }

    /**
     * <p>The monitoring configuration of a Kinesis Data Analytics Studio notebook.</p>
     */
    inline void SetMonitoringConfigurationDescription(const ZeppelinMonitoringConfigurationDescription& value) { m_monitoringConfigurationDescriptionHasBeenSet = true; m_monitoringConfigurationDescription = value; }

    /**
     * <p>The monitoring configuration of a Kinesis Data Analytics Studio notebook.</p>
     */
    inline void SetMonitoringConfigurationDescription(ZeppelinMonitoringConfigurationDescription&& value) { m_monitoringConfigurationDescriptionHasBeenSet = true; m_monitoringConfigurationDescription = std::move(value); }

    /**
     * <p>The monitoring configuration of a Kinesis Data Analytics Studio notebook.</p>
     */
    inline ZeppelinApplicationConfigurationDescription& WithMonitoringConfigurationDescription(const ZeppelinMonitoringConfigurationDescription& value) { SetMonitoringConfigurationDescription(value); return *this;}

    /**
     * <p>The monitoring configuration of a Kinesis Data Analytics Studio notebook.</p>
     */
    inline ZeppelinApplicationConfigurationDescription& WithMonitoringConfigurationDescription(ZeppelinMonitoringConfigurationDescription&& value) { SetMonitoringConfigurationDescription(std::move(value)); return *this;}


    /**
     * <p>The Amazon Glue Data Catalog that is associated with the Kinesis Data
     * Analytics Studio notebook.</p>
     */
    inline const CatalogConfigurationDescription& GetCatalogConfigurationDescription() const{ return m_catalogConfigurationDescription; }

    /**
     * <p>The Amazon Glue Data Catalog that is associated with the Kinesis Data
     * Analytics Studio notebook.</p>
     */
    inline bool CatalogConfigurationDescriptionHasBeenSet() const { return m_catalogConfigurationDescriptionHasBeenSet; }

    /**
     * <p>The Amazon Glue Data Catalog that is associated with the Kinesis Data
     * Analytics Studio notebook.</p>
     */
    inline void SetCatalogConfigurationDescription(const CatalogConfigurationDescription& value) { m_catalogConfigurationDescriptionHasBeenSet = true; m_catalogConfigurationDescription = value; }

    /**
     * <p>The Amazon Glue Data Catalog that is associated with the Kinesis Data
     * Analytics Studio notebook.</p>
     */
    inline void SetCatalogConfigurationDescription(CatalogConfigurationDescription&& value) { m_catalogConfigurationDescriptionHasBeenSet = true; m_catalogConfigurationDescription = std::move(value); }

    /**
     * <p>The Amazon Glue Data Catalog that is associated with the Kinesis Data
     * Analytics Studio notebook.</p>
     */
    inline ZeppelinApplicationConfigurationDescription& WithCatalogConfigurationDescription(const CatalogConfigurationDescription& value) { SetCatalogConfigurationDescription(value); return *this;}

    /**
     * <p>The Amazon Glue Data Catalog that is associated with the Kinesis Data
     * Analytics Studio notebook.</p>
     */
    inline ZeppelinApplicationConfigurationDescription& WithCatalogConfigurationDescription(CatalogConfigurationDescription&& value) { SetCatalogConfigurationDescription(std::move(value)); return *this;}


    /**
     * <p>The parameters required to deploy a Kinesis Data Analytics Studio notebook as
     * an application with durable state.</p>
     */
    inline const DeployAsApplicationConfigurationDescription& GetDeployAsApplicationConfigurationDescription() const{ return m_deployAsApplicationConfigurationDescription; }

    /**
     * <p>The parameters required to deploy a Kinesis Data Analytics Studio notebook as
     * an application with durable state.</p>
     */
    inline bool DeployAsApplicationConfigurationDescriptionHasBeenSet() const { return m_deployAsApplicationConfigurationDescriptionHasBeenSet; }

    /**
     * <p>The parameters required to deploy a Kinesis Data Analytics Studio notebook as
     * an application with durable state.</p>
     */
    inline void SetDeployAsApplicationConfigurationDescription(const DeployAsApplicationConfigurationDescription& value) { m_deployAsApplicationConfigurationDescriptionHasBeenSet = true; m_deployAsApplicationConfigurationDescription = value; }

    /**
     * <p>The parameters required to deploy a Kinesis Data Analytics Studio notebook as
     * an application with durable state.</p>
     */
    inline void SetDeployAsApplicationConfigurationDescription(DeployAsApplicationConfigurationDescription&& value) { m_deployAsApplicationConfigurationDescriptionHasBeenSet = true; m_deployAsApplicationConfigurationDescription = std::move(value); }

    /**
     * <p>The parameters required to deploy a Kinesis Data Analytics Studio notebook as
     * an application with durable state.</p>
     */
    inline ZeppelinApplicationConfigurationDescription& WithDeployAsApplicationConfigurationDescription(const DeployAsApplicationConfigurationDescription& value) { SetDeployAsApplicationConfigurationDescription(value); return *this;}

    /**
     * <p>The parameters required to deploy a Kinesis Data Analytics Studio notebook as
     * an application with durable state.</p>
     */
    inline ZeppelinApplicationConfigurationDescription& WithDeployAsApplicationConfigurationDescription(DeployAsApplicationConfigurationDescription&& value) { SetDeployAsApplicationConfigurationDescription(std::move(value)); return *this;}


    /**
     * <p>Custom artifacts are dependency JARs and user-defined functions (UDF).</p>
     */
    inline const Aws::Vector<CustomArtifactConfigurationDescription>& GetCustomArtifactsConfigurationDescription() const{ return m_customArtifactsConfigurationDescription; }

    /**
     * <p>Custom artifacts are dependency JARs and user-defined functions (UDF).</p>
     */
    inline bool CustomArtifactsConfigurationDescriptionHasBeenSet() const { return m_customArtifactsConfigurationDescriptionHasBeenSet; }

    /**
     * <p>Custom artifacts are dependency JARs and user-defined functions (UDF).</p>
     */
    inline void SetCustomArtifactsConfigurationDescription(const Aws::Vector<CustomArtifactConfigurationDescription>& value) { m_customArtifactsConfigurationDescriptionHasBeenSet = true; m_customArtifactsConfigurationDescription = value; }

    /**
     * <p>Custom artifacts are dependency JARs and user-defined functions (UDF).</p>
     */
    inline void SetCustomArtifactsConfigurationDescription(Aws::Vector<CustomArtifactConfigurationDescription>&& value) { m_customArtifactsConfigurationDescriptionHasBeenSet = true; m_customArtifactsConfigurationDescription = std::move(value); }

    /**
     * <p>Custom artifacts are dependency JARs and user-defined functions (UDF).</p>
     */
    inline ZeppelinApplicationConfigurationDescription& WithCustomArtifactsConfigurationDescription(const Aws::Vector<CustomArtifactConfigurationDescription>& value) { SetCustomArtifactsConfigurationDescription(value); return *this;}

    /**
     * <p>Custom artifacts are dependency JARs and user-defined functions (UDF).</p>
     */
    inline ZeppelinApplicationConfigurationDescription& WithCustomArtifactsConfigurationDescription(Aws::Vector<CustomArtifactConfigurationDescription>&& value) { SetCustomArtifactsConfigurationDescription(std::move(value)); return *this;}

    /**
     * <p>Custom artifacts are dependency JARs and user-defined functions (UDF).</p>
     */
    inline ZeppelinApplicationConfigurationDescription& AddCustomArtifactsConfigurationDescription(const CustomArtifactConfigurationDescription& value) { m_customArtifactsConfigurationDescriptionHasBeenSet = true; m_customArtifactsConfigurationDescription.push_back(value); return *this; }

    /**
     * <p>Custom artifacts are dependency JARs and user-defined functions (UDF).</p>
     */
    inline ZeppelinApplicationConfigurationDescription& AddCustomArtifactsConfigurationDescription(CustomArtifactConfigurationDescription&& value) { m_customArtifactsConfigurationDescriptionHasBeenSet = true; m_customArtifactsConfigurationDescription.push_back(std::move(value)); return *this; }

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
