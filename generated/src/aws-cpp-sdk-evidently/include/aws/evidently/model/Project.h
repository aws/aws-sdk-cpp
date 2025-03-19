/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/evidently/CloudWatchEvidently_EXPORTS.h>
#include <aws/evidently/model/ProjectAppConfigResource.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/evidently/model/ProjectDataDelivery.h>
#include <aws/evidently/model/ProjectStatus.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
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
   * <p>This structure defines a project, which is the logical object in Evidently
   * that can contain features, launches, and experiments. Use projects to group
   * similar features together.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/evidently-2021-02-01/Project">AWS
   * API Reference</a></p>
   */
  class Project
  {
  public:
    AWS_CLOUDWATCHEVIDENTLY_API Project() = default;
    AWS_CLOUDWATCHEVIDENTLY_API Project(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLOUDWATCHEVIDENTLY_API Project& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLOUDWATCHEVIDENTLY_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The number of ongoing experiments currently in the project.</p>
     */
    inline long long GetActiveExperimentCount() const { return m_activeExperimentCount; }
    inline bool ActiveExperimentCountHasBeenSet() const { return m_activeExperimentCountHasBeenSet; }
    inline void SetActiveExperimentCount(long long value) { m_activeExperimentCountHasBeenSet = true; m_activeExperimentCount = value; }
    inline Project& WithActiveExperimentCount(long long value) { SetActiveExperimentCount(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of ongoing launches currently in the project.</p>
     */
    inline long long GetActiveLaunchCount() const { return m_activeLaunchCount; }
    inline bool ActiveLaunchCountHasBeenSet() const { return m_activeLaunchCountHasBeenSet; }
    inline void SetActiveLaunchCount(long long value) { m_activeLaunchCountHasBeenSet = true; m_activeLaunchCount = value; }
    inline Project& WithActiveLaunchCount(long long value) { SetActiveLaunchCount(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>This structure defines the configuration of how your application integrates
     * with AppConfig to run client-side evaluation.</p>
     */
    inline const ProjectAppConfigResource& GetAppConfigResource() const { return m_appConfigResource; }
    inline bool AppConfigResourceHasBeenSet() const { return m_appConfigResourceHasBeenSet; }
    template<typename AppConfigResourceT = ProjectAppConfigResource>
    void SetAppConfigResource(AppConfigResourceT&& value) { m_appConfigResourceHasBeenSet = true; m_appConfigResource = std::forward<AppConfigResourceT>(value); }
    template<typename AppConfigResourceT = ProjectAppConfigResource>
    Project& WithAppConfigResource(AppConfigResourceT&& value) { SetAppConfigResource(std::forward<AppConfigResourceT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name or ARN of the project.</p>
     */
    inline const Aws::String& GetArn() const { return m_arn; }
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }
    template<typename ArnT = Aws::String>
    void SetArn(ArnT&& value) { m_arnHasBeenSet = true; m_arn = std::forward<ArnT>(value); }
    template<typename ArnT = Aws::String>
    Project& WithArn(ArnT&& value) { SetArn(std::forward<ArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time that the project is created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedTime() const { return m_createdTime; }
    inline bool CreatedTimeHasBeenSet() const { return m_createdTimeHasBeenSet; }
    template<typename CreatedTimeT = Aws::Utils::DateTime>
    void SetCreatedTime(CreatedTimeT&& value) { m_createdTimeHasBeenSet = true; m_createdTime = std::forward<CreatedTimeT>(value); }
    template<typename CreatedTimeT = Aws::Utils::DateTime>
    Project& WithCreatedTime(CreatedTimeT&& value) { SetCreatedTime(std::forward<CreatedTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A structure that contains information about where Evidently is to store
     * evaluation events for longer term storage.</p>
     */
    inline const ProjectDataDelivery& GetDataDelivery() const { return m_dataDelivery; }
    inline bool DataDeliveryHasBeenSet() const { return m_dataDeliveryHasBeenSet; }
    template<typename DataDeliveryT = ProjectDataDelivery>
    void SetDataDelivery(DataDeliveryT&& value) { m_dataDeliveryHasBeenSet = true; m_dataDelivery = std::forward<DataDeliveryT>(value); }
    template<typename DataDeliveryT = ProjectDataDelivery>
    Project& WithDataDelivery(DataDeliveryT&& value) { SetDataDelivery(std::forward<DataDeliveryT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The user-entered description of the project.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    Project& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of experiments currently in the project. This includes all
     * experiments that have been created and not deleted, whether they are ongoing or
     * not.</p>
     */
    inline long long GetExperimentCount() const { return m_experimentCount; }
    inline bool ExperimentCountHasBeenSet() const { return m_experimentCountHasBeenSet; }
    inline void SetExperimentCount(long long value) { m_experimentCountHasBeenSet = true; m_experimentCount = value; }
    inline Project& WithExperimentCount(long long value) { SetExperimentCount(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of features currently in the project.</p>
     */
    inline long long GetFeatureCount() const { return m_featureCount; }
    inline bool FeatureCountHasBeenSet() const { return m_featureCountHasBeenSet; }
    inline void SetFeatureCount(long long value) { m_featureCountHasBeenSet = true; m_featureCount = value; }
    inline Project& WithFeatureCount(long long value) { SetFeatureCount(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time that the project was most recently updated.</p>
     */
    inline const Aws::Utils::DateTime& GetLastUpdatedTime() const { return m_lastUpdatedTime; }
    inline bool LastUpdatedTimeHasBeenSet() const { return m_lastUpdatedTimeHasBeenSet; }
    template<typename LastUpdatedTimeT = Aws::Utils::DateTime>
    void SetLastUpdatedTime(LastUpdatedTimeT&& value) { m_lastUpdatedTimeHasBeenSet = true; m_lastUpdatedTime = std::forward<LastUpdatedTimeT>(value); }
    template<typename LastUpdatedTimeT = Aws::Utils::DateTime>
    Project& WithLastUpdatedTime(LastUpdatedTimeT&& value) { SetLastUpdatedTime(std::forward<LastUpdatedTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of launches currently in the project. This includes all launches
     * that have been created and not deleted, whether they are ongoing or not.</p>
     */
    inline long long GetLaunchCount() const { return m_launchCount; }
    inline bool LaunchCountHasBeenSet() const { return m_launchCountHasBeenSet; }
    inline void SetLaunchCount(long long value) { m_launchCountHasBeenSet = true; m_launchCount = value; }
    inline Project& WithLaunchCount(long long value) { SetLaunchCount(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the project.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    Project& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The current state of the project.</p>
     */
    inline ProjectStatus GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(ProjectStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline Project& WithStatus(ProjectStatus value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The list of tag keys and values associated with this project.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const { return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    template<typename TagsT = Aws::Map<Aws::String, Aws::String>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Map<Aws::String, Aws::String>>
    Project& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsKeyT = Aws::String, typename TagsValueT = Aws::String>
    Project& AddTags(TagsKeyT&& key, TagsValueT&& value) {
      m_tagsHasBeenSet = true; m_tags.emplace(std::forward<TagsKeyT>(key), std::forward<TagsValueT>(value)); return *this;
    }
    ///@}
  private:

    long long m_activeExperimentCount{0};
    bool m_activeExperimentCountHasBeenSet = false;

    long long m_activeLaunchCount{0};
    bool m_activeLaunchCountHasBeenSet = false;

    ProjectAppConfigResource m_appConfigResource;
    bool m_appConfigResourceHasBeenSet = false;

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    Aws::Utils::DateTime m_createdTime{};
    bool m_createdTimeHasBeenSet = false;

    ProjectDataDelivery m_dataDelivery;
    bool m_dataDeliveryHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    long long m_experimentCount{0};
    bool m_experimentCountHasBeenSet = false;

    long long m_featureCount{0};
    bool m_featureCountHasBeenSet = false;

    Aws::Utils::DateTime m_lastUpdatedTime{};
    bool m_lastUpdatedTimeHasBeenSet = false;

    long long m_launchCount{0};
    bool m_launchCountHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    ProjectStatus m_status{ProjectStatus::NOT_SET};
    bool m_statusHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudWatchEvidently
} // namespace Aws
