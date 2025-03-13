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
  class UpdateLaunchRequest : public CloudWatchEvidentlyRequest
  {
  public:
    AWS_CLOUDWATCHEVIDENTLY_API UpdateLaunchRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateLaunch"; }

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
    UpdateLaunchRequest& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
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
    UpdateLaunchRequest& WithGroups(GroupsT&& value) { SetGroups(std::forward<GroupsT>(value)); return *this;}
    template<typename GroupsT = LaunchGroupConfig>
    UpdateLaunchRequest& AddGroups(GroupsT&& value) { m_groupsHasBeenSet = true; m_groups.emplace_back(std::forward<GroupsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The name of the launch that is to be updated.</p>
     */
    inline const Aws::String& GetLaunch() const { return m_launch; }
    inline bool LaunchHasBeenSet() const { return m_launchHasBeenSet; }
    template<typename LaunchT = Aws::String>
    void SetLaunch(LaunchT&& value) { m_launchHasBeenSet = true; m_launch = std::forward<LaunchT>(value); }
    template<typename LaunchT = Aws::String>
    UpdateLaunchRequest& WithLaunch(LaunchT&& value) { SetLaunch(std::forward<LaunchT>(value)); return *this;}
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
    UpdateLaunchRequest& WithMetricMonitors(MetricMonitorsT&& value) { SetMetricMonitors(std::forward<MetricMonitorsT>(value)); return *this;}
    template<typename MetricMonitorsT = MetricMonitorConfig>
    UpdateLaunchRequest& AddMetricMonitors(MetricMonitorsT&& value) { m_metricMonitorsHasBeenSet = true; m_metricMonitors.emplace_back(std::forward<MetricMonitorsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The name or ARN of the project that contains the launch that you want to
     * update.</p>
     */
    inline const Aws::String& GetProject() const { return m_project; }
    inline bool ProjectHasBeenSet() const { return m_projectHasBeenSet; }
    template<typename ProjectT = Aws::String>
    void SetProject(ProjectT&& value) { m_projectHasBeenSet = true; m_project = std::forward<ProjectT>(value); }
    template<typename ProjectT = Aws::String>
    UpdateLaunchRequest& WithProject(ProjectT&& value) { SetProject(std::forward<ProjectT>(value)); return *this;}
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
    UpdateLaunchRequest& WithRandomizationSalt(RandomizationSaltT&& value) { SetRandomizationSalt(std::forward<RandomizationSaltT>(value)); return *this;}
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
    UpdateLaunchRequest& WithScheduledSplitsConfig(ScheduledSplitsConfigT&& value) { SetScheduledSplitsConfig(std::forward<ScheduledSplitsConfigT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::Vector<LaunchGroupConfig> m_groups;
    bool m_groupsHasBeenSet = false;

    Aws::String m_launch;
    bool m_launchHasBeenSet = false;

    Aws::Vector<MetricMonitorConfig> m_metricMonitors;
    bool m_metricMonitorsHasBeenSet = false;

    Aws::String m_project;
    bool m_projectHasBeenSet = false;

    Aws::String m_randomizationSalt;
    bool m_randomizationSaltHasBeenSet = false;

    ScheduledSplitsLaunchConfig m_scheduledSplitsConfig;
    bool m_scheduledSplitsConfigHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudWatchEvidently
} // namespace Aws
