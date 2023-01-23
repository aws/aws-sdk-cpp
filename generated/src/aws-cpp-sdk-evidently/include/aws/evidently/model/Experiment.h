/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/evidently/CloudWatchEvidently_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/evidently/model/ExperimentExecution.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/evidently/model/OnlineAbDefinition.h>
#include <aws/evidently/model/ExperimentSchedule.h>
#include <aws/evidently/model/ExperimentStatus.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/evidently/model/ExperimentType.h>
#include <aws/evidently/model/MetricGoal.h>
#include <aws/evidently/model/Treatment.h>
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
namespace CloudWatchEvidently
{
namespace Model
{

  /**
   * <p>A structure containing the configuration details of an
   * experiment.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/evidently-2021-02-01/Experiment">AWS
   * API Reference</a></p>
   */
  class Experiment
  {
  public:
    AWS_CLOUDWATCHEVIDENTLY_API Experiment();
    AWS_CLOUDWATCHEVIDENTLY_API Experiment(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLOUDWATCHEVIDENTLY_API Experiment& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLOUDWATCHEVIDENTLY_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The ARN of the experiment.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }

    /**
     * <p>The ARN of the experiment.</p>
     */
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }

    /**
     * <p>The ARN of the experiment.</p>
     */
    inline void SetArn(const Aws::String& value) { m_arnHasBeenSet = true; m_arn = value; }

    /**
     * <p>The ARN of the experiment.</p>
     */
    inline void SetArn(Aws::String&& value) { m_arnHasBeenSet = true; m_arn = std::move(value); }

    /**
     * <p>The ARN of the experiment.</p>
     */
    inline void SetArn(const char* value) { m_arnHasBeenSet = true; m_arn.assign(value); }

    /**
     * <p>The ARN of the experiment.</p>
     */
    inline Experiment& WithArn(const Aws::String& value) { SetArn(value); return *this;}

    /**
     * <p>The ARN of the experiment.</p>
     */
    inline Experiment& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the experiment.</p>
     */
    inline Experiment& WithArn(const char* value) { SetArn(value); return *this;}


    /**
     * <p>The date and time that the experiment is first created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedTime() const{ return m_createdTime; }

    /**
     * <p>The date and time that the experiment is first created.</p>
     */
    inline bool CreatedTimeHasBeenSet() const { return m_createdTimeHasBeenSet; }

    /**
     * <p>The date and time that the experiment is first created.</p>
     */
    inline void SetCreatedTime(const Aws::Utils::DateTime& value) { m_createdTimeHasBeenSet = true; m_createdTime = value; }

    /**
     * <p>The date and time that the experiment is first created.</p>
     */
    inline void SetCreatedTime(Aws::Utils::DateTime&& value) { m_createdTimeHasBeenSet = true; m_createdTime = std::move(value); }

    /**
     * <p>The date and time that the experiment is first created.</p>
     */
    inline Experiment& WithCreatedTime(const Aws::Utils::DateTime& value) { SetCreatedTime(value); return *this;}

    /**
     * <p>The date and time that the experiment is first created.</p>
     */
    inline Experiment& WithCreatedTime(Aws::Utils::DateTime&& value) { SetCreatedTime(std::move(value)); return *this;}


    /**
     * <p>A description of the experiment.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>A description of the experiment.</p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>A description of the experiment.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>A description of the experiment.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>A description of the experiment.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>A description of the experiment.</p>
     */
    inline Experiment& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>A description of the experiment.</p>
     */
    inline Experiment& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>A description of the experiment.</p>
     */
    inline Experiment& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>A structure that contains the date and time that the experiment started and
     * ended.</p>
     */
    inline const ExperimentExecution& GetExecution() const{ return m_execution; }

    /**
     * <p>A structure that contains the date and time that the experiment started and
     * ended.</p>
     */
    inline bool ExecutionHasBeenSet() const { return m_executionHasBeenSet; }

    /**
     * <p>A structure that contains the date and time that the experiment started and
     * ended.</p>
     */
    inline void SetExecution(const ExperimentExecution& value) { m_executionHasBeenSet = true; m_execution = value; }

