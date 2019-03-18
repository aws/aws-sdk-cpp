/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#pragma once
#include <aws/kinesisanalyticsv2/KinesisAnalyticsV2_EXPORTS.h>
#include <aws/kinesisanalyticsv2/model/SqlApplicationConfigurationUpdate.h>
#include <aws/kinesisanalyticsv2/model/ApplicationCodeConfigurationUpdate.h>
#include <aws/kinesisanalyticsv2/model/FlinkApplicationConfigurationUpdate.h>
#include <aws/kinesisanalyticsv2/model/EnvironmentPropertyUpdates.h>
#include <aws/kinesisanalyticsv2/model/ApplicationSnapshotConfigurationUpdate.h>
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
  class AWS_KINESISANALYTICSV2_API ApplicationConfigurationUpdate
  {
  public:
    ApplicationConfigurationUpdate();
    ApplicationConfigurationUpdate(Aws::Utils::Json::JsonView jsonValue);
    ApplicationConfigurationUpdate& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Describes updates to an SQL-based Kinesis Data Analytics application's
     * configuration.</p>
     */
    inline const SqlApplicationConfigurationUpdate& GetSqlApplicationConfigurationUpdate() const{ return m_sqlApplicationConfigurationUpdate; }

    /**
     * <p>Describes updates to an SQL-based Kinesis Data Analytics application's
     * configuration.</p>
     */
    inline bool SqlApplicationConfigurationUpdateHasBeenSet() const { return m_sqlApplicationConfigurationUpdateHasBeenSet; }

    /**
     * <p>Describes updates to an SQL-based Kinesis Data Analytics application's
     * configuration.</p>
     */
    inline void SetSqlApplicationConfigurationUpdate(const SqlApplicationConfigurationUpdate& value) { m_sqlApplicationConfigurationUpdateHasBeenSet = true; m_sqlApplicationConfigurationUpdate = value; }

    /**
     * <p>Describes updates to an SQL-based Kinesis Data Analytics application's
     * configuration.</p>
     */
    inline void SetSqlApplicationConfigurationUpdate(SqlApplicationConfigurationUpdate&& value) { m_sqlApplicationConfigurationUpdateHasBeenSet = true; m_sqlApplicationConfigurationUpdate = std::move(value); }

    /**
     * <p>Describes updates to an SQL-based Kinesis Data Analytics application's
     * configuration.</p>
     */
    inline ApplicationConfigurationUpdate& WithSqlApplicationConfigurationUpdate(const SqlApplicationConfigurationUpdate& value) { SetSqlApplicationConfigurationUpdate(value); return *this;}

    /**
     * <p>Describes updates to an SQL-based Kinesis Data Analytics application's
     * configuration.</p>
     */
    inline ApplicationConfigurationUpdate& WithSqlApplicationConfigurationUpdate(SqlApplicationConfigurationUpdate&& value) { SetSqlApplicationConfigurationUpdate(std::move(value)); return *this;}


    /**
     * <p>Describes updates to a Java-based Kinesis Data Analytics application's code
     * configuration.</p>
     */
    inline const ApplicationCodeConfigurationUpdate& GetApplicationCodeConfigurationUpdate() const{ return m_applicationCodeConfigurationUpdate; }

    /**
     * <p>Describes updates to a Java-based Kinesis Data Analytics application's code
     * configuration.</p>
     */
    inline bool ApplicationCodeConfigurationUpdateHasBeenSet() const { return m_applicationCodeConfigurationUpdateHasBeenSet; }

    /**
     * <p>Describes updates to a Java-based Kinesis Data Analytics application's code
     * configuration.</p>
     */
    inline void SetApplicationCodeConfigurationUpdate(const ApplicationCodeConfigurationUpdate& value) { m_applicationCodeConfigurationUpdateHasBeenSet = true; m_applicationCodeConfigurationUpdate = value; }

    /**
     * <p>Describes updates to a Java-based Kinesis Data Analytics application's code
     * configuration.</p>
     */
    inline void SetApplicationCodeConfigurationUpdate(ApplicationCodeConfigurationUpdate&& value) { m_applicationCodeConfigurationUpdateHasBeenSet = true; m_applicationCodeConfigurationUpdate = std::move(value); }

    /**
     * <p>Describes updates to a Java-based Kinesis Data Analytics application's code
     * configuration.</p>
     */
    inline ApplicationConfigurationUpdate& WithApplicationCodeConfigurationUpdate(const ApplicationCodeConfigurationUpdate& value) { SetApplicationCodeConfigurationUpdate(value); return *this;}

    /**
     * <p>Describes updates to a Java-based Kinesis Data Analytics application's code
     * configuration.</p>
     */
    inline ApplicationConfigurationUpdate& WithApplicationCodeConfigurationUpdate(ApplicationCodeConfigurationUpdate&& value) { SetApplicationCodeConfigurationUpdate(std::move(value)); return *this;}


    /**
     * <p>Describes updates to a Java-based Kinesis Data Analytics application's
     * configuration.</p>
     */
    inline const FlinkApplicationConfigurationUpdate& GetFlinkApplicationConfigurationUpdate() const{ return m_flinkApplicationConfigurationUpdate; }

    /**
     * <p>Describes updates to a Java-based Kinesis Data Analytics application's
     * configuration.</p>
     */
    inline bool FlinkApplicationConfigurationUpdateHasBeenSet() const { return m_flinkApplicationConfigurationUpdateHasBeenSet; }

    /**
     * <p>Describes updates to a Java-based Kinesis Data Analytics application's
     * configuration.</p>
     */
    inline void SetFlinkApplicationConfigurationUpdate(const FlinkApplicationConfigurationUpdate& value) { m_flinkApplicationConfigurationUpdateHasBeenSet = true; m_flinkApplicationConfigurationUpdate = value; }

    /**
     * <p>Describes updates to a Java-based Kinesis Data Analytics application's
     * configuration.</p>
     */
    inline void SetFlinkApplicationConfigurationUpdate(FlinkApplicationConfigurationUpdate&& value) { m_flinkApplicationConfigurationUpdateHasBeenSet = true; m_flinkApplicationConfigurationUpdate = std::move(value); }

    /**
     * <p>Describes updates to a Java-based Kinesis Data Analytics application's
     * configuration.</p>
     */
    inline ApplicationConfigurationUpdate& WithFlinkApplicationConfigurationUpdate(const FlinkApplicationConfigurationUpdate& value) { SetFlinkApplicationConfigurationUpdate(value); return *this;}

    /**
     * <p>Describes updates to a Java-based Kinesis Data Analytics application's
     * configuration.</p>
     */
    inline ApplicationConfigurationUpdate& WithFlinkApplicationConfigurationUpdate(FlinkApplicationConfigurationUpdate&& value) { SetFlinkApplicationConfigurationUpdate(std::move(value)); return *this;}


    /**
     * <p>Describes updates to the environment properties for a Java-based Kinesis Data
     * Analytics application.</p>
     */
    inline const EnvironmentPropertyUpdates& GetEnvironmentPropertyUpdates() const{ return m_environmentPropertyUpdates; }

    /**
     * <p>Describes updates to the environment properties for a Java-based Kinesis Data
     * Analytics application.</p>
     */
    inline bool EnvironmentPropertyUpdatesHasBeenSet() const { return m_environmentPropertyUpdatesHasBeenSet; }

    /**
     * <p>Describes updates to the environment properties for a Java-based Kinesis Data
     * Analytics application.</p>
     */
    inline void SetEnvironmentPropertyUpdates(const EnvironmentPropertyUpdates& value) { m_environmentPropertyUpdatesHasBeenSet = true; m_environmentPropertyUpdates = value; }

    /**
     * <p>Describes updates to the environment properties for a Java-based Kinesis Data
     * Analytics application.</p>
     */
    inline void SetEnvironmentPropertyUpdates(EnvironmentPropertyUpdates&& value) { m_environmentPropertyUpdatesHasBeenSet = true; m_environmentPropertyUpdates = std::move(value); }

    /**
     * <p>Describes updates to the environment properties for a Java-based Kinesis Data
     * Analytics application.</p>
     */
    inline ApplicationConfigurationUpdate& WithEnvironmentPropertyUpdates(const EnvironmentPropertyUpdates& value) { SetEnvironmentPropertyUpdates(value); return *this;}

    /**
     * <p>Describes updates to the environment properties for a Java-based Kinesis Data
     * Analytics application.</p>
     */
    inline ApplicationConfigurationUpdate& WithEnvironmentPropertyUpdates(EnvironmentPropertyUpdates&& value) { SetEnvironmentPropertyUpdates(std::move(value)); return *this;}


    /**
     * <p>Describes whether snapshots are enabled for a Java-based Kinesis Data
     * Analytics application.</p>
     */
    inline const ApplicationSnapshotConfigurationUpdate& GetApplicationSnapshotConfigurationUpdate() const{ return m_applicationSnapshotConfigurationUpdate; }

    /**
     * <p>Describes whether snapshots are enabled for a Java-based Kinesis Data
     * Analytics application.</p>
     */
    inline bool ApplicationSnapshotConfigurationUpdateHasBeenSet() const { return m_applicationSnapshotConfigurationUpdateHasBeenSet; }

    /**
     * <p>Describes whether snapshots are enabled for a Java-based Kinesis Data
     * Analytics application.</p>
     */
    inline void SetApplicationSnapshotConfigurationUpdate(const ApplicationSnapshotConfigurationUpdate& value) { m_applicationSnapshotConfigurationUpdateHasBeenSet = true; m_applicationSnapshotConfigurationUpdate = value; }

    /**
     * <p>Describes whether snapshots are enabled for a Java-based Kinesis Data
     * Analytics application.</p>
     */
    inline void SetApplicationSnapshotConfigurationUpdate(ApplicationSnapshotConfigurationUpdate&& value) { m_applicationSnapshotConfigurationUpdateHasBeenSet = true; m_applicationSnapshotConfigurationUpdate = std::move(value); }

    /**
     * <p>Describes whether snapshots are enabled for a Java-based Kinesis Data
     * Analytics application.</p>
     */
    inline ApplicationConfigurationUpdate& WithApplicationSnapshotConfigurationUpdate(const ApplicationSnapshotConfigurationUpdate& value) { SetApplicationSnapshotConfigurationUpdate(value); return *this;}

    /**
     * <p>Describes whether snapshots are enabled for a Java-based Kinesis Data
     * Analytics application.</p>
     */
    inline ApplicationConfigurationUpdate& WithApplicationSnapshotConfigurationUpdate(ApplicationSnapshotConfigurationUpdate&& value) { SetApplicationSnapshotConfigurationUpdate(std::move(value)); return *this;}

  private:

    SqlApplicationConfigurationUpdate m_sqlApplicationConfigurationUpdate;
    bool m_sqlApplicationConfigurationUpdateHasBeenSet;

    ApplicationCodeConfigurationUpdate m_applicationCodeConfigurationUpdate;
    bool m_applicationCodeConfigurationUpdateHasBeenSet;

    FlinkApplicationConfigurationUpdate m_flinkApplicationConfigurationUpdate;
    bool m_flinkApplicationConfigurationUpdateHasBeenSet;

    EnvironmentPropertyUpdates m_environmentPropertyUpdates;
    bool m_environmentPropertyUpdatesHasBeenSet;

    ApplicationSnapshotConfigurationUpdate m_applicationSnapshotConfigurationUpdate;
    bool m_applicationSnapshotConfigurationUpdateHasBeenSet;
  };

} // namespace Model
} // namespace KinesisAnalyticsV2
} // namespace Aws
