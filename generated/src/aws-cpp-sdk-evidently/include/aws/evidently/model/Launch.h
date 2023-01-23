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


    /**
     * <p>The ARN of the launch.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }

    /**
     * <p>The ARN of the launch.</p>
     */
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }

    /**
     * <p>The ARN of the launch.</p>
     */
    inline void SetArn(const Aws::String& value) { m_arnHasBeenSet = true; m_arn = value; }

    /**
     * <p>The ARN of the launch.</p>
     */
    inline void SetArn(Aws::String&& value) { m_arnHasBeenSet = true; m_arn = std::move(value); }

    /**
     * <p>The ARN of the launch.</p>
     */
    inline void SetArn(const char* value) { m_arnHasBeenSet = true; m_arn.assign(value); }

    /**
     * <p>The ARN of the launch.</p>
     */
    inline Launch& WithArn(const Aws::String& value) { SetArn(value); return *this;}

    /**
     * <p>The ARN of the launch.</p>
     */
    inline Launch& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the launch.</p>
     */
    inline Launch& WithArn(const char* value) { SetArn(value); return *this;}


    /**
     * <p>The date and time that the launch is created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedTime() const{ return m_createdTime; }

    /**
     * <p>The date and time that the launch is created.</p>
     */
    inline bool CreatedTimeHasBeenSet() const { return m_createdTimeHasBeenSet; }

    /**
     * <p>The date and time that the launch is created.</p>
     */
    inline void SetCreatedTime(const Aws::Utils::DateTime& value) { m_createdTimeHasBeenSet = true; m_createdTime = value; }

    /**
     * <p>The date and time that the launch is created.</p>
     */
    inline void SetCreatedTime(Aws::Utils::DateTime&& value) { m_createdTimeHasBeenSet = true; m_createdTime = std::move(value); }

    /**
     * <p>The date and time that the launch is created.</p>
     */
    inline Launch& WithCreatedTime(const Aws::Utils::DateTime& value) { SetCreatedTime(value); return *this;}

    /**
     * <p>The date and time that the launch is created.</p>
     */
    inline Launch& WithCreatedTime(Aws::Utils::DateTime&& value) { SetCreatedTime(std::move(value)); return *this;}


    /**
     * <p>The description of the launch.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>The description of the launch.</p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>The description of the launch.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>The description of the launch.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>The description of the launch.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>The description of the launch.</p>
     */
    inline Launch& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>The description of the launch.</p>
     */
    inline Launch& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>The description of the launch.</p>
     */
    inline Launch& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>A structure that contains information about the start and end times of the
     * launch.</p>
     */
    inline const LaunchExecution& GetExecution() const{ return m_execution; }

    /**
     * <p>A structure that contains information about the start and end times of the
     * launch.</p>
     */
    inline bool ExecutionHasBeenSet() const { return m_executionHasBeenSet; }

    /**
     * <p>A structure that contains information about the start and end times of the
     * launch.</p>
     */
    inline void SetExecution(const LaunchExecution& value) { m_executionHasBeenSet = true; m_execution = value; }

    /**
     * <p>A structure that contains information about the start and end times of the
     * launch.</p>
     */
    inline void SetExecution(LaunchExecution&& value) { m_executionHasBeenSet = true; m_execution = std::move(value); }

    /**
     * <p>A structure that contains information about the start and end times of the
     * launch.</p>
     */
    inline Launch& WithExecution(const LaunchExecution& value) { SetExecution(value); return *this;}

    /**
     * <p>A structure that contains information about the start and end times of the
     * launch.</p>
     */
    inline Launch& WithExecution(LaunchExecution&& value) { SetExecution(std::move(value)); return *this;}


    /**
     * <p>An array of structures that define the feature variations that are being used
     * in the launch.</p>
     */
    inline const Aws::Vector<LaunchGroup>& GetGroups() const{ return m_groups; }

    /**
     * <p>An array of structures that define the feature variations that are being used
     * in the launch.</p>
     */
    inline bool GroupsHasBeenSet() const { return m_groupsHasBeenSet; }

    /**
     * <p>An array of structures that define the feature variations that are being used
     * in the launch.</p>
     */
    inline void SetGroups(const Aws::Vector<LaunchGroup>& value) { m_groupsHasBeenSet = true; m_groups = value; }

    /**
     * <p>An array of structures that define the feature variations that are being used
     * in the launch.</p>
     */
    inline void SetGroups(Aws::Vector<LaunchGroup>&& value) { m_groupsHasBeenSet = true; m_groups = std::move(value); }

    /**
     * <p>An array of structures that define the feature variations that are being used
     * in the launch.</p>
     */
    inline Launch& WithGroups(const Aws::Vector<LaunchGroup>& value) { SetGroups(value); return *this;}

    /**
     * <p>An array of structures that define the feature variations that are being used
     * in the launch.</p>
     */
    inline Launch& WithGroups(Aws::Vector<LaunchGroup>&& value) { SetGroups(std::move(value)); return *this;}

    /**
     * <p>An array of structures that define the feature variations that are being used
     * in the launch.</p>
     */
    inline Launch& AddGroups(const LaunchGroup& value) { m_groupsHasBeenSet = true; m_groups.push_back(value); return *this; }

    /**
     * <p>An array of structures that define the feature variations that are being used
     * in the launch.</p>
     */
    inline Launch& AddGroups(LaunchGroup&& value) { m_groupsHasBeenSet = true; m_groups.push_back(std::move(value)); return *this; }


    /**
     * <p>The date and time that the launch was most recently updated.</p>
     */
    inline const Aws::Utils::DateTime& GetLastUpdatedTime() const{ return m_lastUpdatedTime; }

    /**
     * <p>The date and time that the launch was most recently updated.</p>
     */
    inline bool LastUpdatedTimeHasBeenSet() const { return m_lastUpdatedTimeHasBeenSet; }

    /**
     * <p>The date and time that the launch was most recently updated.</p>
     */
    inline void SetLastUpdatedTime(const Aws::Utils::DateTime& value) { m_lastUpdatedTimeHasBeenSet = true; m_lastUpdatedTime = value; }

    /**
     * <p>The date and time that the launch was most recently updated.</p>
     */
    inline void SetLastUpdatedTime(Aws::Utils::DateTime&& value) { m_lastUpdatedTimeHasBeenSet = true; m_lastUpdatedTime = std::move(value); }

    /**
     * <p>The date and time that the launch was most recently updated.</p>
     */
    inline Launch& WithLastUpdatedTime(const Aws::Utils::DateTime& value) { SetLastUpdatedTime(value); return *this;}

    /**
     * <p>The date and time that the launch was most recently updated.</p>
     */
    inline Launch& WithLastUpdatedTime(Aws::Utils::DateTime&& value) { SetLastUpdatedTime(std::move(value)); return *this;}


    /**
     * <p>An array of structures that define the metrics that are being used to monitor
     * the launch performance.</p>
     */
    inline const Aws::Vector<MetricMonitor>& GetMetricMonitors() const{ return m_metricMonitors; }

    /**
     * <p>An array of structures that define the metrics that are being used to monitor
     * the launch performance.</p>
     */
    inline bool MetricMonitorsHasBeenSet() const { return m_metricMonitorsHasBeenSet; }

    /**
     * <p>An array of structures that define the metrics that are being used to monitor
     * the launch performance.</p>
     */
    inline void SetMetricMonitors(const Aws::Vector<MetricMonitor>& value) { m_metricMonitorsHasBeenSet = true; m_metricMonitors = value; }

    /**
     * <p>An array of structures that define the metrics that are being used to monitor
     * the launch performance.</p>
     */
    inline void SetMetricMonitors(Aws::Vector<MetricMonitor>&& value) { m_metricMonitorsHasBeenSet = true; m_metricMonitors = std::move(value); }

    /**
     * <p>An array of structures that define the metrics that are being used to monitor
     * the launch performance.</p>
     */
    inline Launch& WithMetricMonitors(const Aws::Vector<MetricMonitor>& value) { SetMetricMonitors(value); return *this;}

    /**
     * <p>An array of structures that define the metrics that are being used to monitor
     * the launch performance.</p>
     */
    inline Launch& WithMetricMonitors(Aws::Vector<MetricMonitor>&& value) { SetMetricMonitors(std::move(value)); return *this;}

    /**
     * <p>An array of structures that define the metrics that are being used to monitor
     * the launch performance.</p>
     */
    inline Launch& AddMetricMonitors(const MetricMonitor& value) { m_metricMonitorsHasBeenSet = true; m_metricMonitors.push_back(value); return *this; }

    /**
     * <p>An array of structures that define the metrics that are being used to monitor
     * the launch performance.</p>
     */
    inline Launch& AddMetricMonitors(MetricMonitor&& value) { m_metricMonitorsHasBeenSet = true; m_metricMonitors.push_back(std::move(value)); return *this; }


    /**
     * <p>The name of the launch.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the launch.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the launch.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the launch.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the launch.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the launch.</p>
     */
    inline Launch& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the launch.</p>
     */
    inline Launch& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the launch.</p>
     */
    inline Launch& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The name or ARN of the project that contains the launch.</p>
     */
    inline const Aws::String& GetProject() const{ return m_project; }

    /**
     * <p>The name or ARN of the project that contains the launch.</p>
     */
    inline bool ProjectHasBeenSet() const { return m_projectHasBeenSet; }

    /**
     * <p>The name or ARN of the project that contains the launch.</p>
     */
    inline void SetProject(const Aws::String& value) { m_projectHasBeenSet = true; m_project = value; }

    /**
     * <p>The name or ARN of the project that contains the launch.</p>
     */
    inline void SetProject(Aws::String&& value) { m_projectHasBeenSet = true; m_project = std::move(value); }

    /**
     * <p>The name or ARN of the project that contains the launch.</p>
     */
    inline void SetProject(const char* value) { m_projectHasBeenSet = true; m_project.assign(value); }

    /**
     * <p>The name or ARN of the project that contains the launch.</p>
     */
    inline Launch& WithProject(const Aws::String& value) { SetProject(value); return *this;}

    /**
     * <p>The name or ARN of the project that contains the launch.</p>
     */
    inline Launch& WithProject(Aws::String&& value) { SetProject(std::move(value)); return *this;}

    /**
     * <p>The name or ARN of the project that contains the launch.</p>
     */
    inline Launch& WithProject(const char* value) { SetProject(value); return *this;}


    /**
     * <p>This value is used when Evidently assigns a particular user session to the
     * launch, to help create a randomization ID to determine which variation the user
     * session is served. This randomization ID is a combination of the entity ID and
     * <code>randomizationSalt</code>.</p>
     */
    inline const Aws::String& GetRandomizationSalt() const{ return m_randomizationSalt; }

    /**
     * <p>This value is used when Evidently assigns a particular user session to the
     * launch, to help create a randomization ID to determine which variation the user
     * session is served. This randomization ID is a combination of the entity ID and
     * <code>randomizationSalt</code>.</p>
     */
    inline bool RandomizationSaltHasBeenSet() const { return m_randomizationSaltHasBeenSet; }

    /**
     * <p>This value is used when Evidently assigns a particular user session to the
     * launch, to help create a randomization ID to determine which variation the user
     * session is served. This randomization ID is a combination of the entity ID and
     * <code>randomizationSalt</code>.</p>
     */
    inline void SetRandomizationSalt(const Aws::String& value) { m_randomizationSaltHasBeenSet = true; m_randomizationSalt = value; }

    /**
     * <p>This value is used when Evidently assigns a particular user session to the
     * launch, to help create a randomization ID to determine which variation the user
     * session is served. This randomization ID is a combination of the entity ID and
     * <code>randomizationSalt</code>.</p>
     */
    inline void SetRandomizationSalt(Aws::String&& value) { m_randomizationSaltHasBeenSet = true; m_randomizationSalt = std::move(value); }

    /**
     * <p>This value is used when Evidently assigns a particular user session to the
     * launch, to help create a randomization ID to determine which variation the user
     * session is served. This randomization ID is a combination of the entity ID and
     * <code>randomizationSalt</code>.</p>
     */
    inline void SetRandomizationSalt(const char* value) { m_randomizationSaltHasBeenSet = true; m_randomizationSalt.assign(value); }

    /**
     * <p>This value is used when Evidently assigns a particular user session to the
     * launch, to help create a randomization ID to determine which variation the user
     * session is served. This randomization ID is a combination of the entity ID and
     * <code>randomizationSalt</code>.</p>
     */
    inline Launch& WithRandomizationSalt(const Aws::String& value) { SetRandomizationSalt(value); return *this;}

    /**
     * <p>This value is used when Evidently assigns a particular user session to the
     * launch, to help create a randomization ID to determine which variation the user
     * session is served. This randomization ID is a combination of the entity ID and
     * <code>randomizationSalt</code>.</p>
     */
    inline Launch& WithRandomizationSalt(Aws::String&& value) { SetRandomizationSalt(std::move(value)); return *this;}

    /**
     * <p>This value is used when Evidently assigns a particular user session to the
     * launch, to help create a randomization ID to determine which variation the user
     * session is served. This randomization ID is a combination of the entity ID and
     * <code>randomizationSalt</code>.</p>
     */
    inline Launch& WithRandomizationSalt(const char* value) { SetRandomizationSalt(value); return *this;}


    /**
     * <p>An array of structures that define the traffic allocation percentages among
     * the feature variations during each step of the launch.</p>
     */
    inline const ScheduledSplitsLaunchDefinition& GetScheduledSplitsDefinition() const{ return m_scheduledSplitsDefinition; }

    /**
     * <p>An array of structures that define the traffic allocation percentages among
     * the feature variations during each step of the launch.</p>
     */
    inline bool ScheduledSplitsDefinitionHasBeenSet() const { return m_scheduledSplitsDefinitionHasBeenSet; }

    /**
     * <p>An array of structures that define the traffic allocation percentages among
     * the feature variations during each step of the launch.</p>
     */
    inline void SetScheduledSplitsDefinition(const ScheduledSplitsLaunchDefinition& value) { m_scheduledSplitsDefinitionHasBeenSet = true; m_scheduledSplitsDefinition = value; }

    /**
     * <p>An array of structures that define the traffic allocation percentages among
     * the feature variations during each step of the launch.</p>
     */
    inline void SetScheduledSplitsDefinition(ScheduledSplitsLaunchDefinition&& value) { m_scheduledSplitsDefinitionHasBeenSet = true; m_scheduledSplitsDefinition = std::move(value); }

    /**
     * <p>An array of structures that define the traffic allocation percentages among
     * the feature variations during each step of the launch.</p>
     */
    inline Launch& WithScheduledSplitsDefinition(const ScheduledSplitsLaunchDefinition& value) { SetScheduledSplitsDefinition(value); return *this;}

    /**
     * <p>An array of structures that define the traffic allocation percentages among
     * the feature variations during each step of the launch.</p>
     */
    inline Launch& WithScheduledSplitsDefinition(ScheduledSplitsLaunchDefinition&& value) { SetScheduledSplitsDefinition(std::move(value)); return *this;}


    /**
     * <p>The current state of the launch.</p>
     */
    inline const LaunchStatus& GetStatus() const{ return m_status; }

    /**
     * <p>The current state of the launch.</p>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p>The current state of the launch.</p>
     */
    inline void SetStatus(const LaunchStatus& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>The current state of the launch.</p>
     */
    inline void SetStatus(LaunchStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p>The current state of the launch.</p>
     */
    inline Launch& WithStatus(const LaunchStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>The current state of the launch.</p>
     */
    inline Launch& WithStatus(LaunchStatus&& value) { SetStatus(std::move(value)); return *this;}


    /**
     * <p>If the launch was stopped, this is the string that was entered by the person
     * who stopped the launch, to explain why it was stopped.</p>
     */
    inline const Aws::String& GetStatusReason() const{ return m_statusReason; }

    /**
     * <p>If the launch was stopped, this is the string that was entered by the person
     * who stopped the launch, to explain why it was stopped.</p>
     */
    inline bool StatusReasonHasBeenSet() const { return m_statusReasonHasBeenSet; }

    /**
     * <p>If the launch was stopped, this is the string that was entered by the person
     * who stopped the launch, to explain why it was stopped.</p>
     */
    inline void SetStatusReason(const Aws::String& value) { m_statusReasonHasBeenSet = true; m_statusReason = value; }

    /**
     * <p>If the launch was stopped, this is the string that was entered by the person
     * who stopped the launch, to explain why it was stopped.</p>
     */
    inline void SetStatusReason(Aws::String&& value) { m_statusReasonHasBeenSet = true; m_statusReason = std::move(value); }

    /**
     * <p>If the launch was stopped, this is the string that was entered by the person
     * who stopped the launch, to explain why it was stopped.</p>
     */
    inline void SetStatusReason(const char* value) { m_statusReasonHasBeenSet = true; m_statusReason.assign(value); }

    /**
     * <p>If the launch was stopped, this is the string that was entered by the person
     * who stopped the launch, to explain why it was stopped.</p>
     */
    inline Launch& WithStatusReason(const Aws::String& value) { SetStatusReason(value); return *this;}

    /**
     * <p>If the launch was stopped, this is the string that was entered by the person
     * who stopped the launch, to explain why it was stopped.</p>
     */
    inline Launch& WithStatusReason(Aws::String&& value) { SetStatusReason(std::move(value)); return *this;}

    /**
     * <p>If the launch was stopped, this is the string that was entered by the person
     * who stopped the launch, to explain why it was stopped.</p>
     */
    inline Launch& WithStatusReason(const char* value) { SetStatusReason(value); return *this;}


    /**
     * <p>The list of tag keys and values associated with this launch.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }

    /**
     * <p>The list of tag keys and values associated with this launch.</p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>The list of tag keys and values associated with this launch.</p>
     */
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>The list of tag keys and values associated with this launch.</p>
     */
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>The list of tag keys and values associated with this launch.</p>
     */
    inline Launch& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}

    /**
     * <p>The list of tag keys and values associated with this launch.</p>
     */
    inline Launch& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>The list of tag keys and values associated with this launch.</p>
     */
    inline Launch& AddTags(const Aws::String& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }

    /**
     * <p>The list of tag keys and values associated with this launch.</p>
     */
    inline Launch& AddTags(Aws::String&& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>The list of tag keys and values associated with this launch.</p>
     */
    inline Launch& AddTags(const Aws::String& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The list of tag keys and values associated with this launch.</p>
     */
    inline Launch& AddTags(Aws::String&& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>The list of tag keys and values associated with this launch.</p>
     */
    inline Launch& AddTags(const char* key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The list of tag keys and values associated with this launch.</p>
     */
    inline Launch& AddTags(Aws::String&& key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>The list of tag keys and values associated with this launch.</p>
     */
    inline Launch& AddTags(const char* key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }


    /**
     * <p>The type of launch.</p>
     */
    inline const LaunchType& GetType() const{ return m_type; }

    /**
     * <p>The type of launch.</p>
     */
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }

    /**
     * <p>The type of launch.</p>
     */
    inline void SetType(const LaunchType& value) { m_typeHasBeenSet = true; m_type = value; }

    /**
     * <p>The type of launch.</p>
     */
    inline void SetType(LaunchType&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }

    /**
     * <p>The type of launch.</p>
     */
    inline Launch& WithType(const LaunchType& value) { SetType(value); return *this;}

    /**
     * <p>The type of launch.</p>
     */
    inline Launch& WithType(LaunchType&& value) { SetType(std::move(value)); return *this;}

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