    /**
     * <p>A structure that contains the date and time that the experiment started and
     * ended.</p>
     */
    inline void SetExecution(ExperimentExecution&& value) { m_executionHasBeenSet = true; m_execution = std::move(value); }

    /**
     * <p>A structure that contains the date and time that the experiment started and
     * ended.</p>
     */
    inline Experiment& WithExecution(const ExperimentExecution& value) { SetExecution(value); return *this;}

    /**
     * <p>A structure that contains the date and time that the experiment started and
     * ended.</p>
     */
    inline Experiment& WithExecution(ExperimentExecution&& value) { SetExecution(std::move(value)); return *this;}


    /**
     * <p>The date and time that the experiment was most recently updated.</p>
     */
    inline const Aws::Utils::DateTime& GetLastUpdatedTime() const{ return m_lastUpdatedTime; }

    /**
     * <p>The date and time that the experiment was most recently updated.</p>
     */
    inline bool LastUpdatedTimeHasBeenSet() const { return m_lastUpdatedTimeHasBeenSet; }

    /**
     * <p>The date and time that the experiment was most recently updated.</p>
     */
    inline void SetLastUpdatedTime(const Aws::Utils::DateTime& value) { m_lastUpdatedTimeHasBeenSet = true; m_lastUpdatedTime = value; }

    /**
     * <p>The date and time that the experiment was most recently updated.</p>
     */
    inline void SetLastUpdatedTime(Aws::Utils::DateTime&& value) { m_lastUpdatedTimeHasBeenSet = true; m_lastUpdatedTime = std::move(value); }

    /**
     * <p>The date and time that the experiment was most recently updated.</p>
     */
    inline Experiment& WithLastUpdatedTime(const Aws::Utils::DateTime& value) { SetLastUpdatedTime(value); return *this;}

    /**
     * <p>The date and time that the experiment was most recently updated.</p>
     */
    inline Experiment& WithLastUpdatedTime(Aws::Utils::DateTime&& value) { SetLastUpdatedTime(std::move(value)); return *this;}


    /**
     * <p>An array of structures that defines the metrics used for the experiment, and
     * whether a higher or lower value for each metric is the goal.</p>
     */
    inline const Aws::Vector<MetricGoal>& GetMetricGoals() const{ return m_metricGoals; }

    /**
     * <p>An array of structures that defines the metrics used for the experiment, and
     * whether a higher or lower value for each metric is the goal.</p>
     */
    inline bool MetricGoalsHasBeenSet() const { return m_metricGoalsHasBeenSet; }

    /**
     * <p>An array of structures that defines the metrics used for the experiment, and
     * whether a higher or lower value for each metric is the goal.</p>
     */
    inline void SetMetricGoals(const Aws::Vector<MetricGoal>& value) { m_metricGoalsHasBeenSet = true; m_metricGoals = value; }

    /**
     * <p>An array of structures that defines the metrics used for the experiment, and
     * whether a higher or lower value for each metric is the goal.</p>
     */
    inline void SetMetricGoals(Aws::Vector<MetricGoal>&& value) { m_metricGoalsHasBeenSet = true; m_metricGoals = std::move(value); }

    /**
     * <p>An array of structures that defines the metrics used for the experiment, and
     * whether a higher or lower value for each metric is the goal.</p>
     */
    inline Experiment& WithMetricGoals(const Aws::Vector<MetricGoal>& value) { SetMetricGoals(value); return *this;}

    /**
     * <p>An array of structures that defines the metrics used for the experiment, and
     * whether a higher or lower value for each metric is the goal.</p>
     */
    inline Experiment& WithMetricGoals(Aws::Vector<MetricGoal>&& value) { SetMetricGoals(std::move(value)); return *this;}

    /**
     * <p>An array of structures that defines the metrics used for the experiment, and
     * whether a higher or lower value for each metric is the goal.</p>
     */
    inline Experiment& AddMetricGoals(const MetricGoal& value) { m_metricGoalsHasBeenSet = true; m_metricGoals.push_back(value); return *this; }

