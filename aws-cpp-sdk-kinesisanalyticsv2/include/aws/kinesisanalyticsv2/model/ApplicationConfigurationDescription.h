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
#include <aws/kinesisanalyticsv2/model/SqlApplicationConfigurationDescription.h>
#include <aws/kinesisanalyticsv2/model/ApplicationCodeConfigurationDescription.h>
#include <aws/kinesisanalyticsv2/model/RunConfigurationDescription.h>
#include <aws/kinesisanalyticsv2/model/FlinkApplicationConfigurationDescription.h>
#include <aws/kinesisanalyticsv2/model/EnvironmentPropertyDescriptions.h>
#include <aws/kinesisanalyticsv2/model/ApplicationSnapshotConfigurationDescription.h>
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
   * <p>Describes details about the application code and starting parameters for an
   * Amazon Kinesis Data Analytics application.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/kinesisanalyticsv2-2018-05-23/ApplicationConfigurationDescription">AWS
   * API Reference</a></p>
   */
  class AWS_KINESISANALYTICSV2_API ApplicationConfigurationDescription
  {
  public:
    ApplicationConfigurationDescription();
    ApplicationConfigurationDescription(Aws::Utils::Json::JsonView jsonValue);
    ApplicationConfigurationDescription& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The details about inputs, outputs, and reference data sources for an
     * SQL-based Kinesis Data Analytics application.</p>
     */
    inline const SqlApplicationConfigurationDescription& GetSqlApplicationConfigurationDescription() const{ return m_sqlApplicationConfigurationDescription; }

    /**
     * <p>The details about inputs, outputs, and reference data sources for an
     * SQL-based Kinesis Data Analytics application.</p>
     */
    inline bool SqlApplicationConfigurationDescriptionHasBeenSet() const { return m_sqlApplicationConfigurationDescriptionHasBeenSet; }

    /**
     * <p>The details about inputs, outputs, and reference data sources for an
     * SQL-based Kinesis Data Analytics application.</p>
     */
    inline void SetSqlApplicationConfigurationDescription(const SqlApplicationConfigurationDescription& value) { m_sqlApplicationConfigurationDescriptionHasBeenSet = true; m_sqlApplicationConfigurationDescription = value; }

    /**
     * <p>The details about inputs, outputs, and reference data sources for an
     * SQL-based Kinesis Data Analytics application.</p>
     */
    inline void SetSqlApplicationConfigurationDescription(SqlApplicationConfigurationDescription&& value) { m_sqlApplicationConfigurationDescriptionHasBeenSet = true; m_sqlApplicationConfigurationDescription = std::move(value); }

    /**
     * <p>The details about inputs, outputs, and reference data sources for an
     * SQL-based Kinesis Data Analytics application.</p>
     */
    inline ApplicationConfigurationDescription& WithSqlApplicationConfigurationDescription(const SqlApplicationConfigurationDescription& value) { SetSqlApplicationConfigurationDescription(value); return *this;}

    /**
     * <p>The details about inputs, outputs, and reference data sources for an
     * SQL-based Kinesis Data Analytics application.</p>
     */
    inline ApplicationConfigurationDescription& WithSqlApplicationConfigurationDescription(SqlApplicationConfigurationDescription&& value) { SetSqlApplicationConfigurationDescription(std::move(value)); return *this;}


    /**
     * <p>The details about the application code for a Java-based Kinesis Data
     * Analytics application.</p>
     */
    inline const ApplicationCodeConfigurationDescription& GetApplicationCodeConfigurationDescription() const{ return m_applicationCodeConfigurationDescription; }

    /**
     * <p>The details about the application code for a Java-based Kinesis Data
     * Analytics application.</p>
     */
    inline bool ApplicationCodeConfigurationDescriptionHasBeenSet() const { return m_applicationCodeConfigurationDescriptionHasBeenSet; }

    /**
     * <p>The details about the application code for a Java-based Kinesis Data
     * Analytics application.</p>
     */
    inline void SetApplicationCodeConfigurationDescription(const ApplicationCodeConfigurationDescription& value) { m_applicationCodeConfigurationDescriptionHasBeenSet = true; m_applicationCodeConfigurationDescription = value; }

    /**
     * <p>The details about the application code for a Java-based Kinesis Data
     * Analytics application.</p>
     */
    inline void SetApplicationCodeConfigurationDescription(ApplicationCodeConfigurationDescription&& value) { m_applicationCodeConfigurationDescriptionHasBeenSet = true; m_applicationCodeConfigurationDescription = std::move(value); }

    /**
     * <p>The details about the application code for a Java-based Kinesis Data
     * Analytics application.</p>
     */
    inline ApplicationConfigurationDescription& WithApplicationCodeConfigurationDescription(const ApplicationCodeConfigurationDescription& value) { SetApplicationCodeConfigurationDescription(value); return *this;}

    /**
     * <p>The details about the application code for a Java-based Kinesis Data
     * Analytics application.</p>
     */
    inline ApplicationConfigurationDescription& WithApplicationCodeConfigurationDescription(ApplicationCodeConfigurationDescription&& value) { SetApplicationCodeConfigurationDescription(std::move(value)); return *this;}


    /**
     * <p>The details about the starting properties for a Kinesis Data Analytics
     * application.</p>
     */
    inline const RunConfigurationDescription& GetRunConfigurationDescription() const{ return m_runConfigurationDescription; }

    /**
     * <p>The details about the starting properties for a Kinesis Data Analytics
     * application.</p>
     */
    inline bool RunConfigurationDescriptionHasBeenSet() const { return m_runConfigurationDescriptionHasBeenSet; }

    /**
     * <p>The details about the starting properties for a Kinesis Data Analytics
     * application.</p>
     */
    inline void SetRunConfigurationDescription(const RunConfigurationDescription& value) { m_runConfigurationDescriptionHasBeenSet = true; m_runConfigurationDescription = value; }

    /**
     * <p>The details about the starting properties for a Kinesis Data Analytics
     * application.</p>
     */
    inline void SetRunConfigurationDescription(RunConfigurationDescription&& value) { m_runConfigurationDescriptionHasBeenSet = true; m_runConfigurationDescription = std::move(value); }

    /**
     * <p>The details about the starting properties for a Kinesis Data Analytics
     * application.</p>
     */
    inline ApplicationConfigurationDescription& WithRunConfigurationDescription(const RunConfigurationDescription& value) { SetRunConfigurationDescription(value); return *this;}

    /**
     * <p>The details about the starting properties for a Kinesis Data Analytics
     * application.</p>
     */
    inline ApplicationConfigurationDescription& WithRunConfigurationDescription(RunConfigurationDescription&& value) { SetRunConfigurationDescription(std::move(value)); return *this;}


    /**
     * <p>The details about a Java-based Kinesis Data Analytics application.</p>
     */
    inline const FlinkApplicationConfigurationDescription& GetFlinkApplicationConfigurationDescription() const{ return m_flinkApplicationConfigurationDescription; }

    /**
     * <p>The details about a Java-based Kinesis Data Analytics application.</p>
     */
    inline bool FlinkApplicationConfigurationDescriptionHasBeenSet() const { return m_flinkApplicationConfigurationDescriptionHasBeenSet; }

    /**
     * <p>The details about a Java-based Kinesis Data Analytics application.</p>
     */
    inline void SetFlinkApplicationConfigurationDescription(const FlinkApplicationConfigurationDescription& value) { m_flinkApplicationConfigurationDescriptionHasBeenSet = true; m_flinkApplicationConfigurationDescription = value; }

    /**
     * <p>The details about a Java-based Kinesis Data Analytics application.</p>
     */
    inline void SetFlinkApplicationConfigurationDescription(FlinkApplicationConfigurationDescription&& value) { m_flinkApplicationConfigurationDescriptionHasBeenSet = true; m_flinkApplicationConfigurationDescription = std::move(value); }

    /**
     * <p>The details about a Java-based Kinesis Data Analytics application.</p>
     */
    inline ApplicationConfigurationDescription& WithFlinkApplicationConfigurationDescription(const FlinkApplicationConfigurationDescription& value) { SetFlinkApplicationConfigurationDescription(value); return *this;}

    /**
     * <p>The details about a Java-based Kinesis Data Analytics application.</p>
     */
    inline ApplicationConfigurationDescription& WithFlinkApplicationConfigurationDescription(FlinkApplicationConfigurationDescription&& value) { SetFlinkApplicationConfigurationDescription(std::move(value)); return *this;}


    /**
     * <p>Describes execution properties for a Java-based Kinesis Data Analytics
     * application.</p>
     */
    inline const EnvironmentPropertyDescriptions& GetEnvironmentPropertyDescriptions() const{ return m_environmentPropertyDescriptions; }

    /**
     * <p>Describes execution properties for a Java-based Kinesis Data Analytics
     * application.</p>
     */
    inline bool EnvironmentPropertyDescriptionsHasBeenSet() const { return m_environmentPropertyDescriptionsHasBeenSet; }

    /**
     * <p>Describes execution properties for a Java-based Kinesis Data Analytics
     * application.</p>
     */
    inline void SetEnvironmentPropertyDescriptions(const EnvironmentPropertyDescriptions& value) { m_environmentPropertyDescriptionsHasBeenSet = true; m_environmentPropertyDescriptions = value; }

    /**
     * <p>Describes execution properties for a Java-based Kinesis Data Analytics
     * application.</p>
     */
    inline void SetEnvironmentPropertyDescriptions(EnvironmentPropertyDescriptions&& value) { m_environmentPropertyDescriptionsHasBeenSet = true; m_environmentPropertyDescriptions = std::move(value); }

    /**
     * <p>Describes execution properties for a Java-based Kinesis Data Analytics
     * application.</p>
     */
    inline ApplicationConfigurationDescription& WithEnvironmentPropertyDescriptions(const EnvironmentPropertyDescriptions& value) { SetEnvironmentPropertyDescriptions(value); return *this;}

    /**
     * <p>Describes execution properties for a Java-based Kinesis Data Analytics
     * application.</p>
     */
    inline ApplicationConfigurationDescription& WithEnvironmentPropertyDescriptions(EnvironmentPropertyDescriptions&& value) { SetEnvironmentPropertyDescriptions(std::move(value)); return *this;}


    /**
     * <p>Describes whether snapshots are enabled for a Java-based Kinesis Data
     * Analytics application.</p>
     */
    inline const ApplicationSnapshotConfigurationDescription& GetApplicationSnapshotConfigurationDescription() const{ return m_applicationSnapshotConfigurationDescription; }

    /**
     * <p>Describes whether snapshots are enabled for a Java-based Kinesis Data
     * Analytics application.</p>
     */
    inline bool ApplicationSnapshotConfigurationDescriptionHasBeenSet() const { return m_applicationSnapshotConfigurationDescriptionHasBeenSet; }

    /**
     * <p>Describes whether snapshots are enabled for a Java-based Kinesis Data
     * Analytics application.</p>
     */
    inline void SetApplicationSnapshotConfigurationDescription(const ApplicationSnapshotConfigurationDescription& value) { m_applicationSnapshotConfigurationDescriptionHasBeenSet = true; m_applicationSnapshotConfigurationDescription = value; }

    /**
     * <p>Describes whether snapshots are enabled for a Java-based Kinesis Data
     * Analytics application.</p>
     */
    inline void SetApplicationSnapshotConfigurationDescription(ApplicationSnapshotConfigurationDescription&& value) { m_applicationSnapshotConfigurationDescriptionHasBeenSet = true; m_applicationSnapshotConfigurationDescription = std::move(value); }

    /**
     * <p>Describes whether snapshots are enabled for a Java-based Kinesis Data
     * Analytics application.</p>
     */
    inline ApplicationConfigurationDescription& WithApplicationSnapshotConfigurationDescription(const ApplicationSnapshotConfigurationDescription& value) { SetApplicationSnapshotConfigurationDescription(value); return *this;}

    /**
     * <p>Describes whether snapshots are enabled for a Java-based Kinesis Data
     * Analytics application.</p>
     */
    inline ApplicationConfigurationDescription& WithApplicationSnapshotConfigurationDescription(ApplicationSnapshotConfigurationDescription&& value) { SetApplicationSnapshotConfigurationDescription(std::move(value)); return *this;}

  private:

    SqlApplicationConfigurationDescription m_sqlApplicationConfigurationDescription;
    bool m_sqlApplicationConfigurationDescriptionHasBeenSet;

    ApplicationCodeConfigurationDescription m_applicationCodeConfigurationDescription;
    bool m_applicationCodeConfigurationDescriptionHasBeenSet;

    RunConfigurationDescription m_runConfigurationDescription;
    bool m_runConfigurationDescriptionHasBeenSet;

    FlinkApplicationConfigurationDescription m_flinkApplicationConfigurationDescription;
    bool m_flinkApplicationConfigurationDescriptionHasBeenSet;

    EnvironmentPropertyDescriptions m_environmentPropertyDescriptions;
    bool m_environmentPropertyDescriptionsHasBeenSet;

    ApplicationSnapshotConfigurationDescription m_applicationSnapshotConfigurationDescription;
    bool m_applicationSnapshotConfigurationDescriptionHasBeenSet;
  };

} // namespace Model
} // namespace KinesisAnalyticsV2
} // namespace Aws
