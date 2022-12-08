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
    AWS_CLOUDWATCHEVIDENTLY_API CreateExperimentRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateExperiment"; }

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
    inline CreateExperimentRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>An optional description of the experiment.</p>
     */
    inline CreateExperimentRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>An optional description of the experiment.</p>
     */
    inline CreateExperimentRequest& WithDescription(const char* value) { SetDescription(value); return *this;}


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
    inline CreateExperimentRequest& WithMetricGoals(const Aws::Vector<MetricGoalConfig>& value) { SetMetricGoals(value); return *this;}

    /**
     * <p>An array of structures that defines the metrics used for the experiment, and
     * whether a higher or lower value for each metric is the goal.</p>
     */
    inline CreateExperimentRequest& WithMetricGoals(Aws::Vector<MetricGoalConfig>&& value) { SetMetricGoals(std::move(value)); return *this;}

    /**
     * <p>An array of structures that defines the metrics used for the experiment, and
     * whether a higher or lower value for each metric is the goal.</p>
     */
    inline CreateExperimentRequest& AddMetricGoals(const MetricGoalConfig& value) { m_metricGoalsHasBeenSet = true; m_metricGoals.push_back(value); return *this; }

    /**
     * <p>An array of structures that defines the metrics used for the experiment, and
     * whether a higher or lower value for each metric is the goal.</p>
     */
    inline CreateExperimentRequest& AddMetricGoals(MetricGoalConfig&& value) { m_metricGoalsHasBeenSet = true; m_metricGoals.push_back(std::move(value)); return *this; }


    /**
     * <p>A name for the new experiment.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>A name for the new experiment.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>A name for the new experiment.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>A name for the new experiment.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>A name for the new experiment.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>A name for the new experiment.</p>
     */
    inline CreateExperimentRequest& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>A name for the new experiment.</p>
     */
    inline CreateExperimentRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>A name for the new experiment.</p>
     */
    inline CreateExperimentRequest& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>A structure that contains the configuration of which variation to use as the
     * "control" version. tThe "control" version is used for comparison with other
     * variations. This structure also specifies how much experiment traffic is
     * allocated to each variation.</p>
     */
    inline const OnlineAbConfig& GetOnlineAbConfig() const{ return m_onlineAbConfig; }

    /**
     * <p>A structure that contains the configuration of which variation to use as the
     * "control" version. tThe "control" version is used for comparison with other
     * variations. This structure also specifies how much experiment traffic is
     * allocated to each variation.</p>
     */
    inline bool OnlineAbConfigHasBeenSet() const { return m_onlineAbConfigHasBeenSet; }

    /**
     * <p>A structure that contains the configuration of which variation to use as the
     * "control" version. tThe "control" version is used for comparison with other
     * variations. This structure also specifies how much experiment traffic is
     * allocated to each variation.</p>
     */
    inline void SetOnlineAbConfig(const OnlineAbConfig& value) { m_onlineAbConfigHasBeenSet = true; m_onlineAbConfig = value; }

    /**
     * <p>A structure that contains the configuration of which variation to use as the
     * "control" version. tThe "control" version is used for comparison with other
     * variations. This structure also specifies how much experiment traffic is
     * allocated to each variation.</p>
     */
    inline void SetOnlineAbConfig(OnlineAbConfig&& value) { m_onlineAbConfigHasBeenSet = true; m_onlineAbConfig = std::move(value); }

    /**
     * <p>A structure that contains the configuration of which variation to use as the
     * "control" version. tThe "control" version is used for comparison with other
     * variations. This structure also specifies how much experiment traffic is
     * allocated to each variation.</p>
     */
    inline CreateExperimentRequest& WithOnlineAbConfig(const OnlineAbConfig& value) { SetOnlineAbConfig(value); return *this;}

    /**
     * <p>A structure that contains the configuration of which variation to use as the
     * "control" version. tThe "control" version is used for comparison with other
     * variations. This structure also specifies how much experiment traffic is
     * allocated to each variation.</p>
     */
    inline CreateExperimentRequest& WithOnlineAbConfig(OnlineAbConfig&& value) { SetOnlineAbConfig(std::move(value)); return *this;}


    /**
     * <p>The name or ARN of the project that you want to create the new experiment
     * in.</p>
     */
    inline const Aws::String& GetProject() const{ return m_project; }

    /**
     * <p>The name or ARN of the project that you want to create the new experiment
     * in.</p>
     */
    inline bool ProjectHasBeenSet() const { return m_projectHasBeenSet; }

    /**
     * <p>The name or ARN of the project that you want to create the new experiment
     * in.</p>
     */
    inline void SetProject(const Aws::String& value) { m_projectHasBeenSet = true; m_project = value; }

    /**
     * <p>The name or ARN of the project that you want to create the new experiment
     * in.</p>
     */
    inline void SetProject(Aws::String&& value) { m_projectHasBeenSet = true; m_project = std::move(value); }

    /**
     * <p>The name or ARN of the project that you want to create the new experiment
     * in.</p>
     */
    inline void SetProject(const char* value) { m_projectHasBeenSet = true; m_project.assign(value); }

    /**
     * <p>The name or ARN of the project that you want to create the new experiment
     * in.</p>
     */
    inline CreateExperimentRequest& WithProject(const Aws::String& value) { SetProject(value); return *this;}

    /**
     * <p>The name or ARN of the project that you want to create the new experiment
     * in.</p>
     */
    inline CreateExperimentRequest& WithProject(Aws::String&& value) { SetProject(std::move(value)); return *this;}

    /**
     * <p>The name or ARN of the project that you want to create the new experiment
     * in.</p>
     */
    inline CreateExperimentRequest& WithProject(const char* value) { SetProject(value); return *this;}


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
    inline CreateExperimentRequest& WithRandomizationSalt(const Aws::String& value) { SetRandomizationSalt(value); return *this;}

    /**
     * <p>When Evidently assigns a particular user session to an experiment, it must
     * use a randomization ID to determine which variation the user session is served.
     * This randomization ID is a combination of the entity ID and
     * <code>randomizationSalt</code>. If you omit <code>randomizationSalt</code>,
     * Evidently uses the experiment name as the <code>randomizationSalt</code>.</p>
     */
    inline CreateExperimentRequest& WithRandomizationSalt(Aws::String&& value) { SetRandomizationSalt(std::move(value)); return *this;}

    /**
     * <p>When Evidently assigns a particular user session to an experiment, it must
     * use a randomization ID to determine which variation the user session is served.
     * This randomization ID is a combination of the entity ID and
     * <code>randomizationSalt</code>. If you omit <code>randomizationSalt</code>,
     * Evidently uses the experiment name as the <code>randomizationSalt</code>.</p>
     */
    inline CreateExperimentRequest& WithRandomizationSalt(const char* value) { SetRandomizationSalt(value); return *this;}


    /**
     * <p>The portion of the available audience that you want to allocate to this
     * experiment, in thousandths of a percent. The available audience is the total
     * audience minus the audience that you have allocated to overrides or current
     * launches of this feature.</p> <p>This is represented in thousandths of a
     * percent. For example, specify 10,000 to allocate 10% of the available
     * audience.</p>
     */
    inline long long GetSamplingRate() const{ return m_samplingRate; }

    /**
     * <p>The portion of the available audience that you want to allocate to this
     * experiment, in thousandths of a percent. The available audience is the total
     * audience minus the audience that you have allocated to overrides or current
     * launches of this feature.</p> <p>This is represented in thousandths of a
     * percent. For example, specify 10,000 to allocate 10% of the available
     * audience.</p>
     */
    inline bool SamplingRateHasBeenSet() const { return m_samplingRateHasBeenSet; }

    /**
     * <p>The portion of the available audience that you want to allocate to this
     * experiment, in thousandths of a percent. The available audience is the total
     * audience minus the audience that you have allocated to overrides or current
     * launches of this feature.</p> <p>This is represented in thousandths of a
     * percent. For example, specify 10,000 to allocate 10% of the available
     * audience.</p>
     */
    inline void SetSamplingRate(long long value) { m_samplingRateHasBeenSet = true; m_samplingRate = value; }

    /**
     * <p>The portion of the available audience that you want to allocate to this
     * experiment, in thousandths of a percent. The available audience is the total
     * audience minus the audience that you have allocated to overrides or current
     * launches of this feature.</p> <p>This is represented in thousandths of a
     * percent. For example, specify 10,000 to allocate 10% of the available
     * audience.</p>
     */
    inline CreateExperimentRequest& WithSamplingRate(long long value) { SetSamplingRate(value); return *this;}


    /**
     * <p>Specifies an audience <i>segment</i> to use in the experiment. When a segment
     * is used in an experiment, only user sessions that match the segment pattern are
     * used in the experiment.</p>
     */
    inline const Aws::String& GetSegment() const{ return m_segment; }

    /**
     * <p>Specifies an audience <i>segment</i> to use in the experiment. When a segment
     * is used in an experiment, only user sessions that match the segment pattern are
     * used in the experiment.</p>
     */
    inline bool SegmentHasBeenSet() const { return m_segmentHasBeenSet; }

    /**
     * <p>Specifies an audience <i>segment</i> to use in the experiment. When a segment
     * is used in an experiment, only user sessions that match the segment pattern are
     * used in the experiment.</p>
     */
    inline void SetSegment(const Aws::String& value) { m_segmentHasBeenSet = true; m_segment = value; }

    /**
     * <p>Specifies an audience <i>segment</i> to use in the experiment. When a segment
     * is used in an experiment, only user sessions that match the segment pattern are
     * used in the experiment.</p>
     */
    inline void SetSegment(Aws::String&& value) { m_segmentHasBeenSet = true; m_segment = std::move(value); }

    /**
     * <p>Specifies an audience <i>segment</i> to use in the experiment. When a segment
     * is used in an experiment, only user sessions that match the segment pattern are
     * used in the experiment.</p>
     */
    inline void SetSegment(const char* value) { m_segmentHasBeenSet = true; m_segment.assign(value); }

    /**
     * <p>Specifies an audience <i>segment</i> to use in the experiment. When a segment
     * is used in an experiment, only user sessions that match the segment pattern are
     * used in the experiment.</p>
     */
    inline CreateExperimentRequest& WithSegment(const Aws::String& value) { SetSegment(value); return *this;}

    /**
     * <p>Specifies an audience <i>segment</i> to use in the experiment. When a segment
     * is used in an experiment, only user sessions that match the segment pattern are
     * used in the experiment.</p>
     */
    inline CreateExperimentRequest& WithSegment(Aws::String&& value) { SetSegment(std::move(value)); return *this;}

    /**
     * <p>Specifies an audience <i>segment</i> to use in the experiment. When a segment
     * is used in an experiment, only user sessions that match the segment pattern are
     * used in the experiment.</p>
     */
    inline CreateExperimentRequest& WithSegment(const char* value) { SetSegment(value); return *this;}


    /**
     * <p>Assigns one or more tags (key-value pairs) to the experiment.</p> <p>Tags can
     * help you organize and categorize your resources. You can also use them to scope
     * user permissions by granting a user permission to access or change only
     * resources with certain tag values.</p> <p>Tags don't have any semantic meaning
     * to Amazon Web Services and are interpreted strictly as strings of
     * characters.</p> <pre><code> &lt;p&gt;You can associate as many as 50 tags with
     * an experiment.&lt;/p&gt; &lt;p&gt;For more information, see &lt;a
     * href=&quot;https://docs.aws.amazon.com/general/latest/gr/aws_tagging.html&quot;&gt;Tagging
     * Amazon Web Services resources&lt;/a&gt;.&lt;/p&gt; </code></pre>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }

    /**
     * <p>Assigns one or more tags (key-value pairs) to the experiment.</p> <p>Tags can
     * help you organize and categorize your resources. You can also use them to scope
     * user permissions by granting a user permission to access or change only
     * resources with certain tag values.</p> <p>Tags don't have any semantic meaning
     * to Amazon Web Services and are interpreted strictly as strings of
     * characters.</p> <pre><code> &lt;p&gt;You can associate as many as 50 tags with
     * an experiment.&lt;/p&gt; &lt;p&gt;For more information, see &lt;a
     * href=&quot;https://docs.aws.amazon.com/general/latest/gr/aws_tagging.html&quot;&gt;Tagging
     * Amazon Web Services resources&lt;/a&gt;.&lt;/p&gt; </code></pre>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>Assigns one or more tags (key-value pairs) to the experiment.</p> <p>Tags can
     * help you organize and categorize your resources. You can also use them to scope
     * user permissions by granting a user permission to access or change only
     * resources with certain tag values.</p> <p>Tags don't have any semantic meaning
     * to Amazon Web Services and are interpreted strictly as strings of
     * characters.</p> <pre><code> &lt;p&gt;You can associate as many as 50 tags with
     * an experiment.&lt;/p&gt; &lt;p&gt;For more information, see &lt;a
     * href=&quot;https://docs.aws.amazon.com/general/latest/gr/aws_tagging.html&quot;&gt;Tagging
     * Amazon Web Services resources&lt;/a&gt;.&lt;/p&gt; </code></pre>
     */
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>Assigns one or more tags (key-value pairs) to the experiment.</p> <p>Tags can
     * help you organize and categorize your resources. You can also use them to scope
     * user permissions by granting a user permission to access or change only
     * resources with certain tag values.</p> <p>Tags don't have any semantic meaning
     * to Amazon Web Services and are interpreted strictly as strings of
     * characters.</p> <pre><code> &lt;p&gt;You can associate as many as 50 tags with
     * an experiment.&lt;/p&gt; &lt;p&gt;For more information, see &lt;a
     * href=&quot;https://docs.aws.amazon.com/general/latest/gr/aws_tagging.html&quot;&gt;Tagging
     * Amazon Web Services resources&lt;/a&gt;.&lt;/p&gt; </code></pre>
     */
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>Assigns one or more tags (key-value pairs) to the experiment.</p> <p>Tags can
     * help you organize and categorize your resources. You can also use them to scope
     * user permissions by granting a user permission to access or change only
     * resources with certain tag values.</p> <p>Tags don't have any semantic meaning
     * to Amazon Web Services and are interpreted strictly as strings of
     * characters.</p> <pre><code> &lt;p&gt;You can associate as many as 50 tags with
     * an experiment.&lt;/p&gt; &lt;p&gt;For more information, see &lt;a
     * href=&quot;https://docs.aws.amazon.com/general/latest/gr/aws_tagging.html&quot;&gt;Tagging
     * Amazon Web Services resources&lt;/a&gt;.&lt;/p&gt; </code></pre>
     */
    inline CreateExperimentRequest& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}

    /**
     * <p>Assigns one or more tags (key-value pairs) to the experiment.</p> <p>Tags can
     * help you organize and categorize your resources. You can also use them to scope
     * user permissions by granting a user permission to access or change only
     * resources with certain tag values.</p> <p>Tags don't have any semantic meaning
     * to Amazon Web Services and are interpreted strictly as strings of
     * characters.</p> <pre><code> &lt;p&gt;You can associate as many as 50 tags with
     * an experiment.&lt;/p&gt; &lt;p&gt;For more information, see &lt;a
     * href=&quot;https://docs.aws.amazon.com/general/latest/gr/aws_tagging.html&quot;&gt;Tagging
     * Amazon Web Services resources&lt;/a&gt;.&lt;/p&gt; </code></pre>
     */
    inline CreateExperimentRequest& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>Assigns one or more tags (key-value pairs) to the experiment.</p> <p>Tags can
     * help you organize and categorize your resources. You can also use them to scope
     * user permissions by granting a user permission to access or change only
     * resources with certain tag values.</p> <p>Tags don't have any semantic meaning
     * to Amazon Web Services and are interpreted strictly as strings of
     * characters.</p> <pre><code> &lt;p&gt;You can associate as many as 50 tags with
     * an experiment.&lt;/p&gt; &lt;p&gt;For more information, see &lt;a
     * href=&quot;https://docs.aws.amazon.com/general/latest/gr/aws_tagging.html&quot;&gt;Tagging
     * Amazon Web Services resources&lt;/a&gt;.&lt;/p&gt; </code></pre>
     */
    inline CreateExperimentRequest& AddTags(const Aws::String& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }

    /**
     * <p>Assigns one or more tags (key-value pairs) to the experiment.</p> <p>Tags can
     * help you organize and categorize your resources. You can also use them to scope
     * user permissions by granting a user permission to access or change only
     * resources with certain tag values.</p> <p>Tags don't have any semantic meaning
     * to Amazon Web Services and are interpreted strictly as strings of
     * characters.</p> <pre><code> &lt;p&gt;You can associate as many as 50 tags with
     * an experiment.&lt;/p&gt; &lt;p&gt;For more information, see &lt;a
     * href=&quot;https://docs.aws.amazon.com/general/latest/gr/aws_tagging.html&quot;&gt;Tagging
     * Amazon Web Services resources&lt;/a&gt;.&lt;/p&gt; </code></pre>
     */
    inline CreateExperimentRequest& AddTags(Aws::String&& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>Assigns one or more tags (key-value pairs) to the experiment.</p> <p>Tags can
     * help you organize and categorize your resources. You can also use them to scope
     * user permissions by granting a user permission to access or change only
     * resources with certain tag values.</p> <p>Tags don't have any semantic meaning
     * to Amazon Web Services and are interpreted strictly as strings of
     * characters.</p> <pre><code> &lt;p&gt;You can associate as many as 50 tags with
     * an experiment.&lt;/p&gt; &lt;p&gt;For more information, see &lt;a
     * href=&quot;https://docs.aws.amazon.com/general/latest/gr/aws_tagging.html&quot;&gt;Tagging
     * Amazon Web Services resources&lt;/a&gt;.&lt;/p&gt; </code></pre>
     */
    inline CreateExperimentRequest& AddTags(const Aws::String& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>Assigns one or more tags (key-value pairs) to the experiment.</p> <p>Tags can
     * help you organize and categorize your resources. You can also use them to scope
     * user permissions by granting a user permission to access or change only
     * resources with certain tag values.</p> <p>Tags don't have any semantic meaning
     * to Amazon Web Services and are interpreted strictly as strings of
     * characters.</p> <pre><code> &lt;p&gt;You can associate as many as 50 tags with
     * an experiment.&lt;/p&gt; &lt;p&gt;For more information, see &lt;a
     * href=&quot;https://docs.aws.amazon.com/general/latest/gr/aws_tagging.html&quot;&gt;Tagging
     * Amazon Web Services resources&lt;/a&gt;.&lt;/p&gt; </code></pre>
     */
    inline CreateExperimentRequest& AddTags(Aws::String&& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>Assigns one or more tags (key-value pairs) to the experiment.</p> <p>Tags can
     * help you organize and categorize your resources. You can also use them to scope
     * user permissions by granting a user permission to access or change only
     * resources with certain tag values.</p> <p>Tags don't have any semantic meaning
     * to Amazon Web Services and are interpreted strictly as strings of
     * characters.</p> <pre><code> &lt;p&gt;You can associate as many as 50 tags with
     * an experiment.&lt;/p&gt; &lt;p&gt;For more information, see &lt;a
     * href=&quot;https://docs.aws.amazon.com/general/latest/gr/aws_tagging.html&quot;&gt;Tagging
     * Amazon Web Services resources&lt;/a&gt;.&lt;/p&gt; </code></pre>
     */
    inline CreateExperimentRequest& AddTags(const char* key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>Assigns one or more tags (key-value pairs) to the experiment.</p> <p>Tags can
     * help you organize and categorize your resources. You can also use them to scope
     * user permissions by granting a user permission to access or change only
     * resources with certain tag values.</p> <p>Tags don't have any semantic meaning
     * to Amazon Web Services and are interpreted strictly as strings of
     * characters.</p> <pre><code> &lt;p&gt;You can associate as many as 50 tags with
     * an experiment.&lt;/p&gt; &lt;p&gt;For more information, see &lt;a
     * href=&quot;https://docs.aws.amazon.com/general/latest/gr/aws_tagging.html&quot;&gt;Tagging
     * Amazon Web Services resources&lt;/a&gt;.&lt;/p&gt; </code></pre>
     */
    inline CreateExperimentRequest& AddTags(Aws::String&& key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>Assigns one or more tags (key-value pairs) to the experiment.</p> <p>Tags can
     * help you organize and categorize your resources. You can also use them to scope
     * user permissions by granting a user permission to access or change only
     * resources with certain tag values.</p> <p>Tags don't have any semantic meaning
     * to Amazon Web Services and are interpreted strictly as strings of
     * characters.</p> <pre><code> &lt;p&gt;You can associate as many as 50 tags with
     * an experiment.&lt;/p&gt; &lt;p&gt;For more information, see &lt;a
     * href=&quot;https://docs.aws.amazon.com/general/latest/gr/aws_tagging.html&quot;&gt;Tagging
     * Amazon Web Services resources&lt;/a&gt;.&lt;/p&gt; </code></pre>
     */
    inline CreateExperimentRequest& AddTags(const char* key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }


    /**
     * <p>An array of structures that describe the configuration of each feature
     * variation used in the experiment.</p>
     */
    inline const Aws::Vector<TreatmentConfig>& GetTreatments() const{ return m_treatments; }

    /**
     * <p>An array of structures that describe the configuration of each feature
     * variation used in the experiment.</p>
     */
    inline bool TreatmentsHasBeenSet() const { return m_treatmentsHasBeenSet; }

    /**
     * <p>An array of structures that describe the configuration of each feature
     * variation used in the experiment.</p>
     */
    inline void SetTreatments(const Aws::Vector<TreatmentConfig>& value) { m_treatmentsHasBeenSet = true; m_treatments = value; }

    /**
     * <p>An array of structures that describe the configuration of each feature
     * variation used in the experiment.</p>
     */
    inline void SetTreatments(Aws::Vector<TreatmentConfig>&& value) { m_treatmentsHasBeenSet = true; m_treatments = std::move(value); }

    /**
     * <p>An array of structures that describe the configuration of each feature
     * variation used in the experiment.</p>
     */
    inline CreateExperimentRequest& WithTreatments(const Aws::Vector<TreatmentConfig>& value) { SetTreatments(value); return *this;}

    /**
     * <p>An array of structures that describe the configuration of each feature
     * variation used in the experiment.</p>
     */
    inline CreateExperimentRequest& WithTreatments(Aws::Vector<TreatmentConfig>&& value) { SetTreatments(std::move(value)); return *this;}

    /**
     * <p>An array of structures that describe the configuration of each feature
     * variation used in the experiment.</p>
     */
    inline CreateExperimentRequest& AddTreatments(const TreatmentConfig& value) { m_treatmentsHasBeenSet = true; m_treatments.push_back(value); return *this; }

    /**
     * <p>An array of structures that describe the configuration of each feature
     * variation used in the experiment.</p>
     */
    inline CreateExperimentRequest& AddTreatments(TreatmentConfig&& value) { m_treatmentsHasBeenSet = true; m_treatments.push_back(std::move(value)); return *this; }

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

    long long m_samplingRate;
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
