/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/sagemaker/model/ScheduleConfig.h>
#include <aws/sagemaker/model/MonitoringJobDefinition.h>
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
namespace SageMaker
{
namespace Model
{

  /**
   * <p>Configures the monitoring schedule and defines the monitoring
   * job.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/MonitoringScheduleConfig">AWS
   * API Reference</a></p>
   */
  class AWS_SAGEMAKER_API MonitoringScheduleConfig
  {
  public:
    MonitoringScheduleConfig();
    MonitoringScheduleConfig(Aws::Utils::Json::JsonView jsonValue);
    MonitoringScheduleConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Configures the monitoring schedule.</p>
     */
    inline const ScheduleConfig& GetScheduleConfig() const{ return m_scheduleConfig; }

    /**
     * <p>Configures the monitoring schedule.</p>
     */
    inline bool ScheduleConfigHasBeenSet() const { return m_scheduleConfigHasBeenSet; }

    /**
     * <p>Configures the monitoring schedule.</p>
     */
    inline void SetScheduleConfig(const ScheduleConfig& value) { m_scheduleConfigHasBeenSet = true; m_scheduleConfig = value; }

    /**
     * <p>Configures the monitoring schedule.</p>
     */
    inline void SetScheduleConfig(ScheduleConfig&& value) { m_scheduleConfigHasBeenSet = true; m_scheduleConfig = std::move(value); }

    /**
     * <p>Configures the monitoring schedule.</p>
     */
    inline MonitoringScheduleConfig& WithScheduleConfig(const ScheduleConfig& value) { SetScheduleConfig(value); return *this;}

    /**
     * <p>Configures the monitoring schedule.</p>
     */
    inline MonitoringScheduleConfig& WithScheduleConfig(ScheduleConfig&& value) { SetScheduleConfig(std::move(value)); return *this;}


    /**
     * <p>Defines the monitoring job.</p>
     */
    inline const MonitoringJobDefinition& GetMonitoringJobDefinition() const{ return m_monitoringJobDefinition; }

    /**
     * <p>Defines the monitoring job.</p>
     */
    inline bool MonitoringJobDefinitionHasBeenSet() const { return m_monitoringJobDefinitionHasBeenSet; }

    /**
     * <p>Defines the monitoring job.</p>
     */
    inline void SetMonitoringJobDefinition(const MonitoringJobDefinition& value) { m_monitoringJobDefinitionHasBeenSet = true; m_monitoringJobDefinition = value; }

    /**
     * <p>Defines the monitoring job.</p>
     */
    inline void SetMonitoringJobDefinition(MonitoringJobDefinition&& value) { m_monitoringJobDefinitionHasBeenSet = true; m_monitoringJobDefinition = std::move(value); }

    /**
     * <p>Defines the monitoring job.</p>
     */
    inline MonitoringScheduleConfig& WithMonitoringJobDefinition(const MonitoringJobDefinition& value) { SetMonitoringJobDefinition(value); return *this;}

    /**
     * <p>Defines the monitoring job.</p>
     */
    inline MonitoringScheduleConfig& WithMonitoringJobDefinition(MonitoringJobDefinition&& value) { SetMonitoringJobDefinition(std::move(value)); return *this;}

  private:

    ScheduleConfig m_scheduleConfig;
    bool m_scheduleConfigHasBeenSet;

    MonitoringJobDefinition m_monitoringJobDefinition;
    bool m_monitoringJobDefinitionHasBeenSet;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
