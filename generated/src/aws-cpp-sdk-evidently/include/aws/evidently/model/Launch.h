/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/evidently/CloudWatchEvidently_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/evidently/model/LaunchExecution.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/evidently/model/ScheduledSplitsLaunchDefinition.h>
#include <aws/evidently/model/LaunchStatus.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/evidently/model/LaunchType.h>
#include <aws/evidently/model/LaunchGroup.h>
#include <aws/evidently/model/MetricMonitor.h>
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
   * <p>This structure contains the configuration details of one Evidently
   * launch.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/evidently-2021-02-01/Launch">AWS
   * API Reference</a></p>
   */
  class Launch
  {
  public:
    AWS_CLOUDWATCHEVIDENTLY_API Launch();
    AWS_CLOUDWATCHEVIDENTLY_API Launch(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLOUDWATCHEVIDENTLY_API Launch& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLOUDWATCHEVIDENTLY_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The ARN of the launch.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }
    inline void SetArn(const Aws::String& value) { m_arnHasBeenSet = true; m_arn = value; }
    inline void SetArn(Aws::String&& value) { m_arnHasBeenSet = true; m_arn = std::move(value); }
    inline void SetArn(const char* value) { m_arnHasBeenSet = true; m_arn.assign(value); }
    inline Launch& WithArn(const Aws::String& value) { SetArn(value); return *this;}
    inline Launch& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}
    inline Launch& WithArn(const char* value) { SetArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time that the launch is created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedTime() const{ return m_createdTime; }
    inline bool CreatedTimeHasBeenSet() const { return m_createdTimeHasBeenSet; }
    inline void SetCreatedTime(const Aws::Utils::DateTime& value) { m_createdTimeHasBeenSet = true; m_createdTime = value; }
    inline void SetCreatedTime(Aws::Utils::DateTime&& value) { m_createdTimeHasBeenSet = true; m_createdTime = std::move(value); }
    inline Launch& WithCreatedTime(const Aws::Utils::DateTime& value) { SetCreatedTime(value); return *this;}
    inline Launch& WithCreatedTime(Aws::Utils::DateTime&& value) { SetCreatedTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The description of the launch.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }
    inline Launch& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline Launch& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline Launch& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A structure that contains information about the start and end times of the
     * launch.</p>
     */
    inline const LaunchExecution& GetExecution() const{ return m_execution; }
    inline bool ExecutionHasBeenSet() const { return m_executionHasBeenSet; }
    inline void SetExecution(const LaunchExecution& value) { m_executionHasBeenSet = true; m_execution = value; }
    inline void SetExecution(LaunchExecution&& value) { m_executionHasBeenSet = true; m_execution = std::move(value); }
    inline Launch& WithExecution(const LaunchExecution& value) { SetExecution(value); return *this;}
    inline Launch& WithExecution(LaunchExecution&& value) { SetExecution(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An array of structures that define the feature variations that are being used
     * in the launch.</p>
     */
    inline const Aws::Vector<LaunchGroup>& GetGroups() const{ return m_groups; }
    inline bool GroupsHasBeenSet() const { return m_groupsHasBeenSet; }
    inline void SetGroups(const Aws::Vector<LaunchGroup>& value) { m_groupsHasBeenSet = true; m_groups = value; }
    inline void SetGroups(Aws::Vector<LaunchGroup>&& value) { m_groupsHasBeenSet = true; m_groups = std::move(value); }
    inline Launch& WithGroups(const Aws::Vector<LaunchGroup>& value) { SetGroups(value); return *this;}
    inline Launch& WithGroups(Aws::Vector<LaunchGroup>&& value) { SetGroups(std::move(value)); return *this;}
    inline Launch& AddGroups(const LaunchGroup& value) { m_groupsHasBeenSet = true; m_groups.push_back(value); return *this; }
    inline Launch& AddGroups(LaunchGroup&& value) { m_groupsHasBeenSet = true; m_groups.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The date and time that the launch was most recently updated.</p>
     */
    inline const Aws::Utils::DateTime& GetLastUpdatedTime() const{ return m_lastUpdatedTime; }
    inline bool LastUpdatedTimeHasBeenSet() const { return m_lastUpdatedTimeHasBeenSet; }
    inline void SetLastUpdatedTime(const Aws::Utils::DateTime& value) { m_lastUpdatedTimeHasBeenSet = true; m_lastUpdatedTime = value; }
    inline void SetLastUpdatedTime(Aws::Utils::DateTime&& value) { m_lastUpdatedTimeHasBeenSet = true; m_lastUpdatedTime = std::move(value); }
    inline Launch& WithLastUpdatedTime(const Aws::Utils::DateTime& value) { SetLastUpdatedTime(value); return *this;}
    inline Launch& WithLastUpdatedTime(Aws::Utils::DateTime&& value) { SetLastUpdatedTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An array of structures that define the metrics that are being used to monitor
     * the launch performance.</p>
     */
    inline const Aws::Vector<MetricMonitor>& GetMetricMonitors() const{ return m_metricMonitors; }
    inline bool MetricMonitorsHasBeenSet() const { return m_metricMonitorsHasBeenSet; }
    inline void SetMetricMonitors(const Aws::Vector<MetricMonitor>& value) { m_metricMonitorsHasBeenSet = true; m_metricMonitors = value; }
    inline void SetMetricMonitors(Aws::Vector<MetricMonitor>&& value) { m_metricMonitorsHasBeenSet = true; m_metricMonitors = std::move(value); }
    inline Launch& WithMetricMonitors(const Aws::Vector<MetricMonitor>& value) { SetMetricMonitors(value); return *this;}
    inline Launch& WithMetricMonitors(Aws::Vector<MetricMonitor>&& value) { SetMetricMonitors(std::move(value)); return *this;}
    inline Launch& AddMetricMonitors(const MetricMonitor& value) { m_metricMonitorsHasBeenSet = true; m_metricMonitors.push_back(value); return *this; }
    inline Launch& AddMetricMonitors(MetricMonitor&& value) { m_metricMonitorsHasBeenSet = true; m_metricMonitors.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The name of the launch.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline Launch& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline Launch& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline Launch& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name or ARN of the project that contains the launch.</p>
     */
    inline const Aws::String& GetProject() const{ return m_project; }
    inline bool ProjectHasBeenSet() const { return m_projectHasBeenSet; }
    inline void SetProject(const Aws::String& value) { m_projectHasBeenSet = true; m_project = value; }
    inline void SetProject(Aws::String&& value) { m_projectHasBeenSet = true; m_project = std::move(value); }
    inline void SetProject(const char* value) { m_projectHasBeenSet = true; m_project.assign(value); }
    inline Launch& WithProject(const Aws::String& value) { SetProject(value); return *this;}
    inline Launch& WithProject(Aws::String&& value) { SetProject(std::move(value)); return *this;}
    inline Launch& WithProject(const char* value) { SetProject(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>This value is used when Evidently assigns a particular user session to the
     * launch, to help create a randomization ID to determine which variation the user
     * session is served. This randomization ID is a combination of the entity ID and
     * <code>randomizationSalt</code>.</p>
     */
    inline const Aws::String& GetRandomizationSalt() const{ return m_randomizationSalt; }
    inline bool RandomizationSaltHasBeenSet() const { return m_randomizationSaltHasBeenSet; }
    inline void SetRandomizationSalt(const Aws::String& value) { m_randomizationSaltHasBeenSet = true; m_randomizationSalt = value; }
    inline void SetRandomizationSalt(Aws::String&& value) { m_randomizationSaltHasBeenSet = true; m_randomizationSalt = std::move(value); }
    inline void SetRandomizationSalt(const char* value) { m_randomizationSaltHasBeenSet = true; m_randomizationSalt.assign(value); }
    inline Launch& WithRandomizationSalt(const Aws::String& value) { SetRandomizationSalt(value); return *this;}
    inline Launch& WithRandomizationSalt(Aws::String&& value) { SetRandomizationSalt(std::move(value)); return *this;}
    inline Launch& WithRandomizationSalt(const char* value) { SetRandomizationSalt(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>An array of structures that define the traffic allocation percentages among
     * the feature variations during each step of the launch.</p>
     */
    inline const ScheduledSplitsLaunchDefinition& GetScheduledSplitsDefinition() const{ return m_scheduledSplitsDefinition; }
    inline bool ScheduledSplitsDefinitionHasBeenSet() const { return m_scheduledSplitsDefinitionHasBeenSet; }
    inline void SetScheduledSplitsDefinition(const ScheduledSplitsLaunchDefinition& value) { m_scheduledSplitsDefinitionHasBeenSet = true; m_scheduledSplitsDefinition = value; }
    inline void SetScheduledSplitsDefinition(ScheduledSplitsLaunchDefinition&& value) { m_scheduledSplitsDefinitionHasBeenSet = true; m_scheduledSplitsDefinition = std::move(value); }
    inline Launch& WithScheduledSplitsDefinition(const ScheduledSplitsLaunchDefinition& value) { SetScheduledSplitsDefinition(value); return *this;}
    inline Launch& WithScheduledSplitsDefinition(ScheduledSplitsLaunchDefinition&& value) { SetScheduledSplitsDefinition(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The current state of the launch.</p>
     */
    inline const LaunchStatus& GetStatus() const{ return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(const LaunchStatus& value) { m_statusHasBeenSet = true; m_status = value; }
    inline void SetStatus(LaunchStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }
    inline Launch& WithStatus(const LaunchStatus& value) { SetStatus(value); return *this;}
    inline Launch& WithStatus(LaunchStatus&& value) { SetStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>If the launch was stopped, this is the string that was entered by the person
     * who stopped the launch, to explain why it was stopped.</p>
     */
    inline const Aws::String& GetStatusReason() const{ return m_statusReason; }
    inline bool StatusReasonHasBeenSet() const { return m_statusReasonHasBeenSet; }
    inline void SetStatusReason(const Aws::String& value) { m_statusReasonHasBeenSet = true; m_statusReason = value; }
    inline void SetStatusReason(Aws::String&& value) { m_statusReasonHasBeenSet = true; m_statusReason = std::move(value); }
    inline void SetStatusReason(const char* value) { m_statusReasonHasBeenSet = true; m_statusReason.assign(value); }
    inline Launch& WithStatusReason(const Aws::String& value) { SetStatusReason(value); return *this;}
    inline Launch& WithStatusReason(Aws::String&& value) { SetStatusReason(std::move(value)); return *this;}
    inline Launch& WithStatusReason(const char* value) { SetStatusReason(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The list of tag keys and values associated with this launch.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tagsHasBeenSet = true; m_tags = value; }
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }
    inline Launch& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}
    inline Launch& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}
    inline Launch& AddTags(const Aws::String& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }
    inline Launch& AddTags(Aws::String&& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }
    inline Launch& AddTags(const Aws::String& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }
    inline Launch& AddTags(Aws::String&& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), std::move(value)); return *this; }
    inline Launch& AddTags(const char* key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }
    inline Launch& AddTags(Aws::String&& key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }
    inline Launch& AddTags(const char* key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The type of launch.</p>
     */
    inline const LaunchType& GetType() const{ return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(const LaunchType& value) { m_typeHasBeenSet = true; m_type = value; }
    inline void SetType(LaunchType&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }
    inline Launch& WithType(const LaunchType& value) { SetType(value); return *this;}
    inline Launch& WithType(LaunchType&& value) { SetType(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    Aws::Utils::DateTime m_createdTime;
    bool m_createdTimeHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    LaunchExecution m_execution;
    bool m_executionHasBeenSet = false;

    Aws::Vector<LaunchGroup> m_groups;
    bool m_groupsHasBeenSet = false;

    Aws::Utils::DateTime m_lastUpdatedTime;
    bool m_lastUpdatedTimeHasBeenSet = false;

    Aws::Vector<MetricMonitor> m_metricMonitors;
    bool m_metricMonitorsHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_project;
    bool m_projectHasBeenSet = false;

    Aws::String m_randomizationSalt;
    bool m_randomizationSaltHasBeenSet = false;

    ScheduledSplitsLaunchDefinition m_scheduledSplitsDefinition;
    bool m_scheduledSplitsDefinitionHasBeenSet = false;

    LaunchStatus m_status;
    bool m_statusHasBeenSet = false;

    Aws::String m_statusReason;
    bool m_statusReasonHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet = false;

    LaunchType m_type;
    bool m_typeHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudWatchEvidently
} // namespace Aws
