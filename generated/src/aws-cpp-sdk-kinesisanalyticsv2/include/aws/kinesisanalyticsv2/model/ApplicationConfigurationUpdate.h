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
    AWS_KINESISANALYTICSV2_API ApplicationConfigurationUpdate();
    AWS_KINESISANALYTICSV2_API ApplicationConfigurationUpdate(Aws::Utils::Json::JsonView jsonValue);
    AWS_KINESISANALYTICSV2_API ApplicationConfigurationUpdate& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_KINESISANALYTICSV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Describes updates to a SQL-based Kinesis Data Analytics application's
     * configuration.</p>
     */
    inline const SqlApplicationConfigurationUpdate& GetSqlApplicationConfigurationUpdate() const{ return m_sqlApplicationConfigurationUpdate; }
    inline bool SqlApplicationConfigurationUpdateHasBeenSet() const { return m_sqlApplicationConfigurationUpdateHasBeenSet; }
    inline void SetSqlApplicationConfigurationUpdate(const SqlApplicationConfigurationUpdate& value) { m_sqlApplicationConfigurationUpdateHasBeenSet = true; m_sqlApplicationConfigurationUpdate = value; }
    inline void SetSqlApplicationConfigurationUpdate(SqlApplicationConfigurationUpdate&& value) { m_sqlApplicationConfigurationUpdateHasBeenSet = true; m_sqlApplicationConfigurationUpdate = std::move(value); }
    inline ApplicationConfigurationUpdate& WithSqlApplicationConfigurationUpdate(const SqlApplicationConfigurationUpdate& value) { SetSqlApplicationConfigurationUpdate(value); return *this;}
    inline ApplicationConfigurationUpdate& WithSqlApplicationConfigurationUpdate(SqlApplicationConfigurationUpdate&& value) { SetSqlApplicationConfigurationUpdate(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Describes updates to an application's code configuration.</p>
     */
    inline const ApplicationCodeConfigurationUpdate& GetApplicationCodeConfigurationUpdate() const{ return m_applicationCodeConfigurationUpdate; }
    inline bool ApplicationCodeConfigurationUpdateHasBeenSet() const { return m_applicationCodeConfigurationUpdateHasBeenSet; }
    inline void SetApplicationCodeConfigurationUpdate(const ApplicationCodeConfigurationUpdate& value) { m_applicationCodeConfigurationUpdateHasBeenSet = true; m_applicationCodeConfigurationUpdate = value; }
    inline void SetApplicationCodeConfigurationUpdate(ApplicationCodeConfigurationUpdate&& value) { m_applicationCodeConfigurationUpdateHasBeenSet = true; m_applicationCodeConfigurationUpdate = std::move(value); }
    inline ApplicationConfigurationUpdate& WithApplicationCodeConfigurationUpdate(const ApplicationCodeConfigurationUpdate& value) { SetApplicationCodeConfigurationUpdate(value); return *this;}
    inline ApplicationConfigurationUpdate& WithApplicationCodeConfigurationUpdate(ApplicationCodeConfigurationUpdate&& value) { SetApplicationCodeConfigurationUpdate(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Describes updates to a Managed Service for Apache Flink application's
     * configuration.</p>
     */
    inline const FlinkApplicationConfigurationUpdate& GetFlinkApplicationConfigurationUpdate() const{ return m_flinkApplicationConfigurationUpdate; }
    inline bool FlinkApplicationConfigurationUpdateHasBeenSet() const { return m_flinkApplicationConfigurationUpdateHasBeenSet; }
    inline void SetFlinkApplicationConfigurationUpdate(const FlinkApplicationConfigurationUpdate& value) { m_flinkApplicationConfigurationUpdateHasBeenSet = true; m_flinkApplicationConfigurationUpdate = value; }
    inline void SetFlinkApplicationConfigurationUpdate(FlinkApplicationConfigurationUpdate&& value) { m_flinkApplicationConfigurationUpdateHasBeenSet = true; m_flinkApplicationConfigurationUpdate = std::move(value); }
    inline ApplicationConfigurationUpdate& WithFlinkApplicationConfigurationUpdate(const FlinkApplicationConfigurationUpdate& value) { SetFlinkApplicationConfigurationUpdate(value); return *this;}
    inline ApplicationConfigurationUpdate& WithFlinkApplicationConfigurationUpdate(FlinkApplicationConfigurationUpdate&& value) { SetFlinkApplicationConfigurationUpdate(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Describes updates to the environment properties for a Managed Service for
     * Apache Flink application.</p>
     */
    inline const EnvironmentPropertyUpdates& GetEnvironmentPropertyUpdates() const{ return m_environmentPropertyUpdates; }
    inline bool EnvironmentPropertyUpdatesHasBeenSet() const { return m_environmentPropertyUpdatesHasBeenSet; }
    inline void SetEnvironmentPropertyUpdates(const EnvironmentPropertyUpdates& value) { m_environmentPropertyUpdatesHasBeenSet = true; m_environmentPropertyUpdates = value; }
    inline void SetEnvironmentPropertyUpdates(EnvironmentPropertyUpdates&& value) { m_environmentPropertyUpdatesHasBeenSet = true; m_environmentPropertyUpdates = std::move(value); }
    inline ApplicationConfigurationUpdate& WithEnvironmentPropertyUpdates(const EnvironmentPropertyUpdates& value) { SetEnvironmentPropertyUpdates(value); return *this;}
    inline ApplicationConfigurationUpdate& WithEnvironmentPropertyUpdates(EnvironmentPropertyUpdates&& value) { SetEnvironmentPropertyUpdates(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Describes whether snapshots are enabled for a Managed Service for Apache
     * Flink application.</p>
     */
    inline const ApplicationSnapshotConfigurationUpdate& GetApplicationSnapshotConfigurationUpdate() const{ return m_applicationSnapshotConfigurationUpdate; }
    inline bool ApplicationSnapshotConfigurationUpdateHasBeenSet() const { return m_applicationSnapshotConfigurationUpdateHasBeenSet; }
    inline void SetApplicationSnapshotConfigurationUpdate(const ApplicationSnapshotConfigurationUpdate& value) { m_applicationSnapshotConfigurationUpdateHasBeenSet = true; m_applicationSnapshotConfigurationUpdate = value; }
    inline void SetApplicationSnapshotConfigurationUpdate(ApplicationSnapshotConfigurationUpdate&& value) { m_applicationSnapshotConfigurationUpdateHasBeenSet = true; m_applicationSnapshotConfigurationUpdate = std::move(value); }
    inline ApplicationConfigurationUpdate& WithApplicationSnapshotConfigurationUpdate(const ApplicationSnapshotConfigurationUpdate& value) { SetApplicationSnapshotConfigurationUpdate(value); return *this;}
    inline ApplicationConfigurationUpdate& WithApplicationSnapshotConfigurationUpdate(ApplicationSnapshotConfigurationUpdate&& value) { SetApplicationSnapshotConfigurationUpdate(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const ApplicationSystemRollbackConfigurationUpdate& GetApplicationSystemRollbackConfigurationUpdate() const{ return m_applicationSystemRollbackConfigurationUpdate; }
    inline bool ApplicationSystemRollbackConfigurationUpdateHasBeenSet() const { return m_applicationSystemRollbackConfigurationUpdateHasBeenSet; }
    inline void SetApplicationSystemRollbackConfigurationUpdate(const ApplicationSystemRollbackConfigurationUpdate& value) { m_applicationSystemRollbackConfigurationUpdateHasBeenSet = true; m_applicationSystemRollbackConfigurationUpdate = value; }
    inline void SetApplicationSystemRollbackConfigurationUpdate(ApplicationSystemRollbackConfigurationUpdate&& value) { m_applicationSystemRollbackConfigurationUpdateHasBeenSet = true; m_applicationSystemRollbackConfigurationUpdate = std::move(value); }
    inline ApplicationConfigurationUpdate& WithApplicationSystemRollbackConfigurationUpdate(const ApplicationSystemRollbackConfigurationUpdate& value) { SetApplicationSystemRollbackConfigurationUpdate(value); return *this;}
    inline ApplicationConfigurationUpdate& WithApplicationSystemRollbackConfigurationUpdate(ApplicationSystemRollbackConfigurationUpdate&& value) { SetApplicationSystemRollbackConfigurationUpdate(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Updates to the array of descriptions of VPC configurations available to the
     * application.</p>
     */
    inline const Aws::Vector<VpcConfigurationUpdate>& GetVpcConfigurationUpdates() const{ return m_vpcConfigurationUpdates; }
    inline bool VpcConfigurationUpdatesHasBeenSet() const { return m_vpcConfigurationUpdatesHasBeenSet; }
    inline void SetVpcConfigurationUpdates(const Aws::Vector<VpcConfigurationUpdate>& value) { m_vpcConfigurationUpdatesHasBeenSet = true; m_vpcConfigurationUpdates = value; }
    inline void SetVpcConfigurationUpdates(Aws::Vector<VpcConfigurationUpdate>&& value) { m_vpcConfigurationUpdatesHasBeenSet = true; m_vpcConfigurationUpdates = std::move(value); }
    inline ApplicationConfigurationUpdate& WithVpcConfigurationUpdates(const Aws::Vector<VpcConfigurationUpdate>& value) { SetVpcConfigurationUpdates(value); return *this;}
    inline ApplicationConfigurationUpdate& WithVpcConfigurationUpdates(Aws::Vector<VpcConfigurationUpdate>&& value) { SetVpcConfigurationUpdates(std::move(value)); return *this;}
    inline ApplicationConfigurationUpdate& AddVpcConfigurationUpdates(const VpcConfigurationUpdate& value) { m_vpcConfigurationUpdatesHasBeenSet = true; m_vpcConfigurationUpdates.push_back(value); return *this; }
    inline ApplicationConfigurationUpdate& AddVpcConfigurationUpdates(VpcConfigurationUpdate&& value) { m_vpcConfigurationUpdatesHasBeenSet = true; m_vpcConfigurationUpdates.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Updates to the configuration of a Managed Service for Apache Flink Studio
     * notebook.</p>
     */
    inline const ZeppelinApplicationConfigurationUpdate& GetZeppelinApplicationConfigurationUpdate() const{ return m_zeppelinApplicationConfigurationUpdate; }
    inline bool ZeppelinApplicationConfigurationUpdateHasBeenSet() const { return m_zeppelinApplicationConfigurationUpdateHasBeenSet; }
    inline void SetZeppelinApplicationConfigurationUpdate(const ZeppelinApplicationConfigurationUpdate& value) { m_zeppelinApplicationConfigurationUpdateHasBeenSet = true; m_zeppelinApplicationConfigurationUpdate = value; }
    inline void SetZeppelinApplicationConfigurationUpdate(ZeppelinApplicationConfigurationUpdate&& value) { m_zeppelinApplicationConfigurationUpdateHasBeenSet = true; m_zeppelinApplicationConfigurationUpdate = std::move(value); }
    inline ApplicationConfigurationUpdate& WithZeppelinApplicationConfigurationUpdate(const ZeppelinApplicationConfigurationUpdate& value) { SetZeppelinApplicationConfigurationUpdate(value); return *this;}
    inline ApplicationConfigurationUpdate& WithZeppelinApplicationConfigurationUpdate(ZeppelinApplicationConfigurationUpdate&& value) { SetZeppelinApplicationConfigurationUpdate(std::move(value)); return *this;}
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
  };

} // namespace Model
} // namespace KinesisAnalyticsV2
} // namespace Aws
