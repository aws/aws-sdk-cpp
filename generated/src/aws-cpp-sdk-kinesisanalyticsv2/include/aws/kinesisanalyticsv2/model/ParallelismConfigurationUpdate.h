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
    AWS_KINESISANALYTICSV2_API ParallelismConfigurationUpdate();
    AWS_KINESISANALYTICSV2_API ParallelismConfigurationUpdate(Aws::Utils::Json::JsonView jsonValue);
    AWS_KINESISANALYTICSV2_API ParallelismConfigurationUpdate& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_KINESISANALYTICSV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Describes updates to whether the application uses the default parallelism for
     * the Kinesis Data Analytics service, or if a custom parallelism is used. You must
     * set this property to <code>CUSTOM</code> in order to change your application's
     * <code>AutoScalingEnabled</code>, <code>Parallelism</code>, or
     * <code>ParallelismPerKPU</code> properties.</p>
     */
    inline const ConfigurationType& GetConfigurationTypeUpdate() const{ return m_configurationTypeUpdate; }

    /**
     * <p>Describes updates to whether the application uses the default parallelism for
     * the Kinesis Data Analytics service, or if a custom parallelism is used. You must
     * set this property to <code>CUSTOM</code> in order to change your application's
     * <code>AutoScalingEnabled</code>, <code>Parallelism</code>, or
     * <code>ParallelismPerKPU</code> properties.</p>
     */
    inline bool ConfigurationTypeUpdateHasBeenSet() const { return m_configurationTypeUpdateHasBeenSet; }

    /**
     * <p>Describes updates to whether the application uses the default parallelism for
     * the Kinesis Data Analytics service, or if a custom parallelism is used. You must
     * set this property to <code>CUSTOM</code> in order to change your application's
     * <code>AutoScalingEnabled</code>, <code>Parallelism</code>, or
     * <code>ParallelismPerKPU</code> properties.</p>
     */
    inline void SetConfigurationTypeUpdate(const ConfigurationType& value) { m_configurationTypeUpdateHasBeenSet = true; m_configurationTypeUpdate = value; }

    /**
     * <p>Describes updates to whether the application uses the default parallelism for
     * the Kinesis Data Analytics service, or if a custom parallelism is used. You must
     * set this property to <code>CUSTOM</code> in order to change your application's
     * <code>AutoScalingEnabled</code>, <code>Parallelism</code>, or
     * <code>ParallelismPerKPU</code> properties.</p>
     */
    inline void SetConfigurationTypeUpdate(ConfigurationType&& value) { m_configurationTypeUpdateHasBeenSet = true; m_configurationTypeUpdate = std::move(value); }

    /**
     * <p>Describes updates to whether the application uses the default parallelism for
     * the Kinesis Data Analytics service, or if a custom parallelism is used. You must
     * set this property to <code>CUSTOM</code> in order to change your application's
     * <code>AutoScalingEnabled</code>, <code>Parallelism</code>, or
     * <code>ParallelismPerKPU</code> properties.</p>
     */
    inline ParallelismConfigurationUpdate& WithConfigurationTypeUpdate(const ConfigurationType& value) { SetConfigurationTypeUpdate(value); return *this;}

    /**
     * <p>Describes updates to whether the application uses the default parallelism for
     * the Kinesis Data Analytics service, or if a custom parallelism is used. You must
     * set this property to <code>CUSTOM</code> in order to change your application's
     * <code>AutoScalingEnabled</code>, <code>Parallelism</code>, or
     * <code>ParallelismPerKPU</code> properties.</p>
     */
    inline ParallelismConfigurationUpdate& WithConfigurationTypeUpdate(ConfigurationType&& value) { SetConfigurationTypeUpdate(std::move(value)); return *this;}


    /**
     * <p>Describes updates to the initial number of parallel tasks an application can
     * perform. If <code>AutoScalingEnabled</code> is set to True, then Kinesis Data
     * Analytics can increase the <code>CurrentParallelism</code> value in response to
     * application load. The service can increase <code>CurrentParallelism</code> up to
     * the maximum parallelism, which is <code>ParalellismPerKPU</code> times the
     * maximum KPUs for the application. The maximum KPUs for an application is 32 by
     * default, and can be increased by requesting a limit increase. If application
     * load is reduced, the service will reduce <code>CurrentParallelism</code> down to
     * the <code>Parallelism</code> setting.</p>
     */
    inline int GetParallelismUpdate() const{ return m_parallelismUpdate; }

    /**
     * <p>Describes updates to the initial number of parallel tasks an application can
     * perform. If <code>AutoScalingEnabled</code> is set to True, then Kinesis Data
     * Analytics can increase the <code>CurrentParallelism</code> value in response to
     * application load. The service can increase <code>CurrentParallelism</code> up to
     * the maximum parallelism, which is <code>ParalellismPerKPU</code> times the
     * maximum KPUs for the application. The maximum KPUs for an application is 32 by
     * default, and can be increased by requesting a limit increase. If application
     * load is reduced, the service will reduce <code>CurrentParallelism</code> down to
     * the <code>Parallelism</code> setting.</p>
     */
    inline bool ParallelismUpdateHasBeenSet() const { return m_parallelismUpdateHasBeenSet; }

    /**
     * <p>Describes updates to the initial number of parallel tasks an application can
     * perform. If <code>AutoScalingEnabled</code> is set to True, then Kinesis Data
     * Analytics can increase the <code>CurrentParallelism</code> value in response to
     * application load. The service can increase <code>CurrentParallelism</code> up to
     * the maximum parallelism, which is <code>ParalellismPerKPU</code> times the
     * maximum KPUs for the application. The maximum KPUs for an application is 32 by
     * default, and can be increased by requesting a limit increase. If application
     * load is reduced, the service will reduce <code>CurrentParallelism</code> down to
     * the <code>Parallelism</code> setting.</p>
     */
    inline void SetParallelismUpdate(int value) { m_parallelismUpdateHasBeenSet = true; m_parallelismUpdate = value; }

    /**
     * <p>Describes updates to the initial number of parallel tasks an application can
     * perform. If <code>AutoScalingEnabled</code> is set to True, then Kinesis Data
     * Analytics can increase the <code>CurrentParallelism</code> value in response to
     * application load. The service can increase <code>CurrentParallelism</code> up to
     * the maximum parallelism, which is <code>ParalellismPerKPU</code> times the
     * maximum KPUs for the application. The maximum KPUs for an application is 32 by
     * default, and can be increased by requesting a limit increase. If application
     * load is reduced, the service will reduce <code>CurrentParallelism</code> down to
     * the <code>Parallelism</code> setting.</p>
     */
    inline ParallelismConfigurationUpdate& WithParallelismUpdate(int value) { SetParallelismUpdate(value); return *this;}


    /**
     * <p>Describes updates to the number of parallel tasks an application can perform
     * per Kinesis Processing Unit (KPU) used by the application.</p>
     */
    inline int GetParallelismPerKPUUpdate() const{ return m_parallelismPerKPUUpdate; }

    /**
     * <p>Describes updates to the number of parallel tasks an application can perform
     * per Kinesis Processing Unit (KPU) used by the application.</p>
     */
    inline bool ParallelismPerKPUUpdateHasBeenSet() const { return m_parallelismPerKPUUpdateHasBeenSet; }

    /**
     * <p>Describes updates to the number of parallel tasks an application can perform
     * per Kinesis Processing Unit (KPU) used by the application.</p>
     */
    inline void SetParallelismPerKPUUpdate(int value) { m_parallelismPerKPUUpdateHasBeenSet = true; m_parallelismPerKPUUpdate = value; }

    /**
     * <p>Describes updates to the number of parallel tasks an application can perform
     * per Kinesis Processing Unit (KPU) used by the application.</p>
     */
    inline ParallelismConfigurationUpdate& WithParallelismPerKPUUpdate(int value) { SetParallelismPerKPUUpdate(value); return *this;}


    /**
     * <p>Describes updates to whether the Kinesis Data Analytics service can increase
     * the parallelism of a Flink-based Kinesis Data Analytics application in response
     * to increased throughput.</p>
     */
    inline bool GetAutoScalingEnabledUpdate() const{ return m_autoScalingEnabledUpdate; }

    /**
     * <p>Describes updates to whether the Kinesis Data Analytics service can increase
     * the parallelism of a Flink-based Kinesis Data Analytics application in response
     * to increased throughput.</p>
     */
    inline bool AutoScalingEnabledUpdateHasBeenSet() const { return m_autoScalingEnabledUpdateHasBeenSet; }

    /**
     * <p>Describes updates to whether the Kinesis Data Analytics service can increase
     * the parallelism of a Flink-based Kinesis Data Analytics application in response
     * to increased throughput.</p>
     */
    inline void SetAutoScalingEnabledUpdate(bool value) { m_autoScalingEnabledUpdateHasBeenSet = true; m_autoScalingEnabledUpdate = value; }

    /**
     * <p>Describes updates to whether the Kinesis Data Analytics service can increase
     * the parallelism of a Flink-based Kinesis Data Analytics application in response
     * to increased throughput.</p>
     */
    inline ParallelismConfigurationUpdate& WithAutoScalingEnabledUpdate(bool value) { SetAutoScalingEnabledUpdate(value); return *this;}

  private:

    ConfigurationType m_configurationTypeUpdate;
    bool m_configurationTypeUpdateHasBeenSet = false;

    int m_parallelismUpdate;
    bool m_parallelismUpdateHasBeenSet = false;

    int m_parallelismPerKPUUpdate;
    bool m_parallelismPerKPUUpdateHasBeenSet = false;

    bool m_autoScalingEnabledUpdate;
    bool m_autoScalingEnabledUpdateHasBeenSet = false;
  };

} // namespace Model
} // namespace KinesisAnalyticsV2
} // namespace Aws