    /**
     * <p>An array of structures that defines the metrics used for the experiment, and
     * whether a higher or lower value for each metric is the goal.</p>
     */
    inline Experiment& AddMetricGoals(MetricGoal&& value) { m_metricGoalsHasBeenSet = true; m_metricGoals.push_back(std::move(value)); return *this; }


    /**
     * <p>The name of the experiment.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the experiment.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the experiment.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the experiment.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the experiment.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the experiment.</p>
     */
    inline Experiment& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the experiment.</p>
     */
    inline Experiment& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the experiment.</p>
     */
    inline Experiment& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>A structure that contains the configuration of which variation to use as the
     * "control" version. The "control" version is used for comparison with other
     * variations. This structure also specifies how much experiment traffic is
     * allocated to each variation.</p>
     */
    inline const OnlineAbDefinition& GetOnlineAbDefinition() const{ return m_onlineAbDefinition; }

    /**
     * <p>A structure that contains the configuration of which variation to use as the
     * "control" version. The "control" version is used for comparison with other
     * variations. This structure also specifies how much experiment traffic is
     * allocated to each variation.</p>
     */
    inline bool OnlineAbDefinitionHasBeenSet() const { return m_onlineAbDefinitionHasBeenSet; }

    /**
     * <p>A structure that contains the configuration of which variation to use as the
     * "control" version. The "control" version is used for comparison with other
     * variations. This structure also specifies how much experiment traffic is
     * allocated to each variation.</p>
     */
    inline void SetOnlineAbDefinition(const OnlineAbDefinition& value) { m_onlineAbDefinitionHasBeenSet = true; m_onlineAbDefinition = value; }

    /**
     * <p>A structure that contains the configuration of which variation to use as the
     * "control" version. The "control" version is used for comparison with other
     * variations. This structure also specifies how much experiment traffic is
     * allocated to each variation.</p>
     */
    inline void SetOnlineAbDefinition(OnlineAbDefinition&& value) { m_onlineAbDefinitionHasBeenSet = true; m_onlineAbDefinition = std::move(value); }

    /**
     * <p>A structure that contains the configuration of which variation to use as the
     * "control" version. The "control" version is used for comparison with other
     * variations. This structure also specifies how much experiment traffic is
     * allocated to each variation.</p>
     */
    inline Experiment& WithOnlineAbDefinition(const OnlineAbDefinition& value) { SetOnlineAbDefinition(value); return *this;}

    /**
     * <p>A structure that contains the configuration of which variation to use as the
     * "control" version. The "control" version is used for comparison with other
     * variations. This structure also specifies how much experiment traffic is
     * allocated to each variation.</p>
     */
    inline Experiment& WithOnlineAbDefinition(OnlineAbDefinition&& value) { SetOnlineAbDefinition(std::move(value)); return *this;}


    /**
     * <p>The name or ARN of the project that contains this experiment.</p>
     */
    inline const Aws::String& GetProject() const{ return m_project; }

    /**
     * <p>The name or ARN of the project that contains this experiment.</p>
     */
    inline bool ProjectHasBeenSet() const { return m_projectHasBeenSet; }

    /**
     * <p>The name or ARN of the project that contains this experiment.</p>
     */
    inline void SetProject(const Aws::String& value) { m_projectHasBeenSet = true; m_project = value; }

    /**
     * <p>The name or ARN of the project that contains this experiment.</p>
     */
    inline void SetProject(Aws::String&& value) { m_projectHasBeenSet = true; m_project = std::move(value); }

    /**
     * <p>The name or ARN of the project that contains this experiment.</p>
     */
    inline void SetProject(const char* value) { m_projectHasBeenSet = true; m_project.assign(value); }

    /**
     * <p>The name or ARN of the project that contains this experiment.</p>
     */
    inline Experiment& WithProject(const Aws::String& value) { SetProject(value); return *this;}

    /**
     * <p>The name or ARN of the project that contains this experiment.</p>
     */
    inline Experiment& WithProject(Aws::String&& value) { SetProject(std::move(value)); return *this;}

