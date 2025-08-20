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
#include <aws/kinesisanalyticsv2/model/ApplicationEncryptionConfiguration.h>
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
    AWS_KINESISANALYTICSV2_API ApplicationConfiguration() = default;
    AWS_KINESISANALYTICSV2_API ApplicationConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_KINESISANALYTICSV2_API ApplicationConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_KINESISANALYTICSV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The creation and update parameters for a SQL-based Kinesis Data Analytics
     * application.</p>
     */
    inline const SqlApplicationConfiguration& GetSqlApplicationConfiguration() const { return m_sqlApplicationConfiguration; }
    inline bool SqlApplicationConfigurationHasBeenSet() const { return m_sqlApplicationConfigurationHasBeenSet; }
    template<typename SqlApplicationConfigurationT = SqlApplicationConfiguration>
    void SetSqlApplicationConfiguration(SqlApplicationConfigurationT&& value) { m_sqlApplicationConfigurationHasBeenSet = true; m_sqlApplicationConfiguration = std::forward<SqlApplicationConfigurationT>(value); }
    template<typename SqlApplicationConfigurationT = SqlApplicationConfiguration>
    ApplicationConfiguration& WithSqlApplicationConfiguration(SqlApplicationConfigurationT&& value) { SetSqlApplicationConfiguration(std::forward<SqlApplicationConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The creation and update parameters for a Managed Service for Apache Flink
     * application.</p>
     */
    inline const FlinkApplicationConfiguration& GetFlinkApplicationConfiguration() const { return m_flinkApplicationConfiguration; }
    inline bool FlinkApplicationConfigurationHasBeenSet() const { return m_flinkApplicationConfigurationHasBeenSet; }
    template<typename FlinkApplicationConfigurationT = FlinkApplicationConfiguration>
    void SetFlinkApplicationConfiguration(FlinkApplicationConfigurationT&& value) { m_flinkApplicationConfigurationHasBeenSet = true; m_flinkApplicationConfiguration = std::forward<FlinkApplicationConfigurationT>(value); }
    template<typename FlinkApplicationConfigurationT = FlinkApplicationConfiguration>
    ApplicationConfiguration& WithFlinkApplicationConfiguration(FlinkApplicationConfigurationT&& value) { SetFlinkApplicationConfiguration(std::forward<FlinkApplicationConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Describes execution properties for a Managed Service for Apache Flink
     * application.</p>
     */
    inline const EnvironmentProperties& GetEnvironmentProperties() const { return m_environmentProperties; }
    inline bool EnvironmentPropertiesHasBeenSet() const { return m_environmentPropertiesHasBeenSet; }
    template<typename EnvironmentPropertiesT = EnvironmentProperties>
    void SetEnvironmentProperties(EnvironmentPropertiesT&& value) { m_environmentPropertiesHasBeenSet = true; m_environmentProperties = std::forward<EnvironmentPropertiesT>(value); }
    template<typename EnvironmentPropertiesT = EnvironmentProperties>
    ApplicationConfiguration& WithEnvironmentProperties(EnvironmentPropertiesT&& value) { SetEnvironmentProperties(std::forward<EnvironmentPropertiesT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The code location and type parameters for a Managed Service for Apache Flink
     * application.</p>
     */
    inline const ApplicationCodeConfiguration& GetApplicationCodeConfiguration() const { return m_applicationCodeConfiguration; }
    inline bool ApplicationCodeConfigurationHasBeenSet() const { return m_applicationCodeConfigurationHasBeenSet; }
    template<typename ApplicationCodeConfigurationT = ApplicationCodeConfiguration>
    void SetApplicationCodeConfiguration(ApplicationCodeConfigurationT&& value) { m_applicationCodeConfigurationHasBeenSet = true; m_applicationCodeConfiguration = std::forward<ApplicationCodeConfigurationT>(value); }
    template<typename ApplicationCodeConfigurationT = ApplicationCodeConfiguration>
    ApplicationConfiguration& WithApplicationCodeConfiguration(ApplicationCodeConfigurationT&& value) { SetApplicationCodeConfiguration(std::forward<ApplicationCodeConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Describes whether snapshots are enabled for a Managed Service for Apache
     * Flink application.</p>
     */
    inline const ApplicationSnapshotConfiguration& GetApplicationSnapshotConfiguration() const { return m_applicationSnapshotConfiguration; }
    inline bool ApplicationSnapshotConfigurationHasBeenSet() const { return m_applicationSnapshotConfigurationHasBeenSet; }
    template<typename ApplicationSnapshotConfigurationT = ApplicationSnapshotConfiguration>
    void SetApplicationSnapshotConfiguration(ApplicationSnapshotConfigurationT&& value) { m_applicationSnapshotConfigurationHasBeenSet = true; m_applicationSnapshotConfiguration = std::forward<ApplicationSnapshotConfigurationT>(value); }
    template<typename ApplicationSnapshotConfigurationT = ApplicationSnapshotConfiguration>
    ApplicationConfiguration& WithApplicationSnapshotConfiguration(ApplicationSnapshotConfigurationT&& value) { SetApplicationSnapshotConfiguration(std::forward<ApplicationSnapshotConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Describes whether system rollbacks are enabled for a Managed Service for
     * Apache Flink application.</p>
     */
    inline const ApplicationSystemRollbackConfiguration& GetApplicationSystemRollbackConfiguration() const { return m_applicationSystemRollbackConfiguration; }
    inline bool ApplicationSystemRollbackConfigurationHasBeenSet() const { return m_applicationSystemRollbackConfigurationHasBeenSet; }
    template<typename ApplicationSystemRollbackConfigurationT = ApplicationSystemRollbackConfiguration>
    void SetApplicationSystemRollbackConfiguration(ApplicationSystemRollbackConfigurationT&& value) { m_applicationSystemRollbackConfigurationHasBeenSet = true; m_applicationSystemRollbackConfiguration = std::forward<ApplicationSystemRollbackConfigurationT>(value); }
    template<typename ApplicationSystemRollbackConfigurationT = ApplicationSystemRollbackConfiguration>
    ApplicationConfiguration& WithApplicationSystemRollbackConfiguration(ApplicationSystemRollbackConfigurationT&& value) { SetApplicationSystemRollbackConfiguration(std::forward<ApplicationSystemRollbackConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The array of descriptions of VPC configurations available to the
     * application.</p>
     */
    inline const Aws::Vector<VpcConfiguration>& GetVpcConfigurations() const { return m_vpcConfigurations; }
    inline bool VpcConfigurationsHasBeenSet() const { return m_vpcConfigurationsHasBeenSet; }
    template<typename VpcConfigurationsT = Aws::Vector<VpcConfiguration>>
    void SetVpcConfigurations(VpcConfigurationsT&& value) { m_vpcConfigurationsHasBeenSet = true; m_vpcConfigurations = std::forward<VpcConfigurationsT>(value); }
    template<typename VpcConfigurationsT = Aws::Vector<VpcConfiguration>>
    ApplicationConfiguration& WithVpcConfigurations(VpcConfigurationsT&& value) { SetVpcConfigurations(std::forward<VpcConfigurationsT>(value)); return *this;}
    template<typename VpcConfigurationsT = VpcConfiguration>
    ApplicationConfiguration& AddVpcConfigurations(VpcConfigurationsT&& value) { m_vpcConfigurationsHasBeenSet = true; m_vpcConfigurations.emplace_back(std::forward<VpcConfigurationsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The configuration parameters for a Managed Service for Apache Flink Studio
     * notebook.</p>
     */
    inline const ZeppelinApplicationConfiguration& GetZeppelinApplicationConfiguration() const { return m_zeppelinApplicationConfiguration; }
    inline bool ZeppelinApplicationConfigurationHasBeenSet() const { return m_zeppelinApplicationConfigurationHasBeenSet; }
    template<typename ZeppelinApplicationConfigurationT = ZeppelinApplicationConfiguration>
    void SetZeppelinApplicationConfiguration(ZeppelinApplicationConfigurationT&& value) { m_zeppelinApplicationConfigurationHasBeenSet = true; m_zeppelinApplicationConfiguration = std::forward<ZeppelinApplicationConfigurationT>(value); }
    template<typename ZeppelinApplicationConfigurationT = ZeppelinApplicationConfiguration>
    ApplicationConfiguration& WithZeppelinApplicationConfiguration(ZeppelinApplicationConfigurationT&& value) { SetZeppelinApplicationConfiguration(std::forward<ZeppelinApplicationConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The configuration to manage encryption at rest.</p>
     */
    inline const ApplicationEncryptionConfiguration& GetApplicationEncryptionConfiguration() const { return m_applicationEncryptionConfiguration; }
    inline bool ApplicationEncryptionConfigurationHasBeenSet() const { return m_applicationEncryptionConfigurationHasBeenSet; }
    template<typename ApplicationEncryptionConfigurationT = ApplicationEncryptionConfiguration>
    void SetApplicationEncryptionConfiguration(ApplicationEncryptionConfigurationT&& value) { m_applicationEncryptionConfigurationHasBeenSet = true; m_applicationEncryptionConfiguration = std::forward<ApplicationEncryptionConfigurationT>(value); }
    template<typename ApplicationEncryptionConfigurationT = ApplicationEncryptionConfiguration>
    ApplicationConfiguration& WithApplicationEncryptionConfiguration(ApplicationEncryptionConfigurationT&& value) { SetApplicationEncryptionConfiguration(std::forward<ApplicationEncryptionConfigurationT>(value)); return *this;}
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

    ApplicationEncryptionConfiguration m_applicationEncryptionConfiguration;
    bool m_applicationEncryptionConfigurationHasBeenSet = false;
  };

} // namespace Model
} // namespace KinesisAnalyticsV2
} // namespace Aws
