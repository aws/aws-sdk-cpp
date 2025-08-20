/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/kinesisanalyticsv2/KinesisAnalyticsV2_EXPORTS.h>
#include <aws/kinesisanalyticsv2/model/SqlApplicationConfigurationUpdate.h>
#include <aws/kinesisanalyticsv2/model/ApplicationCodeConfigurationUpdate.h>
#include <aws/kinesisanalyticsv2/model/FlinkApplicationConfigurationUpdate.h>
#include <aws/kinesisanalyticsv2/model/EnvironmentPropertyUpdates.h>
#include <aws/kinesisanalyticsv2/model/ApplicationSnapshotConfigurationUpdate.h>
#include <aws/kinesisanalyticsv2/model/ApplicationSystemRollbackConfigurationUpdate.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/kinesisanalyticsv2/model/ZeppelinApplicationConfigurationUpdate.h>
#include <aws/kinesisanalyticsv2/model/ApplicationEncryptionConfigurationUpdate.h>
#include <aws/kinesisanalyticsv2/model/VpcConfigurationUpdate.h>
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
   * <p>Describes updates to an application's configuration.</p><p><h3>See Also:</h3>
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/kinesisanalyticsv2-2018-05-23/ApplicationConfigurationUpdate">AWS
   * API Reference</a></p>
   */
  class ApplicationConfigurationUpdate
  {
  public:
    AWS_KINESISANALYTICSV2_API ApplicationConfigurationUpdate() = default;
    AWS_KINESISANALYTICSV2_API ApplicationConfigurationUpdate(Aws::Utils::Json::JsonView jsonValue);
    AWS_KINESISANALYTICSV2_API ApplicationConfigurationUpdate& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_KINESISANALYTICSV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Describes updates to a SQL-based Kinesis Data Analytics application's
     * configuration.</p>
     */
    inline const SqlApplicationConfigurationUpdate& GetSqlApplicationConfigurationUpdate() const { return m_sqlApplicationConfigurationUpdate; }
    inline bool SqlApplicationConfigurationUpdateHasBeenSet() const { return m_sqlApplicationConfigurationUpdateHasBeenSet; }
    template<typename SqlApplicationConfigurationUpdateT = SqlApplicationConfigurationUpdate>
    void SetSqlApplicationConfigurationUpdate(SqlApplicationConfigurationUpdateT&& value) { m_sqlApplicationConfigurationUpdateHasBeenSet = true; m_sqlApplicationConfigurationUpdate = std::forward<SqlApplicationConfigurationUpdateT>(value); }
    template<typename SqlApplicationConfigurationUpdateT = SqlApplicationConfigurationUpdate>
    ApplicationConfigurationUpdate& WithSqlApplicationConfigurationUpdate(SqlApplicationConfigurationUpdateT&& value) { SetSqlApplicationConfigurationUpdate(std::forward<SqlApplicationConfigurationUpdateT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Describes updates to an application's code configuration.</p>
     */
    inline const ApplicationCodeConfigurationUpdate& GetApplicationCodeConfigurationUpdate() const { return m_applicationCodeConfigurationUpdate; }
    inline bool ApplicationCodeConfigurationUpdateHasBeenSet() const { return m_applicationCodeConfigurationUpdateHasBeenSet; }
    template<typename ApplicationCodeConfigurationUpdateT = ApplicationCodeConfigurationUpdate>
    void SetApplicationCodeConfigurationUpdate(ApplicationCodeConfigurationUpdateT&& value) { m_applicationCodeConfigurationUpdateHasBeenSet = true; m_applicationCodeConfigurationUpdate = std::forward<ApplicationCodeConfigurationUpdateT>(value); }
    template<typename ApplicationCodeConfigurationUpdateT = ApplicationCodeConfigurationUpdate>
    ApplicationConfigurationUpdate& WithApplicationCodeConfigurationUpdate(ApplicationCodeConfigurationUpdateT&& value) { SetApplicationCodeConfigurationUpdate(std::forward<ApplicationCodeConfigurationUpdateT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Describes updates to a Managed Service for Apache Flink application's
     * configuration.</p>
     */
    inline const FlinkApplicationConfigurationUpdate& GetFlinkApplicationConfigurationUpdate() const { return m_flinkApplicationConfigurationUpdate; }
    inline bool FlinkApplicationConfigurationUpdateHasBeenSet() const { return m_flinkApplicationConfigurationUpdateHasBeenSet; }
    template<typename FlinkApplicationConfigurationUpdateT = FlinkApplicationConfigurationUpdate>
    void SetFlinkApplicationConfigurationUpdate(FlinkApplicationConfigurationUpdateT&& value) { m_flinkApplicationConfigurationUpdateHasBeenSet = true; m_flinkApplicationConfigurationUpdate = std::forward<FlinkApplicationConfigurationUpdateT>(value); }
    template<typename FlinkApplicationConfigurationUpdateT = FlinkApplicationConfigurationUpdate>
    ApplicationConfigurationUpdate& WithFlinkApplicationConfigurationUpdate(FlinkApplicationConfigurationUpdateT&& value) { SetFlinkApplicationConfigurationUpdate(std::forward<FlinkApplicationConfigurationUpdateT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Describes updates to the environment properties for a Managed Service for
     * Apache Flink application.</p>
     */
    inline const EnvironmentPropertyUpdates& GetEnvironmentPropertyUpdates() const { return m_environmentPropertyUpdates; }
    inline bool EnvironmentPropertyUpdatesHasBeenSet() const { return m_environmentPropertyUpdatesHasBeenSet; }
    template<typename EnvironmentPropertyUpdatesT = EnvironmentPropertyUpdates>
    void SetEnvironmentPropertyUpdates(EnvironmentPropertyUpdatesT&& value) { m_environmentPropertyUpdatesHasBeenSet = true; m_environmentPropertyUpdates = std::forward<EnvironmentPropertyUpdatesT>(value); }
    template<typename EnvironmentPropertyUpdatesT = EnvironmentPropertyUpdates>
    ApplicationConfigurationUpdate& WithEnvironmentPropertyUpdates(EnvironmentPropertyUpdatesT&& value) { SetEnvironmentPropertyUpdates(std::forward<EnvironmentPropertyUpdatesT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Describes whether snapshots are enabled for a Managed Service for Apache
     * Flink application.</p>
     */
    inline const ApplicationSnapshotConfigurationUpdate& GetApplicationSnapshotConfigurationUpdate() const { return m_applicationSnapshotConfigurationUpdate; }
    inline bool ApplicationSnapshotConfigurationUpdateHasBeenSet() const { return m_applicationSnapshotConfigurationUpdateHasBeenSet; }
    template<typename ApplicationSnapshotConfigurationUpdateT = ApplicationSnapshotConfigurationUpdate>
    void SetApplicationSnapshotConfigurationUpdate(ApplicationSnapshotConfigurationUpdateT&& value) { m_applicationSnapshotConfigurationUpdateHasBeenSet = true; m_applicationSnapshotConfigurationUpdate = std::forward<ApplicationSnapshotConfigurationUpdateT>(value); }
    template<typename ApplicationSnapshotConfigurationUpdateT = ApplicationSnapshotConfigurationUpdate>
    ApplicationConfigurationUpdate& WithApplicationSnapshotConfigurationUpdate(ApplicationSnapshotConfigurationUpdateT&& value) { SetApplicationSnapshotConfigurationUpdate(std::forward<ApplicationSnapshotConfigurationUpdateT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Describes whether system rollbacks are enabled for a Managed Service for
     * Apache Flink application.</p>
     */
    inline const ApplicationSystemRollbackConfigurationUpdate& GetApplicationSystemRollbackConfigurationUpdate() const { return m_applicationSystemRollbackConfigurationUpdate; }
    inline bool ApplicationSystemRollbackConfigurationUpdateHasBeenSet() const { return m_applicationSystemRollbackConfigurationUpdateHasBeenSet; }
    template<typename ApplicationSystemRollbackConfigurationUpdateT = ApplicationSystemRollbackConfigurationUpdate>
    void SetApplicationSystemRollbackConfigurationUpdate(ApplicationSystemRollbackConfigurationUpdateT&& value) { m_applicationSystemRollbackConfigurationUpdateHasBeenSet = true; m_applicationSystemRollbackConfigurationUpdate = std::forward<ApplicationSystemRollbackConfigurationUpdateT>(value); }
    template<typename ApplicationSystemRollbackConfigurationUpdateT = ApplicationSystemRollbackConfigurationUpdate>
    ApplicationConfigurationUpdate& WithApplicationSystemRollbackConfigurationUpdate(ApplicationSystemRollbackConfigurationUpdateT&& value) { SetApplicationSystemRollbackConfigurationUpdate(std::forward<ApplicationSystemRollbackConfigurationUpdateT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Updates to the array of descriptions of VPC configurations available to the
     * application.</p>
     */
    inline const Aws::Vector<VpcConfigurationUpdate>& GetVpcConfigurationUpdates() const { return m_vpcConfigurationUpdates; }
    inline bool VpcConfigurationUpdatesHasBeenSet() const { return m_vpcConfigurationUpdatesHasBeenSet; }
    template<typename VpcConfigurationUpdatesT = Aws::Vector<VpcConfigurationUpdate>>
    void SetVpcConfigurationUpdates(VpcConfigurationUpdatesT&& value) { m_vpcConfigurationUpdatesHasBeenSet = true; m_vpcConfigurationUpdates = std::forward<VpcConfigurationUpdatesT>(value); }
    template<typename VpcConfigurationUpdatesT = Aws::Vector<VpcConfigurationUpdate>>
    ApplicationConfigurationUpdate& WithVpcConfigurationUpdates(VpcConfigurationUpdatesT&& value) { SetVpcConfigurationUpdates(std::forward<VpcConfigurationUpdatesT>(value)); return *this;}
    template<typename VpcConfigurationUpdatesT = VpcConfigurationUpdate>
    ApplicationConfigurationUpdate& AddVpcConfigurationUpdates(VpcConfigurationUpdatesT&& value) { m_vpcConfigurationUpdatesHasBeenSet = true; m_vpcConfigurationUpdates.emplace_back(std::forward<VpcConfigurationUpdatesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Updates to the configuration of a Managed Service for Apache Flink Studio
     * notebook.</p>
     */
    inline const ZeppelinApplicationConfigurationUpdate& GetZeppelinApplicationConfigurationUpdate() const { return m_zeppelinApplicationConfigurationUpdate; }
    inline bool ZeppelinApplicationConfigurationUpdateHasBeenSet() const { return m_zeppelinApplicationConfigurationUpdateHasBeenSet; }
    template<typename ZeppelinApplicationConfigurationUpdateT = ZeppelinApplicationConfigurationUpdate>
    void SetZeppelinApplicationConfigurationUpdate(ZeppelinApplicationConfigurationUpdateT&& value) { m_zeppelinApplicationConfigurationUpdateHasBeenSet = true; m_zeppelinApplicationConfigurationUpdate = std::forward<ZeppelinApplicationConfigurationUpdateT>(value); }
    template<typename ZeppelinApplicationConfigurationUpdateT = ZeppelinApplicationConfigurationUpdate>
    ApplicationConfigurationUpdate& WithZeppelinApplicationConfigurationUpdate(ZeppelinApplicationConfigurationUpdateT&& value) { SetZeppelinApplicationConfigurationUpdate(std::forward<ZeppelinApplicationConfigurationUpdateT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Represents an update for encryption at rest configuration.</p>
     */
    inline const ApplicationEncryptionConfigurationUpdate& GetApplicationEncryptionConfigurationUpdate() const { return m_applicationEncryptionConfigurationUpdate; }
    inline bool ApplicationEncryptionConfigurationUpdateHasBeenSet() const { return m_applicationEncryptionConfigurationUpdateHasBeenSet; }
    template<typename ApplicationEncryptionConfigurationUpdateT = ApplicationEncryptionConfigurationUpdate>
    void SetApplicationEncryptionConfigurationUpdate(ApplicationEncryptionConfigurationUpdateT&& value) { m_applicationEncryptionConfigurationUpdateHasBeenSet = true; m_applicationEncryptionConfigurationUpdate = std::forward<ApplicationEncryptionConfigurationUpdateT>(value); }
    template<typename ApplicationEncryptionConfigurationUpdateT = ApplicationEncryptionConfigurationUpdate>
    ApplicationConfigurationUpdate& WithApplicationEncryptionConfigurationUpdate(ApplicationEncryptionConfigurationUpdateT&& value) { SetApplicationEncryptionConfigurationUpdate(std::forward<ApplicationEncryptionConfigurationUpdateT>(value)); return *this;}
    ///@}
  private:

    SqlApplicationConfigurationUpdate m_sqlApplicationConfigurationUpdate;
    bool m_sqlApplicationConfigurationUpdateHasBeenSet = false;

    ApplicationCodeConfigurationUpdate m_applicationCodeConfigurationUpdate;
    bool m_applicationCodeConfigurationUpdateHasBeenSet = false;

    FlinkApplicationConfigurationUpdate m_flinkApplicationConfigurationUpdate;
    bool m_flinkApplicationConfigurationUpdateHasBeenSet = false;

    EnvironmentPropertyUpdates m_environmentPropertyUpdates;
    bool m_environmentPropertyUpdatesHasBeenSet = false;

    ApplicationSnapshotConfigurationUpdate m_applicationSnapshotConfigurationUpdate;
    bool m_applicationSnapshotConfigurationUpdateHasBeenSet = false;

    ApplicationSystemRollbackConfigurationUpdate m_applicationSystemRollbackConfigurationUpdate;
    bool m_applicationSystemRollbackConfigurationUpdateHasBeenSet = false;

    Aws::Vector<VpcConfigurationUpdate> m_vpcConfigurationUpdates;
    bool m_vpcConfigurationUpdatesHasBeenSet = false;

    ZeppelinApplicationConfigurationUpdate m_zeppelinApplicationConfigurationUpdate;
    bool m_zeppelinApplicationConfigurationUpdateHasBeenSet = false;

    ApplicationEncryptionConfigurationUpdate m_applicationEncryptionConfigurationUpdate;
    bool m_applicationEncryptionConfigurationUpdateHasBeenSet = false;
  };

} // namespace Model
} // namespace KinesisAnalyticsV2
} // namespace Aws
