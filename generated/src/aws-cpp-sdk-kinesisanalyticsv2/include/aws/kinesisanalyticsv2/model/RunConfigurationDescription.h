/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/kinesisanalyticsv2/KinesisAnalyticsV2_EXPORTS.h>
#include <aws/kinesisanalyticsv2/model/ApplicationRestoreConfiguration.h>
#include <aws/kinesisanalyticsv2/model/FlinkRunConfiguration.h>
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
   * <p>Describes the starting properties for a Managed Service for Apache Flink
   * application.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/kinesisanalyticsv2-2018-05-23/RunConfigurationDescription">AWS
   * API Reference</a></p>
   */
  class RunConfigurationDescription
  {
  public:
    AWS_KINESISANALYTICSV2_API RunConfigurationDescription() = default;
    AWS_KINESISANALYTICSV2_API RunConfigurationDescription(Aws::Utils::Json::JsonView jsonValue);
    AWS_KINESISANALYTICSV2_API RunConfigurationDescription& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_KINESISANALYTICSV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Describes the restore behavior of a restarting application.</p>
     */
    inline const ApplicationRestoreConfiguration& GetApplicationRestoreConfigurationDescription() const { return m_applicationRestoreConfigurationDescription; }
    inline bool ApplicationRestoreConfigurationDescriptionHasBeenSet() const { return m_applicationRestoreConfigurationDescriptionHasBeenSet; }
    template<typename ApplicationRestoreConfigurationDescriptionT = ApplicationRestoreConfiguration>
    void SetApplicationRestoreConfigurationDescription(ApplicationRestoreConfigurationDescriptionT&& value) { m_applicationRestoreConfigurationDescriptionHasBeenSet = true; m_applicationRestoreConfigurationDescription = std::forward<ApplicationRestoreConfigurationDescriptionT>(value); }
    template<typename ApplicationRestoreConfigurationDescriptionT = ApplicationRestoreConfiguration>
    RunConfigurationDescription& WithApplicationRestoreConfigurationDescription(ApplicationRestoreConfigurationDescriptionT&& value) { SetApplicationRestoreConfigurationDescription(std::forward<ApplicationRestoreConfigurationDescriptionT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const FlinkRunConfiguration& GetFlinkRunConfigurationDescription() const { return m_flinkRunConfigurationDescription; }
    inline bool FlinkRunConfigurationDescriptionHasBeenSet() const { return m_flinkRunConfigurationDescriptionHasBeenSet; }
    template<typename FlinkRunConfigurationDescriptionT = FlinkRunConfiguration>
    void SetFlinkRunConfigurationDescription(FlinkRunConfigurationDescriptionT&& value) { m_flinkRunConfigurationDescriptionHasBeenSet = true; m_flinkRunConfigurationDescription = std::forward<FlinkRunConfigurationDescriptionT>(value); }
    template<typename FlinkRunConfigurationDescriptionT = FlinkRunConfiguration>
    RunConfigurationDescription& WithFlinkRunConfigurationDescription(FlinkRunConfigurationDescriptionT&& value) { SetFlinkRunConfigurationDescription(std::forward<FlinkRunConfigurationDescriptionT>(value)); return *this;}
    ///@}
  private:

    ApplicationRestoreConfiguration m_applicationRestoreConfigurationDescription;
    bool m_applicationRestoreConfigurationDescriptionHasBeenSet = false;

    FlinkRunConfiguration m_flinkRunConfigurationDescription;
    bool m_flinkRunConfigurationDescriptionHasBeenSet = false;
  };

} // namespace Model
} // namespace KinesisAnalyticsV2
} // namespace Aws
