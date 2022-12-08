/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/kinesisanalyticsv2/KinesisAnalyticsV2_EXPORTS.h>
#include <aws/kinesisanalyticsv2/model/SqlApplicationConfiguration.h>
#include <aws/kinesisanalyticsv2/model/FlinkApplicationConfiguration.h>
#include <aws/kinesisanalyticsv2/model/EnvironmentProperties.h>
#include <aws/kinesisanalyticsv2/model/ApplicationCodeConfiguration.h>
#include <aws/kinesisanalyticsv2/model/ApplicationSnapshotConfiguration.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/kinesisanalyticsv2/model/ZeppelinApplicationConfiguration.h>
#include <aws/kinesisanalyticsv2/model/VpcConfiguration.h>
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
   * <p>Specifies the creation parameters for a Kinesis Data Analytics
   * application.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/kinesisanalyticsv2-2018-05-23/ApplicationConfiguration">AWS
   * API Reference</a></p>
   */
  class ApplicationConfiguration
  {
  public:
    AWS_KINESISANALYTICSV2_API ApplicationConfiguration();
    AWS_KINESISANALYTICSV2_API ApplicationConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_KINESISANALYTICSV2_API ApplicationConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_KINESISANALYTICSV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The creation and update parameters for a SQL-based Kinesis Data Analytics
     * application.</p>
     */
    inline const SqlApplicationConfiguration& GetSqlApplicationConfiguration() const{ return m_sqlApplicationConfiguration; }

    /**
     * <p>The creation and update parameters for a SQL-based Kinesis Data Analytics
     * application.</p>
     */
    inline bool SqlApplicationConfigurationHasBeenSet() const { return m_sqlApplicationConfigurationHasBeenSet; }

    /**
     * <p>The creation and update parameters for a SQL-based Kinesis Data Analytics
     * application.</p>
     */
    inline void SetSqlApplicationConfiguration(const SqlApplicationConfiguration& value) { m_sqlApplicationConfigurationHasBeenSet = true; m_sqlApplicationConfiguration = value; }

    /**
     * <p>The creation and update parameters for a SQL-based Kinesis Data Analytics
     * application.</p>
     */
    inline void SetSqlApplicationConfiguration(SqlApplicationConfiguration&& value) { m_sqlApplicationConfigurationHasBeenSet = true; m_sqlApplicationConfiguration = std::move(value); }

    /**
     * <p>The creation and update parameters for a SQL-based Kinesis Data Analytics
     * application.</p>
     */
    inline ApplicationConfiguration& WithSqlApplicationConfiguration(const SqlApplicationConfiguration& value) { SetSqlApplicationConfiguration(value); return *this;}

    /**
     * <p>The creation and update parameters for a SQL-based Kinesis Data Analytics
     * application.</p>
     */
    inline ApplicationConfiguration& WithSqlApplicationConfiguration(SqlApplicationConfiguration&& value) { SetSqlApplicationConfiguration(std::move(value)); return *this;}


    /**
     * <p>The creation and update parameters for a Flink-based Kinesis Data Analytics
     * application.</p>
     */
    inline const FlinkApplicationConfiguration& GetFlinkApplicationConfiguration() const{ return m_flinkApplicationConfiguration; }

    /**
     * <p>The creation and update parameters for a Flink-based Kinesis Data Analytics
     * application.</p>
     */
    inline bool FlinkApplicationConfigurationHasBeenSet() const { return m_flinkApplicationConfigurationHasBeenSet; }

    /**
     * <p>The creation and update parameters for a Flink-based Kinesis Data Analytics
     * application.</p>
     */
    inline void SetFlinkApplicationConfiguration(const FlinkApplicationConfiguration& value) { m_flinkApplicationConfigurationHasBeenSet = true; m_flinkApplicationConfiguration = value; }

    /**
     * <p>The creation and update parameters for a Flink-based Kinesis Data Analytics
     * application.</p>
     */
    inline void SetFlinkApplicationConfiguration(FlinkApplicationConfiguration&& value) { m_flinkApplicationConfigurationHasBeenSet = true; m_flinkApplicationConfiguration = std::move(value); }

    /**
     * <p>The creation and update parameters for a Flink-based Kinesis Data Analytics
     * application.</p>
     */
    inline ApplicationConfiguration& WithFlinkApplicationConfiguration(const FlinkApplicationConfiguration& value) { SetFlinkApplicationConfiguration(value); return *this;}

    /**
     * <p>The creation and update parameters for a Flink-based Kinesis Data Analytics
     * application.</p>
     */
    inline ApplicationConfiguration& WithFlinkApplicationConfiguration(FlinkApplicationConfiguration&& value) { SetFlinkApplicationConfiguration(std::move(value)); return *this;}


    /**
     * <p>Describes execution properties for a Flink-based Kinesis Data Analytics
     * application.</p>
     */
    inline const EnvironmentProperties& GetEnvironmentProperties() const{ return m_environmentProperties; }

    /**
     * <p>Describes execution properties for a Flink-based Kinesis Data Analytics
     * application.</p>
     */
    inline bool EnvironmentPropertiesHasBeenSet() const { return m_environmentPropertiesHasBeenSet; }

    /**
     * <p>Describes execution properties for a Flink-based Kinesis Data Analytics
     * application.</p>
     */
    inline void SetEnvironmentProperties(const EnvironmentProperties& value) { m_environmentPropertiesHasBeenSet = true; m_environmentProperties = value; }

    /**
     * <p>Describes execution properties for a Flink-based Kinesis Data Analytics
     * application.</p>
     */
    inline void SetEnvironmentProperties(EnvironmentProperties&& value) { m_environmentPropertiesHasBeenSet = true; m_environmentProperties = std::move(value); }

    /**
     * <p>Describes execution properties for a Flink-based Kinesis Data Analytics
     * application.</p>
     */
    inline ApplicationConfiguration& WithEnvironmentProperties(const EnvironmentProperties& value) { SetEnvironmentProperties(value); return *this;}

    /**
     * <p>Describes execution properties for a Flink-based Kinesis Data Analytics
     * application.</p>
     */
    inline ApplicationConfiguration& WithEnvironmentProperties(EnvironmentProperties&& value) { SetEnvironmentProperties(std::move(value)); return *this;}


    /**
     * <p>The code location and type parameters for a Flink-based Kinesis Data
     * Analytics application.</p>
     */
    inline const ApplicationCodeConfiguration& GetApplicationCodeConfiguration() const{ return m_applicationCodeConfiguration; }

    /**
     * <p>The code location and type parameters for a Flink-based Kinesis Data
     * Analytics application.</p>
     */
    inline bool ApplicationCodeConfigurationHasBeenSet() const { return m_applicationCodeConfigurationHasBeenSet; }

    /**
     * <p>The code location and type parameters for a Flink-based Kinesis Data
     * Analytics application.</p>
     */
    inline void SetApplicationCodeConfiguration(const ApplicationCodeConfiguration& value) { m_applicationCodeConfigurationHasBeenSet = true; m_applicationCodeConfiguration = value; }

    /**
     * <p>The code location and type parameters for a Flink-based Kinesis Data
     * Analytics application.</p>
     */
    inline void SetApplicationCodeConfiguration(ApplicationCodeConfiguration&& value) { m_applicationCodeConfigurationHasBeenSet = true; m_applicationCodeConfiguration = std::move(value); }

    /**
     * <p>The code location and type parameters for a Flink-based Kinesis Data
     * Analytics application.</p>
     */
    inline ApplicationConfiguration& WithApplicationCodeConfiguration(const ApplicationCodeConfiguration& value) { SetApplicationCodeConfiguration(value); return *this;}

    /**
     * <p>The code location and type parameters for a Flink-based Kinesis Data
     * Analytics application.</p>
     */
    inline ApplicationConfiguration& WithApplicationCodeConfiguration(ApplicationCodeConfiguration&& value) { SetApplicationCodeConfiguration(std::move(value)); return *this;}


    /**
     * <p>Describes whether snapshots are enabled for a Flink-based Kinesis Data
     * Analytics application.</p>
     */
    inline const ApplicationSnapshotConfiguration& GetApplicationSnapshotConfiguration() const{ return m_applicationSnapshotConfiguration; }

    /**
     * <p>Describes whether snapshots are enabled for a Flink-based Kinesis Data
     * Analytics application.</p>
     */
    inline bool ApplicationSnapshotConfigurationHasBeenSet() const { return m_applicationSnapshotConfigurationHasBeenSet; }

    /**
     * <p>Describes whether snapshots are enabled for a Flink-based Kinesis Data
     * Analytics application.</p>
     */
    inline void SetApplicationSnapshotConfiguration(const ApplicationSnapshotConfiguration& value) { m_applicationSnapshotConfigurationHasBeenSet = true; m_applicationSnapshotConfiguration = value; }

    /**
     * <p>Describes whether snapshots are enabled for a Flink-based Kinesis Data
     * Analytics application.</p>
     */
    inline void SetApplicationSnapshotConfiguration(ApplicationSnapshotConfiguration&& value) { m_applicationSnapshotConfigurationHasBeenSet = true; m_applicationSnapshotConfiguration = std::move(value); }

    /**
     * <p>Describes whether snapshots are enabled for a Flink-based Kinesis Data
     * Analytics application.</p>
     */
    inline ApplicationConfiguration& WithApplicationSnapshotConfiguration(const ApplicationSnapshotConfiguration& value) { SetApplicationSnapshotConfiguration(value); return *this;}

    /**
     * <p>Describes whether snapshots are enabled for a Flink-based Kinesis Data
     * Analytics application.</p>
     */
    inline ApplicationConfiguration& WithApplicationSnapshotConfiguration(ApplicationSnapshotConfiguration&& value) { SetApplicationSnapshotConfiguration(std::move(value)); return *this;}


    /**
     * <p>The array of descriptions of VPC configurations available to the
     * application.</p>
     */
    inline const Aws::Vector<VpcConfiguration>& GetVpcConfigurations() const{ return m_vpcConfigurations; }

    /**
     * <p>The array of descriptions of VPC configurations available to the
     * application.</p>
     */
    inline bool VpcConfigurationsHasBeenSet() const { return m_vpcConfigurationsHasBeenSet; }

    /**
     * <p>The array of descriptions of VPC configurations available to the
     * application.</p>
     */
    inline void SetVpcConfigurations(const Aws::Vector<VpcConfiguration>& value) { m_vpcConfigurationsHasBeenSet = true; m_vpcConfigurations = value; }

    /**
     * <p>The array of descriptions of VPC configurations available to the
     * application.</p>
     */
    inline void SetVpcConfigurations(Aws::Vector<VpcConfiguration>&& value) { m_vpcConfigurationsHasBeenSet = true; m_vpcConfigurations = std::move(value); }

    /**
     * <p>The array of descriptions of VPC configurations available to the
     * application.</p>
     */
    inline ApplicationConfiguration& WithVpcConfigurations(const Aws::Vector<VpcConfiguration>& value) { SetVpcConfigurations(value); return *this;}

    /**
     * <p>The array of descriptions of VPC configurations available to the
     * application.</p>
     */
    inline ApplicationConfiguration& WithVpcConfigurations(Aws::Vector<VpcConfiguration>&& value) { SetVpcConfigurations(std::move(value)); return *this;}

    /**
     * <p>The array of descriptions of VPC configurations available to the
     * application.</p>
     */
    inline ApplicationConfiguration& AddVpcConfigurations(const VpcConfiguration& value) { m_vpcConfigurationsHasBeenSet = true; m_vpcConfigurations.push_back(value); return *this; }

    /**
     * <p>The array of descriptions of VPC configurations available to the
     * application.</p>
     */
    inline ApplicationConfiguration& AddVpcConfigurations(VpcConfiguration&& value) { m_vpcConfigurationsHasBeenSet = true; m_vpcConfigurations.push_back(std::move(value)); return *this; }


    /**
     * <p>The configuration parameters for a Kinesis Data Analytics Studio
     * notebook.</p>
     */
    inline const ZeppelinApplicationConfiguration& GetZeppelinApplicationConfiguration() const{ return m_zeppelinApplicationConfiguration; }

    /**
     * <p>The configuration parameters for a Kinesis Data Analytics Studio
     * notebook.</p>
     */
    inline bool ZeppelinApplicationConfigurationHasBeenSet() const { return m_zeppelinApplicationConfigurationHasBeenSet; }

    /**
     * <p>The configuration parameters for a Kinesis Data Analytics Studio
     * notebook.</p>
     */
    inline void SetZeppelinApplicationConfiguration(const ZeppelinApplicationConfiguration& value) { m_zeppelinApplicationConfigurationHasBeenSet = true; m_zeppelinApplicationConfiguration = value; }

    /**
     * <p>The configuration parameters for a Kinesis Data Analytics Studio
     * notebook.</p>
     */
    inline void SetZeppelinApplicationConfiguration(ZeppelinApplicationConfiguration&& value) { m_zeppelinApplicationConfigurationHasBeenSet = true; m_zeppelinApplicationConfiguration = std::move(value); }

    /**
     * <p>The configuration parameters for a Kinesis Data Analytics Studio
     * notebook.</p>
     */
    inline ApplicationConfiguration& WithZeppelinApplicationConfiguration(const ZeppelinApplicationConfiguration& value) { SetZeppelinApplicationConfiguration(value); return *this;}

    /**
     * <p>The configuration parameters for a Kinesis Data Analytics Studio
     * notebook.</p>
     */
    inline ApplicationConfiguration& WithZeppelinApplicationConfiguration(ZeppelinApplicationConfiguration&& value) { SetZeppelinApplicationConfiguration(std::move(value)); return *this;}

  private:

    SqlApplicationConfiguration m_sqlApplicationConfiguration;
    bool m_sqlApplicationConfigurationHasBeenSet = false;

    FlinkApplicationConfiguration m_flinkApplicationConfiguration;
    bool m_flinkApplicationConfigurationHasBeenSet = false;

    EnvironmentProperties m_environmentProperties;
    bool m_environmentPropertiesHasBeenSet = false;

    ApplicationCodeConfiguration m_applicationCodeConfiguration;
    bool m_applicationCodeConfigurationHasBeenSet = false;

    ApplicationSnapshotConfiguration m_applicationSnapshotConfiguration;
    bool m_applicationSnapshotConfigurationHasBeenSet = false;

    Aws::Vector<VpcConfiguration> m_vpcConfigurations;
    bool m_vpcConfigurationsHasBeenSet = false;

    ZeppelinApplicationConfiguration m_zeppelinApplicationConfiguration;
    bool m_zeppelinApplicationConfigurationHasBeenSet = false;
  };

} // namespace Model
} // namespace KinesisAnalyticsV2
} // namespace Aws
