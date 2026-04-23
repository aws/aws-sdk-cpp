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
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/kinesisanalyticsv2/model/ApplicationRestoreConfiguration.h>
#include <aws/kinesisanalyticsv2/model/SqlRunConfiguration.h>
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
   * <p>Describes the starting parameters for an Amazon Kinesis Data Analytics
   * application.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/kinesisanalyticsv2-2018-05-23/RunConfiguration">AWS
   * API Reference</a></p>
   */
  class AWS_KINESISANALYTICSV2_API RunConfiguration
  {
  public:
    RunConfiguration();
    RunConfiguration(Aws::Utils::Json::JsonView jsonValue);
    RunConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Describes the starting parameters for an SQL-based Kinesis Data Analytics
     * application.</p>
     */
    inline const Aws::Vector<SqlRunConfiguration>& GetSqlRunConfigurations() const{ return m_sqlRunConfigurations; }

    /**
     * <p>Describes the starting parameters for an SQL-based Kinesis Data Analytics
     * application.</p>
     */
    inline bool SqlRunConfigurationsHasBeenSet() const { return m_sqlRunConfigurationsHasBeenSet; }

    /**
     * <p>Describes the starting parameters for an SQL-based Kinesis Data Analytics
     * application.</p>
     */
    inline void SetSqlRunConfigurations(const Aws::Vector<SqlRunConfiguration>& value) { m_sqlRunConfigurationsHasBeenSet = true; m_sqlRunConfigurations = value; }

    /**
     * <p>Describes the starting parameters for an SQL-based Kinesis Data Analytics
     * application.</p>
     */
    inline void SetSqlRunConfigurations(Aws::Vector<SqlRunConfiguration>&& value) { m_sqlRunConfigurationsHasBeenSet = true; m_sqlRunConfigurations = std::move(value); }

    /**
     * <p>Describes the starting parameters for an SQL-based Kinesis Data Analytics
     * application.</p>
     */
    inline RunConfiguration& WithSqlRunConfigurations(const Aws::Vector<SqlRunConfiguration>& value) { SetSqlRunConfigurations(value); return *this;}

    /**
     * <p>Describes the starting parameters for an SQL-based Kinesis Data Analytics
     * application.</p>
     */
    inline RunConfiguration& WithSqlRunConfigurations(Aws::Vector<SqlRunConfiguration>&& value) { SetSqlRunConfigurations(std::move(value)); return *this;}

    /**
     * <p>Describes the starting parameters for an SQL-based Kinesis Data Analytics
     * application.</p>
     */
    inline RunConfiguration& AddSqlRunConfigurations(const SqlRunConfiguration& value) { m_sqlRunConfigurationsHasBeenSet = true; m_sqlRunConfigurations.push_back(value); return *this; }

    /**
     * <p>Describes the starting parameters for an SQL-based Kinesis Data Analytics
     * application.</p>
     */
    inline RunConfiguration& AddSqlRunConfigurations(SqlRunConfiguration&& value) { m_sqlRunConfigurationsHasBeenSet = true; m_sqlRunConfigurations.push_back(std::move(value)); return *this; }


    /**
     * <p>Describes the restore behavior of a restarting application.</p>
     */
    inline const ApplicationRestoreConfiguration& GetApplicationRestoreConfiguration() const{ return m_applicationRestoreConfiguration; }

    /**
     * <p>Describes the restore behavior of a restarting application.</p>
     */
    inline bool ApplicationRestoreConfigurationHasBeenSet() const { return m_applicationRestoreConfigurationHasBeenSet; }

    /**
     * <p>Describes the restore behavior of a restarting application.</p>
     */
    inline void SetApplicationRestoreConfiguration(const ApplicationRestoreConfiguration& value) { m_applicationRestoreConfigurationHasBeenSet = true; m_applicationRestoreConfiguration = value; }

    /**
     * <p>Describes the restore behavior of a restarting application.</p>
     */
    inline void SetApplicationRestoreConfiguration(ApplicationRestoreConfiguration&& value) { m_applicationRestoreConfigurationHasBeenSet = true; m_applicationRestoreConfiguration = std::move(value); }

    /**
     * <p>Describes the restore behavior of a restarting application.</p>
     */
    inline RunConfiguration& WithApplicationRestoreConfiguration(const ApplicationRestoreConfiguration& value) { SetApplicationRestoreConfiguration(value); return *this;}

    /**
     * <p>Describes the restore behavior of a restarting application.</p>
     */
    inline RunConfiguration& WithApplicationRestoreConfiguration(ApplicationRestoreConfiguration&& value) { SetApplicationRestoreConfiguration(std::move(value)); return *this;}

  private:

    Aws::Vector<SqlRunConfiguration> m_sqlRunConfigurations;
    bool m_sqlRunConfigurationsHasBeenSet;

    ApplicationRestoreConfiguration m_applicationRestoreConfiguration;
    bool m_applicationRestoreConfigurationHasBeenSet;
  };

} // namespace Model
} // namespace KinesisAnalyticsV2
} // namespace Aws
