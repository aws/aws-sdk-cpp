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


    ///@{
    /**
     * <p>The number of experiments currently in the project.</p>
     */
    inline long long GetActiveExperimentCount() const{ return m_activeExperimentCount; }
    inline bool ActiveExperimentCountHasBeenSet() const { return m_activeExperimentCountHasBeenSet; }
    inline void SetActiveExperimentCount(long long value) { m_activeExperimentCountHasBeenSet = true; m_activeExperimentCount = value; }
    inline ProjectSummary& WithActiveExperimentCount(long long value) { SetActiveExperimentCount(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of ongoing launches currently in the project.</p>
     */
    inline long long GetActiveLaunchCount() const{ return m_activeLaunchCount; }
    inline bool ActiveLaunchCountHasBeenSet() const { return m_activeLaunchCountHasBeenSet; }
    inline void SetActiveLaunchCount(long long value) { m_activeLaunchCountHasBeenSet = true; m_activeLaunchCount = value; }
    inline ProjectSummary& WithActiveLaunchCount(long long value) { SetActiveLaunchCount(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name or ARN of the project.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }
    inline void SetArn(const Aws::String& value) { m_arnHasBeenSet = true; m_arn = value; }
    inline void SetArn(Aws::String&& value) { m_arnHasBeenSet = true; m_arn = std::move(value); }
    inline void SetArn(const char* value) { m_arnHasBeenSet = true; m_arn.assign(value); }
    inline ProjectSummary& WithArn(const Aws::String& value) { SetArn(value); return *this;}
    inline ProjectSummary& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}
    inline ProjectSummary& WithArn(const char* value) { SetArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time that the project is created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedTime() const{ return m_createdTime; }
    inline bool CreatedTimeHasBeenSet() const { return m_createdTimeHasBeenSet; }
    inline void SetCreatedTime(const Aws::Utils::DateTime& value) { m_createdTimeHasBeenSet = true; m_createdTime = value; }
    inline void SetCreatedTime(Aws::Utils::DateTime&& value) { m_createdTimeHasBeenSet = true; m_createdTime = std::move(value); }
    inline ProjectSummary& WithCreatedTime(const Aws::Utils::DateTime& value) { SetCreatedTime(value); return *this;}
    inline ProjectSummary& WithCreatedTime(Aws::Utils::DateTime&& value) { SetCreatedTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The description of the project.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }
    inline ProjectSummary& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline ProjectSummary& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline ProjectSummary& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of experiments currently in the project.</p>
     */
    inline long long GetExperimentCount() const{ return m_experimentCount; }
    inline bool ExperimentCountHasBeenSet() const { return m_experimentCountHasBeenSet; }
    inline void SetExperimentCount(long long value) { m_experimentCountHasBeenSet = true; m_experimentCount = value; }
    inline ProjectSummary& WithExperimentCount(long long value) { SetExperimentCount(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of features currently in the project.</p>
     */
    inline long long GetFeatureCount() const{ return m_featureCount; }
    inline bool FeatureCountHasBeenSet() const { return m_featureCountHasBeenSet; }
    inline void SetFeatureCount(long long value) { m_featureCountHasBeenSet = true; m_featureCount = value; }
    inline ProjectSummary& WithFeatureCount(long long value) { SetFeatureCount(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time that the project was most recently updated.</p>
     */
    inline const Aws::Utils::DateTime& GetLastUpdatedTime() const{ return m_lastUpdatedTime; }
    inline bool LastUpdatedTimeHasBeenSet() const { return m_lastUpdatedTimeHasBeenSet; }
    inline void SetLastUpdatedTime(const Aws::Utils::DateTime& value) { m_lastUpdatedTimeHasBeenSet = true; m_lastUpdatedTime = value; }
    inline void SetLastUpdatedTime(Aws::Utils::DateTime&& value) { m_lastUpdatedTimeHasBeenSet = true; m_lastUpdatedTime = std::move(value); }
    inline ProjectSummary& WithLastUpdatedTime(const Aws::Utils::DateTime& value) { SetLastUpdatedTime(value); return *this;}
    inline ProjectSummary& WithLastUpdatedTime(Aws::Utils::DateTime&& value) { SetLastUpdatedTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of launches currently in the project, including launches that are
     * ongoing, completed, and not started yet.</p>
     */
    inline long long GetLaunchCount() const{ return m_launchCount; }
    inline bool LaunchCountHasBeenSet() const { return m_launchCountHasBeenSet; }
    inline void SetLaunchCount(long long value) { m_launchCountHasBeenSet = true; m_launchCount = value; }
    inline ProjectSummary& WithLaunchCount(long long value) { SetLaunchCount(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the project.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline ProjectSummary& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline ProjectSummary& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline ProjectSummary& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The current state of the project.</p>
     */
    inline const ProjectStatus& GetStatus() const{ return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(const ProjectStatus& value) { m_statusHasBeenSet = true; m_status = value; }
    inline void SetStatus(ProjectStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }
    inline ProjectSummary& WithStatus(const ProjectStatus& value) { SetStatus(value); return *this;}
    inline ProjectSummary& WithStatus(ProjectStatus&& value) { SetStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The list of tag keys and values associated with this project.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tagsHasBeenSet = true; m_tags = value; }
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }
    inline ProjectSummary& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}
    inline ProjectSummary& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}
    inline ProjectSummary& AddTags(const Aws::String& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }
    inline ProjectSummary& AddTags(Aws::String&& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }
    inline ProjectSummary& AddTags(const Aws::String& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }
    inline ProjectSummary& AddTags(Aws::String&& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), std::move(value)); return *this; }
    inline ProjectSummary& AddTags(const char* key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }
    inline ProjectSummary& AddTags(Aws::String&& key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }
    inline ProjectSummary& AddTags(const char* key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }
    ///@}
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
