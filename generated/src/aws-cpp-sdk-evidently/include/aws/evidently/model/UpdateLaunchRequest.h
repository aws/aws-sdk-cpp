﻿/**
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
    AWS_CLOUDWATCHEVIDENTLY_API UpdateLaunchRequest();

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
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }
    inline UpdateLaunchRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline UpdateLaunchRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline UpdateLaunchRequest& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>An array of structures that contains the feature and variations that are to
     * be used for the launch.</p>
     */
    inline const Aws::Vector<LaunchGroupConfig>& GetGroups() const{ return m_groups; }
    inline bool GroupsHasBeenSet() const { return m_groupsHasBeenSet; }
    inline void SetGroups(const Aws::Vector<LaunchGroupConfig>& value) { m_groupsHasBeenSet = true; m_groups = value; }
    inline void SetGroups(Aws::Vector<LaunchGroupConfig>&& value) { m_groupsHasBeenSet = true; m_groups = std::move(value); }
    inline UpdateLaunchRequest& WithGroups(const Aws::Vector<LaunchGroupConfig>& value) { SetGroups(value); return *this;}
    inline UpdateLaunchRequest& WithGroups(Aws::Vector<LaunchGroupConfig>&& value) { SetGroups(std::move(value)); return *this;}
    inline UpdateLaunchRequest& AddGroups(const LaunchGroupConfig& value) { m_groupsHasBeenSet = true; m_groups.push_back(value); return *this; }
    inline UpdateLaunchRequest& AddGroups(LaunchGroupConfig&& value) { m_groupsHasBeenSet = true; m_groups.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The name of the launch that is to be updated.</p>
     */
    inline const Aws::String& GetLaunch() const{ return m_launch; }
    inline bool LaunchHasBeenSet() const { return m_launchHasBeenSet; }
    inline void SetLaunch(const Aws::String& value) { m_launchHasBeenSet = true; m_launch = value; }
    inline void SetLaunch(Aws::String&& value) { m_launchHasBeenSet = true; m_launch = std::move(value); }
    inline void SetLaunch(const char* value) { m_launchHasBeenSet = true; m_launch.assign(value); }
    inline UpdateLaunchRequest& WithLaunch(const Aws::String& value) { SetLaunch(value); return *this;}
    inline UpdateLaunchRequest& WithLaunch(Aws::String&& value) { SetLaunch(std::move(value)); return *this;}
    inline UpdateLaunchRequest& WithLaunch(const char* value) { SetLaunch(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>An array of structures that define the metrics that will be used to monitor
     * the launch performance.</p>
     */
    inline const Aws::Vector<MetricMonitorConfig>& GetMetricMonitors() const{ return m_metricMonitors; }
    inline bool MetricMonitorsHasBeenSet() const { return m_metricMonitorsHasBeenSet; }
    inline void SetMetricMonitors(const Aws::Vector<MetricMonitorConfig>& value) { m_metricMonitorsHasBeenSet = true; m_metricMonitors = value; }
    inline void SetMetricMonitors(Aws::Vector<MetricMonitorConfig>&& value) { m_metricMonitorsHasBeenSet = true; m_metricMonitors = std::move(value); }
    inline UpdateLaunchRequest& WithMetricMonitors(const Aws::Vector<MetricMonitorConfig>& value) { SetMetricMonitors(value); return *this;}
    inline UpdateLaunchRequest& WithMetricMonitors(Aws::Vector<MetricMonitorConfig>&& value) { SetMetricMonitors(std::move(value)); return *this;}
    inline UpdateLaunchRequest& AddMetricMonitors(const MetricMonitorConfig& value) { m_metricMonitorsHasBeenSet = true; m_metricMonitors.push_back(value); return *this; }
    inline UpdateLaunchRequest& AddMetricMonitors(MetricMonitorConfig&& value) { m_metricMonitorsHasBeenSet = true; m_metricMonitors.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The name or ARN of the project that contains the launch that you want to
     * update.</p>
     */
    inline const Aws::String& GetProject() const{ return m_project; }
    inline bool ProjectHasBeenSet() const { return m_projectHasBeenSet; }
    inline void SetProject(const Aws::String& value) { m_projectHasBeenSet = true; m_project = value; }
    inline void SetProject(Aws::String&& value) { m_projectHasBeenSet = true; m_project = std::move(value); }
    inline void SetProject(const char* value) { m_projectHasBeenSet = true; m_project.assign(value); }
    inline UpdateLaunchRequest& WithProject(const Aws::String& value) { SetProject(value); return *this;}
    inline UpdateLaunchRequest& WithProject(Aws::String&& value) { SetProject(std::move(value)); return *this;}
    inline UpdateLaunchRequest& WithProject(const char* value) { SetProject(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>When Evidently assigns a particular user session to a launch, it must use a
     * randomization ID to determine which variation the user session is served. This
     * randomization ID is a combination of the entity ID and
     * <code>randomizationSalt</code>. If you omit <code>randomizationSalt</code>,
     * Evidently uses the launch name as the <code>randomizationSalt</code>.</p>
     */
    inline const Aws::String& GetRandomizationSalt() const{ return m_randomizationSalt; }
    inline bool RandomizationSaltHasBeenSet() const { return m_randomizationSaltHasBeenSet; }
    inline void SetRandomizationSalt(const Aws::String& value) { m_randomizationSaltHasBeenSet = true; m_randomizationSalt = value; }
    inline void SetRandomizationSalt(Aws::String&& value) { m_randomizationSaltHasBeenSet = true; m_randomizationSalt = std::move(value); }
    inline void SetRandomizationSalt(const char* value) { m_randomizationSaltHasBeenSet = true; m_randomizationSalt.assign(value); }
    inline UpdateLaunchRequest& WithRandomizationSalt(const Aws::String& value) { SetRandomizationSalt(value); return *this;}
    inline UpdateLaunchRequest& WithRandomizationSalt(Aws::String&& value) { SetRandomizationSalt(std::move(value)); return *this;}
    inline UpdateLaunchRequest& WithRandomizationSalt(const char* value) { SetRandomizationSalt(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>An array of structures that define the traffic allocation percentages among
     * the feature variations during each step of the launch.</p>
     */
    inline const ScheduledSplitsLaunchConfig& GetScheduledSplitsConfig() const{ return m_scheduledSplitsConfig; }
    inline bool ScheduledSplitsConfigHasBeenSet() const { return m_scheduledSplitsConfigHasBeenSet; }
    inline void SetScheduledSplitsConfig(const ScheduledSplitsLaunchConfig& value) { m_scheduledSplitsConfigHasBeenSet = true; m_scheduledSplitsConfig = value; }
    inline void SetScheduledSplitsConfig(ScheduledSplitsLaunchConfig&& value) { m_scheduledSplitsConfigHasBeenSet = true; m_scheduledSplitsConfig = std::move(value); }
    inline UpdateLaunchRequest& WithScheduledSplitsConfig(const ScheduledSplitsLaunchConfig& value) { SetScheduledSplitsConfig(value); return *this;}
    inline UpdateLaunchRequest& WithScheduledSplitsConfig(ScheduledSplitsLaunchConfig&& value) { SetScheduledSplitsConfig(std::move(value)); return *this;}
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
