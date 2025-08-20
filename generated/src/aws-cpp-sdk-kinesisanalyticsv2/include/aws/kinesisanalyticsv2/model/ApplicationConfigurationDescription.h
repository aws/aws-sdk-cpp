/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/kinesisanalyticsv2/KinesisAnalyticsV2_EXPORTS.h>
#include <aws/kinesisanalyticsv2/model/SqlApplicationConfigurationDescription.h>
#include <aws/kinesisanalyticsv2/model/ApplicationCodeConfigurationDescription.h>
#include <aws/kinesisanalyticsv2/model/RunConfigurationDescription.h>
#include <aws/kinesisanalyticsv2/model/FlinkApplicationConfigurationDescription.h>
#include <aws/kinesisanalyticsv2/model/EnvironmentPropertyDescriptions.h>
#include <aws/kinesisanalyticsv2/model/ApplicationSnapshotConfigurationDescription.h>
#include <aws/kinesisanalyticsv2/model/ApplicationSystemRollbackConfigurationDescription.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/kinesisanalyticsv2/model/ZeppelinApplicationConfigurationDescription.h>
#include <aws/kinesisanalyticsv2/model/ApplicationEncryptionConfigurationDescription.h>
#include <aws/kinesisanalyticsv2/model/VpcConfigurationDescription.h>
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
   * <p>Describes details about the application code and starting parameters for a
   * Managed Service for Apache Flink application.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/kinesisanalyticsv2-2018-05-23/ApplicationConfigurationDescription">AWS
   * API Reference</a></p>
   */
  class ApplicationConfigurationDescription
  {
  public:
    AWS_KINESISANALYTICSV2_API ApplicationConfigurationDescription() = default;
    AWS_KINESISANALYTICSV2_API ApplicationConfigurationDescription(Aws::Utils::Json::JsonView jsonValue);
    AWS_KINESISANALYTICSV2_API ApplicationConfigurationDescription& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_KINESISANALYTICSV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The details about inputs, outputs, and reference data sources for a SQL-based
     * Kinesis Data Analytics application.</p>
     */
    inline const SqlApplicationConfigurationDescription& GetSqlApplicationConfigurationDescription() const { return m_sqlApplicationConfigurationDescription; }
    inline bool SqlApplicationConfigurationDescriptionHasBeenSet() const { return m_sqlApplicationConfigurationDescriptionHasBeenSet; }
    template<typename SqlApplicationConfigurationDescriptionT = SqlApplicationConfigurationDescription>
    void SetSqlApplicationConfigurationDescription(SqlApplicationConfigurationDescriptionT&& value) { m_sqlApplicationConfigurationDescriptionHasBeenSet = true; m_sqlApplicationConfigurationDescription = std::forward<SqlApplicationConfigurationDescriptionT>(value); }
    template<typename SqlApplicationConfigurationDescriptionT = SqlApplicationConfigurationDescription>
    ApplicationConfigurationDescription& WithSqlApplicationConfigurationDescription(SqlApplicationConfigurationDescriptionT&& value) { SetSqlApplicationConfigurationDescription(std::forward<SqlApplicationConfigurationDescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The details about the application code for a Managed Service for Apache Flink
     * application.</p>
     */
    inline const ApplicationCodeConfigurationDescription& GetApplicationCodeConfigurationDescription() const { return m_applicationCodeConfigurationDescription; }
    inline bool ApplicationCodeConfigurationDescriptionHasBeenSet() const { return m_applicationCodeConfigurationDescriptionHasBeenSet; }
    template<typename ApplicationCodeConfigurationDescriptionT = ApplicationCodeConfigurationDescription>
    void SetApplicationCodeConfigurationDescription(ApplicationCodeConfigurationDescriptionT&& value) { m_applicationCodeConfigurationDescriptionHasBeenSet = true; m_applicationCodeConfigurationDescription = std::forward<ApplicationCodeConfigurationDescriptionT>(value); }
    template<typename ApplicationCodeConfigurationDescriptionT = ApplicationCodeConfigurationDescription>
    ApplicationConfigurationDescription& WithApplicationCodeConfigurationDescription(ApplicationCodeConfigurationDescriptionT&& value) { SetApplicationCodeConfigurationDescription(std::forward<ApplicationCodeConfigurationDescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The details about the starting properties for a Managed Service for Apache
     * Flink application.</p>
     */
    inline const RunConfigurationDescription& GetRunConfigurationDescription() const { return m_runConfigurationDescription; }
    inline bool RunConfigurationDescriptionHasBeenSet() const { return m_runConfigurationDescriptionHasBeenSet; }
    template<typename RunConfigurationDescriptionT = RunConfigurationDescription>
    void SetRunConfigurationDescription(RunConfigurationDescriptionT&& value) { m_runConfigurationDescriptionHasBeenSet = true; m_runConfigurationDescription = std::forward<RunConfigurationDescriptionT>(value); }
    template<typename RunConfigurationDescriptionT = RunConfigurationDescription>
    ApplicationConfigurationDescription& WithRunConfigurationDescription(RunConfigurationDescriptionT&& value) { SetRunConfigurationDescription(std::forward<RunConfigurationDescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The details about a Managed Service for Apache Flink application.</p>
     */
    inline const FlinkApplicationConfigurationDescription& GetFlinkApplicationConfigurationDescription() const { return m_flinkApplicationConfigurationDescription; }
    inline bool FlinkApplicationConfigurationDescriptionHasBeenSet() const { return m_flinkApplicationConfigurationDescriptionHasBeenSet; }
    template<typename FlinkApplicationConfigurationDescriptionT = FlinkApplicationConfigurationDescription>
    void SetFlinkApplicationConfigurationDescription(FlinkApplicationConfigurationDescriptionT&& value) { m_flinkApplicationConfigurationDescriptionHasBeenSet = true; m_flinkApplicationConfigurationDescription = std::forward<FlinkApplicationConfigurationDescriptionT>(value); }
    template<typename FlinkApplicationConfigurationDescriptionT = FlinkApplicationConfigurationDescription>
    ApplicationConfigurationDescription& WithFlinkApplicationConfigurationDescription(FlinkApplicationConfigurationDescriptionT&& value) { SetFlinkApplicationConfigurationDescription(std::forward<FlinkApplicationConfigurationDescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Describes execution properties for a Managed Service for Apache Flink
     * application.</p>
     */
    inline const EnvironmentPropertyDescriptions& GetEnvironmentPropertyDescriptions() const { return m_environmentPropertyDescriptions; }
    inline bool EnvironmentPropertyDescriptionsHasBeenSet() const { return m_environmentPropertyDescriptionsHasBeenSet; }
    template<typename EnvironmentPropertyDescriptionsT = EnvironmentPropertyDescriptions>
    void SetEnvironmentPropertyDescriptions(EnvironmentPropertyDescriptionsT&& value) { m_environmentPropertyDescriptionsHasBeenSet = true; m_environmentPropertyDescriptions = std::forward<EnvironmentPropertyDescriptionsT>(value); }
    template<typename EnvironmentPropertyDescriptionsT = EnvironmentPropertyDescriptions>
    ApplicationConfigurationDescription& WithEnvironmentPropertyDescriptions(EnvironmentPropertyDescriptionsT&& value) { SetEnvironmentPropertyDescriptions(std::forward<EnvironmentPropertyDescriptionsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Describes whether snapshots are enabled for a Managed Service for Apache
     * Flink application.</p>
     */
    inline const ApplicationSnapshotConfigurationDescription& GetApplicationSnapshotConfigurationDescription() const { return m_applicationSnapshotConfigurationDescription; }
    inline bool ApplicationSnapshotConfigurationDescriptionHasBeenSet() const { return m_applicationSnapshotConfigurationDescriptionHasBeenSet; }
    template<typename ApplicationSnapshotConfigurationDescriptionT = ApplicationSnapshotConfigurationDescription>
    void SetApplicationSnapshotConfigurationDescription(ApplicationSnapshotConfigurationDescriptionT&& value) { m_applicationSnapshotConfigurationDescriptionHasBeenSet = true; m_applicationSnapshotConfigurationDescription = std::forward<ApplicationSnapshotConfigurationDescriptionT>(value); }
    template<typename ApplicationSnapshotConfigurationDescriptionT = ApplicationSnapshotConfigurationDescription>
    ApplicationConfigurationDescription& WithApplicationSnapshotConfigurationDescription(ApplicationSnapshotConfigurationDescriptionT&& value) { SetApplicationSnapshotConfigurationDescription(std::forward<ApplicationSnapshotConfigurationDescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Describes whether system rollbacks are enabled for a Managed Service for
     * Apache Flink application.</p>
     */
    inline const ApplicationSystemRollbackConfigurationDescription& GetApplicationSystemRollbackConfigurationDescription() const { return m_applicationSystemRollbackConfigurationDescription; }
    inline bool ApplicationSystemRollbackConfigurationDescriptionHasBeenSet() const { return m_applicationSystemRollbackConfigurationDescriptionHasBeenSet; }
    template<typename ApplicationSystemRollbackConfigurationDescriptionT = ApplicationSystemRollbackConfigurationDescription>
    void SetApplicationSystemRollbackConfigurationDescription(ApplicationSystemRollbackConfigurationDescriptionT&& value) { m_applicationSystemRollbackConfigurationDescriptionHasBeenSet = true; m_applicationSystemRollbackConfigurationDescription = std::forward<ApplicationSystemRollbackConfigurationDescriptionT>(value); }
    template<typename ApplicationSystemRollbackConfigurationDescriptionT = ApplicationSystemRollbackConfigurationDescription>
    ApplicationConfigurationDescription& WithApplicationSystemRollbackConfigurationDescription(ApplicationSystemRollbackConfigurationDescriptionT&& value) { SetApplicationSystemRollbackConfigurationDescription(std::forward<ApplicationSystemRollbackConfigurationDescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The array of descriptions of VPC configurations available to the
     * application.</p>
     */
    inline const Aws::Vector<VpcConfigurationDescription>& GetVpcConfigurationDescriptions() const { return m_vpcConfigurationDescriptions; }
    inline bool VpcConfigurationDescriptionsHasBeenSet() const { return m_vpcConfigurationDescriptionsHasBeenSet; }
    template<typename VpcConfigurationDescriptionsT = Aws::Vector<VpcConfigurationDescription>>
    void SetVpcConfigurationDescriptions(VpcConfigurationDescriptionsT&& value) { m_vpcConfigurationDescriptionsHasBeenSet = true; m_vpcConfigurationDescriptions = std::forward<VpcConfigurationDescriptionsT>(value); }
    template<typename VpcConfigurationDescriptionsT = Aws::Vector<VpcConfigurationDescription>>
    ApplicationConfigurationDescription& WithVpcConfigurationDescriptions(VpcConfigurationDescriptionsT&& value) { SetVpcConfigurationDescriptions(std::forward<VpcConfigurationDescriptionsT>(value)); return *this;}
    template<typename VpcConfigurationDescriptionsT = VpcConfigurationDescription>
    ApplicationConfigurationDescription& AddVpcConfigurationDescriptions(VpcConfigurationDescriptionsT&& value) { m_vpcConfigurationDescriptionsHasBeenSet = true; m_vpcConfigurationDescriptions.emplace_back(std::forward<VpcConfigurationDescriptionsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The configuration parameters for a Managed Service for Apache Flink Studio
     * notebook.</p>
     */
    inline const ZeppelinApplicationConfigurationDescription& GetZeppelinApplicationConfigurationDescription() const { return m_zeppelinApplicationConfigurationDescription; }
    inline bool ZeppelinApplicationConfigurationDescriptionHasBeenSet() const { return m_zeppelinApplicationConfigurationDescriptionHasBeenSet; }
    template<typename ZeppelinApplicationConfigurationDescriptionT = ZeppelinApplicationConfigurationDescription>
    void SetZeppelinApplicationConfigurationDescription(ZeppelinApplicationConfigurationDescriptionT&& value) { m_zeppelinApplicationConfigurationDescriptionHasBeenSet = true; m_zeppelinApplicationConfigurationDescription = std::forward<ZeppelinApplicationConfigurationDescriptionT>(value); }
    template<typename ZeppelinApplicationConfigurationDescriptionT = ZeppelinApplicationConfigurationDescription>
    ApplicationConfigurationDescription& WithZeppelinApplicationConfigurationDescription(ZeppelinApplicationConfigurationDescriptionT&& value) { SetZeppelinApplicationConfigurationDescription(std::forward<ZeppelinApplicationConfigurationDescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Describes the encryption at rest configuration.</p>
     */
    inline const ApplicationEncryptionConfigurationDescription& GetApplicationEncryptionConfigurationDescription() const { return m_applicationEncryptionConfigurationDescription; }
    inline bool ApplicationEncryptionConfigurationDescriptionHasBeenSet() const { return m_applicationEncryptionConfigurationDescriptionHasBeenSet; }
    template<typename ApplicationEncryptionConfigurationDescriptionT = ApplicationEncryptionConfigurationDescription>
    void SetApplicationEncryptionConfigurationDescription(ApplicationEncryptionConfigurationDescriptionT&& value) { m_applicationEncryptionConfigurationDescriptionHasBeenSet = true; m_applicationEncryptionConfigurationDescription = std::forward<ApplicationEncryptionConfigurationDescriptionT>(value); }
    template<typename ApplicationEncryptionConfigurationDescriptionT = ApplicationEncryptionConfigurationDescription>
    ApplicationConfigurationDescription& WithApplicationEncryptionConfigurationDescription(ApplicationEncryptionConfigurationDescriptionT&& value) { SetApplicationEncryptionConfigurationDescription(std::forward<ApplicationEncryptionConfigurationDescriptionT>(value)); return *this;}
    ///@}
  private:

    SqlApplicationConfigurationDescription m_sqlApplicationConfigurationDescription;
    bool m_sqlApplicationConfigurationDescriptionHasBeenSet = false;

    ApplicationCodeConfigurationDescription m_applicationCodeConfigurationDescription;
    bool m_applicationCodeConfigurationDescriptionHasBeenSet = false;

    RunConfigurationDescription m_runConfigurationDescription;
    bool m_runConfigurationDescriptionHasBeenSet = false;

    FlinkApplicationConfigurationDescription m_flinkApplicationConfigurationDescription;
    bool m_flinkApplicationConfigurationDescriptionHasBeenSet = false;

    EnvironmentPropertyDescriptions m_environmentPropertyDescriptions;
    bool m_environmentPropertyDescriptionsHasBeenSet = false;

    ApplicationSnapshotConfigurationDescription m_applicationSnapshotConfigurationDescription;
    bool m_applicationSnapshotConfigurationDescriptionHasBeenSet = false;

    ApplicationSystemRollbackConfigurationDescription m_applicationSystemRollbackConfigurationDescription;
    bool m_applicationSystemRollbackConfigurationDescriptionHasBeenSet = false;

    Aws::Vector<VpcConfigurationDescription> m_vpcConfigurationDescriptions;
    bool m_vpcConfigurationDescriptionsHasBeenSet = false;

    ZeppelinApplicationConfigurationDescription m_zeppelinApplicationConfigurationDescription;
    bool m_zeppelinApplicationConfigurationDescriptionHasBeenSet = false;

    ApplicationEncryptionConfigurationDescription m_applicationEncryptionConfigurationDescription;
    bool m_applicationEncryptionConfigurationDescriptionHasBeenSet = false;
  };

} // namespace Model
} // namespace KinesisAnalyticsV2
} // namespace Aws
