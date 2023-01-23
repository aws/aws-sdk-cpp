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


    /**
     * <p>Describes updates to a SQL-based Kinesis Data Analytics application's
     * configuration.</p>
     */
    inline const SqlApplicationConfigurationUpdate& GetSqlApplicationConfigurationUpdate() const{ return m_sqlApplicationConfigurationUpdate; }

    /**
     * <p>Describes updates to a SQL-based Kinesis Data Analytics application's
     * configuration.</p>
     */
    inline bool SqlApplicationConfigurationUpdateHasBeenSet() const { return m_sqlApplicationConfigurationUpdateHasBeenSet; }

    /**
     * <p>Describes updates to a SQL-based Kinesis Data Analytics application's
     * configuration.</p>
     */
    inline void SetSqlApplicationConfigurationUpdate(const SqlApplicationConfigurationUpdate& value) { m_sqlApplicationConfigurationUpdateHasBeenSet = true; m_sqlApplicationConfigurationUpdate = value; }

    /**
     * <p>Describes updates to a SQL-based Kinesis Data Analytics application's
     * configuration.</p>
     */
    inline void SetSqlApplicationConfigurationUpdate(SqlApplicationConfigurationUpdate&& value) { m_sqlApplicationConfigurationUpdateHasBeenSet = true; m_sqlApplicationConfigurationUpdate = std::move(value); }

    /**
     * <p>Describes updates to a SQL-based Kinesis Data Analytics application's
     * configuration.</p>
     */
    inline ApplicationConfigurationUpdate& WithSqlApplicationConfigurationUpdate(const SqlApplicationConfigurationUpdate& value) { SetSqlApplicationConfigurationUpdate(value); return *this;}

    /**
     * <p>Describes updates to a SQL-based Kinesis Data Analytics application's
     * configuration.</p>
     */
    inline ApplicationConfigurationUpdate& WithSqlApplicationConfigurationUpdate(SqlApplicationConfigurationUpdate&& value) { SetSqlApplicationConfigurationUpdate(std::move(value)); return *this;}


    /**
     * <p>Describes updates to an application's code configuration.</p>
     */
    inline const ApplicationCodeConfigurationUpdate& GetApplicationCodeConfigurationUpdate() const{ return m_applicationCodeConfigurationUpdate; }

    /**
     * <p>Describes updates to an application's code configuration.</p>
     */
    inline bool ApplicationCodeConfigurationUpdateHasBeenSet() const { return m_applicationCodeConfigurationUpdateHasBeenSet; }

    /**
     * <p>Describes updates to an application's code configuration.</p>
     */
    inline void SetApplicationCodeConfigurationUpdate(const ApplicationCodeConfigurationUpdate& value) { m_applicationCodeConfigurationUpdateHasBeenSet = true; m_applicationCodeConfigurationUpdate = value; }

    /**
     * <p>Describes updates to an application's code configuration.</p>
     */
    inline void SetApplicationCodeConfigurationUpdate(ApplicationCodeConfigurationUpdate&& value) { m_applicationCodeConfigurationUpdateHasBeenSet = true; m_applicationCodeConfigurationUpdate = std::move(value); }

    /**
     * <p>Describes updates to an application's code configuration.</p>
     */
    inline ApplicationConfigurationUpdate& WithApplicationCodeConfigurationUpdate(const ApplicationCodeConfigurationUpdate& value) { SetApplicationCodeConfigurationUpdate(value); return *this;}

    /**
     * <p>Describes updates to an application's code configuration.</p>
     */
    inline ApplicationConfigurationUpdate& WithApplicationCodeConfigurationUpdate(ApplicationCodeConfigurationUpdate&& value) { SetApplicationCodeConfigurationUpdate(std::move(value)); return *this;}


    /**
     * <p>Describes updates to a Flink-based Kinesis Data Analytics application's
     * configuration.</p>
     */
    inline const FlinkApplicationConfigurationUpdate& GetFlinkApplicationConfigurationUpdate() const{ return m_flinkApplicationConfigurationUpdate; }

    /**
     * <p>Describes updates to a Flink-based Kinesis Data Analytics application's
     * configuration.</p>
     */
    inline bool FlinkApplicationConfigurationUpdateHasBeenSet() const { return m_flinkApplicationConfigurationUpdateHasBeenSet; }

    /**
     * <p>Describes updates to a Flink-based Kinesis Data Analytics application's
     * configuration.</p>
     */
    inline void SetFlinkApplicationConfigurationUpdate(const FlinkApplicationConfigurationUpdate& value) { m_flinkApplicationConfigurationUpdateHasBeenSet = true; m_flinkApplicationConfigurationUpdate = value; }

    /**
     * <p>Describes updates to a Flink-based Kinesis Data Analytics application's
     * configuration.</p>
     */
    inline void SetFlinkApplicationConfigurationUpdate(FlinkApplicationConfigurationUpdate&& value) { m_flinkApplicationConfigurationUpdateHasBeenSet = true; m_flinkApplicationConfigurationUpdate = std::move(value); }

    /**
     * <p>Describes updates to a Flink-based Kinesis Data Analytics application's
     * configuration.</p>
     */
    inline ApplicationConfigurationUpdate& WithFlinkApplicationConfigurationUpdate(const FlinkApplicationConfigurationUpdate& value) { SetFlinkApplicationConfigurationUpdate(value); return *this;}

    /**
     * <p>Describes updates to a Flink-based Kinesis Data Analytics application's
     * configuration.</p>
     */
    inline ApplicationConfigurationUpdate& WithFlinkApplicationConfigurationUpdate(FlinkApplicationConfigurationUpdate&& value) { SetFlinkApplicationConfigurationUpdate(std::move(value)); return *this;}


    /**
     * <p>Describes updates to the environment properties for a Flink-based Kinesis
     * Data Analytics application.</p>
     */
    inline const EnvironmentPropertyUpdates& GetEnvironmentPropertyUpdates() const{ return m_environmentPropertyUpdates; }

    /**
     * <p>Describes updates to the environment properties for a Flink-based Kinesis
     * Data Analytics application.</p>
     */
    inline bool EnvironmentPropertyUpdatesHasBeenSet() const { return m_environmentPropertyUpdatesHasBeenSet; }

    /**
     * <p>Describes updates to the environment properties for a Flink-based Kinesis
     * Data Analytics application.</p>
     */
    inline void SetEnvironmentPropertyUpdates(const EnvironmentPropertyUpdates& value) { m_environmentPropertyUpdatesHasBeenSet = true; m_environmentPropertyUpdates = value; }

    /**
     * <p>Describes updates to the environment properties for a Flink-based Kinesis
     * Data Analytics application.</p>
     */
    inline void SetEnvironmentPropertyUpdates(EnvironmentPropertyUpdates&& value) { m_environmentPropertyUpdatesHasBeenSet = true; m_environmentPropertyUpdates = std::move(value); }

    /**
     * <p>Describes updates to the environment properties for a Flink-based Kinesis
     * Data Analytics application.</p>
     */
    inline ApplicationConfigurationUpdate& WithEnvironmentPropertyUpdates(const EnvironmentPropertyUpdates& value) { SetEnvironmentPropertyUpdates(value); return *this;}

    /**
     * <p>Describes updates to the environment properties for a Flink-based Kinesis
     * Data Analytics application.</p>
     */
    inline ApplicationConfigurationUpdate& WithEnvironmentPropertyUpdates(EnvironmentPropertyUpdates&& value) { SetEnvironmentPropertyUpdates(std::move(value)); return *this;}


    /**
     * <p>Describes whether snapshots are enabled for a Flink-based Kinesis Data
     * Analytics application.</p>
     */
    inline const ApplicationSnapshotConfigurationUpdate& GetApplicationSnapshotConfigurationUpdate() const{ return m_applicationSnapshotConfigurationUpdate; }

    /**
     * <p>Describes whether snapshots are enabled for a Flink-based Kinesis Data
     * Analytics application.</p>
     */
    inline bool ApplicationSnapshotConfigurationUpdateHasBeenSet() const { return m_applicationSnapshotConfigurationUpdateHasBeenSet; }

    /**
     * <p>Describes whether snapshots are enabled for a Flink-based Kinesis Data
     * Analytics application.</p>
     */
    inline void SetApplicationSnapshotConfigurationUpdate(const ApplicationSnapshotConfigurationUpdate& value) { m_applicationSnapshotConfigurationUpdateHasBeenSet = true; m_applicationSnapshotConfigurationUpdate = value; }

    /**
     * <p>Describes whether snapshots are enabled for a Flink-based Kinesis Data
     * Analytics application.</p>
     */
    inline void SetApplicationSnapshotConfigurationUpdate(ApplicationSnapshotConfigurationUpdate&& value) { m_applicationSnapshotConfigurationUpdateHasBeenSet = true; m_applicationSnapshotConfigurationUpdate = std::move(value); }

    /**
     * <p>Describes whether snapshots are enabled for a Flink-based Kinesis Data
     * Analytics application.</p>
     */
    inline ApplicationConfigurationUpdate& WithApplicationSnapshotConfigurationUpdate(const ApplicationSnapshotConfigurationUpdate& value) { SetApplicationSnapshotConfigurationUpdate(value); return *this;}

    /**
     * <p>Describes whether snapshots are enabled for a Flink-based Kinesis Data
     * Analytics application.</p>
     */
    inline ApplicationConfigurationUpdate& WithApplicationSnapshotConfigurationUpdate(ApplicationSnapshotConfigurationUpdate&& value) { SetApplicationSnapshotConfigurationUpdate(std::move(value)); return *this;}


    /**
     * <p>Updates to the array of descriptions of VPC configurations available to the
     * application.</p>
     */
    inline const Aws::Vector<VpcConfigurationUpdate>& GetVpcConfigurationUpdates() const{ return m_vpcConfigurationUpdates; }

    /**
     * <p>Updates to the array of descriptions of VPC configurations available to the
     * application.</p>
     */
    inline bool VpcConfigurationUpdatesHasBeenSet() const { return m_vpcConfigurationUpdatesHasBeenSet; }

    /**
     * <p>Updates to the array of descriptions of VPC configurations available to the
     * application.</p>
     */
    inline void SetVpcConfigurationUpdates(const Aws::Vector<VpcConfigurationUpdate>& value) { m_vpcConfigurationUpdatesHasBeenSet = true; m_vpcConfigurationUpdates = value; }

    /**
     * <p>Updates to the array of descriptions of VPC configurations available to the
     * application.</p>
     */
    inline void SetVpcConfigurationUpdates(Aws::Vector<VpcConfigurationUpdate>&& value) { m_vpcConfigurationUpdatesHasBeenSet = true; m_vpcConfigurationUpdates = std::move(value); }

    /**
     * <p>Updates to the array of descriptions of VPC configurations available to the
     * application.</p>
     */
    inline ApplicationConfigurationUpdate& WithVpcConfigurationUpdates(const Aws::Vector<VpcConfigurationUpdate>& value) { SetVpcConfigurationUpdates(value); return *this;}

    /**
     * <p>Updates to the array of descriptions of VPC configurations available to the
     * application.</p>
     */
    inline ApplicationConfigurationUpdate& WithVpcConfigurationUpdates(Aws::Vector<VpcConfigurationUpdate>&& value) { SetVpcConfigurationUpdates(std::move(value)); return *this;}

    /**
     * <p>Updates to the array of descriptions of VPC configurations available to the
     * application.</p>
     */
    inline ApplicationConfigurationUpdate& AddVpcConfigurationUpdates(const VpcConfigurationUpdate& value) { m_vpcConfigurationUpdatesHasBeenSet = true; m_vpcConfigurationUpdates.push_back(value); return *this; }

    /**
     * <p>Updates to the array of descriptions of VPC configurations available to the
     * application.</p>
     */
    inline ApplicationConfigurationUpdate& AddVpcConfigurationUpdates(VpcConfigurationUpdate&& value) { m_vpcConfigurationUpdatesHasBeenSet = true; m_vpcConfigurationUpdates.push_back(std::move(value)); return *this; }


    /**
     * <p>Updates to the configuration of a Kinesis Data Analytics Studio notebook.</p>
     */
    inline const ZeppelinApplicationConfigurationUpdate& GetZeppelinApplicationConfigurationUpdate() const{ return m_zeppelinApplicationConfigurationUpdate; }

    /**
     * <p>Updates to the configuration of a Kinesis Data Analytics Studio notebook.</p>
     */
    inline bool ZeppelinApplicationConfigurationUpdateHasBeenSet() const { return m_zeppelinApplicationConfigurationUpdateHasBeenSet; }

    /**
     * <p>Updates to the configuration of a Kinesis Data Analytics Studio notebook.</p>
     */
    inline void SetZeppelinApplicationConfigurationUpdate(const ZeppelinApplicationConfigurationUpdate& value) { m_zeppelinApplicationConfigurationUpdateHasBeenSet = true; m_zeppelinApplicationConfigurationUpdate = value; }

    /**
     * <p>Updates to the configuration of a Kinesis Data Analytics Studio notebook.</p>
     */
    inline void SetZeppelinApplicationConfigurationUpdate(ZeppelinApplicationConfigurationUpdate&& value) { m_zeppelinApplicationConfigurationUpdateHasBeenSet = true; m_zeppelinApplicationConfigurationUpdate = std::move(value); }

    /**
     * <p>Updates to the configuration of a Kinesis Data Analytics Studio notebook.</p>
     */
    inline ApplicationConfigurationUpdate& WithZeppelinApplicationConfigurationUpdate(const ZeppelinApplicationConfigurationUpdate& value) { SetZeppelinApplicationConfigurationUpdate(value); return *this;}

    /**
     * <p>Updates to the configuration of a Kinesis Data Analytics Studio notebook.</p>
     */
    inline ApplicationConfigurationUpdate& WithZeppelinApplicationConfigurationUpdate(ZeppelinApplicationConfigurationUpdate&& value) { SetZeppelinApplicationConfigurationUpdate(std::move(value)); return *this;}

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

    Aws::Vector<VpcConfigurationUpdate> m_vpcConfigurationUpdates;
    bool m_vpcConfigurationUpdatesHasBeenSet = false;

    ZeppelinApplicationConfigurationUpdate m_zeppelinApplicationConfigurationUpdate;
    bool m_zeppelinApplicationConfigurationUpdateHasBeenSet = false;
  };

} // namespace Model
} // namespace KinesisAnalyticsV2
} // namespace Aws
