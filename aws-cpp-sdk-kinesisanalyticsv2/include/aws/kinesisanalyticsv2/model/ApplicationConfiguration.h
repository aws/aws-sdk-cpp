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
#include <aws/kinesisanalyticsv2/model/SqlApplicationConfiguration.h>
#include <aws/kinesisanalyticsv2/model/FlinkApplicationConfiguration.h>
#include <aws/kinesisanalyticsv2/model/EnvironmentProperties.h>
#include <aws/kinesisanalyticsv2/model/ApplicationCodeConfiguration.h>
#include <aws/kinesisanalyticsv2/model/ApplicationSnapshotConfiguration.h>
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
   * <p>Specifies the creation parameters for an Amazon Kinesis Data Analytics
   * application.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/kinesisanalyticsv2-2018-05-23/ApplicationConfiguration">AWS
   * API Reference</a></p>
   */
  class AWS_KINESISANALYTICSV2_API ApplicationConfiguration
  {
  public:
    ApplicationConfiguration();
    ApplicationConfiguration(Aws::Utils::Json::JsonView jsonValue);
    ApplicationConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The creation and update parameters for an SQL-based Kinesis Data Analytics
     * application.</p>
     */
    inline const SqlApplicationConfiguration& GetSqlApplicationConfiguration() const{ return m_sqlApplicationConfiguration; }

    /**
     * <p>The creation and update parameters for an SQL-based Kinesis Data Analytics
     * application.</p>
     */
    inline bool SqlApplicationConfigurationHasBeenSet() const { return m_sqlApplicationConfigurationHasBeenSet; }

    /**
     * <p>The creation and update parameters for an SQL-based Kinesis Data Analytics
     * application.</p>
     */
    inline void SetSqlApplicationConfiguration(const SqlApplicationConfiguration& value) { m_sqlApplicationConfigurationHasBeenSet = true; m_sqlApplicationConfiguration = value; }

    /**
     * <p>The creation and update parameters for an SQL-based Kinesis Data Analytics
     * application.</p>
     */
    inline void SetSqlApplicationConfiguration(SqlApplicationConfiguration&& value) { m_sqlApplicationConfigurationHasBeenSet = true; m_sqlApplicationConfiguration = std::move(value); }

    /**
     * <p>The creation and update parameters for an SQL-based Kinesis Data Analytics
     * application.</p>
     */
    inline ApplicationConfiguration& WithSqlApplicationConfiguration(const SqlApplicationConfiguration& value) { SetSqlApplicationConfiguration(value); return *this;}

    /**
     * <p>The creation and update parameters for an SQL-based Kinesis Data Analytics
     * application.</p>
     */
    inline ApplicationConfiguration& WithSqlApplicationConfiguration(SqlApplicationConfiguration&& value) { SetSqlApplicationConfiguration(std::move(value)); return *this;}


    /**
     * <p>The creation and update parameters for a Java-based Kinesis Data Analytics
     * application.</p>
     */
    inline const FlinkApplicationConfiguration& GetFlinkApplicationConfiguration() const{ return m_flinkApplicationConfiguration; }

    /**
     * <p>The creation and update parameters for a Java-based Kinesis Data Analytics
     * application.</p>
     */
    inline bool FlinkApplicationConfigurationHasBeenSet() const { return m_flinkApplicationConfigurationHasBeenSet; }

    /**
     * <p>The creation and update parameters for a Java-based Kinesis Data Analytics
     * application.</p>
     */
    inline void SetFlinkApplicationConfiguration(const FlinkApplicationConfiguration& value) { m_flinkApplicationConfigurationHasBeenSet = true; m_flinkApplicationConfiguration = value; }

    /**
     * <p>The creation and update parameters for a Java-based Kinesis Data Analytics
     * application.</p>
     */
    inline void SetFlinkApplicationConfiguration(FlinkApplicationConfiguration&& value) { m_flinkApplicationConfigurationHasBeenSet = true; m_flinkApplicationConfiguration = std::move(value); }

    /**
     * <p>The creation and update parameters for a Java-based Kinesis Data Analytics
     * application.</p>
     */
    inline ApplicationConfiguration& WithFlinkApplicationConfiguration(const FlinkApplicationConfiguration& value) { SetFlinkApplicationConfiguration(value); return *this;}

    /**
     * <p>The creation and update parameters for a Java-based Kinesis Data Analytics
     * application.</p>
     */
    inline ApplicationConfiguration& WithFlinkApplicationConfiguration(FlinkApplicationConfiguration&& value) { SetFlinkApplicationConfiguration(std::move(value)); return *this;}


    /**
     * <p>Describes execution properties for a Java-based Kinesis Data Analytics
     * application.</p>
     */
    inline const EnvironmentProperties& GetEnvironmentProperties() const{ return m_environmentProperties; }

    /**
     * <p>Describes execution properties for a Java-based Kinesis Data Analytics
     * application.</p>
     */
    inline bool EnvironmentPropertiesHasBeenSet() const { return m_environmentPropertiesHasBeenSet; }

    /**
     * <p>Describes execution properties for a Java-based Kinesis Data Analytics
     * application.</p>
     */
    inline void SetEnvironmentProperties(const EnvironmentProperties& value) { m_environmentPropertiesHasBeenSet = true; m_environmentProperties = value; }

    /**
     * <p>Describes execution properties for a Java-based Kinesis Data Analytics
     * application.</p>
     */
    inline void SetEnvironmentProperties(EnvironmentProperties&& value) { m_environmentPropertiesHasBeenSet = true; m_environmentProperties = std::move(value); }

    /**
     * <p>Describes execution properties for a Java-based Kinesis Data Analytics
     * application.</p>
     */
    inline ApplicationConfiguration& WithEnvironmentProperties(const EnvironmentProperties& value) { SetEnvironmentProperties(value); return *this;}

    /**
     * <p>Describes execution properties for a Java-based Kinesis Data Analytics
     * application.</p>
     */
    inline ApplicationConfiguration& WithEnvironmentProperties(EnvironmentProperties&& value) { SetEnvironmentProperties(std::move(value)); return *this;}


    /**
     * <p>The code location and type parameters for a Java-based Kinesis Data Analytics
     * application.</p>
     */
    inline const ApplicationCodeConfiguration& GetApplicationCodeConfiguration() const{ return m_applicationCodeConfiguration; }

    /**
     * <p>The code location and type parameters for a Java-based Kinesis Data Analytics
     * application.</p>
     */
    inline bool ApplicationCodeConfigurationHasBeenSet() const { return m_applicationCodeConfigurationHasBeenSet; }

    /**
     * <p>The code location and type parameters for a Java-based Kinesis Data Analytics
     * application.</p>
     */
    inline void SetApplicationCodeConfiguration(const ApplicationCodeConfiguration& value) { m_applicationCodeConfigurationHasBeenSet = true; m_applicationCodeConfiguration = value; }

    /**
     * <p>The code location and type parameters for a Java-based Kinesis Data Analytics
     * application.</p>
     */
    inline void SetApplicationCodeConfiguration(ApplicationCodeConfiguration&& value) { m_applicationCodeConfigurationHasBeenSet = true; m_applicationCodeConfiguration = std::move(value); }

    /**
     * <p>The code location and type parameters for a Java-based Kinesis Data Analytics
     * application.</p>
     */
    inline ApplicationConfiguration& WithApplicationCodeConfiguration(const ApplicationCodeConfiguration& value) { SetApplicationCodeConfiguration(value); return *this;}

    /**
     * <p>The code location and type parameters for a Java-based Kinesis Data Analytics
     * application.</p>
     */
    inline ApplicationConfiguration& WithApplicationCodeConfiguration(ApplicationCodeConfiguration&& value) { SetApplicationCodeConfiguration(std::move(value)); return *this;}


    /**
     * <p>Describes whether snapshots are enabled for a Java-based Kinesis Data
     * Analytics application.</p>
     */
    inline const ApplicationSnapshotConfiguration& GetApplicationSnapshotConfiguration() const{ return m_applicationSnapshotConfiguration; }

    /**
     * <p>Describes whether snapshots are enabled for a Java-based Kinesis Data
     * Analytics application.</p>
     */
    inline bool ApplicationSnapshotConfigurationHasBeenSet() const { return m_applicationSnapshotConfigurationHasBeenSet; }

    /**
     * <p>Describes whether snapshots are enabled for a Java-based Kinesis Data
     * Analytics application.</p>
     */
    inline void SetApplicationSnapshotConfiguration(const ApplicationSnapshotConfiguration& value) { m_applicationSnapshotConfigurationHasBeenSet = true; m_applicationSnapshotConfiguration = value; }

    /**
     * <p>Describes whether snapshots are enabled for a Java-based Kinesis Data
     * Analytics application.</p>
     */
    inline void SetApplicationSnapshotConfiguration(ApplicationSnapshotConfiguration&& value) { m_applicationSnapshotConfigurationHasBeenSet = true; m_applicationSnapshotConfiguration = std::move(value); }

    /**
     * <p>Describes whether snapshots are enabled for a Java-based Kinesis Data
     * Analytics application.</p>
     */
    inline ApplicationConfiguration& WithApplicationSnapshotConfiguration(const ApplicationSnapshotConfiguration& value) { SetApplicationSnapshotConfiguration(value); return *this;}

    /**
     * <p>Describes whether snapshots are enabled for a Java-based Kinesis Data
     * Analytics application.</p>
     */
    inline ApplicationConfiguration& WithApplicationSnapshotConfiguration(ApplicationSnapshotConfiguration&& value) { SetApplicationSnapshotConfiguration(std::move(value)); return *this;}

  private:

    SqlApplicationConfiguration m_sqlApplicationConfiguration;
    bool m_sqlApplicationConfigurationHasBeenSet;

    FlinkApplicationConfiguration m_flinkApplicationConfiguration;
    bool m_flinkApplicationConfigurationHasBeenSet;

    EnvironmentProperties m_environmentProperties;
    bool m_environmentPropertiesHasBeenSet;

    ApplicationCodeConfiguration m_applicationCodeConfiguration;
    bool m_applicationCodeConfigurationHasBeenSet;

    ApplicationSnapshotConfiguration m_applicationSnapshotConfiguration;
    bool m_applicationSnapshotConfigurationHasBeenSet;
  };

} // namespace Model
} // namespace KinesisAnalyticsV2
} // namespace Aws
