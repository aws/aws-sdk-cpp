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
   * <p>Describes updates to parameters for how a Java-based Kinesis Data Analytics
   * application executes multiple tasks simultaneously.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/kinesisanalyticsv2-2018-05-23/ParallelismConfigurationUpdate">AWS
   * API Reference</a></p>
   */
  class AWS_KINESISANALYTICSV2_API ParallelismConfigurationUpdate
  {
  public:
    ParallelismConfigurationUpdate();
    ParallelismConfigurationUpdate(Aws::Utils::Json::JsonView jsonValue);
    ParallelismConfigurationUpdate& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Describes updates to whether the application uses the default parallelism for
     * the Kinesis Data Analytics service, or if a custom parallelism is used.</p>
     */
    inline const ConfigurationType& GetConfigurationTypeUpdate() const{ return m_configurationTypeUpdate; }

    /**
     * <p>Describes updates to whether the application uses the default parallelism for
     * the Kinesis Data Analytics service, or if a custom parallelism is used.</p>
     */
    inline bool ConfigurationTypeUpdateHasBeenSet() const { return m_configurationTypeUpdateHasBeenSet; }

    /**
     * <p>Describes updates to whether the application uses the default parallelism for
     * the Kinesis Data Analytics service, or if a custom parallelism is used.</p>
     */
    inline void SetConfigurationTypeUpdate(const ConfigurationType& value) { m_configurationTypeUpdateHasBeenSet = true; m_configurationTypeUpdate = value; }

    /**
     * <p>Describes updates to whether the application uses the default parallelism for
     * the Kinesis Data Analytics service, or if a custom parallelism is used.</p>
     */
    inline void SetConfigurationTypeUpdate(ConfigurationType&& value) { m_configurationTypeUpdateHasBeenSet = true; m_configurationTypeUpdate = std::move(value); }

    /**
     * <p>Describes updates to whether the application uses the default parallelism for
     * the Kinesis Data Analytics service, or if a custom parallelism is used.</p>
     */
    inline ParallelismConfigurationUpdate& WithConfigurationTypeUpdate(const ConfigurationType& value) { SetConfigurationTypeUpdate(value); return *this;}

    /**
     * <p>Describes updates to whether the application uses the default parallelism for
     * the Kinesis Data Analytics service, or if a custom parallelism is used.</p>
     */
    inline ParallelismConfigurationUpdate& WithConfigurationTypeUpdate(ConfigurationType&& value) { SetConfigurationTypeUpdate(std::move(value)); return *this;}


    /**
     * <p>Describes updates to the initial number of parallel tasks an application can
     * perform.</p>
     */
    inline int GetParallelismUpdate() const{ return m_parallelismUpdate; }

    /**
     * <p>Describes updates to the initial number of parallel tasks an application can
     * perform.</p>
     */
    inline bool ParallelismUpdateHasBeenSet() const { return m_parallelismUpdateHasBeenSet; }

    /**
     * <p>Describes updates to the initial number of parallel tasks an application can
     * perform.</p>
     */
    inline void SetParallelismUpdate(int value) { m_parallelismUpdateHasBeenSet = true; m_parallelismUpdate = value; }

    /**
     * <p>Describes updates to the initial number of parallel tasks an application can
     * perform.</p>
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
     * the parallelism of the application in response to increased throughput.</p>
     */
    inline bool GetAutoScalingEnabledUpdate() const{ return m_autoScalingEnabledUpdate; }

    /**
     * <p>Describes updates to whether the Kinesis Data Analytics service can increase
     * the parallelism of the application in response to increased throughput.</p>
     */
    inline bool AutoScalingEnabledUpdateHasBeenSet() const { return m_autoScalingEnabledUpdateHasBeenSet; }

    /**
     * <p>Describes updates to whether the Kinesis Data Analytics service can increase
     * the parallelism of the application in response to increased throughput.</p>
     */
    inline void SetAutoScalingEnabledUpdate(bool value) { m_autoScalingEnabledUpdateHasBeenSet = true; m_autoScalingEnabledUpdate = value; }

    /**
     * <p>Describes updates to whether the Kinesis Data Analytics service can increase
     * the parallelism of the application in response to increased throughput.</p>
     */
    inline ParallelismConfigurationUpdate& WithAutoScalingEnabledUpdate(bool value) { SetAutoScalingEnabledUpdate(value); return *this;}

  private:

    ConfigurationType m_configurationTypeUpdate;
    bool m_configurationTypeUpdateHasBeenSet;

    int m_parallelismUpdate;
    bool m_parallelismUpdateHasBeenSet;

    int m_parallelismPerKPUUpdate;
    bool m_parallelismPerKPUUpdateHasBeenSet;

    bool m_autoScalingEnabledUpdate;
    bool m_autoScalingEnabledUpdateHasBeenSet;
  };

} // namespace Model
} // namespace KinesisAnalyticsV2
} // namespace Aws
