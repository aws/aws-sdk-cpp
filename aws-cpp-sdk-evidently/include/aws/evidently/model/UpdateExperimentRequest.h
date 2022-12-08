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
    AWS_CLOUDWATCHEVIDENTLY_API UpdateExperimentRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateExperiment"; }

    AWS_CLOUDWATCHEVIDENTLY_API Aws::String SerializePayload() const override;


    /**
     * <p>An optional description of the experiment.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>An optional description of the experiment.</p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>An optional description of the experiment.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>An optional description of the experiment.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>An optional description of the experiment.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>An optional description of the experiment.</p>
     */
    inline UpdateExperimentRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>An optional description of the experiment.</p>
     */
    inline UpdateExperimentRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>An optional description of the experiment.</p>
     */
    inline UpdateExperimentRequest& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>The name of the experiment to update.</p>
     */
    inline const Aws::String& GetExperiment() const{ return m_experiment; }

    /**
     * <p>The name of the experiment to update.</p>
     */
    inline bool ExperimentHasBeenSet() const { return m_experimentHasBeenSet; }

    /**
     * <p>The name of the experiment to update.</p>
     */
    inline void SetExperiment(const Aws::String& value) { m_experimentHasBeenSet = true; m_experiment = value; }

    /**
     * <p>The name of the experiment to update.</p>
     */
    inline void SetExperiment(Aws::String&& value) { m_experimentHasBeenSet = true; m_experiment = std::move(value); }

    /**
     * <p>The name of the experiment to update.</p>
     */
    inline void SetExperiment(const char* value) { m_experimentHasBeenSet = true; m_experiment.assign(value); }

    /**
     * <p>The name of the experiment to update.</p>
     */
    inline UpdateExperimentRequest& WithExperiment(const Aws::String& value) { SetExperiment(value); return *this;}

    /**
     * <p>The name of the experiment to update.</p>
     */
    inline UpdateExperimentRequest& WithExperiment(Aws::String&& value) { SetExperiment(std::move(value)); return *this;}

    /**
     * <p>The name of the experiment to update.</p>
     */
    inline UpdateExperimentRequest& WithExperiment(const char* value) { SetExperiment(value); return *this;}


    /**
     * <p>An array of structures that defines the metrics used for the experiment, and
     * whether a higher or lower value for each metric is the goal.</p>
     */
    inline const Aws::Vector<MetricGoalConfig>& GetMetricGoals() const{ return m_metricGoals; }

    /**
     * <p>An array of structures that defines the metrics used for the experiment, and
     * whether a higher or lower value for each metric is the goal.</p>
     */
    inline bool MetricGoalsHasBeenSet() const { return m_metricGoalsHasBeenSet; }

    /**
     * <p>An array of structures that defines the metrics used for the experiment, and
     * whether a higher or lower value for each metric is the goal.</p>
     */
    inline void SetMetricGoals(const Aws::Vector<MetricGoalConfig>& value) { m_metricGoalsHasBeenSet = true; m_metricGoals = value; }

    /**
     * <p>An array of structures that defines the metrics used for the experiment, and
     * whether a higher or lower value for each metric is the goal.</p>
     */
    inline void SetMetricGoals(Aws::Vector<MetricGoalConfig>&& value) { m_metricGoalsHasBeenSet = true; m_metricGoals = std::move(value); }

    /**
     * <p>An array of structures that defines the metrics used for the experiment, and
     * whether a higher or lower value for each metric is the goal.</p>
     */
    inline UpdateExperimentRequest& WithMetricGoals(const Aws::Vector<MetricGoalConfig>& value) { SetMetricGoals(value); return *this;}

    /**
     * <p>An array of structures that defines the metrics used for the experiment, and
     * whether a higher or lower value for each metric is the goal.</p>
     */
    inline UpdateExperimentRequest& WithMetricGoals(Aws::Vector<MetricGoalConfig>&& value) { SetMetricGoals(std::move(value)); return *this;}

    /**
     * <p>An array of structures that defines the metrics used for the experiment, and
     * whether a higher or lower value for each metric is the goal.</p>
     */
    inline UpdateExperimentRequest& AddMetricGoals(const MetricGoalConfig& value) { m_metricGoalsHasBeenSet = true; m_metricGoals.push_back(value); return *this; }

    /**
     * <p>An array of structures that defines the metrics used for the experiment, and
     * whether a higher or lower value for each metric is the goal.</p>
     */
    inline UpdateExperimentRequest& AddMetricGoals(MetricGoalConfig&& value) { m_metricGoalsHasBeenSet = true; m_metricGoals.push_back(std::move(value)); return *this; }


    /**
     * <p>A structure that contains the configuration of which variation o use as the
     * "control" version. The "control" version is used for comparison with other
     * variations. This structure also specifies how much experiment traffic is
     * allocated to each variation.</p>
     */
    inline const OnlineAbConfig& GetOnlineAbConfig() const{ return m_onlineAbConfig; }

    /**
     * <p>A structure that contains the configuration of which variation o use as the
     * "control" version. The "control" version is used for comparison with other
     * variations. This structure also specifies how much experiment traffic is
     * allocated to each variation.</p>
     */
    inline bool OnlineAbConfigHasBeenSet() const { return m_onlineAbConfigHasBeenSet; }

    /**
     * <p>A structure that contains the configuration of which variation o use as the
     * "control" version. The "control" version is used for comparison with other
     * variations. This structure also specifies how much experiment traffic is
     * allocated to each variation.</p>
     */
    inline void SetOnlineAbConfig(const OnlineAbConfig& value) { m_onlineAbConfigHasBeenSet = true; m_onlineAbConfig = value; }

    /**
     * <p>A structure that contains the configuration of which variation o use as the
     * "control" version. The "control" version is used for comparison with other
     * variations. This structure also specifies how much experiment traffic is
     * allocated to each variation.</p>
     */
    inline void SetOnlineAbConfig(OnlineAbConfig&& value) { m_onlineAbConfigHasBeenSet = true; m_onlineAbConfig = std::move(value); }

    /**
     * <p>A structure that contains the configuration of which variation o use as the
     * "control" version. The "control" version is used for comparison with other
     * variations. This structure also specifies how much experiment traffic is
     * allocated to each variation.</p>
     */
    inline UpdateExperimentRequest& WithOnlineAbConfig(const OnlineAbConfig& value) { SetOnlineAbConfig(value); return *this;}

    /**
     * <p>A structure that contains the configuration of which variation o use as the
     * "control" version. The "control" version is used for comparison with other
     * variations. This structure also specifies how much experiment traffic is
     * allocated to each variation.</p>
     */
    inline UpdateExperimentRequest& WithOnlineAbConfig(OnlineAbConfig&& value) { SetOnlineAbConfig(std::move(value)); return *this;}


    /**
     * <p>The name or ARN of the project that contains the experiment that you want to
     * update.</p>
     */
    inline const Aws::String& GetProject() const{ return m_project; }

    /**
     * <p>The name or ARN of the project that contains the experiment that you want to
     * update.</p>
     */
    inline bool ProjectHasBeenSet() const { return m_projectHasBeenSet; }

    /**
     * <p>The name or ARN of the project that contains the experiment that you want to
     * update.</p>
     */
    inline void SetProject(const Aws::String& value) { m_projectHasBeenSet = true; m_project = value; }

    /**
     * <p>The name or ARN of the project that contains the experiment that you want to
     * update.</p>
     */
    inline void SetProject(Aws::String&& value) { m_projectHasBeenSet = true; m_project = std::move(value); }

    /**
     * <p>The name or ARN of the project that contains the experiment that you want to
     * update.</p>
     */
    inline void SetProject(const char* value) { m_projectHasBeenSet = true; m_project.assign(value); }

    /**
     * <p>The name or ARN of the project that contains the experiment that you want to
     * update.</p>
     */
    inline UpdateExperimentRequest& WithProject(const Aws::String& value) { SetProject(value); return *this;}

    /**
     * <p>The name or ARN of the project that contains the experiment that you want to
     * update.</p>
     */
    inline UpdateExperimentRequest& WithProject(Aws::String&& value) { SetProject(std::move(value)); return *this;}

    /**
     * <p>The name or ARN of the project that contains the experiment that you want to
     * update.</p>
     */
    inline UpdateExperimentRequest& WithProject(const char* value) { SetProject(value); return *this;}


    /**
     * <p>When Evidently assigns a particular user session to an experiment, it must
     * use a randomization ID to determine which variation the user session is served.
     * This randomization ID is a combination of the entity ID and
     * <code>randomizationSalt</code>. If you omit <code>randomizationSalt</code>,
     * Evidently uses the experiment name as the <code>randomizationSalt</code>.</p>
     */
    inline const Aws::String& GetRandomizationSalt() const{ return m_randomizationSalt; }

    /**
     * <p>When Evidently assigns a particular user session to an experiment, it must
     * use a randomization ID to determine which variation the user session is served.
     * This randomization ID is a combination of the entity ID and
     * <code>randomizationSalt</code>. If you omit <code>randomizationSalt</code>,
     * Evidently uses the experiment name as the <code>randomizationSalt</code>.</p>
     */
    inline bool RandomizationSaltHasBeenSet() const { return m_randomizationSaltHasBeenSet; }

    /**
     * <p>When Evidently assigns a particular user session to an experiment, it must
     * use a randomization ID to determine which variation the user session is served.
     * This randomization ID is a combination of the entity ID and
     * <code>randomizationSalt</code>. If you omit <code>randomizationSalt</code>,
     * Evidently uses the experiment name as the <code>randomizationSalt</code>.</p>
     */
    inline void SetRandomizationSalt(const Aws::String& value) { m_randomizationSaltHasBeenSet = true; m_randomizationSalt = value; }

    /**
     * <p>When Evidently assigns a particular user session to an experiment, it must
     * use a randomization ID to determine which variation the user session is served.
     * This randomization ID is a combination of the entity ID and
     * <code>randomizationSalt</code>. If you omit <code>randomizationSalt</code>,
     * Evidently uses the experiment name as the <code>randomizationSalt</code>.</p>
     */
    inline void SetRandomizationSalt(Aws::String&& value) { m_randomizationSaltHasBeenSet = true; m_randomizationSalt = std::move(value); }

    /**
     * <p>When Evidently assigns a particular user session to an experiment, it must
     * use a randomization ID to determine which variation the user session is served.
     * This randomization ID is a combination of the entity ID and
     * <code>randomizationSalt</code>. If you omit <code>randomizationSalt</code>,
     * Evidently uses the experiment name as the <code>randomizationSalt</code>.</p>
     */
    inline void SetRandomizationSalt(const char* value) { m_randomizationSaltHasBeenSet = true; m_randomizationSalt.assign(value); }

    /**
     * <p>When Evidently assigns a particular user session to an experiment, it must
     * use a randomization ID to determine which variation the user session is served.
     * This randomization ID is a combination of the entity ID and
     * <code>randomizationSalt</code>. If you omit <code>randomizationSalt</code>,
     * Evidently uses the experiment name as the <code>randomizationSalt</code>.</p>
     */
    inline UpdateExperimentRequest& WithRandomizationSalt(const Aws::String& value) { SetRandomizationSalt(value); return *this;}

    /**
     * <p>When Evidently assigns a particular user session to an experiment, it must
     * use a randomization ID to determine which variation the user session is served.
     * This randomization ID is a combination of the entity ID and
     * <code>randomizationSalt</code>. If you omit <code>randomizationSalt</code>,
     * Evidently uses the experiment name as the <code>randomizationSalt</code>.</p>
     */
    inline UpdateExperimentRequest& WithRandomizationSalt(Aws::String&& value) { SetRandomizationSalt(std::move(value)); return *this;}

    /**
     * <p>When Evidently assigns a particular user session to an experiment, it must
     * use a randomization ID to determine which variation the user session is served.
     * This randomization ID is a combination of the entity ID and
     * <code>randomizationSalt</code>. If you omit <code>randomizationSalt</code>,
     * Evidently uses the experiment name as the <code>randomizationSalt</code>.</p>
     */
    inline UpdateExperimentRequest& WithRandomizationSalt(const char* value) { SetRandomizationSalt(value); return *this;}


    /**
     * <p>Removes a segment from being used in an experiment. You can't use this
     * parameter if the experiment is currently running.</p>
     */
    inline bool GetRemoveSegment() const{ return m_removeSegment; }

    /**
     * <p>Removes a segment from being used in an experiment. You can't use this
     * parameter if the experiment is currently running.</p>
     */
    inline bool RemoveSegmentHasBeenSet() const { return m_removeSegmentHasBeenSet; }

    /**
     * <p>Removes a segment from being used in an experiment. You can't use this
     * parameter if the experiment is currently running.</p>
     */
    inline void SetRemoveSegment(bool value) { m_removeSegmentHasBeenSet = true; m_removeSegment = value; }

    /**
     * <p>Removes a segment from being used in an experiment. You can't use this
     * parameter if the experiment is currently running.</p>
     */
    inline UpdateExperimentRequest& WithRemoveSegment(bool value) { SetRemoveSegment(value); return *this;}


    /**
     * <p>The portion of the available audience that you want to allocate to this
     * experiment, in thousandths of a percent. The available audience is the total
     * audience minus the audience that you have allocated to overrides or current
     * launches of this feature.</p> <p>This is represented in thousandths of a
     * percent. For example, specify 20,000 to allocate 20% of the available
     * audience.</p>
     */
    inline long long GetSamplingRate() const{ return m_samplingRate; }

    /**
     * <p>The portion of the available audience that you want to allocate to this
     * experiment, in thousandths of a percent. The available audience is the total
     * audience minus the audience that you have allocated to overrides or current
     * launches of this feature.</p> <p>This is represented in thousandths of a
     * percent. For example, specify 20,000 to allocate 20% of the available
     * audience.</p>
     */
    inline bool SamplingRateHasBeenSet() const { return m_samplingRateHasBeenSet; }

    /**
     * <p>The portion of the available audience that you want to allocate to this
     * experiment, in thousandths of a percent. The available audience is the total
     * audience minus the audience that you have allocated to overrides or current
     * launches of this feature.</p> <p>This is represented in thousandths of a
     * percent. For example, specify 20,000 to allocate 20% of the available
     * audience.</p>
     */
    inline void SetSamplingRate(long long value) { m_samplingRateHasBeenSet = true; m_samplingRate = value; }

    /**
     * <p>The portion of the available audience that you want to allocate to this
     * experiment, in thousandths of a percent. The available audience is the total
     * audience minus the audience that you have allocated to overrides or current
     * launches of this feature.</p> <p>This is represented in thousandths of a
     * percent. For example, specify 20,000 to allocate 20% of the available
     * audience.</p>
     */
    inline UpdateExperimentRequest& WithSamplingRate(long long value) { SetSamplingRate(value); return *this;}


    /**
     * <p>Adds an audience <i>segment</i> to an experiment. When a segment is used in
     * an experiment, only user sessions that match the segment pattern are used in the
     * experiment. You can't use this parameter if the experiment is currently
     * running.</p>
     */
    inline const Aws::String& GetSegment() const{ return m_segment; }

    /**
     * <p>Adds an audience <i>segment</i> to an experiment. When a segment is used in
     * an experiment, only user sessions that match the segment pattern are used in the
     * experiment. You can't use this parameter if the experiment is currently
     * running.</p>
     */
    inline bool SegmentHasBeenSet() const { return m_segmentHasBeenSet; }

    /**
     * <p>Adds an audience <i>segment</i> to an experiment. When a segment is used in
     * an experiment, only user sessions that match the segment pattern are used in the
     * experiment. You can't use this parameter if the experiment is currently
     * running.</p>
     */
    inline void SetSegment(const Aws::String& value) { m_segmentHasBeenSet = true; m_segment = value; }

    /**
     * <p>Adds an audience <i>segment</i> to an experiment. When a segment is used in
     * an experiment, only user sessions that match the segment pattern are used in the
     * experiment. You can't use this parameter if the experiment is currently
     * running.</p>
     */
    inline void SetSegment(Aws::String&& value) { m_segmentHasBeenSet = true; m_segment = std::move(value); }

    /**
     * <p>Adds an audience <i>segment</i> to an experiment. When a segment is used in
     * an experiment, only user sessions that match the segment pattern are used in the
     * experiment. You can't use this parameter if the experiment is currently
     * running.</p>
     */
    inline void SetSegment(const char* value) { m_segmentHasBeenSet = true; m_segment.assign(value); }

    /**
     * <p>Adds an audience <i>segment</i> to an experiment. When a segment is used in
     * an experiment, only user sessions that match the segment pattern are used in the
     * experiment. You can't use this parameter if the experiment is currently
     * running.</p>
     */
    inline UpdateExperimentRequest& WithSegment(const Aws::String& value) { SetSegment(value); return *this;}

    /**
     * <p>Adds an audience <i>segment</i> to an experiment. When a segment is used in
     * an experiment, only user sessions that match the segment pattern are used in the
     * experiment. You can't use this parameter if the experiment is currently
     * running.</p>
     */
    inline UpdateExperimentRequest& WithSegment(Aws::String&& value) { SetSegment(std::move(value)); return *this;}

    /**
     * <p>Adds an audience <i>segment</i> to an experiment. When a segment is used in
     * an experiment, only user sessions that match the segment pattern are used in the
     * experiment. You can't use this parameter if the experiment is currently
     * running.</p>
     */
    inline UpdateExperimentRequest& WithSegment(const char* value) { SetSegment(value); return *this;}


    /**
     * <p>An array of structures that define the variations being tested in the
     * experiment.</p>
     */
    inline const Aws::Vector<TreatmentConfig>& GetTreatments() const{ return m_treatments; }

    /**
     * <p>An array of structures that define the variations being tested in the
     * experiment.</p>
     */
    inline bool TreatmentsHasBeenSet() const { return m_treatmentsHasBeenSet; }

    /**
     * <p>An array of structures that define the variations being tested in the
     * experiment.</p>
     */
    inline void SetTreatments(const Aws::Vector<TreatmentConfig>& value) { m_treatmentsHasBeenSet = true; m_treatments = value; }

    /**
     * <p>An array of structures that define the variations being tested in the
     * experiment.</p>
     */
    inline void SetTreatments(Aws::Vector<TreatmentConfig>&& value) { m_treatmentsHasBeenSet = true; m_treatments = std::move(value); }

    /**
     * <p>An array of structures that define the variations being tested in the
     * experiment.</p>
     */
    inline UpdateExperimentRequest& WithTreatments(const Aws::Vector<TreatmentConfig>& value) { SetTreatments(value); return *this;}

    /**
     * <p>An array of structures that define the variations being tested in the
     * experiment.</p>
     */
    inline UpdateExperimentRequest& WithTreatments(Aws::Vector<TreatmentConfig>&& value) { SetTreatments(std::move(value)); return *this;}

    /**
     * <p>An array of structures that define the variations being tested in the
     * experiment.</p>
     */
    inline UpdateExperimentRequest& AddTreatments(const TreatmentConfig& value) { m_treatmentsHasBeenSet = true; m_treatments.push_back(value); return *this; }

    /**
     * <p>An array of structures that define the variations being tested in the
     * experiment.</p>
     */
    inline UpdateExperimentRequest& AddTreatments(TreatmentConfig&& value) { m_treatmentsHasBeenSet = true; m_treatments.push_back(std::move(value)); return *this; }

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

    bool m_removeSegment;
    bool m_removeSegmentHasBeenSet = false;

    long long m_samplingRate;
    bool m_samplingRateHasBeenSet = false;

    Aws::String m_segment;
    bool m_segmentHasBeenSet = false;

    Aws::Vector<TreatmentConfig> m_treatments;
    bool m_treatmentsHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudWatchEvidently
} // namespace Aws
