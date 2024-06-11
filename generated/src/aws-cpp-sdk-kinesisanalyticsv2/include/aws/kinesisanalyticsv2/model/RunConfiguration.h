﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/kinesisanalyticsv2/KinesisAnalyticsV2_EXPORTS.h>
#include <aws/kinesisanalyticsv2/model/FlinkRunConfiguration.h>
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
   * <p>Describes the starting parameters for an Managed Service for Apache Flink
   * application.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/kinesisanalyticsv2-2018-05-23/RunConfiguration">AWS
   * API Reference</a></p>
   */
  class RunConfiguration
  {
  public:
    AWS_KINESISANALYTICSV2_API RunConfiguration();
    AWS_KINESISANALYTICSV2_API RunConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_KINESISANALYTICSV2_API RunConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_KINESISANALYTICSV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Describes the starting parameters for a Managed Service for Apache Flink
     * application.</p>
     */
    inline const FlinkRunConfiguration& GetFlinkRunConfiguration() const{ return m_flinkRunConfiguration; }
    inline bool FlinkRunConfigurationHasBeenSet() const { return m_flinkRunConfigurationHasBeenSet; }
    inline void SetFlinkRunConfiguration(const FlinkRunConfiguration& value) { m_flinkRunConfigurationHasBeenSet = true; m_flinkRunConfiguration = value; }
    inline void SetFlinkRunConfiguration(FlinkRunConfiguration&& value) { m_flinkRunConfigurationHasBeenSet = true; m_flinkRunConfiguration = std::move(value); }
    inline RunConfiguration& WithFlinkRunConfiguration(const FlinkRunConfiguration& value) { SetFlinkRunConfiguration(value); return *this;}
    inline RunConfiguration& WithFlinkRunConfiguration(FlinkRunConfiguration&& value) { SetFlinkRunConfiguration(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Describes the starting parameters for a SQL-based Kinesis Data Analytics
     * application application.</p>
     */
    inline const Aws::Vector<SqlRunConfiguration>& GetSqlRunConfigurations() const{ return m_sqlRunConfigurations; }
    inline bool SqlRunConfigurationsHasBeenSet() const { return m_sqlRunConfigurationsHasBeenSet; }
    inline void SetSqlRunConfigurations(const Aws::Vector<SqlRunConfiguration>& value) { m_sqlRunConfigurationsHasBeenSet = true; m_sqlRunConfigurations = value; }
    inline void SetSqlRunConfigurations(Aws::Vector<SqlRunConfiguration>&& value) { m_sqlRunConfigurationsHasBeenSet = true; m_sqlRunConfigurations = std::move(value); }
    inline RunConfiguration& WithSqlRunConfigurations(const Aws::Vector<SqlRunConfiguration>& value) { SetSqlRunConfigurations(value); return *this;}
    inline RunConfiguration& WithSqlRunConfigurations(Aws::Vector<SqlRunConfiguration>&& value) { SetSqlRunConfigurations(std::move(value)); return *this;}
    inline RunConfiguration& AddSqlRunConfigurations(const SqlRunConfiguration& value) { m_sqlRunConfigurationsHasBeenSet = true; m_sqlRunConfigurations.push_back(value); return *this; }
    inline RunConfiguration& AddSqlRunConfigurations(SqlRunConfiguration&& value) { m_sqlRunConfigurationsHasBeenSet = true; m_sqlRunConfigurations.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Describes the restore behavior of a restarting application.</p>
     */
    inline const ApplicationRestoreConfiguration& GetApplicationRestoreConfiguration() const{ return m_applicationRestoreConfiguration; }
    inline bool ApplicationRestoreConfigurationHasBeenSet() const { return m_applicationRestoreConfigurationHasBeenSet; }
    inline void SetApplicationRestoreConfiguration(const ApplicationRestoreConfiguration& value) { m_applicationRestoreConfigurationHasBeenSet = true; m_applicationRestoreConfiguration = value; }
    inline void SetApplicationRestoreConfiguration(ApplicationRestoreConfiguration&& value) { m_applicationRestoreConfigurationHasBeenSet = true; m_applicationRestoreConfiguration = std::move(value); }
    inline RunConfiguration& WithApplicationRestoreConfiguration(const ApplicationRestoreConfiguration& value) { SetApplicationRestoreConfiguration(value); return *this;}
    inline RunConfiguration& WithApplicationRestoreConfiguration(ApplicationRestoreConfiguration&& value) { SetApplicationRestoreConfiguration(std::move(value)); return *this;}
    ///@}
  private:

    FlinkRunConfiguration m_flinkRunConfiguration;
    bool m_flinkRunConfigurationHasBeenSet = false;

    Aws::Vector<SqlRunConfiguration> m_sqlRunConfigurations;
    bool m_sqlRunConfigurationsHasBeenSet = false;

    ApplicationRestoreConfiguration m_applicationRestoreConfiguration;
    bool m_applicationRestoreConfigurationHasBeenSet = false;
  };

} // namespace Model
} // namespace KinesisAnalyticsV2
} // namespace Aws