    /**
     * <p>The name or ARN of the project that contains this experiment.</p>
     */
    inline Experiment& WithProject(const char* value) { SetProject(value); return *this;}


    /**
     * <p>This value is used when Evidently assigns a particular user session to the
     * experiment. It helps create a randomization ID to determine which variation the
     * user session is served. This randomization ID is a combination of the entity ID
     * and <code>randomizationSalt</code>.</p>
     */
    inline const Aws::String& GetRandomizationSalt() const{ return m_randomizationSalt; }

    /**
     * <p>This value is used when Evidently assigns a particular user session to the
     * experiment. It helps create a randomization ID to determine which variation the
     * user session is served. This randomization ID is a combination of the entity ID
     * and <code>randomizationSalt</code>.</p>
     */
    inline bool RandomizationSaltHasBeenSet() const { return m_randomizationSaltHasBeenSet; }

    /**
     * <p>This value is used when Evidently assigns a particular user session to the
     * experiment. It helps create a randomization ID to determine which variation the
     * user session is served. This randomization ID is a combination of the entity ID
     * and <code>randomizationSalt</code>.</p>
     */
    inline void SetRandomizationSalt(const Aws::String& value) { m_randomizationSaltHasBeenSet = true; m_randomizationSalt = value; }

    /**
     * <p>This value is used when Evidently assigns a particular user session to the
     * experiment. It helps create a randomization ID to determine which variation the
     * user session is served. This randomization ID is a combination of the entity ID
     * and <code>randomizationSalt</code>.</p>
     */
    inline void SetRandomizationSalt(Aws::String&& value) { m_randomizationSaltHasBeenSet = true; m_randomizationSalt = std::move(value); }

    /**
     * <p>This value is used when Evidently assigns a particular user session to the
     * experiment. It helps create a randomization ID to determine which variation the
     * user session is served. This randomization ID is a combination of the entity ID
     * and <code>randomizationSalt</code>.</p>
     */
    inline void SetRandomizationSalt(const char* value) { m_randomizationSaltHasBeenSet = true; m_randomizationSalt.assign(value); }

    /**
     * <p>This value is used when Evidently assigns a particular user session to the
     * experiment. It helps create a randomization ID to determine which variation the
     * user session is served. This randomization ID is a combination of the entity ID
     * and <code>randomizationSalt</code>.</p>
     */
    inline Experiment& WithRandomizationSalt(const Aws::String& value) { SetRandomizationSalt(value); return *this;}

    /**
     * <p>This value is used when Evidently assigns a particular user session to the
     * experiment. It helps create a randomization ID to determine which variation the
     * user session is served. This randomization ID is a combination of the entity ID
     * and <code>randomizationSalt</code>.</p>
     */
    inline Experiment& WithRandomizationSalt(Aws::String&& value) { SetRandomizationSalt(std::move(value)); return *this;}

    /**
     * <p>This value is used when Evidently assigns a particular user session to the
     * experiment. It helps create a randomization ID to determine which variation the
     * user session is served. This randomization ID is a combination of the entity ID
     * and <code>randomizationSalt</code>.</p>
     */
    inline Experiment& WithRandomizationSalt(const char* value) { SetRandomizationSalt(value); return *this;}


    /**
     * <p>In thousandths of a percent, the amount of the available audience that is
     * allocated to this experiment. The available audience is the total audience minus
     * the audience that you have allocated to overrides or current launches of this
     * feature.</p> <p>This is represented in thousandths of a percent, so a value of
     * 10,000 is 10% of the available audience.</p>
     */
    inline long long GetSamplingRate() const{ return m_samplingRate; }

    /**
     * <p>In thousandths of a percent, the amount of the available audience that is
     * allocated to this experiment. The available audience is the total audience minus
     * the audience that you have allocated to overrides or current launches of this
     * feature.</p> <p>This is represented in thousandths of a percent, so a value of
     * 10,000 is 10% of the available audience.</p>
     */
    inline bool SamplingRateHasBeenSet() const { return m_samplingRateHasBeenSet; }

