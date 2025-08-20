/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/kinesisanalyticsv2/KinesisAnalyticsV2_EXPORTS.h>
#include <aws/kinesisanalyticsv2/model/ConfigurationType.h>
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
   * <p>Describes parameters for how a Managed Service for Apache Flink application
   * executes multiple tasks simultaneously.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/kinesisanalyticsv2-2018-05-23/ParallelismConfigurationDescription">AWS
   * API Reference</a></p>
   */
  class ParallelismConfigurationDescription
  {
  public:
    AWS_KINESISANALYTICSV2_API ParallelismConfigurationDescription() = default;
    AWS_KINESISANALYTICSV2_API ParallelismConfigurationDescription(Aws::Utils::Json::JsonView jsonValue);
    AWS_KINESISANALYTICSV2_API ParallelismConfigurationDescription& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_KINESISANALYTICSV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Describes whether the application uses the default parallelism for the
     * Managed Service for Apache Flink service. </p>
     */
    inline ConfigurationType GetConfigurationType() const { return m_configurationType; }
    inline bool ConfigurationTypeHasBeenSet() const { return m_configurationTypeHasBeenSet; }
    inline void SetConfigurationType(ConfigurationType value) { m_configurationTypeHasBeenSet = true; m_configurationType = value; }
    inline ParallelismConfigurationDescription& WithConfigurationType(ConfigurationType value) { SetConfigurationType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Describes the initial number of parallel tasks that a Managed Service for
     * Apache Flink application can perform. If <code>AutoScalingEnabled</code> is set
     * to True, then Managed Service for Apache Flink can increase the
     * <code>CurrentParallelism</code> value in response to application load. The
     * service can increase <code>CurrentParallelism</code> up to the maximum
     * parallelism, which is <code>ParalellismPerKPU</code> times the maximum KPUs for
     * the application. The maximum KPUs for an application is 64 by default, and can
     * be increased by requesting a limit increase. If application load is reduced, the
     * service can reduce the <code>CurrentParallelism</code> value down to the
     * <code>Parallelism</code> setting.</p>
     */
    inline int GetParallelism() const { return m_parallelism; }
    inline bool ParallelismHasBeenSet() const { return m_parallelismHasBeenSet; }
    inline void SetParallelism(int value) { m_parallelismHasBeenSet = true; m_parallelism = value; }
    inline ParallelismConfigurationDescription& WithParallelism(int value) { SetParallelism(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Describes the number of parallel tasks that a Managed Service for Apache
     * Flink application can perform per Kinesis Processing Unit (KPU) used by the
     * application.</p>
     */
    inline int GetParallelismPerKPU() const { return m_parallelismPerKPU; }
    inline bool ParallelismPerKPUHasBeenSet() const { return m_parallelismPerKPUHasBeenSet; }
    inline void SetParallelismPerKPU(int value) { m_parallelismPerKPUHasBeenSet = true; m_parallelismPerKPU = value; }
    inline ParallelismConfigurationDescription& WithParallelismPerKPU(int value) { SetParallelismPerKPU(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Describes the current number of parallel tasks that a Managed Service for
     * Apache Flink application can perform. If <code>AutoScalingEnabled</code> is set
     * to True, Managed Service for Apache Flink can increase this value in response to
     * application load. The service can increase this value up to the maximum
     * parallelism, which is <code>ParalellismPerKPU</code> times the maximum KPUs for
     * the application. The maximum KPUs for an application is 32 by default, and can
     * be increased by requesting a limit increase. If application load is reduced, the
     * service can reduce the <code>CurrentParallelism</code> value down to the
     * <code>Parallelism</code> setting.</p>
     */
    inline int GetCurrentParallelism() const { return m_currentParallelism; }
    inline bool CurrentParallelismHasBeenSet() const { return m_currentParallelismHasBeenSet; }
    inline void SetCurrentParallelism(int value) { m_currentParallelismHasBeenSet = true; m_currentParallelism = value; }
    inline ParallelismConfigurationDescription& WithCurrentParallelism(int value) { SetCurrentParallelism(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Describes whether the Managed Service for Apache Flink service can increase
     * the parallelism of the application in response to increased throughput.</p>
     */
    inline bool GetAutoScalingEnabled() const { return m_autoScalingEnabled; }
    inline bool AutoScalingEnabledHasBeenSet() const { return m_autoScalingEnabledHasBeenSet; }
    inline void SetAutoScalingEnabled(bool value) { m_autoScalingEnabledHasBeenSet = true; m_autoScalingEnabled = value; }
    inline ParallelismConfigurationDescription& WithAutoScalingEnabled(bool value) { SetAutoScalingEnabled(value); return *this;}
    ///@}
  private:

    ConfigurationType m_configurationType{ConfigurationType::NOT_SET};
    bool m_configurationTypeHasBeenSet = false;

    int m_parallelism{0};
    bool m_parallelismHasBeenSet = false;

    int m_parallelismPerKPU{0};
    bool m_parallelismPerKPUHasBeenSet = false;

    int m_currentParallelism{0};
    bool m_currentParallelismHasBeenSet = false;

    bool m_autoScalingEnabled{false};
    bool m_autoScalingEnabledHasBeenSet = false;
  };

} // namespace Model
} // namespace KinesisAnalyticsV2
} // namespace Aws
