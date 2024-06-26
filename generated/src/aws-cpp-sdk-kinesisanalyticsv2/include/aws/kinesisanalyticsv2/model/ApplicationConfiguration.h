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
#include <aws/kinesisanalyticsv2/model/ApplicationSystemRollbackConfiguration.h>
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
   * <p>Specifies the creation parameters for a Managed Service for Apache Flink
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


    ///@{
    /**
     * <p>The creation and update parameters for a SQL-based Kinesis Data Analytics
     * application.</p>
     */
    inline const SqlApplicationConfiguration& GetSqlApplicationConfiguration() const{ return m_sqlApplicationConfiguration; }
    inline bool SqlApplicationConfigurationHasBeenSet() const { return m_sqlApplicationConfigurationHasBeenSet; }
    inline void SetSqlApplicationConfiguration(const SqlApplicationConfiguration& value) { m_sqlApplicationConfigurationHasBeenSet = true; m_sqlApplicationConfiguration = value; }
    inline void SetSqlApplicationConfiguration(SqlApplicationConfiguration&& value) { m_sqlApplicationConfigurationHasBeenSet = true; m_sqlApplicationConfiguration = std::move(value); }
    inline ApplicationConfiguration& WithSqlApplicationConfiguration(const SqlApplicationConfiguration& value) { SetSqlApplicationConfiguration(value); return *this;}
    inline ApplicationConfiguration& WithSqlApplicationConfiguration(SqlApplicationConfiguration&& value) { SetSqlApplicationConfiguration(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The creation and update parameters for a Managed Service for Apache Flink
     * application.</p>
     */
    inline const FlinkApplicationConfiguration& GetFlinkApplicationConfiguration() const{ return m_flinkApplicationConfiguration; }
    inline bool FlinkApplicationConfigurationHasBeenSet() const { return m_flinkApplicationConfigurationHasBeenSet; }
    inline void SetFlinkApplicationConfiguration(const FlinkApplicationConfiguration& value) { m_flinkApplicationConfigurationHasBeenSet = true; m_flinkApplicationConfiguration = value; }
    inline void SetFlinkApplicationConfiguration(FlinkApplicationConfiguration&& value) { m_flinkApplicationConfigurationHasBeenSet = true; m_flinkApplicationConfiguration = std::move(value); }
    inline ApplicationConfiguration& WithFlinkApplicationConfiguration(const FlinkApplicationConfiguration& value) { SetFlinkApplicationConfiguration(value); return *this;}
    inline ApplicationConfiguration& WithFlinkApplicationConfiguration(FlinkApplicationConfiguration&& value) { SetFlinkApplicationConfiguration(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Describes execution properties for a Managed Service for Apache Flink
     * application.</p>
     */
    inline const EnvironmentProperties& GetEnvironmentProperties() const{ return m_environmentProperties; }
    inline bool EnvironmentPropertiesHasBeenSet() const { return m_environmentPropertiesHasBeenSet; }
    inline void SetEnvironmentProperties(const EnvironmentProperties& value) { m_environmentPropertiesHasBeenSet = true; m_environmentProperties = value; }
    inline void SetEnvironmentProperties(EnvironmentProperties&& value) { m_environmentPropertiesHasBeenSet = true; m_environmentProperties = std::move(value); }
    inline ApplicationConfiguration& WithEnvironmentProperties(const EnvironmentProperties& value) { SetEnvironmentProperties(value); return *this;}
    inline ApplicationConfiguration& WithEnvironmentProperties(EnvironmentProperties&& value) { SetEnvironmentProperties(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The code location and type parameters for a Managed Service for Apache Flink
     * application.</p>
     */
    inline const ApplicationCodeConfiguration& GetApplicationCodeConfiguration() const{ return m_applicationCodeConfiguration; }
    inline bool ApplicationCodeConfigurationHasBeenSet() const { return m_applicationCodeConfigurationHasBeenSet; }
    inline void SetApplicationCodeConfiguration(const ApplicationCodeConfiguration& value) { m_applicationCodeConfigurationHasBeenSet = true; m_applicationCodeConfiguration = value; }
    inline void SetApplicationCodeConfiguration(ApplicationCodeConfiguration&& value) { m_applicationCodeConfigurationHasBeenSet = true; m_applicationCodeConfiguration = std::move(value); }
    inline ApplicationConfiguration& WithApplicationCodeConfiguration(const ApplicationCodeConfiguration& value) { SetApplicationCodeConfiguration(value); return *this;}
    inline ApplicationConfiguration& WithApplicationCodeConfiguration(ApplicationCodeConfiguration&& value) { SetApplicationCodeConfiguration(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Describes whether snapshots are enabled for a Managed Service for Apache
     * Flink application.</p>
     */
    inline const ApplicationSnapshotConfiguration& GetApplicationSnapshotConfiguration() const{ return m_applicationSnapshotConfiguration; }
    inline bool ApplicationSnapshotConfigurationHasBeenSet() const { return m_applicationSnapshotConfigurationHasBeenSet; }
    inline void SetApplicationSnapshotConfiguration(const ApplicationSnapshotConfiguration& value) { m_applicationSnapshotConfigurationHasBeenSet = true; m_applicationSnapshotConfiguration = value; }
    inline void SetApplicationSnapshotConfiguration(ApplicationSnapshotConfiguration&& value) { m_applicationSnapshotConfigurationHasBeenSet = true; m_applicationSnapshotConfiguration = std::move(value); }
    inline ApplicationConfiguration& WithApplicationSnapshotConfiguration(const ApplicationSnapshotConfiguration& value) { SetApplicationSnapshotConfiguration(value); return *this;}
    inline ApplicationConfiguration& WithApplicationSnapshotConfiguration(ApplicationSnapshotConfiguration&& value) { SetApplicationSnapshotConfiguration(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const ApplicationSystemRollbackConfiguration& GetApplicationSystemRollbackConfiguration() const{ return m_applicationSystemRollbackConfiguration; }
    inline bool ApplicationSystemRollbackConfigurationHasBeenSet() const { return m_applicationSystemRollbackConfigurationHasBeenSet; }
    inline void SetApplicationSystemRollbackConfiguration(const ApplicationSystemRollbackConfiguration& value) { m_applicationSystemRollbackConfigurationHasBeenSet = true; m_applicationSystemRollbackConfiguration = value; }
    inline void SetApplicationSystemRollbackConfiguration(ApplicationSystemRollbackConfiguration&& value) { m_applicationSystemRollbackConfigurationHasBeenSet = true; m_applicationSystemRollbackConfiguration = std::move(value); }
    inline ApplicationConfiguration& WithApplicationSystemRollbackConfiguration(const ApplicationSystemRollbackConfiguration& value) { SetApplicationSystemRollbackConfiguration(value); return *this;}
    inline ApplicationConfiguration& WithApplicationSystemRollbackConfiguration(ApplicationSystemRollbackConfiguration&& value) { SetApplicationSystemRollbackConfiguration(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The array of descriptions of VPC configurations available to the
     * application.</p>
     */
    inline const Aws::Vector<VpcConfiguration>& GetVpcConfigurations() const{ return m_vpcConfigurations; }
    inline bool VpcConfigurationsHasBeenSet() const { return m_vpcConfigurationsHasBeenSet; }
    inline void SetVpcConfigurations(const Aws::Vector<VpcConfiguration>& value) { m_vpcConfigurationsHasBeenSet = true; m_vpcConfigurations = value; }
    inline void SetVpcConfigurations(Aws::Vector<VpcConfiguration>&& value) { m_vpcConfigurationsHasBeenSet = true; m_vpcConfigurations = std::move(value); }
    inline ApplicationConfiguration& WithVpcConfigurations(const Aws::Vector<VpcConfiguration>& value) { SetVpcConfigurations(value); return *this;}
    inline ApplicationConfiguration& WithVpcConfigurations(Aws::Vector<VpcConfiguration>&& value) { SetVpcConfigurations(std::move(value)); return *this;}
    inline ApplicationConfiguration& AddVpcConfigurations(const VpcConfiguration& value) { m_vpcConfigurationsHasBeenSet = true; m_vpcConfigurations.push_back(value); return *this; }
    inline ApplicationConfiguration& AddVpcConfigurations(VpcConfiguration&& value) { m_vpcConfigurationsHasBeenSet = true; m_vpcConfigurations.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The configuration parameters for a Managed Service for Apache Flink Studio
     * notebook.</p>
     */
    inline const ZeppelinApplicationConfiguration& GetZeppelinApplicationConfiguration() const{ return m_zeppelinApplicationConfiguration; }
    inline bool ZeppelinApplicationConfigurationHasBeenSet() const { return m_zeppelinApplicationConfigurationHasBeenSet; }
    inline void SetZeppelinApplicationConfiguration(const ZeppelinApplicationConfiguration& value) { m_zeppelinApplicationConfigurationHasBeenSet = true; m_zeppelinApplicationConfiguration = value; }
    inline void SetZeppelinApplicationConfiguration(ZeppelinApplicationConfiguration&& value) { m_zeppelinApplicationConfigurationHasBeenSet = true; m_zeppelinApplicationConfiguration = std::move(value); }
    inline ApplicationConfiguration& WithZeppelinApplicationConfiguration(const ZeppelinApplicationConfiguration& value) { SetZeppelinApplicationConfiguration(value); return *this;}
    inline ApplicationConfiguration& WithZeppelinApplicationConfiguration(ZeppelinApplicationConfiguration&& value) { SetZeppelinApplicationConfiguration(std::move(value)); return *this;}
    ///@}
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

    ApplicationSystemRollbackConfiguration m_applicationSystemRollbackConfiguration;
    bool m_applicationSystemRollbackConfigurationHasBeenSet = false;

    Aws::Vector<VpcConfiguration> m_vpcConfigurations;
    bool m_vpcConfigurationsHasBeenSet = false;

    ZeppelinApplicationConfiguration m_zeppelinApplicationConfiguration;
    bool m_zeppelinApplicationConfigurationHasBeenSet = false;
  };

} // namespace Model
} // namespace KinesisAnalyticsV2
} // namespace Aws
