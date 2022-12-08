/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/sagemaker/model/ScheduleStatus.h>
#include <aws/sagemaker/model/MonitoringType.h>
#include <aws/core/utils/DateTime.h>
#include <aws/sagemaker/model/MonitoringScheduleConfig.h>
#include <aws/sagemaker/model/MonitoringExecutionSummary.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/sagemaker/model/Tag.h>
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
   * <p>A schedule for a model monitoring job. For information about model monitor,
   * see <a
   * href="https://docs.aws.amazon.com/sagemaker/latest/dg/model-monitor.html">Amazon
   * SageMaker Model Monitor</a>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/MonitoringSchedule">AWS
   * API Reference</a></p>
   */
  class MonitoringSchedule
  {
  public:
    AWS_SAGEMAKER_API MonitoringSchedule();
    AWS_SAGEMAKER_API MonitoringSchedule(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API MonitoringSchedule& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The Amazon Resource Name (ARN) of the monitoring schedule.</p>
     */
    inline const Aws::String& GetMonitoringScheduleArn() const{ return m_monitoringScheduleArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the monitoring schedule.</p>
     */
    inline bool MonitoringScheduleArnHasBeenSet() const { return m_monitoringScheduleArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the monitoring schedule.</p>
     */
    inline void SetMonitoringScheduleArn(const Aws::String& value) { m_monitoringScheduleArnHasBeenSet = true; m_monitoringScheduleArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the monitoring schedule.</p>
     */
    inline void SetMonitoringScheduleArn(Aws::String&& value) { m_monitoringScheduleArnHasBeenSet = true; m_monitoringScheduleArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the monitoring schedule.</p>
     */
    inline void SetMonitoringScheduleArn(const char* value) { m_monitoringScheduleArnHasBeenSet = true; m_monitoringScheduleArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the monitoring schedule.</p>
     */
    inline MonitoringSchedule& WithMonitoringScheduleArn(const Aws::String& value) { SetMonitoringScheduleArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the monitoring schedule.</p>
     */
    inline MonitoringSchedule& WithMonitoringScheduleArn(Aws::String&& value) { SetMonitoringScheduleArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the monitoring schedule.</p>
     */
    inline MonitoringSchedule& WithMonitoringScheduleArn(const char* value) { SetMonitoringScheduleArn(value); return *this;}


    /**
     * <p>The name of the monitoring schedule.</p>
     */
    inline const Aws::String& GetMonitoringScheduleName() const{ return m_monitoringScheduleName; }

    /**
     * <p>The name of the monitoring schedule.</p>
     */
    inline bool MonitoringScheduleNameHasBeenSet() const { return m_monitoringScheduleNameHasBeenSet; }

    /**
     * <p>The name of the monitoring schedule.</p>
     */
    inline void SetMonitoringScheduleName(const Aws::String& value) { m_monitoringScheduleNameHasBeenSet = true; m_monitoringScheduleName = value; }

    /**
     * <p>The name of the monitoring schedule.</p>
     */
    inline void SetMonitoringScheduleName(Aws::String&& value) { m_monitoringScheduleNameHasBeenSet = true; m_monitoringScheduleName = std::move(value); }

    /**
     * <p>The name of the monitoring schedule.</p>
     */
    inline void SetMonitoringScheduleName(const char* value) { m_monitoringScheduleNameHasBeenSet = true; m_monitoringScheduleName.assign(value); }

    /**
     * <p>The name of the monitoring schedule.</p>
     */
    inline MonitoringSchedule& WithMonitoringScheduleName(const Aws::String& value) { SetMonitoringScheduleName(value); return *this;}

    /**
     * <p>The name of the monitoring schedule.</p>
     */
    inline MonitoringSchedule& WithMonitoringScheduleName(Aws::String&& value) { SetMonitoringScheduleName(std::move(value)); return *this;}

    /**
     * <p>The name of the monitoring schedule.</p>
     */
    inline MonitoringSchedule& WithMonitoringScheduleName(const char* value) { SetMonitoringScheduleName(value); return *this;}


    /**
     * <p>The status of the monitoring schedule. This can be one of the following
     * values.</p> <ul> <li> <p> <code>PENDING</code> - The schedule is pending being
     * created.</p> </li> <li> <p> <code>FAILED</code> - The schedule failed.</p> </li>
     * <li> <p> <code>SCHEDULED</code> - The schedule was successfully created.</p>
     * </li> <li> <p> <code>STOPPED</code> - The schedule was stopped.</p> </li> </ul>
     */
    inline const ScheduleStatus& GetMonitoringScheduleStatus() const{ return m_monitoringScheduleStatus; }

    /**
     * <p>The status of the monitoring schedule. This can be one of the following
     * values.</p> <ul> <li> <p> <code>PENDING</code> - The schedule is pending being
     * created.</p> </li> <li> <p> <code>FAILED</code> - The schedule failed.</p> </li>
     * <li> <p> <code>SCHEDULED</code> - The schedule was successfully created.</p>
     * </li> <li> <p> <code>STOPPED</code> - The schedule was stopped.</p> </li> </ul>
     */
    inline bool MonitoringScheduleStatusHasBeenSet() const { return m_monitoringScheduleStatusHasBeenSet; }

    /**
     * <p>The status of the monitoring schedule. This can be one of the following
     * values.</p> <ul> <li> <p> <code>PENDING</code> - The schedule is pending being
     * created.</p> </li> <li> <p> <code>FAILED</code> - The schedule failed.</p> </li>
     * <li> <p> <code>SCHEDULED</code> - The schedule was successfully created.</p>
     * </li> <li> <p> <code>STOPPED</code> - The schedule was stopped.</p> </li> </ul>
     */
    inline void SetMonitoringScheduleStatus(const ScheduleStatus& value) { m_monitoringScheduleStatusHasBeenSet = true; m_monitoringScheduleStatus = value; }

    /**
     * <p>The status of the monitoring schedule. This can be one of the following
     * values.</p> <ul> <li> <p> <code>PENDING</code> - The schedule is pending being
     * created.</p> </li> <li> <p> <code>FAILED</code> - The schedule failed.</p> </li>
     * <li> <p> <code>SCHEDULED</code> - The schedule was successfully created.</p>
     * </li> <li> <p> <code>STOPPED</code> - The schedule was stopped.</p> </li> </ul>
     */
    inline void SetMonitoringScheduleStatus(ScheduleStatus&& value) { m_monitoringScheduleStatusHasBeenSet = true; m_monitoringScheduleStatus = std::move(value); }

    /**
     * <p>The status of the monitoring schedule. This can be one of the following
     * values.</p> <ul> <li> <p> <code>PENDING</code> - The schedule is pending being
     * created.</p> </li> <li> <p> <code>FAILED</code> - The schedule failed.</p> </li>
     * <li> <p> <code>SCHEDULED</code> - The schedule was successfully created.</p>
     * </li> <li> <p> <code>STOPPED</code> - The schedule was stopped.</p> </li> </ul>
     */
    inline MonitoringSchedule& WithMonitoringScheduleStatus(const ScheduleStatus& value) { SetMonitoringScheduleStatus(value); return *this;}

    /**
     * <p>The status of the monitoring schedule. This can be one of the following
     * values.</p> <ul> <li> <p> <code>PENDING</code> - The schedule is pending being
     * created.</p> </li> <li> <p> <code>FAILED</code> - The schedule failed.</p> </li>
     * <li> <p> <code>SCHEDULED</code> - The schedule was successfully created.</p>
     * </li> <li> <p> <code>STOPPED</code> - The schedule was stopped.</p> </li> </ul>
     */
    inline MonitoringSchedule& WithMonitoringScheduleStatus(ScheduleStatus&& value) { SetMonitoringScheduleStatus(std::move(value)); return *this;}


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
    inline MonitoringSchedule& WithMonitoringType(const MonitoringType& value) { SetMonitoringType(value); return *this;}

    /**
     * <p>The type of the monitoring job definition to schedule.</p>
     */
    inline MonitoringSchedule& WithMonitoringType(MonitoringType&& value) { SetMonitoringType(std::move(value)); return *this;}


    /**
     * <p>If the monitoring schedule failed, the reason it failed.</p>
     */
    inline const Aws::String& GetFailureReason() const{ return m_failureReason; }

    /**
     * <p>If the monitoring schedule failed, the reason it failed.</p>
     */
    inline bool FailureReasonHasBeenSet() const { return m_failureReasonHasBeenSet; }

    /**
     * <p>If the monitoring schedule failed, the reason it failed.</p>
     */
    inline void SetFailureReason(const Aws::String& value) { m_failureReasonHasBeenSet = true; m_failureReason = value; }

    /**
     * <p>If the monitoring schedule failed, the reason it failed.</p>
     */
    inline void SetFailureReason(Aws::String&& value) { m_failureReasonHasBeenSet = true; m_failureReason = std::move(value); }

    /**
     * <p>If the monitoring schedule failed, the reason it failed.</p>
     */
    inline void SetFailureReason(const char* value) { m_failureReasonHasBeenSet = true; m_failureReason.assign(value); }

    /**
     * <p>If the monitoring schedule failed, the reason it failed.</p>
     */
    inline MonitoringSchedule& WithFailureReason(const Aws::String& value) { SetFailureReason(value); return *this;}

    /**
     * <p>If the monitoring schedule failed, the reason it failed.</p>
     */
    inline MonitoringSchedule& WithFailureReason(Aws::String&& value) { SetFailureReason(std::move(value)); return *this;}

    /**
     * <p>If the monitoring schedule failed, the reason it failed.</p>
     */
    inline MonitoringSchedule& WithFailureReason(const char* value) { SetFailureReason(value); return *this;}


    /**
     * <p>The time that the monitoring schedule was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const{ return m_creationTime; }

    /**
     * <p>The time that the monitoring schedule was created.</p>
     */
    inline bool CreationTimeHasBeenSet() const { return m_creationTimeHasBeenSet; }

    /**
     * <p>The time that the monitoring schedule was created.</p>
     */
    inline void SetCreationTime(const Aws::Utils::DateTime& value) { m_creationTimeHasBeenSet = true; m_creationTime = value; }

    /**
     * <p>The time that the monitoring schedule was created.</p>
     */
    inline void SetCreationTime(Aws::Utils::DateTime&& value) { m_creationTimeHasBeenSet = true; m_creationTime = std::move(value); }

    /**
     * <p>The time that the monitoring schedule was created.</p>
     */
    inline MonitoringSchedule& WithCreationTime(const Aws::Utils::DateTime& value) { SetCreationTime(value); return *this;}

    /**
     * <p>The time that the monitoring schedule was created.</p>
     */
    inline MonitoringSchedule& WithCreationTime(Aws::Utils::DateTime&& value) { SetCreationTime(std::move(value)); return *this;}


    /**
     * <p>The last time the monitoring schedule was changed.</p>
     */
    inline const Aws::Utils::DateTime& GetLastModifiedTime() const{ return m_lastModifiedTime; }

    /**
     * <p>The last time the monitoring schedule was changed.</p>
     */
    inline bool LastModifiedTimeHasBeenSet() const { return m_lastModifiedTimeHasBeenSet; }

    /**
     * <p>The last time the monitoring schedule was changed.</p>
     */
    inline void SetLastModifiedTime(const Aws::Utils::DateTime& value) { m_lastModifiedTimeHasBeenSet = true; m_lastModifiedTime = value; }

    /**
     * <p>The last time the monitoring schedule was changed.</p>
     */
    inline void SetLastModifiedTime(Aws::Utils::DateTime&& value) { m_lastModifiedTimeHasBeenSet = true; m_lastModifiedTime = std::move(value); }

    /**
     * <p>The last time the monitoring schedule was changed.</p>
     */
    inline MonitoringSchedule& WithLastModifiedTime(const Aws::Utils::DateTime& value) { SetLastModifiedTime(value); return *this;}

    /**
     * <p>The last time the monitoring schedule was changed.</p>
     */
    inline MonitoringSchedule& WithLastModifiedTime(Aws::Utils::DateTime&& value) { SetLastModifiedTime(std::move(value)); return *this;}


    
    inline const MonitoringScheduleConfig& GetMonitoringScheduleConfig() const{ return m_monitoringScheduleConfig; }

    
    inline bool MonitoringScheduleConfigHasBeenSet() const { return m_monitoringScheduleConfigHasBeenSet; }

    
    inline void SetMonitoringScheduleConfig(const MonitoringScheduleConfig& value) { m_monitoringScheduleConfigHasBeenSet = true; m_monitoringScheduleConfig = value; }

    
    inline void SetMonitoringScheduleConfig(MonitoringScheduleConfig&& value) { m_monitoringScheduleConfigHasBeenSet = true; m_monitoringScheduleConfig = std::move(value); }

    
    inline MonitoringSchedule& WithMonitoringScheduleConfig(const MonitoringScheduleConfig& value) { SetMonitoringScheduleConfig(value); return *this;}

    
    inline MonitoringSchedule& WithMonitoringScheduleConfig(MonitoringScheduleConfig&& value) { SetMonitoringScheduleConfig(std::move(value)); return *this;}


    /**
     * <p>The endpoint that hosts the model being monitored.</p>
     */
    inline const Aws::String& GetEndpointName() const{ return m_endpointName; }

    /**
     * <p>The endpoint that hosts the model being monitored.</p>
     */
    inline bool EndpointNameHasBeenSet() const { return m_endpointNameHasBeenSet; }

    /**
     * <p>The endpoint that hosts the model being monitored.</p>
     */
    inline void SetEndpointName(const Aws::String& value) { m_endpointNameHasBeenSet = true; m_endpointName = value; }

    /**
     * <p>The endpoint that hosts the model being monitored.</p>
     */
    inline void SetEndpointName(Aws::String&& value) { m_endpointNameHasBeenSet = true; m_endpointName = std::move(value); }

    /**
     * <p>The endpoint that hosts the model being monitored.</p>
     */
    inline void SetEndpointName(const char* value) { m_endpointNameHasBeenSet = true; m_endpointName.assign(value); }

    /**
     * <p>The endpoint that hosts the model being monitored.</p>
     */
    inline MonitoringSchedule& WithEndpointName(const Aws::String& value) { SetEndpointName(value); return *this;}

    /**
     * <p>The endpoint that hosts the model being monitored.</p>
     */
    inline MonitoringSchedule& WithEndpointName(Aws::String&& value) { SetEndpointName(std::move(value)); return *this;}

    /**
     * <p>The endpoint that hosts the model being monitored.</p>
     */
    inline MonitoringSchedule& WithEndpointName(const char* value) { SetEndpointName(value); return *this;}


    
    inline const MonitoringExecutionSummary& GetLastMonitoringExecutionSummary() const{ return m_lastMonitoringExecutionSummary; }

    
    inline bool LastMonitoringExecutionSummaryHasBeenSet() const { return m_lastMonitoringExecutionSummaryHasBeenSet; }

    
    inline void SetLastMonitoringExecutionSummary(const MonitoringExecutionSummary& value) { m_lastMonitoringExecutionSummaryHasBeenSet = true; m_lastMonitoringExecutionSummary = value; }

    
    inline void SetLastMonitoringExecutionSummary(MonitoringExecutionSummary&& value) { m_lastMonitoringExecutionSummaryHasBeenSet = true; m_lastMonitoringExecutionSummary = std::move(value); }

    
    inline MonitoringSchedule& WithLastMonitoringExecutionSummary(const MonitoringExecutionSummary& value) { SetLastMonitoringExecutionSummary(value); return *this;}

    
    inline MonitoringSchedule& WithLastMonitoringExecutionSummary(MonitoringExecutionSummary&& value) { SetLastMonitoringExecutionSummary(std::move(value)); return *this;}


    /**
     * <p>A list of the tags associated with the monitoring schedlue. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws_tagging.html">Tagging
     * Amazon Web Services resources</a> in the <i>Amazon Web Services General
     * Reference Guide</i>.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }

    /**
     * <p>A list of the tags associated with the monitoring schedlue. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws_tagging.html">Tagging
     * Amazon Web Services resources</a> in the <i>Amazon Web Services General
     * Reference Guide</i>.</p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>A list of the tags associated with the monitoring schedlue. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws_tagging.html">Tagging
     * Amazon Web Services resources</a> in the <i>Amazon Web Services General
     * Reference Guide</i>.</p>
     */
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>A list of the tags associated with the monitoring schedlue. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws_tagging.html">Tagging
     * Amazon Web Services resources</a> in the <i>Amazon Web Services General
     * Reference Guide</i>.</p>
     */
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>A list of the tags associated with the monitoring schedlue. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws_tagging.html">Tagging
     * Amazon Web Services resources</a> in the <i>Amazon Web Services General
     * Reference Guide</i>.</p>
     */
    inline MonitoringSchedule& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}

    /**
     * <p>A list of the tags associated with the monitoring schedlue. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws_tagging.html">Tagging
     * Amazon Web Services resources</a> in the <i>Amazon Web Services General
     * Reference Guide</i>.</p>
     */
    inline MonitoringSchedule& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>A list of the tags associated with the monitoring schedlue. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws_tagging.html">Tagging
     * Amazon Web Services resources</a> in the <i>Amazon Web Services General
     * Reference Guide</i>.</p>
     */
    inline MonitoringSchedule& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }

    /**
     * <p>A list of the tags associated with the monitoring schedlue. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws_tagging.html">Tagging
     * Amazon Web Services resources</a> in the <i>Amazon Web Services General
     * Reference Guide</i>.</p>
     */
    inline MonitoringSchedule& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_monitoringScheduleArn;
    bool m_monitoringScheduleArnHasBeenSet = false;

    Aws::String m_monitoringScheduleName;
    bool m_monitoringScheduleNameHasBeenSet = false;

    ScheduleStatus m_monitoringScheduleStatus;
    bool m_monitoringScheduleStatusHasBeenSet = false;

    MonitoringType m_monitoringType;
    bool m_monitoringTypeHasBeenSet = false;

    Aws::String m_failureReason;
    bool m_failureReasonHasBeenSet = false;

    Aws::Utils::DateTime m_creationTime;
    bool m_creationTimeHasBeenSet = false;

    Aws::Utils::DateTime m_lastModifiedTime;
    bool m_lastModifiedTimeHasBeenSet = false;

    MonitoringScheduleConfig m_monitoringScheduleConfig;
    bool m_monitoringScheduleConfigHasBeenSet = false;

    Aws::String m_endpointName;
    bool m_endpointNameHasBeenSet = false;

    MonitoringExecutionSummary m_lastMonitoringExecutionSummary;
    bool m_lastMonitoringExecutionSummaryHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
