/**
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
    AWS_KINESISANALYTICSV2_API RunConfiguration() = default;
    AWS_KINESISANALYTICSV2_API RunConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_KINESISANALYTICSV2_API RunConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_KINESISANALYTICSV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Describes the starting parameters for a Managed Service for Apache Flink
     * application.</p>
     */
    inline const FlinkRunConfiguration& GetFlinkRunConfiguration() const { return m_flinkRunConfiguration; }
    inline bool FlinkRunConfigurationHasBeenSet() const { return m_flinkRunConfigurationHasBeenSet; }
    template<typename FlinkRunConfigurationT = FlinkRunConfiguration>
    void SetFlinkRunConfiguration(FlinkRunConfigurationT&& value) { m_flinkRunConfigurationHasBeenSet = true; m_flinkRunConfiguration = std::forward<FlinkRunConfigurationT>(value); }
    template<typename FlinkRunConfigurationT = FlinkRunConfiguration>
    RunConfiguration& WithFlinkRunConfiguration(FlinkRunConfigurationT&& value) { SetFlinkRunConfiguration(std::forward<FlinkRunConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Describes the starting parameters for a SQL-based Kinesis Data Analytics
     * application application.</p>
     */
    inline const Aws::Vector<SqlRunConfiguration>& GetSqlRunConfigurations() const { return m_sqlRunConfigurations; }
    inline bool SqlRunConfigurationsHasBeenSet() const { return m_sqlRunConfigurationsHasBeenSet; }
    template<typename SqlRunConfigurationsT = Aws::Vector<SqlRunConfiguration>>
    void SetSqlRunConfigurations(SqlRunConfigurationsT&& value) { m_sqlRunConfigurationsHasBeenSet = true; m_sqlRunConfigurations = std::forward<SqlRunConfigurationsT>(value); }
    template<typename SqlRunConfigurationsT = Aws::Vector<SqlRunConfiguration>>
    RunConfiguration& WithSqlRunConfigurations(SqlRunConfigurationsT&& value) { SetSqlRunConfigurations(std::forward<SqlRunConfigurationsT>(value)); return *this;}
    template<typename SqlRunConfigurationsT = SqlRunConfiguration>
    RunConfiguration& AddSqlRunConfigurations(SqlRunConfigurationsT&& value) { m_sqlRunConfigurationsHasBeenSet = true; m_sqlRunConfigurations.emplace_back(std::forward<SqlRunConfigurationsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Describes the restore behavior of a restarting application.</p>
     */
    inline const ApplicationRestoreConfiguration& GetApplicationRestoreConfiguration() const { return m_applicationRestoreConfiguration; }
    inline bool ApplicationRestoreConfigurationHasBeenSet() const { return m_applicationRestoreConfigurationHasBeenSet; }
    template<typename ApplicationRestoreConfigurationT = ApplicationRestoreConfiguration>
    void SetApplicationRestoreConfiguration(ApplicationRestoreConfigurationT&& value) { m_applicationRestoreConfigurationHasBeenSet = true; m_applicationRestoreConfiguration = std::forward<ApplicationRestoreConfigurationT>(value); }
    template<typename ApplicationRestoreConfigurationT = ApplicationRestoreConfiguration>
    RunConfiguration& WithApplicationRestoreConfiguration(ApplicationRestoreConfigurationT&& value) { SetApplicationRestoreConfiguration(std::forward<ApplicationRestoreConfigurationT>(value)); return *this;}
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
