/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/evidently/CloudWatchEvidently_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
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
   * <p>A structure that contains configuration information about an Evidently
   * project.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/evidently-2021-02-01/ProjectSummary">AWS
   * API Reference</a></p>
   */
  class ProjectSummary
  {
  public:
    AWS_CLOUDWATCHEVIDENTLY_API ProjectSummary();
    AWS_CLOUDWATCHEVIDENTLY_API ProjectSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLOUDWATCHEVIDENTLY_API ProjectSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLOUDWATCHEVIDENTLY_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The number of experiments currently in the project.</p>
     */
    inline long long GetActiveExperimentCount() const{ return m_activeExperimentCount; }

    /**
     * <p>The number of experiments currently in the project.</p>
     */
    inline bool ActiveExperimentCountHasBeenSet() const { return m_activeExperimentCountHasBeenSet; }

    /**
     * <p>The number of experiments currently in the project.</p>
     */
    inline void SetActiveExperimentCount(long long value) { m_activeExperimentCountHasBeenSet = true; m_activeExperimentCount = value; }

    /**
     * <p>The number of experiments currently in the project.</p>
     */
    inline ProjectSummary& WithActiveExperimentCount(long long value) { SetActiveExperimentCount(value); return *this;}


    /**
     * <p>The number of ongoing launches currently in the project.</p>
     */
    inline long long GetActiveLaunchCount() const{ return m_activeLaunchCount; }

    /**
     * <p>The number of ongoing launches currently in the project.</p>
     */
    inline bool ActiveLaunchCountHasBeenSet() const { return m_activeLaunchCountHasBeenSet; }

    /**
     * <p>The number of ongoing launches currently in the project.</p>
     */
    inline void SetActiveLaunchCount(long long value) { m_activeLaunchCountHasBeenSet = true; m_activeLaunchCount = value; }

    /**
     * <p>The number of ongoing launches currently in the project.</p>
     */
    inline ProjectSummary& WithActiveLaunchCount(long long value) { SetActiveLaunchCount(value); return *this;}


    /**
     * <p>The name or ARN of the project.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }

    /**
     * <p>The name or ARN of the project.</p>
     */
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }

    /**
     * <p>The name or ARN of the project.</p>
     */
    inline void SetArn(const Aws::String& value) { m_arnHasBeenSet = true; m_arn = value; }

    /**
     * <p>The name or ARN of the project.</p>
     */
    inline void SetArn(Aws::String&& value) { m_arnHasBeenSet = true; m_arn = std::move(value); }

    /**
     * <p>The name or ARN of the project.</p>
     */
    inline void SetArn(const char* value) { m_arnHasBeenSet = true; m_arn.assign(value); }

    /**
     * <p>The name or ARN of the project.</p>
     */
    inline ProjectSummary& WithArn(const Aws::String& value) { SetArn(value); return *this;}

    /**
     * <p>The name or ARN of the project.</p>
     */
    inline ProjectSummary& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}

    /**
     * <p>The name or ARN of the project.</p>
     */
    inline ProjectSummary& WithArn(const char* value) { SetArn(value); return *this;}


    /**
     * <p>The date and time that the project is created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedTime() const{ return m_createdTime; }

    /**
     * <p>The date and time that the project is created.</p>
     */
    inline bool CreatedTimeHasBeenSet() const { return m_createdTimeHasBeenSet; }

    /**
     * <p>The date and time that the project is created.</p>
     */
    inline void SetCreatedTime(const Aws::Utils::DateTime& value) { m_createdTimeHasBeenSet = true; m_createdTime = value; }

    /**
     * <p>The date and time that the project is created.</p>
     */
    inline void SetCreatedTime(Aws::Utils::DateTime&& value) { m_createdTimeHasBeenSet = true; m_createdTime = std::move(value); }

    /**
     * <p>The date and time that the project is created.</p>
     */
    inline ProjectSummary& WithCreatedTime(const Aws::Utils::DateTime& value) { SetCreatedTime(value); return *this;}

    /**
     * <p>The date and time that the project is created.</p>
     */
    inline ProjectSummary& WithCreatedTime(Aws::Utils::DateTime&& value) { SetCreatedTime(std::move(value)); return *this;}


    /**
     * <p>The description of the project.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>The description of the project.</p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>The description of the project.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>The description of the project.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>The description of the project.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>The description of the project.</p>
     */
    inline ProjectSummary& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>The description of the project.</p>
     */
    inline ProjectSummary& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>The description of the project.</p>
     */
    inline ProjectSummary& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>The number of experiments currently in the project.</p>
     */
    inline long long GetExperimentCount() const{ return m_experimentCount; }

    /**
     * <p>The number of experiments currently in the project.</p>
     */
    inline bool ExperimentCountHasBeenSet() const { return m_experimentCountHasBeenSet; }

    /**
     * <p>The number of experiments currently in the project.</p>
     */
    inline void SetExperimentCount(long long value) { m_experimentCountHasBeenSet = true; m_experimentCount = value; }

    /**
     * <p>The number of experiments currently in the project.</p>
     */
    inline ProjectSummary& WithExperimentCount(long long value) { SetExperimentCount(value); return *this;}


    /**
     * <p>The number of features currently in the project.</p>
     */
    inline long long GetFeatureCount() const{ return m_featureCount; }

    /**
     * <p>The number of features currently in the project.</p>
     */
    inline bool FeatureCountHasBeenSet() const { return m_featureCountHasBeenSet; }

    /**
     * <p>The number of features currently in the project.</p>
     */
    inline void SetFeatureCount(long long value) { m_featureCountHasBeenSet = true; m_featureCount = value; }

    /**
     * <p>The number of features currently in the project.</p>
     */
    inline ProjectSummary& WithFeatureCount(long long value) { SetFeatureCount(value); return *this;}


    /**
     * <p>The date and time that the project was most recently updated.</p>
     */
    inline const Aws::Utils::DateTime& GetLastUpdatedTime() const{ return m_lastUpdatedTime; }

    /**
     * <p>The date and time that the project was most recently updated.</p>
     */
    inline bool LastUpdatedTimeHasBeenSet() const { return m_lastUpdatedTimeHasBeenSet; }

    /**
     * <p>The date and time that the project was most recently updated.</p>
     */
    inline void SetLastUpdatedTime(const Aws::Utils::DateTime& value) { m_lastUpdatedTimeHasBeenSet = true; m_lastUpdatedTime = value; }

    /**
     * <p>The date and time that the project was most recently updated.</p>
     */
    inline void SetLastUpdatedTime(Aws::Utils::DateTime&& value) { m_lastUpdatedTimeHasBeenSet = true; m_lastUpdatedTime = std::move(value); }

    /**
     * <p>The date and time that the project was most recently updated.</p>
     */
    inline ProjectSummary& WithLastUpdatedTime(const Aws::Utils::DateTime& value) { SetLastUpdatedTime(value); return *this;}

    /**
     * <p>The date and time that the project was most recently updated.</p>
     */
    inline ProjectSummary& WithLastUpdatedTime(Aws::Utils::DateTime&& value) { SetLastUpdatedTime(std::move(value)); return *this;}


    /**
     * <p>The number of launches currently in the project, including launches that are
     * ongoing, completed, and not started yet.</p>
     */
    inline long long GetLaunchCount() const{ return m_launchCount; }

    /**
     * <p>The number of launches currently in the project, including launches that are
     * ongoing, completed, and not started yet.</p>
     */
    inline bool LaunchCountHasBeenSet() const { return m_launchCountHasBeenSet; }

    /**
     * <p>The number of launches currently in the project, including launches that are
     * ongoing, completed, and not started yet.</p>
     */
    inline void SetLaunchCount(long long value) { m_launchCountHasBeenSet = true; m_launchCount = value; }

    /**
     * <p>The number of launches currently in the project, including launches that are
     * ongoing, completed, and not started yet.</p>
     */
    inline ProjectSummary& WithLaunchCount(long long value) { SetLaunchCount(value); return *this;}


    /**
     * <p>The name of the project.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the project.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the project.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the project.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the project.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the project.</p>
     */
    inline ProjectSummary& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the project.</p>
     */
    inline ProjectSummary& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the project.</p>
     */
    inline ProjectSummary& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The current state of the project.</p>
     */
    inline const ProjectStatus& GetStatus() const{ return m_status; }

    /**
     * <p>The current state of the project.</p>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p>The current state of the project.</p>
     */
    inline void SetStatus(const ProjectStatus& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>The current state of the project.</p>
     */
    inline void SetStatus(ProjectStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p>The current state of the project.</p>
     */
    inline ProjectSummary& WithStatus(const ProjectStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>The current state of the project.</p>
     */
    inline ProjectSummary& WithStatus(ProjectStatus&& value) { SetStatus(std::move(value)); return *this;}


    /**
     * <p>The list of tag keys and values associated with this project.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }

    /**
     * <p>The list of tag keys and values associated with this project.</p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>The list of tag keys and values associated with this project.</p>
     */
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>The list of tag keys and values associated with this project.</p>
     */
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>The list of tag keys and values associated with this project.</p>
     */
    inline ProjectSummary& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}

    /**
     * <p>The list of tag keys and values associated with this project.</p>
     */
    inline ProjectSummary& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>The list of tag keys and values associated with this project.</p>
     */
    inline ProjectSummary& AddTags(const Aws::String& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }

    /**
     * <p>The list of tag keys and values associated with this project.</p>
     */
    inline ProjectSummary& AddTags(Aws::String&& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>The list of tag keys and values associated with this project.</p>
     */
    inline ProjectSummary& AddTags(const Aws::String& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The list of tag keys and values associated with this project.</p>
     */
    inline ProjectSummary& AddTags(Aws::String&& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>The list of tag keys and values associated with this project.</p>
     */
    inline ProjectSummary& AddTags(const char* key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The list of tag keys and values associated with this project.</p>
     */
    inline ProjectSummary& AddTags(Aws::String&& key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>The list of tag keys and values associated with this project.</p>
     */
    inline ProjectSummary& AddTags(const char* key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }

  private:

    long long m_activeExperimentCount;
    bool m_activeExperimentCountHasBeenSet = false;

    long long m_activeLaunchCount;
    bool m_activeLaunchCountHasBeenSet = false;

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    Aws::Utils::DateTime m_createdTime;
    bool m_createdTimeHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    long long m_experimentCount;
    bool m_experimentCountHasBeenSet = false;

    long long m_featureCount;
    bool m_featureCountHasBeenSet = false;

    Aws::Utils::DateTime m_lastUpdatedTime;
    bool m_lastUpdatedTimeHasBeenSet = false;

    long long m_launchCount;
    bool m_launchCountHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    ProjectStatus m_status;
    bool m_statusHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudWatchEvidently
} // namespace Aws
