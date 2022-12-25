/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/sagemaker/model/ScheduleConfig.h>
#include <aws/sagemaker/model/MonitoringJobDefinition.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/sagemaker/model/MonitoringType.h>
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
  class MonitoringScheduleConfig
  {
  public:
    AWS_SAGEMAKER_API MonitoringScheduleConfig();
    AWS_SAGEMAKER_API MonitoringScheduleConfig(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API MonitoringScheduleConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


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


    /**
     * <p>The name of the monitoring job definition to schedule.</p>
     */
    inline const Aws::String& GetMonitoringJobDefinitionName() const{ return m_monitoringJobDefinitionName; }

    /**
     * <p>The name of the monitoring job definition to schedule.</p>
     */
    inline bool MonitoringJobDefinitionNameHasBeenSet() const { return m_monitoringJobDefinitionNameHasBeenSet; }

    /**
     * <p>The name of the monitoring job definition to schedule.</p>
     */
    inline void SetMonitoringJobDefinitionName(const Aws::String& value) { m_monitoringJobDefinitionNameHasBeenSet = true; m_monitoringJobDefinitionName = value; }

    /**
     * <p>The name of the monitoring job definition to schedule.</p>
     */
    inline void SetMonitoringJobDefinitionName(Aws::String&& value) { m_monitoringJobDefinitionNameHasBeenSet = true; m_monitoringJobDefinitionName = std::move(value); }

    /**
     * <p>The name of the monitoring job definition to schedule.</p>
     */
    inline void SetMonitoringJobDefinitionName(const char* value) { m_monitoringJobDefinitionNameHasBeenSet = true; m_monitoringJobDefinitionName.assign(value); }

    /**
     * <p>The name of the monitoring job definition to schedule.</p>
     */
    inline MonitoringScheduleConfig& WithMonitoringJobDefinitionName(const Aws::String& value) { SetMonitoringJobDefinitionName(value); return *this;}

    /**
     * <p>The name of the monitoring job definition to schedule.</p>
     */
    inline MonitoringScheduleConfig& WithMonitoringJobDefinitionName(Aws::String&& value) { SetMonitoringJobDefinitionName(std::move(value)); return *this;}

    /**
     * <p>The name of the monitoring job definition to schedule.</p>
     */
    inline MonitoringScheduleConfig& WithMonitoringJobDefinitionName(const char* value) { SetMonitoringJobDefinitionName(value); return *this;}


    /**
     * <p>The type of the monitoring job definition to schedule.</p>
     */
    inline const MonitoringType& GetMonitoringType() const{ return m_monitoringType; }

    /**
     * <p>The type of the monitoring job definition to schedule.</p>
     */
    inline bool MonitoringTypeHasBeenSet() const { return m_monitoringTypeHasBeenSet; }

    /**
     * <p>The type of the monitoring job definition to schedule.</p>
     */
    inline void SetMonitoringType(const MonitoringType& value) { m_monitoringTypeHasBeenSet = true; m_monitoringType = value; }

    /**
     * <p>The type of the monitoring job definition to schedule.</p>
     */
    inline void SetMonitoringType(MonitoringType&& value) { m_monitoringTypeHasBeenSet = true; m_monitoringType = std::move(value); }

    /**
     * <p>The type of the monitoring job definition to schedule.</p>
     */
    inline MonitoringScheduleConfig& WithMonitoringType(const MonitoringType& value) { SetMonitoringType(value); return *this;}

    /**
     * <p>The type of the monitoring job definition to schedule.</p>
     */
    inline MonitoringScheduleConfig& WithMonitoringType(MonitoringType&& value) { SetMonitoringType(std::move(value)); return *this;}

  private:

    ScheduleConfig m_scheduleConfig;
    bool m_scheduleConfigHasBeenSet = false;

    MonitoringJobDefinition m_monitoringJobDefinition;
    bool m_monitoringJobDefinitionHasBeenSet = false;

    Aws::String m_monitoringJobDefinitionName;
    bool m_monitoringJobDefinitionNameHasBeenSet = false;

    MonitoringType m_monitoringType;
    bool m_monitoringTypeHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
