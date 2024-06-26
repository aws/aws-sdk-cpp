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
    AWS_KINESISANALYTICSV2_API ApplicationConfigurationDescription();
    AWS_KINESISANALYTICSV2_API ApplicationConfigurationDescription(Aws::Utils::Json::JsonView jsonValue);
    AWS_KINESISANALYTICSV2_API ApplicationConfigurationDescription& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_KINESISANALYTICSV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The details about inputs, outputs, and reference data sources for a SQL-based
     * Kinesis Data Analytics application.</p>
     */
    inline const SqlApplicationConfigurationDescription& GetSqlApplicationConfigurationDescription() const{ return m_sqlApplicationConfigurationDescription; }
    inline bool SqlApplicationConfigurationDescriptionHasBeenSet() const { return m_sqlApplicationConfigurationDescriptionHasBeenSet; }
    inline void SetSqlApplicationConfigurationDescription(const SqlApplicationConfigurationDescription& value) { m_sqlApplicationConfigurationDescriptionHasBeenSet = true; m_sqlApplicationConfigurationDescription = value; }
    inline void SetSqlApplicationConfigurationDescription(SqlApplicationConfigurationDescription&& value) { m_sqlApplicationConfigurationDescriptionHasBeenSet = true; m_sqlApplicationConfigurationDescription = std::move(value); }
    inline ApplicationConfigurationDescription& WithSqlApplicationConfigurationDescription(const SqlApplicationConfigurationDescription& value) { SetSqlApplicationConfigurationDescription(value); return *this;}
    inline ApplicationConfigurationDescription& WithSqlApplicationConfigurationDescription(SqlApplicationConfigurationDescription&& value) { SetSqlApplicationConfigurationDescription(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The details about the application code for a Managed Service for Apache Flink
     * application.</p>
     */
    inline const ApplicationCodeConfigurationDescription& GetApplicationCodeConfigurationDescription() const{ return m_applicationCodeConfigurationDescription; }
    inline bool ApplicationCodeConfigurationDescriptionHasBeenSet() const { return m_applicationCodeConfigurationDescriptionHasBeenSet; }
    inline void SetApplicationCodeConfigurationDescription(const ApplicationCodeConfigurationDescription& value) { m_applicationCodeConfigurationDescriptionHasBeenSet = true; m_applicationCodeConfigurationDescription = value; }
    inline void SetApplicationCodeConfigurationDescription(ApplicationCodeConfigurationDescription&& value) { m_applicationCodeConfigurationDescriptionHasBeenSet = true; m_applicationCodeConfigurationDescription = std::move(value); }
    inline ApplicationConfigurationDescription& WithApplicationCodeConfigurationDescription(const ApplicationCodeConfigurationDescription& value) { SetApplicationCodeConfigurationDescription(value); return *this;}
    inline ApplicationConfigurationDescription& WithApplicationCodeConfigurationDescription(ApplicationCodeConfigurationDescription&& value) { SetApplicationCodeConfigurationDescription(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The details about the starting properties for a Managed Service for Apache
     * Flink application.</p>
     */
    inline const RunConfigurationDescription& GetRunConfigurationDescription() const{ return m_runConfigurationDescription; }
    inline bool RunConfigurationDescriptionHasBeenSet() const { return m_runConfigurationDescriptionHasBeenSet; }
    inline void SetRunConfigurationDescription(const RunConfigurationDescription& value) { m_runConfigurationDescriptionHasBeenSet = true; m_runConfigurationDescription = value; }
    inline void SetRunConfigurationDescription(RunConfigurationDescription&& value) { m_runConfigurationDescriptionHasBeenSet = true; m_runConfigurationDescription = std::move(value); }
    inline ApplicationConfigurationDescription& WithRunConfigurationDescription(const RunConfigurationDescription& value) { SetRunConfigurationDescription(value); return *this;}
    inline ApplicationConfigurationDescription& WithRunConfigurationDescription(RunConfigurationDescription&& value) { SetRunConfigurationDescription(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The details about a Managed Service for Apache Flink application.</p>
     */
    inline const FlinkApplicationConfigurationDescription& GetFlinkApplicationConfigurationDescription() const{ return m_flinkApplicationConfigurationDescription; }
    inline bool FlinkApplicationConfigurationDescriptionHasBeenSet() const { return m_flinkApplicationConfigurationDescriptionHasBeenSet; }
    inline void SetFlinkApplicationConfigurationDescription(const FlinkApplicationConfigurationDescription& value) { m_flinkApplicationConfigurationDescriptionHasBeenSet = true; m_flinkApplicationConfigurationDescription = value; }
    inline void SetFlinkApplicationConfigurationDescription(FlinkApplicationConfigurationDescription&& value) { m_flinkApplicationConfigurationDescriptionHasBeenSet = true; m_flinkApplicationConfigurationDescription = std::move(value); }
    inline ApplicationConfigurationDescription& WithFlinkApplicationConfigurationDescription(const FlinkApplicationConfigurationDescription& value) { SetFlinkApplicationConfigurationDescription(value); return *this;}
    inline ApplicationConfigurationDescription& WithFlinkApplicationConfigurationDescription(FlinkApplicationConfigurationDescription&& value) { SetFlinkApplicationConfigurationDescription(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Describes execution properties for a Managed Service for Apache Flink
     * application.</p>
     */
    inline const EnvironmentPropertyDescriptions& GetEnvironmentPropertyDescriptions() const{ return m_environmentPropertyDescriptions; }
    inline bool EnvironmentPropertyDescriptionsHasBeenSet() const { return m_environmentPropertyDescriptionsHasBeenSet; }
    inline void SetEnvironmentPropertyDescriptions(const EnvironmentPropertyDescriptions& value) { m_environmentPropertyDescriptionsHasBeenSet = true; m_environmentPropertyDescriptions = value; }
    inline void SetEnvironmentPropertyDescriptions(EnvironmentPropertyDescriptions&& value) { m_environmentPropertyDescriptionsHasBeenSet = true; m_environmentPropertyDescriptions = std::move(value); }
    inline ApplicationConfigurationDescription& WithEnvironmentPropertyDescriptions(const EnvironmentPropertyDescriptions& value) { SetEnvironmentPropertyDescriptions(value); return *this;}
    inline ApplicationConfigurationDescription& WithEnvironmentPropertyDescriptions(EnvironmentPropertyDescriptions&& value) { SetEnvironmentPropertyDescriptions(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Describes whether snapshots are enabled for a Managed Service for Apache
     * Flink application.</p>
     */
    inline const ApplicationSnapshotConfigurationDescription& GetApplicationSnapshotConfigurationDescription() const{ return m_applicationSnapshotConfigurationDescription; }
    inline bool ApplicationSnapshotConfigurationDescriptionHasBeenSet() const { return m_applicationSnapshotConfigurationDescriptionHasBeenSet; }
    inline void SetApplicationSnapshotConfigurationDescription(const ApplicationSnapshotConfigurationDescription& value) { m_applicationSnapshotConfigurationDescriptionHasBeenSet = true; m_applicationSnapshotConfigurationDescription = value; }
    inline void SetApplicationSnapshotConfigurationDescription(ApplicationSnapshotConfigurationDescription&& value) { m_applicationSnapshotConfigurationDescriptionHasBeenSet = true; m_applicationSnapshotConfigurationDescription = std::move(value); }
    inline ApplicationConfigurationDescription& WithApplicationSnapshotConfigurationDescription(const ApplicationSnapshotConfigurationDescription& value) { SetApplicationSnapshotConfigurationDescription(value); return *this;}
    inline ApplicationConfigurationDescription& WithApplicationSnapshotConfigurationDescription(ApplicationSnapshotConfigurationDescription&& value) { SetApplicationSnapshotConfigurationDescription(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const ApplicationSystemRollbackConfigurationDescription& GetApplicationSystemRollbackConfigurationDescription() const{ return m_applicationSystemRollbackConfigurationDescription; }
    inline bool ApplicationSystemRollbackConfigurationDescriptionHasBeenSet() const { return m_applicationSystemRollbackConfigurationDescriptionHasBeenSet; }
    inline void SetApplicationSystemRollbackConfigurationDescription(const ApplicationSystemRollbackConfigurationDescription& value) { m_applicationSystemRollbackConfigurationDescriptionHasBeenSet = true; m_applicationSystemRollbackConfigurationDescription = value; }
    inline void SetApplicationSystemRollbackConfigurationDescription(ApplicationSystemRollbackConfigurationDescription&& value) { m_applicationSystemRollbackConfigurationDescriptionHasBeenSet = true; m_applicationSystemRollbackConfigurationDescription = std::move(value); }
    inline ApplicationConfigurationDescription& WithApplicationSystemRollbackConfigurationDescription(const ApplicationSystemRollbackConfigurationDescription& value) { SetApplicationSystemRollbackConfigurationDescription(value); return *this;}
    inline ApplicationConfigurationDescription& WithApplicationSystemRollbackConfigurationDescription(ApplicationSystemRollbackConfigurationDescription&& value) { SetApplicationSystemRollbackConfigurationDescription(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The array of descriptions of VPC configurations available to the
     * application.</p>
     */
    inline const Aws::Vector<VpcConfigurationDescription>& GetVpcConfigurationDescriptions() const{ return m_vpcConfigurationDescriptions; }
    inline bool VpcConfigurationDescriptionsHasBeenSet() const { return m_vpcConfigurationDescriptionsHasBeenSet; }
    inline void SetVpcConfigurationDescriptions(const Aws::Vector<VpcConfigurationDescription>& value) { m_vpcConfigurationDescriptionsHasBeenSet = true; m_vpcConfigurationDescriptions = value; }
    inline void SetVpcConfigurationDescriptions(Aws::Vector<VpcConfigurationDescription>&& value) { m_vpcConfigurationDescriptionsHasBeenSet = true; m_vpcConfigurationDescriptions = std::move(value); }
    inline ApplicationConfigurationDescription& WithVpcConfigurationDescriptions(const Aws::Vector<VpcConfigurationDescription>& value) { SetVpcConfigurationDescriptions(value); return *this;}
    inline ApplicationConfigurationDescription& WithVpcConfigurationDescriptions(Aws::Vector<VpcConfigurationDescription>&& value) { SetVpcConfigurationDescriptions(std::move(value)); return *this;}
    inline ApplicationConfigurationDescription& AddVpcConfigurationDescriptions(const VpcConfigurationDescription& value) { m_vpcConfigurationDescriptionsHasBeenSet = true; m_vpcConfigurationDescriptions.push_back(value); return *this; }
    inline ApplicationConfigurationDescription& AddVpcConfigurationDescriptions(VpcConfigurationDescription&& value) { m_vpcConfigurationDescriptionsHasBeenSet = true; m_vpcConfigurationDescriptions.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The configuration parameters for a Managed Service for Apache Flink Studio
     * notebook.</p>
     */
    inline const ZeppelinApplicationConfigurationDescription& GetZeppelinApplicationConfigurationDescription() const{ return m_zeppelinApplicationConfigurationDescription; }
    inline bool ZeppelinApplicationConfigurationDescriptionHasBeenSet() const { return m_zeppelinApplicationConfigurationDescriptionHasBeenSet; }
    inline void SetZeppelinApplicationConfigurationDescription(const ZeppelinApplicationConfigurationDescription& value) { m_zeppelinApplicationConfigurationDescriptionHasBeenSet = true; m_zeppelinApplicationConfigurationDescription = value; }
    inline void SetZeppelinApplicationConfigurationDescription(ZeppelinApplicationConfigurationDescription&& value) { m_zeppelinApplicationConfigurationDescriptionHasBeenSet = true; m_zeppelinApplicationConfigurationDescription = std::move(value); }
    inline ApplicationConfigurationDescription& WithZeppelinApplicationConfigurationDescription(const ZeppelinApplicationConfigurationDescription& value) { SetZeppelinApplicationConfigurationDescription(value); return *this;}
    inline ApplicationConfigurationDescription& WithZeppelinApplicationConfigurationDescription(ZeppelinApplicationConfigurationDescription&& value) { SetZeppelinApplicationConfigurationDescription(std::move(value)); return *this;}
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
  };

} // namespace Model
} // namespace KinesisAnalyticsV2
} // namespace Aws
