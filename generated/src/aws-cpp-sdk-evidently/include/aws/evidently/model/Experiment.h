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
    AWS_CLOUDWATCHEVIDENTLY_API Experiment() = default;
    AWS_CLOUDWATCHEVIDENTLY_API Experiment(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLOUDWATCHEVIDENTLY_API Experiment& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLOUDWATCHEVIDENTLY_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The ARN of the experiment.</p>
     */
    inline const Aws::String& GetArn() const { return m_arn; }
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }
    template<typename ArnT = Aws::String>
    void SetArn(ArnT&& value) { m_arnHasBeenSet = true; m_arn = std::forward<ArnT>(value); }
    template<typename ArnT = Aws::String>
    Experiment& WithArn(ArnT&& value) { SetArn(std::forward<ArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time that the experiment is first created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedTime() const { return m_createdTime; }
    inline bool CreatedTimeHasBeenSet() const { return m_createdTimeHasBeenSet; }
    template<typename CreatedTimeT = Aws::Utils::DateTime>
    void SetCreatedTime(CreatedTimeT&& value) { m_createdTimeHasBeenSet = true; m_createdTime = std::forward<CreatedTimeT>(value); }
    template<typename CreatedTimeT = Aws::Utils::DateTime>
    Experiment& WithCreatedTime(CreatedTimeT&& value) { SetCreatedTime(std::forward<CreatedTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A description of the experiment.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    Experiment& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A structure that contains the date and time that the experiment started and
     * ended.</p>
     */
    inline const ExperimentExecution& GetExecution() const { return m_execution; }
    inline bool ExecutionHasBeenSet() const { return m_executionHasBeenSet; }
    template<typename ExecutionT = ExperimentExecution>
    void SetExecution(ExecutionT&& value) { m_executionHasBeenSet = true; m_execution = std::forward<ExecutionT>(value); }
    template<typename ExecutionT = ExperimentExecution>
    Experiment& WithExecution(ExecutionT&& value) { SetExecution(std::forward<ExecutionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time that the experiment was most recently updated.</p>
     */
    inline const Aws::Utils::DateTime& GetLastUpdatedTime() const { return m_lastUpdatedTime; }
    inline bool LastUpdatedTimeHasBeenSet() const { return m_lastUpdatedTimeHasBeenSet; }
    template<typename LastUpdatedTimeT = Aws::Utils::DateTime>
    void SetLastUpdatedTime(LastUpdatedTimeT&& value) { m_lastUpdatedTimeHasBeenSet = true; m_lastUpdatedTime = std::forward<LastUpdatedTimeT>(value); }
    template<typename LastUpdatedTimeT = Aws::Utils::DateTime>
    Experiment& WithLastUpdatedTime(LastUpdatedTimeT&& value) { SetLastUpdatedTime(std::forward<LastUpdatedTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An array of structures that defines the metrics used for the experiment, and
     * whether a higher or lower value for each metric is the goal.</p>
     */
    inline const Aws::Vector<MetricGoal>& GetMetricGoals() const { return m_metricGoals; }
    inline bool MetricGoalsHasBeenSet() const { return m_metricGoalsHasBeenSet; }
    template<typename MetricGoalsT = Aws::Vector<MetricGoal>>
    void SetMetricGoals(MetricGoalsT&& value) { m_metricGoalsHasBeenSet = true; m_metricGoals = std::forward<MetricGoalsT>(value); }
    template<typename MetricGoalsT = Aws::Vector<MetricGoal>>
    Experiment& WithMetricGoals(MetricGoalsT&& value) { SetMetricGoals(std::forward<MetricGoalsT>(value)); return *this;}
    template<typename MetricGoalsT = MetricGoal>
    Experiment& AddMetricGoals(MetricGoalsT&& value) { m_metricGoalsHasBeenSet = true; m_metricGoals.emplace_back(std::forward<MetricGoalsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The name of the experiment.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    Experiment& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A structure that contains the configuration of which variation to use as the
     * "control" version. The "control" version is used for comparison with other
     * variations. This structure also specifies how much experiment traffic is
     * allocated to each variation.</p>
     */
    inline const OnlineAbDefinition& GetOnlineAbDefinition() const { return m_onlineAbDefinition; }
    inline bool OnlineAbDefinitionHasBeenSet() const { return m_onlineAbDefinitionHasBeenSet; }
    template<typename OnlineAbDefinitionT = OnlineAbDefinition>
    void SetOnlineAbDefinition(OnlineAbDefinitionT&& value) { m_onlineAbDefinitionHasBeenSet = true; m_onlineAbDefinition = std::forward<OnlineAbDefinitionT>(value); }
    template<typename OnlineAbDefinitionT = OnlineAbDefinition>
    Experiment& WithOnlineAbDefinition(OnlineAbDefinitionT&& value) { SetOnlineAbDefinition(std::forward<OnlineAbDefinitionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name or ARN of the project that contains this experiment.</p>
     */
    inline const Aws::String& GetProject() const { return m_project; }
    inline bool ProjectHasBeenSet() const { return m_projectHasBeenSet; }
    template<typename ProjectT = Aws::String>
    void SetProject(ProjectT&& value) { m_projectHasBeenSet = true; m_project = std::forward<ProjectT>(value); }
    template<typename ProjectT = Aws::String>
    Experiment& WithProject(ProjectT&& value) { SetProject(std::forward<ProjectT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>This value is used when Evidently assigns a particular user session to the
     * experiment. It helps create a randomization ID to determine which variation the
     * user session is served. This randomization ID is a combination of the entity ID
     * and <code>randomizationSalt</code>.</p>
     */
    inline const Aws::String& GetRandomizationSalt() const { return m_randomizationSalt; }
    inline bool RandomizationSaltHasBeenSet() const { return m_randomizationSaltHasBeenSet; }
    template<typename RandomizationSaltT = Aws::String>
    void SetRandomizationSalt(RandomizationSaltT&& value) { m_randomizationSaltHasBeenSet = true; m_randomizationSalt = std::forward<RandomizationSaltT>(value); }
    template<typename RandomizationSaltT = Aws::String>
    Experiment& WithRandomizationSalt(RandomizationSaltT&& value) { SetRandomizationSalt(std::forward<RandomizationSaltT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>In thousandths of a percent, the amount of the available audience that is
     * allocated to this experiment. The available audience is the total audience minus
     * the audience that you have allocated to overrides or current launches of this
     * feature.</p> <p>This is represented in thousandths of a percent, so a value of
     * 10,000 is 10% of the available audience.</p>
     */
    inline long long GetSamplingRate() const { return m_samplingRate; }
    inline bool SamplingRateHasBeenSet() const { return m_samplingRateHasBeenSet; }
    inline void SetSamplingRate(long long value) { m_samplingRateHasBeenSet = true; m_samplingRate = value; }
    inline Experiment& WithSamplingRate(long long value) { SetSamplingRate(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A structure that contains the time and date that Evidently completed the
     * analysis of the experiment.</p>
     */
    inline const ExperimentSchedule& GetSchedule() const { return m_schedule; }
    inline bool ScheduleHasBeenSet() const { return m_scheduleHasBeenSet; }
    template<typename ScheduleT = ExperimentSchedule>
    void SetSchedule(ScheduleT&& value) { m_scheduleHasBeenSet = true; m_schedule = std::forward<ScheduleT>(value); }
    template<typename ScheduleT = ExperimentSchedule>
    Experiment& WithSchedule(ScheduleT&& value) { SetSchedule(std::forward<ScheduleT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The audience segment being used for the experiment, if a segment is being
     * used.</p>
     */
    inline const Aws::String& GetSegment() const { return m_segment; }
    inline bool SegmentHasBeenSet() const { return m_segmentHasBeenSet; }
    template<typename SegmentT = Aws::String>
    void SetSegment(SegmentT&& value) { m_segmentHasBeenSet = true; m_segment = std::forward<SegmentT>(value); }
    template<typename SegmentT = Aws::String>
    Experiment& WithSegment(SegmentT&& value) { SetSegment(std::forward<SegmentT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The current state of the experiment.</p>
     */
    inline ExperimentStatus GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(ExperimentStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline Experiment& WithStatus(ExperimentStatus value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>If the experiment was stopped, this is the string that was entered by the
     * person who stopped the experiment, to explain why it was stopped.</p>
     */
    inline const Aws::String& GetStatusReason() const { return m_statusReason; }
    inline bool StatusReasonHasBeenSet() const { return m_statusReasonHasBeenSet; }
    template<typename StatusReasonT = Aws::String>
    void SetStatusReason(StatusReasonT&& value) { m_statusReasonHasBeenSet = true; m_statusReason = std::forward<StatusReasonT>(value); }
    template<typename StatusReasonT = Aws::String>
    Experiment& WithStatusReason(StatusReasonT&& value) { SetStatusReason(std::forward<StatusReasonT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The list of tag keys and values associated with this experiment.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const { return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    template<typename TagsT = Aws::Map<Aws::String, Aws::String>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Map<Aws::String, Aws::String>>
    Experiment& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsKeyT = Aws::String, typename TagsValueT = Aws::String>
    Experiment& AddTags(TagsKeyT&& key, TagsValueT&& value) {
      m_tagsHasBeenSet = true; m_tags.emplace(std::forward<TagsKeyT>(key), std::forward<TagsValueT>(value)); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>An array of structures that describe the configuration of each feature
     * variation used in the experiment.</p>
     */
    inline const Aws::Vector<Treatment>& GetTreatments() const { return m_treatments; }
    inline bool TreatmentsHasBeenSet() const { return m_treatmentsHasBeenSet; }
    template<typename TreatmentsT = Aws::Vector<Treatment>>
    void SetTreatments(TreatmentsT&& value) { m_treatmentsHasBeenSet = true; m_treatments = std::forward<TreatmentsT>(value); }
    template<typename TreatmentsT = Aws::Vector<Treatment>>
    Experiment& WithTreatments(TreatmentsT&& value) { SetTreatments(std::forward<TreatmentsT>(value)); return *this;}
    template<typename TreatmentsT = Treatment>
    Experiment& AddTreatments(TreatmentsT&& value) { m_treatmentsHasBeenSet = true; m_treatments.emplace_back(std::forward<TreatmentsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The type of this experiment. Currently, this value must be
     * <code>aws.experiment.onlineab</code>.</p>
     */
    inline ExperimentType GetType() const { return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(ExperimentType value) { m_typeHasBeenSet = true; m_type = value; }
    inline Experiment& WithType(ExperimentType value) { SetType(value); return *this;}
    ///@}
  private:

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    Aws::Utils::DateTime m_createdTime{};
    bool m_createdTimeHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    ExperimentExecution m_execution;
    bool m_executionHasBeenSet = false;

    Aws::Utils::DateTime m_lastUpdatedTime{};
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

    long long m_samplingRate{0};
    bool m_samplingRateHasBeenSet = false;

    ExperimentSchedule m_schedule;
    bool m_scheduleHasBeenSet = false;

    Aws::String m_segment;
    bool m_segmentHasBeenSet = false;

    ExperimentStatus m_status{ExperimentStatus::NOT_SET};
    bool m_statusHasBeenSet = false;

    Aws::String m_statusReason;
    bool m_statusReasonHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet = false;

    Aws::Vector<Treatment> m_treatments;
    bool m_treatmentsHasBeenSet = false;

    ExperimentType m_type{ExperimentType::NOT_SET};
    bool m_typeHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudWatchEvidently
} // namespace Aws