    /**
     * <p>In thousandths of a percent, the amount of the available audience that is
     * allocated to this experiment. The available audience is the total audience minus
     * the audience that you have allocated to overrides or current launches of this
     * feature.</p> <p>This is represented in thousandths of a percent, so a value of
     * 10,000 is 10% of the available audience.</p>
     */
    inline void SetSamplingRate(long long value) { m_samplingRateHasBeenSet = true; m_samplingRate = value; }

    /**
     * <p>In thousandths of a percent, the amount of the available audience that is
     * allocated to this experiment. The available audience is the total audience minus
     * the audience that you have allocated to overrides or current launches of this
     * feature.</p> <p>This is represented in thousandths of a percent, so a value of
     * 10,000 is 10% of the available audience.</p>
     */
    inline Experiment& WithSamplingRate(long long value) { SetSamplingRate(value); return *this;}


    /**
     * <p>A structure that contains the time and date that Evidently completed the
     * analysis of the experiment.</p>
     */
    inline const ExperimentSchedule& GetSchedule() const{ return m_schedule; }

    /**
     * <p>A structure that contains the time and date that Evidently completed the
     * analysis of the experiment.</p>
     */
    inline bool ScheduleHasBeenSet() const { return m_scheduleHasBeenSet; }

    /**
     * <p>A structure that contains the time and date that Evidently completed the
     * analysis of the experiment.</p>
     */
    inline void SetSchedule(const ExperimentSchedule& value) { m_scheduleHasBeenSet = true; m_schedule = value; }

    /**
     * <p>A structure that contains the time and date that Evidently completed the
     * analysis of the experiment.</p>
     */
    inline void SetSchedule(ExperimentSchedule&& value) { m_scheduleHasBeenSet = true; m_schedule = std::move(value); }

    /**
     * <p>A structure that contains the time and date that Evidently completed the
     * analysis of the experiment.</p>
     */
    inline Experiment& WithSchedule(const ExperimentSchedule& value) { SetSchedule(value); return *this;}

    /**
     * <p>A structure that contains the time and date that Evidently completed the
     * analysis of the experiment.</p>
     */
    inline Experiment& WithSchedule(ExperimentSchedule&& value) { SetSchedule(std::move(value)); return *this;}


    /**
     * <p>The audience segment being used for the experiment, if a segment is being
     * used.</p>
     */
    inline const Aws::String& GetSegment() const{ return m_segment; }

    /**
     * <p>The audience segment being used for the experiment, if a segment is being
     * used.</p>
     */
    inline bool SegmentHasBeenSet() const { return m_segmentHasBeenSet; }

    /**
     * <p>The audience segment being used for the experiment, if a segment is being
     * used.</p>
     */
    inline void SetSegment(const Aws::String& value) { m_segmentHasBeenSet = true; m_segment = value; }

    /**
     * <p>The audience segment being used for the experiment, if a segment is being
     * used.</p>
     */
    inline void SetSegment(Aws::String&& value) { m_segmentHasBeenSet = true; m_segment = std::move(value); }

    /**
     * <p>The audience segment being used for the experiment, if a segment is being
     * used.</p>
     */
    inline void SetSegment(const char* value) { m_segmentHasBeenSet = true; m_segment.assign(value); }

    /**
     * <p>The audience segment being used for the experiment, if a segment is being
     * used.</p>
     */
    inline Experiment& WithSegment(const Aws::String& value) { SetSegment(value); return *this;}

    /**
     * <p>The audience segment being used for the experiment, if a segment is being
     * used.</p>
     */
    inline Experiment& WithSegment(Aws::String&& value) { SetSegment(std::move(value)); return *this;}

    /**
     * <p>The audience segment being used for the experiment, if a segment is being
     * used.</p>
     */
    inline Experiment& WithSegment(const char* value) { SetSegment(value); return *this;}


    /**
     * <p>The current state of the experiment.</p>
     */
    inline const ExperimentStatus& GetStatus() const{ return m_status; }

