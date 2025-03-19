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
    AWS_CLOUDWATCHEVIDENTLY_API Launch() = default;
    AWS_CLOUDWATCHEVIDENTLY_API Launch(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLOUDWATCHEVIDENTLY_API Launch& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLOUDWATCHEVIDENTLY_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The ARN of the launch.</p>
     */
    inline const Aws::String& GetArn() const { return m_arn; }
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }
    template<typename ArnT = Aws::String>
    void SetArn(ArnT&& value) { m_arnHasBeenSet = true; m_arn = std::forward<ArnT>(value); }
    template<typename ArnT = Aws::String>
    Launch& WithArn(ArnT&& value) { SetArn(std::forward<ArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time that the launch is created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedTime() const { return m_createdTime; }
    inline bool CreatedTimeHasBeenSet() const { return m_createdTimeHasBeenSet; }
    template<typename CreatedTimeT = Aws::Utils::DateTime>
    void SetCreatedTime(CreatedTimeT&& value) { m_createdTimeHasBeenSet = true; m_createdTime = std::forward<CreatedTimeT>(value); }
    template<typename CreatedTimeT = Aws::Utils::DateTime>
    Launch& WithCreatedTime(CreatedTimeT&& value) { SetCreatedTime(std::forward<CreatedTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The description of the launch.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    Launch& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A structure that contains information about the start and end times of the
     * launch.</p>
     */
    inline const LaunchExecution& GetExecution() const { return m_execution; }
    inline bool ExecutionHasBeenSet() const { return m_executionHasBeenSet; }
    template<typename ExecutionT = LaunchExecution>
    void SetExecution(ExecutionT&& value) { m_executionHasBeenSet = true; m_execution = std::forward<ExecutionT>(value); }
    template<typename ExecutionT = LaunchExecution>
    Launch& WithExecution(ExecutionT&& value) { SetExecution(std::forward<ExecutionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An array of structures that define the feature variations that are being used
     * in the launch.</p>
     */
    inline const Aws::Vector<LaunchGroup>& GetGroups() const { return m_groups; }
    inline bool GroupsHasBeenSet() const { return m_groupsHasBeenSet; }
    template<typename GroupsT = Aws::Vector<LaunchGroup>>
    void SetGroups(GroupsT&& value) { m_groupsHasBeenSet = true; m_groups = std::forward<GroupsT>(value); }
    template<typename GroupsT = Aws::Vector<LaunchGroup>>
    Launch& WithGroups(GroupsT&& value) { SetGroups(std::forward<GroupsT>(value)); return *this;}
    template<typename GroupsT = LaunchGroup>
    Launch& AddGroups(GroupsT&& value) { m_groupsHasBeenSet = true; m_groups.emplace_back(std::forward<GroupsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The date and time that the launch was most recently updated.</p>
     */
    inline const Aws::Utils::DateTime& GetLastUpdatedTime() const { return m_lastUpdatedTime; }
    inline bool LastUpdatedTimeHasBeenSet() const { return m_lastUpdatedTimeHasBeenSet; }
    template<typename LastUpdatedTimeT = Aws::Utils::DateTime>
    void SetLastUpdatedTime(LastUpdatedTimeT&& value) { m_lastUpdatedTimeHasBeenSet = true; m_lastUpdatedTime = std::forward<LastUpdatedTimeT>(value); }
    template<typename LastUpdatedTimeT = Aws::Utils::DateTime>
    Launch& WithLastUpdatedTime(LastUpdatedTimeT&& value) { SetLastUpdatedTime(std::forward<LastUpdatedTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An array of structures that define the metrics that are being used to monitor
     * the launch performance.</p>
     */
    inline const Aws::Vector<MetricMonitor>& GetMetricMonitors() const { return m_metricMonitors; }
    inline bool MetricMonitorsHasBeenSet() const { return m_metricMonitorsHasBeenSet; }
    template<typename MetricMonitorsT = Aws::Vector<MetricMonitor>>
    void SetMetricMonitors(MetricMonitorsT&& value) { m_metricMonitorsHasBeenSet = true; m_metricMonitors = std::forward<MetricMonitorsT>(value); }
    template<typename MetricMonitorsT = Aws::Vector<MetricMonitor>>
    Launch& WithMetricMonitors(MetricMonitorsT&& value) { SetMetricMonitors(std::forward<MetricMonitorsT>(value)); return *this;}
    template<typename MetricMonitorsT = MetricMonitor>
    Launch& AddMetricMonitors(MetricMonitorsT&& value) { m_metricMonitorsHasBeenSet = true; m_metricMonitors.emplace_back(std::forward<MetricMonitorsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The name of the launch.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    Launch& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name or ARN of the project that contains the launch.</p>
     */
    inline const Aws::String& GetProject() const { return m_project; }
    inline bool ProjectHasBeenSet() const { return m_projectHasBeenSet; }
    template<typename ProjectT = Aws::String>
    void SetProject(ProjectT&& value) { m_projectHasBeenSet = true; m_project = std::forward<ProjectT>(value); }
    template<typename ProjectT = Aws::String>
    Launch& WithProject(ProjectT&& value) { SetProject(std::forward<ProjectT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>This value is used when Evidently assigns a particular user session to the
     * launch, to help create a randomization ID to determine which variation the user
     * session is served. This randomization ID is a combination of the entity ID and
     * <code>randomizationSalt</code>.</p>
     */
    inline const Aws::String& GetRandomizationSalt() const { return m_randomizationSalt; }
    inline bool RandomizationSaltHasBeenSet() const { return m_randomizationSaltHasBeenSet; }
    template<typename RandomizationSaltT = Aws::String>
    void SetRandomizationSalt(RandomizationSaltT&& value) { m_randomizationSaltHasBeenSet = true; m_randomizationSalt = std::forward<RandomizationSaltT>(value); }
    template<typename RandomizationSaltT = Aws::String>
    Launch& WithRandomizationSalt(RandomizationSaltT&& value) { SetRandomizationSalt(std::forward<RandomizationSaltT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An array of structures that define the traffic allocation percentages among
     * the feature variations during each step of the launch.</p>
     */
    inline const ScheduledSplitsLaunchDefinition& GetScheduledSplitsDefinition() const { return m_scheduledSplitsDefinition; }
    inline bool ScheduledSplitsDefinitionHasBeenSet() const { return m_scheduledSplitsDefinitionHasBeenSet; }
    template<typename ScheduledSplitsDefinitionT = ScheduledSplitsLaunchDefinition>
    void SetScheduledSplitsDefinition(ScheduledSplitsDefinitionT&& value) { m_scheduledSplitsDefinitionHasBeenSet = true; m_scheduledSplitsDefinition = std::forward<ScheduledSplitsDefinitionT>(value); }
    template<typename ScheduledSplitsDefinitionT = ScheduledSplitsLaunchDefinition>
    Launch& WithScheduledSplitsDefinition(ScheduledSplitsDefinitionT&& value) { SetScheduledSplitsDefinition(std::forward<ScheduledSplitsDefinitionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The current state of the launch.</p>
     */
    inline LaunchStatus GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(LaunchStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline Launch& WithStatus(LaunchStatus value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>If the launch was stopped, this is the string that was entered by the person
     * who stopped the launch, to explain why it was stopped.</p>
     */
    inline const Aws::String& GetStatusReason() const { return m_statusReason; }
    inline bool StatusReasonHasBeenSet() const { return m_statusReasonHasBeenSet; }
    template<typename StatusReasonT = Aws::String>
    void SetStatusReason(StatusReasonT&& value) { m_statusReasonHasBeenSet = true; m_statusReason = std::forward<StatusReasonT>(value); }
    template<typename StatusReasonT = Aws::String>
    Launch& WithStatusReason(StatusReasonT&& value) { SetStatusReason(std::forward<StatusReasonT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The list of tag keys and values associated with this launch.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const { return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    template<typename TagsT = Aws::Map<Aws::String, Aws::String>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Map<Aws::String, Aws::String>>
    Launch& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsKeyT = Aws::String, typename TagsValueT = Aws::String>
    Launch& AddTags(TagsKeyT&& key, TagsValueT&& value) {
      m_tagsHasBeenSet = true; m_tags.emplace(std::forward<TagsKeyT>(key), std::forward<TagsValueT>(value)); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>The type of launch.</p>
     */
    inline LaunchType GetType() const { return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(LaunchType value) { m_typeHasBeenSet = true; m_type = value; }
    inline Launch& WithType(LaunchType value) { SetType(value); return *this;}
    ///@}
  private:

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    Aws::Utils::DateTime m_createdTime{};
    bool m_createdTimeHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    LaunchExecution m_execution;
    bool m_executionHasBeenSet = false;

    Aws::Vector<LaunchGroup> m_groups;
    bool m_groupsHasBeenSet = false;

    Aws::Utils::DateTime m_lastUpdatedTime{};
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

    LaunchStatus m_status{LaunchStatus::NOT_SET};
    bool m_statusHasBeenSet = false;

    Aws::String m_statusReason;
    bool m_statusReasonHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet = false;

    LaunchType m_type{LaunchType::NOT_SET};
    bool m_typeHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudWatchEvidently
} // namespace Aws
