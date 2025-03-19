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
   * <p>Describes updates to parameters for how an application executes multiple
   * tasks simultaneously.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/kinesisanalyticsv2-2018-05-23/ParallelismConfigurationUpdate">AWS
   * API Reference</a></p>
   */
  class ParallelismConfigurationUpdate
  {
  public:
    AWS_KINESISANALYTICSV2_API ParallelismConfigurationUpdate() = default;
    AWS_KINESISANALYTICSV2_API ParallelismConfigurationUpdate(Aws::Utils::Json::JsonView jsonValue);
    AWS_KINESISANALYTICSV2_API ParallelismConfigurationUpdate& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_KINESISANALYTICSV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Describes updates to whether the application uses the default parallelism for
     * the Managed Service for Apache Flink service, or if a custom parallelism is
     * used. You must set this property to <code>CUSTOM</code> in order to change your
     * application's <code>AutoScalingEnabled</code>, <code>Parallelism</code>, or
     * <code>ParallelismPerKPU</code> properties.</p>
     */
    inline ConfigurationType GetConfigurationTypeUpdate() const { return m_configurationTypeUpdate; }
    inline bool ConfigurationTypeUpdateHasBeenSet() const { return m_configurationTypeUpdateHasBeenSet; }
    inline void SetConfigurationTypeUpdate(ConfigurationType value) { m_configurationTypeUpdateHasBeenSet = true; m_configurationTypeUpdate = value; }
    inline ParallelismConfigurationUpdate& WithConfigurationTypeUpdate(ConfigurationType value) { SetConfigurationTypeUpdate(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Describes updates to the initial number of parallel tasks an application can
     * perform. If <code>AutoScalingEnabled</code> is set to True, then Managed Service
     * for Apache Flink can increase the <code>CurrentParallelism</code> value in
     * response to application load. The service can increase
     * <code>CurrentParallelism</code> up to the maximum parallelism, which is
     * <code>ParalellismPerKPU</code> times the maximum KPUs for the application. The
     * maximum KPUs for an application is 32 by default, and can be increased by
     * requesting a limit increase. If application load is reduced, the service will
     * reduce <code>CurrentParallelism</code> down to the <code>Parallelism</code>
     * setting.</p>
     */
    inline int GetParallelismUpdate() const { return m_parallelismUpdate; }
    inline bool ParallelismUpdateHasBeenSet() const { return m_parallelismUpdateHasBeenSet; }
    inline void SetParallelismUpdate(int value) { m_parallelismUpdateHasBeenSet = true; m_parallelismUpdate = value; }
    inline ParallelismConfigurationUpdate& WithParallelismUpdate(int value) { SetParallelismUpdate(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Describes updates to the number of parallel tasks an application can perform
     * per Kinesis Processing Unit (KPU) used by the application.</p>
     */
    inline int GetParallelismPerKPUUpdate() const { return m_parallelismPerKPUUpdate; }
    inline bool ParallelismPerKPUUpdateHasBeenSet() const { return m_parallelismPerKPUUpdateHasBeenSet; }
    inline void SetParallelismPerKPUUpdate(int value) { m_parallelismPerKPUUpdateHasBeenSet = true; m_parallelismPerKPUUpdate = value; }
    inline ParallelismConfigurationUpdate& WithParallelismPerKPUUpdate(int value) { SetParallelismPerKPUUpdate(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Describes updates to whether the Managed Service for Apache Flink service can
     * increase the parallelism of a Managed Service for Apache Flink application in
     * response to increased throughput.</p>
     */
    inline bool GetAutoScalingEnabledUpdate() const { return m_autoScalingEnabledUpdate; }
    inline bool AutoScalingEnabledUpdateHasBeenSet() const { return m_autoScalingEnabledUpdateHasBeenSet; }
    inline void SetAutoScalingEnabledUpdate(bool value) { m_autoScalingEnabledUpdateHasBeenSet = true; m_autoScalingEnabledUpdate = value; }
    inline ParallelismConfigurationUpdate& WithAutoScalingEnabledUpdate(bool value) { SetAutoScalingEnabledUpdate(value); return *this;}
    ///@}
  private:

    ConfigurationType m_configurationTypeUpdate{ConfigurationType::NOT_SET};
    bool m_configurationTypeUpdateHasBeenSet = false;

    int m_parallelismUpdate{0};
    bool m_parallelismUpdateHasBeenSet = false;

    int m_parallelismPerKPUUpdate{0};
    bool m_parallelismPerKPUUpdateHasBeenSet = false;

    bool m_autoScalingEnabledUpdate{false};
    bool m_autoScalingEnabledUpdateHasBeenSet = false;
  };

} // namespace Model
} // namespace KinesisAnalyticsV2
} // namespace Aws
