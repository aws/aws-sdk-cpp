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
   * <p>Describes parameters for how a Java-based Kinesis Data Analytics application
   * executes multiple tasks simultaneously.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/kinesisanalyticsv2-2018-05-23/ParallelismConfigurationDescription">AWS
   * API Reference</a></p>
   */
  class AWS_KINESISANALYTICSV2_API ParallelismConfigurationDescription
  {
  public:
    ParallelismConfigurationDescription();
    ParallelismConfigurationDescription(Aws::Utils::Json::JsonView jsonValue);
    ParallelismConfigurationDescription& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Describes whether the application uses the default parallelism for the
     * Kinesis Data Analytics service. </p>
     */
    inline const ConfigurationType& GetConfigurationType() const{ return m_configurationType; }

    /**
     * <p>Describes whether the application uses the default parallelism for the
     * Kinesis Data Analytics service. </p>
     */
    inline bool ConfigurationTypeHasBeenSet() const { return m_configurationTypeHasBeenSet; }

    /**
     * <p>Describes whether the application uses the default parallelism for the
     * Kinesis Data Analytics service. </p>
     */
    inline void SetConfigurationType(const ConfigurationType& value) { m_configurationTypeHasBeenSet = true; m_configurationType = value; }

    /**
     * <p>Describes whether the application uses the default parallelism for the
     * Kinesis Data Analytics service. </p>
     */
    inline void SetConfigurationType(ConfigurationType&& value) { m_configurationTypeHasBeenSet = true; m_configurationType = std::move(value); }

    /**
     * <p>Describes whether the application uses the default parallelism for the
     * Kinesis Data Analytics service. </p>
     */
    inline ParallelismConfigurationDescription& WithConfigurationType(const ConfigurationType& value) { SetConfigurationType(value); return *this;}

    /**
     * <p>Describes whether the application uses the default parallelism for the
     * Kinesis Data Analytics service. </p>
     */
    inline ParallelismConfigurationDescription& WithConfigurationType(ConfigurationType&& value) { SetConfigurationType(std::move(value)); return *this;}


    /**
     * <p>Describes the initial number of parallel tasks that a Java-based Kinesis Data
     * Analytics application can perform. </p>
     */
    inline int GetParallelism() const{ return m_parallelism; }

    /**
     * <p>Describes the initial number of parallel tasks that a Java-based Kinesis Data
     * Analytics application can perform. </p>
     */
    inline bool ParallelismHasBeenSet() const { return m_parallelismHasBeenSet; }

    /**
     * <p>Describes the initial number of parallel tasks that a Java-based Kinesis Data
     * Analytics application can perform. </p>
     */
    inline void SetParallelism(int value) { m_parallelismHasBeenSet = true; m_parallelism = value; }

    /**
     * <p>Describes the initial number of parallel tasks that a Java-based Kinesis Data
     * Analytics application can perform. </p>
     */
    inline ParallelismConfigurationDescription& WithParallelism(int value) { SetParallelism(value); return *this;}


    /**
     * <p>Describes the number of parallel tasks that a Java-based Kinesis Data
     * Analytics application can perform per Kinesis Processing Unit (KPU) used by the
     * application.</p>
     */
    inline int GetParallelismPerKPU() const{ return m_parallelismPerKPU; }

    /**
     * <p>Describes the number of parallel tasks that a Java-based Kinesis Data
     * Analytics application can perform per Kinesis Processing Unit (KPU) used by the
     * application.</p>
     */
    inline bool ParallelismPerKPUHasBeenSet() const { return m_parallelismPerKPUHasBeenSet; }

    /**
     * <p>Describes the number of parallel tasks that a Java-based Kinesis Data
     * Analytics application can perform per Kinesis Processing Unit (KPU) used by the
     * application.</p>
     */
    inline void SetParallelismPerKPU(int value) { m_parallelismPerKPUHasBeenSet = true; m_parallelismPerKPU = value; }

    /**
     * <p>Describes the number of parallel tasks that a Java-based Kinesis Data
     * Analytics application can perform per Kinesis Processing Unit (KPU) used by the
     * application.</p>
     */
    inline ParallelismConfigurationDescription& WithParallelismPerKPU(int value) { SetParallelismPerKPU(value); return *this;}


    /**
     * <p>Describes the current number of parallel tasks that a Java-based Kinesis Data
     * Analytics application can perform.</p>
     */
    inline int GetCurrentParallelism() const{ return m_currentParallelism; }

    /**
     * <p>Describes the current number of parallel tasks that a Java-based Kinesis Data
     * Analytics application can perform.</p>
     */
    inline bool CurrentParallelismHasBeenSet() const { return m_currentParallelismHasBeenSet; }

    /**
     * <p>Describes the current number of parallel tasks that a Java-based Kinesis Data
     * Analytics application can perform.</p>
     */
    inline void SetCurrentParallelism(int value) { m_currentParallelismHasBeenSet = true; m_currentParallelism = value; }

    /**
     * <p>Describes the current number of parallel tasks that a Java-based Kinesis Data
     * Analytics application can perform.</p>
     */
    inline ParallelismConfigurationDescription& WithCurrentParallelism(int value) { SetCurrentParallelism(value); return *this;}


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
    inline ParallelismConfigurationDescription& WithAutoScalingEnabled(bool value) { SetAutoScalingEnabled(value); return *this;}

  private:

    ConfigurationType m_configurationType;
    bool m_configurationTypeHasBeenSet;

    int m_parallelism;
    bool m_parallelismHasBeenSet;

    int m_parallelismPerKPU;
    bool m_parallelismPerKPUHasBeenSet;

    int m_currentParallelism;
    bool m_currentParallelismHasBeenSet;

    bool m_autoScalingEnabled;
    bool m_autoScalingEnabledHasBeenSet;
  };

} // namespace Model
} // namespace KinesisAnalyticsV2
} // namespace Aws
