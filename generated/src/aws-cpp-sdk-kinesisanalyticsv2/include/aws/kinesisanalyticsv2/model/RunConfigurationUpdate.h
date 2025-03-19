/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/kinesisanalyticsv2/KinesisAnalyticsV2_EXPORTS.h>
#include <aws/kinesisanalyticsv2/model/FlinkRunConfiguration.h>
#include <aws/kinesisanalyticsv2/model/ApplicationRestoreConfiguration.h>
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
   * <p>Describes the updates to the starting parameters for a Managed Service for
   * Apache Flink application.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/kinesisanalyticsv2-2018-05-23/RunConfigurationUpdate">AWS
   * API Reference</a></p>
   */
  class RunConfigurationUpdate
  {
  public:
    AWS_KINESISANALYTICSV2_API RunConfigurationUpdate() = default;
    AWS_KINESISANALYTICSV2_API RunConfigurationUpdate(Aws::Utils::Json::JsonView jsonValue);
    AWS_KINESISANALYTICSV2_API RunConfigurationUpdate& operator=(Aws::Utils::Json::JsonView jsonValue);
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
    RunConfigurationUpdate& WithFlinkRunConfiguration(FlinkRunConfigurationT&& value) { SetFlinkRunConfiguration(std::forward<FlinkRunConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Describes updates to the restore behavior of a restarting application.</p>
     */
    inline const ApplicationRestoreConfiguration& GetApplicationRestoreConfiguration() const { return m_applicationRestoreConfiguration; }
    inline bool ApplicationRestoreConfigurationHasBeenSet() const { return m_applicationRestoreConfigurationHasBeenSet; }
    template<typename ApplicationRestoreConfigurationT = ApplicationRestoreConfiguration>
    void SetApplicationRestoreConfiguration(ApplicationRestoreConfigurationT&& value) { m_applicationRestoreConfigurationHasBeenSet = true; m_applicationRestoreConfiguration = std::forward<ApplicationRestoreConfigurationT>(value); }
    template<typename ApplicationRestoreConfigurationT = ApplicationRestoreConfiguration>
    RunConfigurationUpdate& WithApplicationRestoreConfiguration(ApplicationRestoreConfigurationT&& value) { SetApplicationRestoreConfiguration(std::forward<ApplicationRestoreConfigurationT>(value)); return *this;}
    ///@}
  private:

    FlinkRunConfiguration m_flinkRunConfiguration;
    bool m_flinkRunConfigurationHasBeenSet = false;

    ApplicationRestoreConfiguration m_applicationRestoreConfiguration;
    bool m_applicationRestoreConfigurationHasBeenSet = false;
  };

} // namespace Model
} // namespace KinesisAnalyticsV2
} // namespace Aws
