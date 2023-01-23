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
   * <p>Describes parameters for how a Flink-based Kinesis Data Analytics application
   * executes multiple tasks simultaneously. For more information about parallelism,
   * see <a
   * href="https://ci.apache.org/projects/flink/flink-docs-release-1.8/dev/parallel.html">Parallel
   * Execution</a> in the <a
   * href="https://ci.apache.org/projects/flink/flink-docs-release-1.8/">Apache Flink
   * Documentation</a>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/kinesisanalyticsv2-2018-05-23/ParallelismConfiguration">AWS
   * API Reference</a></p>
   */
  class ParallelismConfiguration
  {
  public:
    AWS_KINESISANALYTICSV2_API ParallelismConfiguration();
    AWS_KINESISANALYTICSV2_API ParallelismConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_KINESISANALYTICSV2_API ParallelismConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_KINESISANALYTICSV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Describes whether the application uses the default parallelism for the
     * Kinesis Data Analytics service. You must set this property to
     * <code>CUSTOM</code> in order to change your application's
     * <code>AutoScalingEnabled</code>, <code>Parallelism</code>, or
     * <code>ParallelismPerKPU</code> properties.</p>
     */
    inline const ConfigurationType& GetConfigurationType() const{ return m_configurationType; }

    /**
     * <p>Describes whether the application uses the default parallelism for the
     * Kinesis Data Analytics service. You must set this property to
     * <code>CUSTOM</code> in order to change your application's
     * <code>AutoScalingEnabled</code>, <code>Parallelism</code>, or
     * <code>ParallelismPerKPU</code> properties.</p>
     */
    inline bool ConfigurationTypeHasBeenSet() const { return m_configurationTypeHasBeenSet; }

    /**
     * <p>Describes whether the application uses the default parallelism for the
     * Kinesis Data Analytics service. You must set this property to
     * <code>CUSTOM</code> in order to change your application's
     * <code>AutoScalingEnabled</code>, <code>Parallelism</code>, or
     * <code>ParallelismPerKPU</code> properties.</p>
     */
    inline void SetConfigurationType(const ConfigurationType& value) { m_configurationTypeHasBeenSet = true; m_configurationType = value; }

    /**
     * <p>Describes whether the application uses the default parallelism for the
     * Kinesis Data Analytics service. You must set this property to
     * <code>CUSTOM</code> in order to change your application's
     * <code>AutoScalingEnabled</code>, <code>Parallelism</code>, or
     * <code>ParallelismPerKPU</code> properties.</p>
     */
    inline void SetConfigurationType(ConfigurationType&& value) { m_configurationTypeHasBeenSet = true; m_configurationType = std::move(value); }

    /**
     * <p>Describes whether the application uses the default parallelism for the
     * Kinesis Data Analytics service. You must set this property to
     * <code>CUSTOM</code> in order to change your application's
     * <code>AutoScalingEnabled</code>, <code>Parallelism</code>, or
     * <code>ParallelismPerKPU</code> properties.</p>
     */
    inline ParallelismConfiguration& WithConfigurationType(const ConfigurationType& value) { SetConfigurationType(value); return *this;}

    /**
     * <p>Describes whether the application uses the default parallelism for the
     * Kinesis Data Analytics service. You must set this property to
     * <code>CUSTOM</code> in order to change your application's
     * <code>AutoScalingEnabled</code>, <code>Parallelism</code>, or
     * <code>ParallelismPerKPU</code> properties.</p>
     */
    inline ParallelismConfiguration& WithConfigurationType(ConfigurationType&& value) { SetConfigurationType(std::move(value)); return *this;}


    /**
     * <p>Describes the initial number of parallel tasks that a Flink-based Kinesis
     * Data Analytics application can perform. If <code>AutoScalingEnabled</code> is
     * set to True, Kinesis Data Analytics increases the
     * <code>CurrentParallelism</code> value in response to application load. The
     * service can increase the <code>CurrentParallelism</code> value up to the maximum
     * parallelism, which is <code>ParalellismPerKPU</code> times the maximum KPUs for
     * the application. The maximum KPUs for an application is 32 by default, and can
     * be increased by requesting a limit increase. If application load is reduced, the
     * service can reduce the <code>CurrentParallelism</code> value down to the
     * <code>Parallelism</code> setting.</p>
     */
    inline int GetParallelism() const{ return m_parallelism; }

    /**
     * <p>Describes the initial number of parallel tasks that a Flink-based Kinesis
     * Data Analytics application can perform. If <code>AutoScalingEnabled</code> is
     * set to True, Kinesis Data Analytics increases the
     * <code>CurrentParallelism</code> value in response to application load. The
     * service can increase the <code>CurrentParallelism</code> value up to the maximum
     * parallelism, which is <code>ParalellismPerKPU</code> times the maximum KPUs for
     * the application. The maximum KPUs for an application is 32 by default, and can
     * be increased by requesting a limit increase. If application load is reduced, the
     * service can reduce the <code>CurrentParallelism</code> value down to the
     * <code>Parallelism</code> setting.</p>
     */
    inline bool ParallelismHasBeenSet() const { return m_parallelismHasBeenSet; }

    /**
     * <p>Describes the initial number of parallel tasks that a Flink-based Kinesis
     * Data Analytics application can perform. If <code>AutoScalingEnabled</code> is
     * set to True, Kinesis Data Analytics increases the
     * <code>CurrentParallelism</code> value in response to application load. The
     * service can increase the <code>CurrentParallelism</code> value up to the maximum
     * parallelism, which is <code>ParalellismPerKPU</code> times the maximum KPUs for
     * the application. The maximum KPUs for an application is 32 by default, and can
     * be increased by requesting a limit increase. If application load is reduced, the
     * service can reduce the <code>CurrentParallelism</code> value down to the
     * <code>Parallelism</code> setting.</p>
     */
    inline void SetParallelism(int value) { m_parallelismHasBeenSet = true; m_parallelism = value; }

    /**
     * <p>Describes the initial number of parallel tasks that a Flink-based Kinesis
     * Data Analytics application can perform. If <code>AutoScalingEnabled</code> is
     * set to True, Kinesis Data Analytics increases the
     * <code>CurrentParallelism</code> value in response to application load. The
     * service can increase the <code>CurrentParallelism</code> value up to the maximum
     * parallelism, which is <code>ParalellismPerKPU</code> times the maximum KPUs for
     * the application. The maximum KPUs for an application is 32 by default, and can
     * be increased by requesting a limit increase. If application load is reduced, the
     * service can reduce the <code>CurrentParallelism</code> value down to the
     * <code>Parallelism</code> setting.</p>
     */
    inline ParallelismConfiguration& WithParallelism(int value) { SetParallelism(value); return *this;}


    /**
     * <p>Describes the number of parallel tasks that a Flink-based Kinesis Data
     * Analytics application can perform per Kinesis Processing Unit (KPU) used by the
     * application. For more information about KPUs, see <a
     * href="http://aws.amazon.com/kinesis/data-analytics/pricing/">Amazon Kinesis Data
     * Analytics Pricing</a>.</p>
     */
    inline int GetParallelismPerKPU() const{ return m_parallelismPerKPU; }

    /**
     * <p>Describes the number of parallel tasks that a Flink-based Kinesis Data
     * Analytics application can perform per Kinesis Processing Unit (KPU) used by the
     * application. For more information about KPUs, see <a
     * href="http://aws.amazon.com/kinesis/data-analytics/pricing/">Amazon Kinesis Data
     * Analytics Pricing</a>.</p>
     */
    inline bool ParallelismPerKPUHasBeenSet() const { return m_parallelismPerKPUHasBeenSet; }

    /**
     * <p>Describes the number of parallel tasks that a Flink-based Kinesis Data
     * Analytics application can perform per Kinesis Processing Unit (KPU) used by the
     * application. For more information about KPUs, see <a
     * href="http://aws.amazon.com/kinesis/data-analytics/pricing/">Amazon Kinesis Data
     * Analytics Pricing</a>.</p>
     */
    inline void SetParallelismPerKPU(int value) { m_parallelismPerKPUHasBeenSet = true; m_parallelismPerKPU = value; }

    /**
     * <p>Describes the number of parallel tasks that a Flink-based Kinesis Data
     * Analytics application can perform per Kinesis Processing Unit (KPU) used by the
     * application. For more information about KPUs, see <a
     * href="http://aws.amazon.com/kinesis/data-analytics/pricing/">Amazon Kinesis Data
     * Analytics Pricing</a>.</p>
     */
    inline ParallelismConfiguration& WithParallelismPerKPU(int value) { SetParallelismPerKPU(value); return *this;}


    /**
     * <p>Describes whether the Kinesis Data Analytics service can increase the
     * parallelism of the application in response to increased throughput.</p>
     */
    inline bool GetAutoScalingEnabled() const{ return m_autoScalingEnabled; }

    /**
     * <p>Describes whether the Kinesis Data Analytics service can increase the
     * parallelism of the application in response to increased throughput.</p>
     */
    inline bool AutoScalingEnabledHasBeenSet() const { return m_autoScalingEnabledHasBeenSet; }

    /**
     * <p>Describes whether the Kinesis Data Analytics service can increase the
     * parallelism of the application in response to increased throughput.</p>
     */
    inline void SetAutoScalingEnabled(bool value) { m_autoScalingEnabledHasBeenSet = true; m_autoScalingEnabled = value; }

    /**
     * <p>Describes whether the Kinesis Data Analytics service can increase the
     * parallelism of the application in response to increased throughput.</p>
     */
    inline ParallelismConfiguration& WithAutoScalingEnabled(bool value) { SetAutoScalingEnabled(value); return *this;}

  private:

    ConfigurationType m_configurationType;
    bool m_configurationTypeHasBeenSet = false;

    int m_parallelism;
    bool m_parallelismHasBeenSet = false;

    int m_parallelismPerKPU;
    bool m_parallelismPerKPUHasBeenSet = false;

    bool m_autoScalingEnabled;
    bool m_autoScalingEnabledHasBeenSet = false;
  };

} // namespace Model
} // namespace KinesisAnalyticsV2
} // namespace Aws
