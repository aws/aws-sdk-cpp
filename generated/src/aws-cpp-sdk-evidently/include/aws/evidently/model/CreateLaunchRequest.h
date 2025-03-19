/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/evidently/CloudWatchEvidently_EXPORTS.h>
#include <aws/evidently/CloudWatchEvidentlyRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/evidently/model/ScheduledSplitsLaunchConfig.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/evidently/model/LaunchGroupConfig.h>
#include <aws/evidently/model/MetricMonitorConfig.h>
#include <utility>

namespace Aws
{
namespace CloudWatchEvidently
{
namespace Model
{

  /**
   */
  class CreateLaunchRequest : public CloudWatchEvidentlyRequest
  {
  public:
    AWS_CLOUDWATCHEVIDENTLY_API CreateLaunchRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateLaunch"; }

    AWS_CLOUDWATCHEVIDENTLY_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>An optional description for the launch.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    CreateLaunchRequest& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An array of structures that contains the feature and variations that are to
     * be used for the launch.</p>
     */
    inline const Aws::Vector<LaunchGroupConfig>& GetGroups() const { return m_groups; }
    inline bool GroupsHasBeenSet() const { return m_groupsHasBeenSet; }
    template<typename GroupsT = Aws::Vector<LaunchGroupConfig>>
    void SetGroups(GroupsT&& value) { m_groupsHasBeenSet = true; m_groups = std::forward<GroupsT>(value); }
    template<typename GroupsT = Aws::Vector<LaunchGroupConfig>>
    CreateLaunchRequest& WithGroups(GroupsT&& value) { SetGroups(std::forward<GroupsT>(value)); return *this;}
    template<typename GroupsT = LaunchGroupConfig>
    CreateLaunchRequest& AddGroups(GroupsT&& value) { m_groupsHasBeenSet = true; m_groups.emplace_back(std::forward<GroupsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>An array of structures that define the metrics that will be used to monitor
     * the launch performance.</p>
     */
    inline const Aws::Vector<MetricMonitorConfig>& GetMetricMonitors() const { return m_metricMonitors; }
    inline bool MetricMonitorsHasBeenSet() const { return m_metricMonitorsHasBeenSet; }
    template<typename MetricMonitorsT = Aws::Vector<MetricMonitorConfig>>
    void SetMetricMonitors(MetricMonitorsT&& value) { m_metricMonitorsHasBeenSet = true; m_metricMonitors = std::forward<MetricMonitorsT>(value); }
    template<typename MetricMonitorsT = Aws::Vector<MetricMonitorConfig>>
    CreateLaunchRequest& WithMetricMonitors(MetricMonitorsT&& value) { SetMetricMonitors(std::forward<MetricMonitorsT>(value)); return *this;}
    template<typename MetricMonitorsT = MetricMonitorConfig>
    CreateLaunchRequest& AddMetricMonitors(MetricMonitorsT&& value) { m_metricMonitorsHasBeenSet = true; m_metricMonitors.emplace_back(std::forward<MetricMonitorsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The name for the new launch.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    CreateLaunchRequest& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name or ARN of the project that you want to create the launch in.</p>
     */
    inline const Aws::String& GetProject() const { return m_project; }
    inline bool ProjectHasBeenSet() const { return m_projectHasBeenSet; }
    template<typename ProjectT = Aws::String>
    void SetProject(ProjectT&& value) { m_projectHasBeenSet = true; m_project = std::forward<ProjectT>(value); }
    template<typename ProjectT = Aws::String>
    CreateLaunchRequest& WithProject(ProjectT&& value) { SetProject(std::forward<ProjectT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>When Evidently assigns a particular user session to a launch, it must use a
     * randomization ID to determine which variation the user session is served. This
     * randomization ID is a combination of the entity ID and
     * <code>randomizationSalt</code>. If you omit <code>randomizationSalt</code>,
     * Evidently uses the launch name as the <code>randomizationSalt</code>.</p>
     */
    inline const Aws::String& GetRandomizationSalt() const { return m_randomizationSalt; }
    inline bool RandomizationSaltHasBeenSet() const { return m_randomizationSaltHasBeenSet; }
    template<typename RandomizationSaltT = Aws::String>
    void SetRandomizationSalt(RandomizationSaltT&& value) { m_randomizationSaltHasBeenSet = true; m_randomizationSalt = std::forward<RandomizationSaltT>(value); }
    template<typename RandomizationSaltT = Aws::String>
    CreateLaunchRequest& WithRandomizationSalt(RandomizationSaltT&& value) { SetRandomizationSalt(std::forward<RandomizationSaltT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An array of structures that define the traffic allocation percentages among
     * the feature variations during each step of the launch.</p>
     */
    inline const ScheduledSplitsLaunchConfig& GetScheduledSplitsConfig() const { return m_scheduledSplitsConfig; }
    inline bool ScheduledSplitsConfigHasBeenSet() const { return m_scheduledSplitsConfigHasBeenSet; }
    template<typename ScheduledSplitsConfigT = ScheduledSplitsLaunchConfig>
    void SetScheduledSplitsConfig(ScheduledSplitsConfigT&& value) { m_scheduledSplitsConfigHasBeenSet = true; m_scheduledSplitsConfig = std::forward<ScheduledSplitsConfigT>(value); }
    template<typename ScheduledSplitsConfigT = ScheduledSplitsLaunchConfig>
    CreateLaunchRequest& WithScheduledSplitsConfig(ScheduledSplitsConfigT&& value) { SetScheduledSplitsConfig(std::forward<ScheduledSplitsConfigT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Assigns one or more tags (key-value pairs) to the launch.</p> <p>Tags can
     * help you organize and categorize your resources. You can also use them to scope
     * user permissions by granting a user permission to access or change only
     * resources with certain tag values.</p> <p>Tags don't have any semantic meaning
     * to Amazon Web Services and are interpreted strictly as strings of
     * characters.</p> <p>You can associate as many as 50 tags with a launch.</p>
     * <p>For more information, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws_tagging.html">Tagging
     * Amazon Web Services resources</a>.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const { return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    template<typename TagsT = Aws::Map<Aws::String, Aws::String>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Map<Aws::String, Aws::String>>
    CreateLaunchRequest& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsKeyT = Aws::String, typename TagsValueT = Aws::String>
    CreateLaunchRequest& AddTags(TagsKeyT&& key, TagsValueT&& value) {
      m_tagsHasBeenSet = true; m_tags.emplace(std::forward<TagsKeyT>(key), std::forward<TagsValueT>(value)); return *this;
    }
    ///@}
  private:

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::Vector<LaunchGroupConfig> m_groups;
    bool m_groupsHasBeenSet = false;

    Aws::Vector<MetricMonitorConfig> m_metricMonitors;
    bool m_metricMonitorsHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_project;
    bool m_projectHasBeenSet = false;

    Aws::String m_randomizationSalt;
    bool m_randomizationSaltHasBeenSet = false;

    ScheduledSplitsLaunchConfig m_scheduledSplitsConfig;
    bool m_scheduledSplitsConfigHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudWatchEvidently
} // namespace Aws
