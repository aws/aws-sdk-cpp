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
    AWS_KINESISANALYTICSV2_API RunConfigurationUpdate();
    AWS_KINESISANALYTICSV2_API RunConfigurationUpdate(Aws::Utils::Json::JsonView jsonValue);
    AWS_KINESISANALYTICSV2_API RunConfigurationUpdate& operator=(Aws::Utils::Json::JsonView jsonValue);
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
    inline RunConfigurationUpdate& WithFlinkRunConfiguration(const FlinkRunConfiguration& value) { SetFlinkRunConfiguration(value); return *this;}
    inline RunConfigurationUpdate& WithFlinkRunConfiguration(FlinkRunConfiguration&& value) { SetFlinkRunConfiguration(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Describes updates to the restore behavior of a restarting application.</p>
     */
    inline const ApplicationRestoreConfiguration& GetApplicationRestoreConfiguration() const{ return m_applicationRestoreConfiguration; }
    inline bool ApplicationRestoreConfigurationHasBeenSet() const { return m_applicationRestoreConfigurationHasBeenSet; }
    inline void SetApplicationRestoreConfiguration(const ApplicationRestoreConfiguration& value) { m_applicationRestoreConfigurationHasBeenSet = true; m_applicationRestoreConfiguration = value; }
    inline void SetApplicationRestoreConfiguration(ApplicationRestoreConfiguration&& value) { m_applicationRestoreConfigurationHasBeenSet = true; m_applicationRestoreConfiguration = std::move(value); }
    inline RunConfigurationUpdate& WithApplicationRestoreConfiguration(const ApplicationRestoreConfiguration& value) { SetApplicationRestoreConfiguration(value); return *this;}
    inline RunConfigurationUpdate& WithApplicationRestoreConfiguration(ApplicationRestoreConfiguration&& value) { SetApplicationRestoreConfiguration(std::move(value)); return *this;}
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