    /**
     * <p>The current state of the experiment.</p>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p>The current state of the experiment.</p>
     */
    inline void SetStatus(const ExperimentStatus& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>The current state of the experiment.</p>
     */
    inline void SetStatus(ExperimentStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p>The current state of the experiment.</p>
     */
    inline Experiment& WithStatus(const ExperimentStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>The current state of the experiment.</p>
     */
    inline Experiment& WithStatus(ExperimentStatus&& value) { SetStatus(std::move(value)); return *this;}


    /**
     * <p>If the experiment was stopped, this is the string that was entered by the
     * person who stopped the experiment, to explain why it was stopped.</p>
     */
    inline const Aws::String& GetStatusReason() const{ return m_statusReason; }

    /**
     * <p>If the experiment was stopped, this is the string that was entered by the
     * person who stopped the experiment, to explain why it was stopped.</p>
     */
    inline bool StatusReasonHasBeenSet() const { return m_statusReasonHasBeenSet; }

    /**
     * <p>If the experiment was stopped, this is the string that was entered by the
     * person who stopped the experiment, to explain why it was stopped.</p>
     */
    inline void SetStatusReason(const Aws::String& value) { m_statusReasonHasBeenSet = true; m_statusReason = value; }

    /**
     * <p>If the experiment was stopped, this is the string that was entered by the
     * person who stopped the experiment, to explain why it was stopped.</p>
     */
    inline void SetStatusReason(Aws::String&& value) { m_statusReasonHasBeenSet = true; m_statusReason = std::move(value); }

    /**
     * <p>If the experiment was stopped, this is the string that was entered by the
     * person who stopped the experiment, to explain why it was stopped.</p>
     */
    inline void SetStatusReason(const char* value) { m_statusReasonHasBeenSet = true; m_statusReason.assign(value); }

    /**
     * <p>If the experiment was stopped, this is the string that was entered by the
     * person who stopped the experiment, to explain why it was stopped.</p>
     */
    inline Experiment& WithStatusReason(const Aws::String& value) { SetStatusReason(value); return *this;}

    /**
     * <p>If the experiment was stopped, this is the string that was entered by the
     * person who stopped the experiment, to explain why it was stopped.</p>
     */
    inline Experiment& WithStatusReason(Aws::String&& value) { SetStatusReason(std::move(value)); return *this;}

    /**
     * <p>If the experiment was stopped, this is the string that was entered by the
     * person who stopped the experiment, to explain why it was stopped.</p>
     */
    inline Experiment& WithStatusReason(const char* value) { SetStatusReason(value); return *this;}


    /**
     * <p>The list of tag keys and values associated with this experiment.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }

    /**
     * <p>The list of tag keys and values associated with this experiment.</p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>The list of tag keys and values associated with this experiment.</p>
     */
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>The list of tag keys and values associated with this experiment.</p>
     */
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>The list of tag keys and values associated with this experiment.</p>
     */
    inline Experiment& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}

    /**
     * <p>The list of tag keys and values associated with this experiment.</p>
     */
    inline Experiment& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>The list of tag keys and values associated with this experiment.</p>
     */
    inline Experiment& AddTags(const Aws::String& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }

    /**
     * <p>The list of tag keys and values associated with this experiment.</p>
     */
    inline Experiment& AddTags(Aws::String&& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>The list of tag keys and values associated with this experiment.</p>
     */
    inline Experiment& AddTags(const Aws::String& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The list of tag keys and values associated with this experiment.</p>
     */
    inline Experiment& AddTags(Aws::String&& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>The list of tag keys and values associated with this experiment.</p>
     */
    inline Experiment& AddTags(const char* key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The list of tag keys and values associated with this experiment.</p>
     */
    inline Experiment& AddTags(Aws::String&& key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>The list of tag keys and values associated with this experiment.</p>
     */
    inline Experiment& AddTags(const char* key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }


    /**
     * <p>An array of structures that describe the configuration of each feature
     * variation used in the experiment.</p>
     */
    inline const Aws::Vector<Treatment>& GetTreatments() const{ return m_treatments; }

    /**
     * <p>An array of structures that describe the configuration of each feature
     * variation used in the experiment.</p>
     */
    inline bool TreatmentsHasBeenSet() const { return m_treatmentsHasBeenSet; }

    /**
     * <p>An array of structures that describe the configuration of each feature
     * variation used in the experiment.</p>
     */
    inline void SetTreatments(const Aws::Vector<Treatment>& value) { m_treatmentsHasBeenSet = true; m_treatments = value; }

    /**
     * <p>An array of structures that describe the configuration of each feature
     * variation used in the experiment.</p>
     */
    inline void SetTreatments(Aws::Vector<Treatment>&& value) { m_treatmentsHasBeenSet = true; m_treatments = std::move(value); }

    /**
     * <p>An array of structures that describe the configuration of each feature
     * variation used in the experiment.</p>
     */
    inline Experiment& WithTreatments(const Aws::Vector<Treatment>& value) { SetTreatments(value); return *this;}

    /**
     * <p>An array of structures that describe the configuration of each feature
     * variation used in the experiment.</p>
     */
    inline Experiment& WithTreatments(Aws::Vector<Treatment>&& value) { SetTreatments(std::move(value)); return *this;}

    /**
     * <p>An array of structures that describe the configuration of each feature
     * variation used in the experiment.</p>
     */
    inline Experiment& AddTreatments(const Treatment& value) { m_treatmentsHasBeenSet = true; m_treatments.push_back(value); return *this; }

    /**
     * <p>An array of structures that describe the configuration of each feature
     * variation used in the experiment.</p>
     */
    inline Experiment& AddTreatments(Treatment&& value) { m_treatmentsHasBeenSet = true; m_treatments.push_back(std::move(value)); return *this; }


    /**
     * <p>The type of this experiment. Currently, this value must be
     * <code>aws.experiment.onlineab</code>.</p>
     */
    inline const ExperimentType& GetType() const{ return m_type; }

    /**
     * <p>The type of this experiment. Currently, this value must be
     * <code>aws.experiment.onlineab</code>.</p>
     */
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }

    /**
     * <p>The type of this experiment. Currently, this value must be
     * <code>aws.experiment.onlineab</code>.</p>
     */
    inline void SetType(const ExperimentType& value) { m_typeHasBeenSet = true; m_type = value; }

    /**
     * <p>The type of this experiment. Currently, this value must be
     * <code>aws.experiment.onlineab</code>.</p>
     */
    inline void SetType(ExperimentType&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }

    /**
     * <p>The type of this experiment. Currently, this value must be
     * <code>aws.experiment.onlineab</code>.</p>
     */
    inline Experiment& WithType(const ExperimentType& value) { SetType(value); return *this;}

    /**
     * <p>The type of this experiment. Currently, this value must be
     * <code>aws.experiment.onlineab</code>.</p>
     */
    inline Experiment& WithType(ExperimentType&& value) { SetType(std::move(value)); return *this;}

  private:

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    Aws::Utils::DateTime m_createdTime;
    bool m_createdTimeHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    ExperimentExecution m_execution;
    bool m_executionHasBeenSet = false;

    Aws::Utils::DateTime m_lastUpdatedTime;
    bool m_lastUpdatedTimeHasBeenSet = false;

    Aws::Vector<MetricGoal> m_metricGoals;
    bool m_metricGoalsHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    OnlineAbDefinition m_onlineAbDefinition;
    bool m_onlineAbDefinitionHasBeenSet = false;

    Aws::String m_project;
    bool m_projectHasBeenSet = false;

    Aws::String m_randomizationSalt;
    bool m_randomizationSaltHasBeenSet = false;

    long long m_samplingRate;
    bool m_samplingRateHasBeenSet = false;

    ExperimentSchedule m_schedule;
    bool m_scheduleHasBeenSet = false;

    Aws::String m_segment;
    bool m_segmentHasBeenSet = false;

    ExperimentStatus m_status;
    bool m_statusHasBeenSet = false;

    Aws::String m_statusReason;
    bool m_statusReasonHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet = false;

    Aws::Vector<Treatment> m_treatments;
    bool m_treatmentsHasBeenSet = false;

    ExperimentType m_type;
    bool m_typeHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudWatchEvidently
} // namespace Aws
