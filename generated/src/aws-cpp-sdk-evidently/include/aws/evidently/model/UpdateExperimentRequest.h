/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/evidently/CloudWatchEvidently_EXPORTS.h>
#include <aws/evidently/CloudWatchEvidentlyRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/evidently/model/OnlineAbConfig.h>
#include <aws/evidently/model/MetricGoalConfig.h>
#include <aws/evidently/model/TreatmentConfig.h>
#include <utility>

namespace Aws
{
namespace CloudWatchEvidently
{
namespace Model
{

  /**
   */
  class UpdateExperimentRequest : public CloudWatchEvidentlyRequest
  {
  public:
    AWS_CLOUDWATCHEVIDENTLY_API UpdateExperimentRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateExperiment"; }

    AWS_CLOUDWATCHEVIDENTLY_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>An optional description of the experiment.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    UpdateExperimentRequest& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the experiment to update.</p>
     */
    inline const Aws::String& GetExperiment() const { return m_experiment; }
    inline bool ExperimentHasBeenSet() const { return m_experimentHasBeenSet; }
    template<typename ExperimentT = Aws::String>
    void SetExperiment(ExperimentT&& value) { m_experimentHasBeenSet = true; m_experiment = std::forward<ExperimentT>(value); }
    template<typename ExperimentT = Aws::String>
    UpdateExperimentRequest& WithExperiment(ExperimentT&& value) { SetExperiment(std::forward<ExperimentT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An array of structures that defines the metrics used for the experiment, and
     * whether a higher or lower value for each metric is the goal.</p>
     */
    inline const Aws::Vector<MetricGoalConfig>& GetMetricGoals() const { return m_metricGoals; }
    inline bool MetricGoalsHasBeenSet() const { return m_metricGoalsHasBeenSet; }
    template<typename MetricGoalsT = Aws::Vector<MetricGoalConfig>>
    void SetMetricGoals(MetricGoalsT&& value) { m_metricGoalsHasBeenSet = true; m_metricGoals = std::forward<MetricGoalsT>(value); }
    template<typename MetricGoalsT = Aws::Vector<MetricGoalConfig>>
    UpdateExperimentRequest& WithMetricGoals(MetricGoalsT&& value) { SetMetricGoals(std::forward<MetricGoalsT>(value)); return *this;}
    template<typename MetricGoalsT = MetricGoalConfig>
    UpdateExperimentRequest& AddMetricGoals(MetricGoalsT&& value) { m_metricGoalsHasBeenSet = true; m_metricGoals.emplace_back(std::forward<MetricGoalsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A structure that contains the configuration of which variation o use as the
     * "control" version. The "control" version is used for comparison with other
     * variations. This structure also specifies how much experiment traffic is
     * allocated to each variation.</p>
     */
    inline const OnlineAbConfig& GetOnlineAbConfig() const { return m_onlineAbConfig; }
    inline bool OnlineAbConfigHasBeenSet() const { return m_onlineAbConfigHasBeenSet; }
    template<typename OnlineAbConfigT = OnlineAbConfig>
    void SetOnlineAbConfig(OnlineAbConfigT&& value) { m_onlineAbConfigHasBeenSet = true; m_onlineAbConfig = std::forward<OnlineAbConfigT>(value); }
    template<typename OnlineAbConfigT = OnlineAbConfig>
    UpdateExperimentRequest& WithOnlineAbConfig(OnlineAbConfigT&& value) { SetOnlineAbConfig(std::forward<OnlineAbConfigT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name or ARN of the project that contains the experiment that you want to
     * update.</p>
     */
    inline const Aws::String& GetProject() const { return m_project; }
    inline bool ProjectHasBeenSet() const { return m_projectHasBeenSet; }
    template<typename ProjectT = Aws::String>
    void SetProject(ProjectT&& value) { m_projectHasBeenSet = true; m_project = std::forward<ProjectT>(value); }
    template<typename ProjectT = Aws::String>
    UpdateExperimentRequest& WithProject(ProjectT&& value) { SetProject(std::forward<ProjectT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>When Evidently assigns a particular user session to an experiment, it must
     * use a randomization ID to determine which variation the user session is served.
     * This randomization ID is a combination of the entity ID and
     * <code>randomizationSalt</code>. If you omit <code>randomizationSalt</code>,
     * Evidently uses the experiment name as the <code>randomizationSalt</code>.</p>
     */
    inline const Aws::String& GetRandomizationSalt() const { return m_randomizationSalt; }
    inline bool RandomizationSaltHasBeenSet() const { return m_randomizationSaltHasBeenSet; }
    template<typename RandomizationSaltT = Aws::String>
    void SetRandomizationSalt(RandomizationSaltT&& value) { m_randomizationSaltHasBeenSet = true; m_randomizationSalt = std::forward<RandomizationSaltT>(value); }
    template<typename RandomizationSaltT = Aws::String>
    UpdateExperimentRequest& WithRandomizationSalt(RandomizationSaltT&& value) { SetRandomizationSalt(std::forward<RandomizationSaltT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Removes a segment from being used in an experiment. You can't use this
     * parameter if the experiment is currently running.</p>
     */
    inline bool GetRemoveSegment() const { return m_removeSegment; }
    inline bool RemoveSegmentHasBeenSet() const { return m_removeSegmentHasBeenSet; }
    inline void SetRemoveSegment(bool value) { m_removeSegmentHasBeenSet = true; m_removeSegment = value; }
    inline UpdateExperimentRequest& WithRemoveSegment(bool value) { SetRemoveSegment(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The portion of the available audience that you want to allocate to this
     * experiment, in thousandths of a percent. The available audience is the total
     * audience minus the audience that you have allocated to overrides or current
     * launches of this feature.</p> <p>This is represented in thousandths of a
     * percent. For example, specify 20,000 to allocate 20% of the available
     * audience.</p>
     */
    inline long long GetSamplingRate() const { return m_samplingRate; }
    inline bool SamplingRateHasBeenSet() const { return m_samplingRateHasBeenSet; }
    inline void SetSamplingRate(long long value) { m_samplingRateHasBeenSet = true; m_samplingRate = value; }
    inline UpdateExperimentRequest& WithSamplingRate(long long value) { SetSamplingRate(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Adds an audience <i>segment</i> to an experiment. When a segment is used in
     * an experiment, only user sessions that match the segment pattern are used in the
     * experiment. You can't use this parameter if the experiment is currently
     * running.</p>
     */
    inline const Aws::String& GetSegment() const { return m_segment; }
    inline bool SegmentHasBeenSet() const { return m_segmentHasBeenSet; }
    template<typename SegmentT = Aws::String>
    void SetSegment(SegmentT&& value) { m_segmentHasBeenSet = true; m_segment = std::forward<SegmentT>(value); }
    template<typename SegmentT = Aws::String>
    UpdateExperimentRequest& WithSegment(SegmentT&& value) { SetSegment(std::forward<SegmentT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An array of structures that define the variations being tested in the
     * experiment.</p>
     */
    inline const Aws::Vector<TreatmentConfig>& GetTreatments() const { return m_treatments; }
    inline bool TreatmentsHasBeenSet() const { return m_treatmentsHasBeenSet; }
    template<typename TreatmentsT = Aws::Vector<TreatmentConfig>>
    void SetTreatments(TreatmentsT&& value) { m_treatmentsHasBeenSet = true; m_treatments = std::forward<TreatmentsT>(value); }
    template<typename TreatmentsT = Aws::Vector<TreatmentConfig>>
    UpdateExperimentRequest& WithTreatments(TreatmentsT&& value) { SetTreatments(std::forward<TreatmentsT>(value)); return *this;}
    template<typename TreatmentsT = TreatmentConfig>
    UpdateExperimentRequest& AddTreatments(TreatmentsT&& value) { m_treatmentsHasBeenSet = true; m_treatments.emplace_back(std::forward<TreatmentsT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::String m_experiment;
    bool m_experimentHasBeenSet = false;

    Aws::Vector<MetricGoalConfig> m_metricGoals;
    bool m_metricGoalsHasBeenSet = false;

    OnlineAbConfig m_onlineAbConfig;
    bool m_onlineAbConfigHasBeenSet = false;

    Aws::String m_project;
    bool m_projectHasBeenSet = false;

    Aws::String m_randomizationSalt;
    bool m_randomizationSaltHasBeenSet = false;

    bool m_removeSegment{false};
    bool m_removeSegmentHasBeenSet = false;

    long long m_samplingRate{0};
    bool m_samplingRateHasBeenSet = false;

    Aws::String m_segment;
    bool m_segmentHasBeenSet = false;

    Aws::Vector<TreatmentConfig> m_treatments;
    bool m_treatmentsHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudWatchEvidently
} // namespace Aws
