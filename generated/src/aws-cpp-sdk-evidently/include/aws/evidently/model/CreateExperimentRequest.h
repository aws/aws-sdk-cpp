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
#include <aws/core/utils/memory/stl/AWSMap.h>
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
  class CreateExperimentRequest : public CloudWatchEvidentlyRequest
  {
  public:
    AWS_CLOUDWATCHEVIDENTLY_API CreateExperimentRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateExperiment"; }

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
    CreateExperimentRequest& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
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
    CreateExperimentRequest& WithMetricGoals(MetricGoalsT&& value) { SetMetricGoals(std::forward<MetricGoalsT>(value)); return *this;}
    template<typename MetricGoalsT = MetricGoalConfig>
    CreateExperimentRequest& AddMetricGoals(MetricGoalsT&& value) { m_metricGoalsHasBeenSet = true; m_metricGoals.emplace_back(std::forward<MetricGoalsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A name for the new experiment.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    CreateExperimentRequest& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A structure that contains the configuration of which variation to use as the
     * "control" version. tThe "control" version is used for comparison with other
     * variations. This structure also specifies how much experiment traffic is
     * allocated to each variation.</p>
     */
    inline const OnlineAbConfig& GetOnlineAbConfig() const { return m_onlineAbConfig; }
    inline bool OnlineAbConfigHasBeenSet() const { return m_onlineAbConfigHasBeenSet; }
    template<typename OnlineAbConfigT = OnlineAbConfig>
    void SetOnlineAbConfig(OnlineAbConfigT&& value) { m_onlineAbConfigHasBeenSet = true; m_onlineAbConfig = std::forward<OnlineAbConfigT>(value); }
    template<typename OnlineAbConfigT = OnlineAbConfig>
    CreateExperimentRequest& WithOnlineAbConfig(OnlineAbConfigT&& value) { SetOnlineAbConfig(std::forward<OnlineAbConfigT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name or ARN of the project that you want to create the new experiment
     * in.</p>
     */
    inline const Aws::String& GetProject() const { return m_project; }
    inline bool ProjectHasBeenSet() const { return m_projectHasBeenSet; }
    template<typename ProjectT = Aws::String>
    void SetProject(ProjectT&& value) { m_projectHasBeenSet = true; m_project = std::forward<ProjectT>(value); }
    template<typename ProjectT = Aws::String>
    CreateExperimentRequest& WithProject(ProjectT&& value) { SetProject(std::forward<ProjectT>(value)); return *this;}
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
    CreateExperimentRequest& WithRandomizationSalt(RandomizationSaltT&& value) { SetRandomizationSalt(std::forward<RandomizationSaltT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The portion of the available audience that you want to allocate to this
     * experiment, in thousandths of a percent. The available audience is the total
     * audience minus the audience that you have allocated to overrides or current
     * launches of this feature.</p> <p>This is represented in thousandths of a
     * percent. For example, specify 10,000 to allocate 10% of the available
     * audience.</p>
     */
    inline long long GetSamplingRate() const { return m_samplingRate; }
    inline bool SamplingRateHasBeenSet() const { return m_samplingRateHasBeenSet; }
    inline void SetSamplingRate(long long value) { m_samplingRateHasBeenSet = true; m_samplingRate = value; }
    inline CreateExperimentRequest& WithSamplingRate(long long value) { SetSamplingRate(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies an audience <i>segment</i> to use in the experiment. When a segment
     * is used in an experiment, only user sessions that match the segment pattern are
     * used in the experiment.</p>
     */
    inline const Aws::String& GetSegment() const { return m_segment; }
    inline bool SegmentHasBeenSet() const { return m_segmentHasBeenSet; }
    template<typename SegmentT = Aws::String>
    void SetSegment(SegmentT&& value) { m_segmentHasBeenSet = true; m_segment = std::forward<SegmentT>(value); }
    template<typename SegmentT = Aws::String>
    CreateExperimentRequest& WithSegment(SegmentT&& value) { SetSegment(std::forward<SegmentT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Assigns one or more tags (key-value pairs) to the experiment.</p> <p>Tags can
     * help you organize and categorize your resources. You can also use them to scope
     * user permissions by granting a user permission to access or change only
     * resources with certain tag values.</p> <p>Tags don't have any semantic meaning
     * to Amazon Web Services and are interpreted strictly as strings of
     * characters.</p> <p>You can associate as many as 50 tags with an experiment.</p>
     * <p>For more information, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws_tagging.html">Tagging
     * Amazon Web Services resources</a>.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const { return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    template<typename TagsT = Aws::Map<Aws::String, Aws::String>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Map<Aws::String, Aws::String>>
    CreateExperimentRequest& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsKeyT = Aws::String, typename TagsValueT = Aws::String>
    CreateExperimentRequest& AddTags(TagsKeyT&& key, TagsValueT&& value) {
      m_tagsHasBeenSet = true; m_tags.emplace(std::forward<TagsKeyT>(key), std::forward<TagsValueT>(value)); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>An array of structures that describe the configuration of each feature
     * variation used in the experiment.</p>
     */
    inline const Aws::Vector<TreatmentConfig>& GetTreatments() const { return m_treatments; }
    inline bool TreatmentsHasBeenSet() const { return m_treatmentsHasBeenSet; }
    template<typename TreatmentsT = Aws::Vector<TreatmentConfig>>
    void SetTreatments(TreatmentsT&& value) { m_treatmentsHasBeenSet = true; m_treatments = std::forward<TreatmentsT>(value); }
    template<typename TreatmentsT = Aws::Vector<TreatmentConfig>>
    CreateExperimentRequest& WithTreatments(TreatmentsT&& value) { SetTreatments(std::forward<TreatmentsT>(value)); return *this;}
    template<typename TreatmentsT = TreatmentConfig>
    CreateExperimentRequest& AddTreatments(TreatmentsT&& value) { m_treatmentsHasBeenSet = true; m_treatments.emplace_back(std::forward<TreatmentsT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::Vector<MetricGoalConfig> m_metricGoals;
    bool m_metricGoalsHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    OnlineAbConfig m_onlineAbConfig;
    bool m_onlineAbConfigHasBeenSet = false;

    Aws::String m_project;
    bool m_projectHasBeenSet = false;

    Aws::String m_randomizationSalt;
    bool m_randomizationSaltHasBeenSet = false;

    long long m_samplingRate{0};
    bool m_samplingRateHasBeenSet = false;

    Aws::String m_segment;
    bool m_segmentHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet = false;

    Aws::Vector<TreatmentConfig> m_treatments;
    bool m_treatmentsHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudWatchEvidently
} // namespace Aws
