/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/amplify/Amplify_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/amplify/model/Stage.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
namespace Amplify
{
namespace Model
{

  /**
   * <p> The branch for an Amplify app, which maps to a third-party repository
   * branch. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/amplify-2017-07-25/Branch">AWS API
   * Reference</a></p>
   */
  class Branch
  {
  public:
    AWS_AMPLIFY_API Branch();
    AWS_AMPLIFY_API Branch(Aws::Utils::Json::JsonView jsonValue);
    AWS_AMPLIFY_API Branch& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_AMPLIFY_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p> The Amazon Resource Name (ARN) for a branch that is part of an Amplify app.
     * </p>
     */
    inline const Aws::String& GetBranchArn() const{ return m_branchArn; }

    /**
     * <p> The Amazon Resource Name (ARN) for a branch that is part of an Amplify app.
     * </p>
     */
    inline bool BranchArnHasBeenSet() const { return m_branchArnHasBeenSet; }

    /**
     * <p> The Amazon Resource Name (ARN) for a branch that is part of an Amplify app.
     * </p>
     */
    inline void SetBranchArn(const Aws::String& value) { m_branchArnHasBeenSet = true; m_branchArn = value; }

    /**
     * <p> The Amazon Resource Name (ARN) for a branch that is part of an Amplify app.
     * </p>
     */
    inline void SetBranchArn(Aws::String&& value) { m_branchArnHasBeenSet = true; m_branchArn = std::move(value); }

    /**
     * <p> The Amazon Resource Name (ARN) for a branch that is part of an Amplify app.
     * </p>
     */
    inline void SetBranchArn(const char* value) { m_branchArnHasBeenSet = true; m_branchArn.assign(value); }

    /**
     * <p> The Amazon Resource Name (ARN) for a branch that is part of an Amplify app.
     * </p>
     */
    inline Branch& WithBranchArn(const Aws::String& value) { SetBranchArn(value); return *this;}

    /**
     * <p> The Amazon Resource Name (ARN) for a branch that is part of an Amplify app.
     * </p>
     */
    inline Branch& WithBranchArn(Aws::String&& value) { SetBranchArn(std::move(value)); return *this;}

    /**
     * <p> The Amazon Resource Name (ARN) for a branch that is part of an Amplify app.
     * </p>
     */
    inline Branch& WithBranchArn(const char* value) { SetBranchArn(value); return *this;}


    /**
     * <p> The name for the branch that is part of an Amplify app. </p>
     */
    inline const Aws::String& GetBranchName() const{ return m_branchName; }

    /**
     * <p> The name for the branch that is part of an Amplify app. </p>
     */
    inline bool BranchNameHasBeenSet() const { return m_branchNameHasBeenSet; }

    /**
     * <p> The name for the branch that is part of an Amplify app. </p>
     */
    inline void SetBranchName(const Aws::String& value) { m_branchNameHasBeenSet = true; m_branchName = value; }

    /**
     * <p> The name for the branch that is part of an Amplify app. </p>
     */
    inline void SetBranchName(Aws::String&& value) { m_branchNameHasBeenSet = true; m_branchName = std::move(value); }

    /**
     * <p> The name for the branch that is part of an Amplify app. </p>
     */
    inline void SetBranchName(const char* value) { m_branchNameHasBeenSet = true; m_branchName.assign(value); }

    /**
     * <p> The name for the branch that is part of an Amplify app. </p>
     */
    inline Branch& WithBranchName(const Aws::String& value) { SetBranchName(value); return *this;}

    /**
     * <p> The name for the branch that is part of an Amplify app. </p>
     */
    inline Branch& WithBranchName(Aws::String&& value) { SetBranchName(std::move(value)); return *this;}

    /**
     * <p> The name for the branch that is part of an Amplify app. </p>
     */
    inline Branch& WithBranchName(const char* value) { SetBranchName(value); return *this;}


    /**
     * <p> The description for the branch that is part of an Amplify app. </p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p> The description for the branch that is part of an Amplify app. </p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p> The description for the branch that is part of an Amplify app. </p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p> The description for the branch that is part of an Amplify app. </p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p> The description for the branch that is part of an Amplify app. </p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p> The description for the branch that is part of an Amplify app. </p>
     */
    inline Branch& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p> The description for the branch that is part of an Amplify app. </p>
     */
    inline Branch& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p> The description for the branch that is part of an Amplify app. </p>
     */
    inline Branch& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p> The tag for the branch of an Amplify app. </p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }

    /**
     * <p> The tag for the branch of an Amplify app. </p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p> The tag for the branch of an Amplify app. </p>
     */
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p> The tag for the branch of an Amplify app. </p>
     */
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p> The tag for the branch of an Amplify app. </p>
     */
    inline Branch& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}

    /**
     * <p> The tag for the branch of an Amplify app. </p>
     */
    inline Branch& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p> The tag for the branch of an Amplify app. </p>
     */
    inline Branch& AddTags(const Aws::String& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }

    /**
     * <p> The tag for the branch of an Amplify app. </p>
     */
    inline Branch& AddTags(Aws::String&& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p> The tag for the branch of an Amplify app. </p>
     */
    inline Branch& AddTags(const Aws::String& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p> The tag for the branch of an Amplify app. </p>
     */
    inline Branch& AddTags(Aws::String&& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p> The tag for the branch of an Amplify app. </p>
     */
    inline Branch& AddTags(const char* key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p> The tag for the branch of an Amplify app. </p>
     */
    inline Branch& AddTags(Aws::String&& key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p> The tag for the branch of an Amplify app. </p>
     */
    inline Branch& AddTags(const char* key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }


    /**
     * <p> The current stage for the branch that is part of an Amplify app. </p>
     */
    inline const Stage& GetStage() const{ return m_stage; }

    /**
     * <p> The current stage for the branch that is part of an Amplify app. </p>
     */
    inline bool StageHasBeenSet() const { return m_stageHasBeenSet; }

    /**
     * <p> The current stage for the branch that is part of an Amplify app. </p>
     */
    inline void SetStage(const Stage& value) { m_stageHasBeenSet = true; m_stage = value; }

    /**
     * <p> The current stage for the branch that is part of an Amplify app. </p>
     */
    inline void SetStage(Stage&& value) { m_stageHasBeenSet = true; m_stage = std::move(value); }

    /**
     * <p> The current stage for the branch that is part of an Amplify app. </p>
     */
    inline Branch& WithStage(const Stage& value) { SetStage(value); return *this;}

    /**
     * <p> The current stage for the branch that is part of an Amplify app. </p>
     */
    inline Branch& WithStage(Stage&& value) { SetStage(std::move(value)); return *this;}


    /**
     * <p> The display name for the branch. This is used as the default domain prefix.
     * </p>
     */
    inline const Aws::String& GetDisplayName() const{ return m_displayName; }

    /**
     * <p> The display name for the branch. This is used as the default domain prefix.
     * </p>
     */
    inline bool DisplayNameHasBeenSet() const { return m_displayNameHasBeenSet; }

    /**
     * <p> The display name for the branch. This is used as the default domain prefix.
     * </p>
     */
    inline void SetDisplayName(const Aws::String& value) { m_displayNameHasBeenSet = true; m_displayName = value; }

    /**
     * <p> The display name for the branch. This is used as the default domain prefix.
     * </p>
     */
    inline void SetDisplayName(Aws::String&& value) { m_displayNameHasBeenSet = true; m_displayName = std::move(value); }

    /**
     * <p> The display name for the branch. This is used as the default domain prefix.
     * </p>
     */
    inline void SetDisplayName(const char* value) { m_displayNameHasBeenSet = true; m_displayName.assign(value); }

    /**
     * <p> The display name for the branch. This is used as the default domain prefix.
     * </p>
     */
    inline Branch& WithDisplayName(const Aws::String& value) { SetDisplayName(value); return *this;}

    /**
     * <p> The display name for the branch. This is used as the default domain prefix.
     * </p>
     */
    inline Branch& WithDisplayName(Aws::String&& value) { SetDisplayName(std::move(value)); return *this;}

    /**
     * <p> The display name for the branch. This is used as the default domain prefix.
     * </p>
     */
    inline Branch& WithDisplayName(const char* value) { SetDisplayName(value); return *this;}


    /**
     * <p> Enables notifications for a branch that is part of an Amplify app. </p>
     */
    inline bool GetEnableNotification() const{ return m_enableNotification; }

    /**
     * <p> Enables notifications for a branch that is part of an Amplify app. </p>
     */
    inline bool EnableNotificationHasBeenSet() const { return m_enableNotificationHasBeenSet; }

    /**
     * <p> Enables notifications for a branch that is part of an Amplify app. </p>
     */
    inline void SetEnableNotification(bool value) { m_enableNotificationHasBeenSet = true; m_enableNotification = value; }

    /**
     * <p> Enables notifications for a branch that is part of an Amplify app. </p>
     */
    inline Branch& WithEnableNotification(bool value) { SetEnableNotification(value); return *this;}


    /**
     * <p> The creation date and time for a branch that is part of an Amplify app. </p>
     */
    inline const Aws::Utils::DateTime& GetCreateTime() const{ return m_createTime; }

    /**
     * <p> The creation date and time for a branch that is part of an Amplify app. </p>
     */
    inline bool CreateTimeHasBeenSet() const { return m_createTimeHasBeenSet; }

    /**
     * <p> The creation date and time for a branch that is part of an Amplify app. </p>
     */
    inline void SetCreateTime(const Aws::Utils::DateTime& value) { m_createTimeHasBeenSet = true; m_createTime = value; }

    /**
     * <p> The creation date and time for a branch that is part of an Amplify app. </p>
     */
    inline void SetCreateTime(Aws::Utils::DateTime&& value) { m_createTimeHasBeenSet = true; m_createTime = std::move(value); }

    /**
     * <p> The creation date and time for a branch that is part of an Amplify app. </p>
     */
    inline Branch& WithCreateTime(const Aws::Utils::DateTime& value) { SetCreateTime(value); return *this;}

    /**
     * <p> The creation date and time for a branch that is part of an Amplify app. </p>
     */
    inline Branch& WithCreateTime(Aws::Utils::DateTime&& value) { SetCreateTime(std::move(value)); return *this;}


    /**
     * <p> The last updated date and time for a branch that is part of an Amplify app.
     * </p>
     */
    inline const Aws::Utils::DateTime& GetUpdateTime() const{ return m_updateTime; }

    /**
     * <p> The last updated date and time for a branch that is part of an Amplify app.
     * </p>
     */
    inline bool UpdateTimeHasBeenSet() const { return m_updateTimeHasBeenSet; }

    /**
     * <p> The last updated date and time for a branch that is part of an Amplify app.
     * </p>
     */
    inline void SetUpdateTime(const Aws::Utils::DateTime& value) { m_updateTimeHasBeenSet = true; m_updateTime = value; }

    /**
     * <p> The last updated date and time for a branch that is part of an Amplify app.
     * </p>
     */
    inline void SetUpdateTime(Aws::Utils::DateTime&& value) { m_updateTimeHasBeenSet = true; m_updateTime = std::move(value); }

    /**
     * <p> The last updated date and time for a branch that is part of an Amplify app.
     * </p>
     */
    inline Branch& WithUpdateTime(const Aws::Utils::DateTime& value) { SetUpdateTime(value); return *this;}

    /**
     * <p> The last updated date and time for a branch that is part of an Amplify app.
     * </p>
     */
    inline Branch& WithUpdateTime(Aws::Utils::DateTime&& value) { SetUpdateTime(std::move(value)); return *this;}


    /**
     * <p> The environment variables specific to a branch of an Amplify app. </p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetEnvironmentVariables() const{ return m_environmentVariables; }

    /**
     * <p> The environment variables specific to a branch of an Amplify app. </p>
     */
    inline bool EnvironmentVariablesHasBeenSet() const { return m_environmentVariablesHasBeenSet; }

    /**
     * <p> The environment variables specific to a branch of an Amplify app. </p>
     */
    inline void SetEnvironmentVariables(const Aws::Map<Aws::String, Aws::String>& value) { m_environmentVariablesHasBeenSet = true; m_environmentVariables = value; }

    /**
     * <p> The environment variables specific to a branch of an Amplify app. </p>
     */
    inline void SetEnvironmentVariables(Aws::Map<Aws::String, Aws::String>&& value) { m_environmentVariablesHasBeenSet = true; m_environmentVariables = std::move(value); }

    /**
     * <p> The environment variables specific to a branch of an Amplify app. </p>
     */
    inline Branch& WithEnvironmentVariables(const Aws::Map<Aws::String, Aws::String>& value) { SetEnvironmentVariables(value); return *this;}

    /**
     * <p> The environment variables specific to a branch of an Amplify app. </p>
     */
    inline Branch& WithEnvironmentVariables(Aws::Map<Aws::String, Aws::String>&& value) { SetEnvironmentVariables(std::move(value)); return *this;}

    /**
     * <p> The environment variables specific to a branch of an Amplify app. </p>
     */
    inline Branch& AddEnvironmentVariables(const Aws::String& key, const Aws::String& value) { m_environmentVariablesHasBeenSet = true; m_environmentVariables.emplace(key, value); return *this; }

    /**
     * <p> The environment variables specific to a branch of an Amplify app. </p>
     */
    inline Branch& AddEnvironmentVariables(Aws::String&& key, const Aws::String& value) { m_environmentVariablesHasBeenSet = true; m_environmentVariables.emplace(std::move(key), value); return *this; }

    /**
     * <p> The environment variables specific to a branch of an Amplify app. </p>
     */
    inline Branch& AddEnvironmentVariables(const Aws::String& key, Aws::String&& value) { m_environmentVariablesHasBeenSet = true; m_environmentVariables.emplace(key, std::move(value)); return *this; }

    /**
     * <p> The environment variables specific to a branch of an Amplify app. </p>
     */
    inline Branch& AddEnvironmentVariables(Aws::String&& key, Aws::String&& value) { m_environmentVariablesHasBeenSet = true; m_environmentVariables.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p> The environment variables specific to a branch of an Amplify app. </p>
     */
    inline Branch& AddEnvironmentVariables(const char* key, Aws::String&& value) { m_environmentVariablesHasBeenSet = true; m_environmentVariables.emplace(key, std::move(value)); return *this; }

    /**
     * <p> The environment variables specific to a branch of an Amplify app. </p>
     */
    inline Branch& AddEnvironmentVariables(Aws::String&& key, const char* value) { m_environmentVariablesHasBeenSet = true; m_environmentVariables.emplace(std::move(key), value); return *this; }

    /**
     * <p> The environment variables specific to a branch of an Amplify app. </p>
     */
    inline Branch& AddEnvironmentVariables(const char* key, const char* value) { m_environmentVariablesHasBeenSet = true; m_environmentVariables.emplace(key, value); return *this; }


    /**
     * <p> Enables auto-building on push for a branch of an Amplify app. </p>
     */
    inline bool GetEnableAutoBuild() const{ return m_enableAutoBuild; }

    /**
     * <p> Enables auto-building on push for a branch of an Amplify app. </p>
     */
    inline bool EnableAutoBuildHasBeenSet() const { return m_enableAutoBuildHasBeenSet; }

    /**
     * <p> Enables auto-building on push for a branch of an Amplify app. </p>
     */
    inline void SetEnableAutoBuild(bool value) { m_enableAutoBuildHasBeenSet = true; m_enableAutoBuild = value; }

    /**
     * <p> Enables auto-building on push for a branch of an Amplify app. </p>
     */
    inline Branch& WithEnableAutoBuild(bool value) { SetEnableAutoBuild(value); return *this;}


    /**
     * <p> The custom domains for a branch of an Amplify app. </p>
     */
    inline const Aws::Vector<Aws::String>& GetCustomDomains() const{ return m_customDomains; }

    /**
     * <p> The custom domains for a branch of an Amplify app. </p>
     */
    inline bool CustomDomainsHasBeenSet() const { return m_customDomainsHasBeenSet; }

    /**
     * <p> The custom domains for a branch of an Amplify app. </p>
     */
    inline void SetCustomDomains(const Aws::Vector<Aws::String>& value) { m_customDomainsHasBeenSet = true; m_customDomains = value; }

    /**
     * <p> The custom domains for a branch of an Amplify app. </p>
     */
    inline void SetCustomDomains(Aws::Vector<Aws::String>&& value) { m_customDomainsHasBeenSet = true; m_customDomains = std::move(value); }

    /**
     * <p> The custom domains for a branch of an Amplify app. </p>
     */
    inline Branch& WithCustomDomains(const Aws::Vector<Aws::String>& value) { SetCustomDomains(value); return *this;}

    /**
     * <p> The custom domains for a branch of an Amplify app. </p>
     */
    inline Branch& WithCustomDomains(Aws::Vector<Aws::String>&& value) { SetCustomDomains(std::move(value)); return *this;}

    /**
     * <p> The custom domains for a branch of an Amplify app. </p>
     */
    inline Branch& AddCustomDomains(const Aws::String& value) { m_customDomainsHasBeenSet = true; m_customDomains.push_back(value); return *this; }

    /**
     * <p> The custom domains for a branch of an Amplify app. </p>
     */
    inline Branch& AddCustomDomains(Aws::String&& value) { m_customDomainsHasBeenSet = true; m_customDomains.push_back(std::move(value)); return *this; }

    /**
     * <p> The custom domains for a branch of an Amplify app. </p>
     */
    inline Branch& AddCustomDomains(const char* value) { m_customDomainsHasBeenSet = true; m_customDomains.push_back(value); return *this; }


    /**
     * <p> The framework for a branch of an Amplify app. </p>
     */
    inline const Aws::String& GetFramework() const{ return m_framework; }

    /**
     * <p> The framework for a branch of an Amplify app. </p>
     */
    inline bool FrameworkHasBeenSet() const { return m_frameworkHasBeenSet; }

    /**
     * <p> The framework for a branch of an Amplify app. </p>
     */
    inline void SetFramework(const Aws::String& value) { m_frameworkHasBeenSet = true; m_framework = value; }

    /**
     * <p> The framework for a branch of an Amplify app. </p>
     */
    inline void SetFramework(Aws::String&& value) { m_frameworkHasBeenSet = true; m_framework = std::move(value); }

    /**
     * <p> The framework for a branch of an Amplify app. </p>
     */
    inline void SetFramework(const char* value) { m_frameworkHasBeenSet = true; m_framework.assign(value); }

    /**
     * <p> The framework for a branch of an Amplify app. </p>
     */
    inline Branch& WithFramework(const Aws::String& value) { SetFramework(value); return *this;}

    /**
     * <p> The framework for a branch of an Amplify app. </p>
     */
    inline Branch& WithFramework(Aws::String&& value) { SetFramework(std::move(value)); return *this;}

    /**
     * <p> The framework for a branch of an Amplify app. </p>
     */
    inline Branch& WithFramework(const char* value) { SetFramework(value); return *this;}


    /**
     * <p> The ID of the active job for a branch of an Amplify app. </p>
     */
    inline const Aws::String& GetActiveJobId() const{ return m_activeJobId; }

    /**
     * <p> The ID of the active job for a branch of an Amplify app. </p>
     */
    inline bool ActiveJobIdHasBeenSet() const { return m_activeJobIdHasBeenSet; }

    /**
     * <p> The ID of the active job for a branch of an Amplify app. </p>
     */
    inline void SetActiveJobId(const Aws::String& value) { m_activeJobIdHasBeenSet = true; m_activeJobId = value; }

    /**
     * <p> The ID of the active job for a branch of an Amplify app. </p>
     */
    inline void SetActiveJobId(Aws::String&& value) { m_activeJobIdHasBeenSet = true; m_activeJobId = std::move(value); }

    /**
     * <p> The ID of the active job for a branch of an Amplify app. </p>
     */
    inline void SetActiveJobId(const char* value) { m_activeJobIdHasBeenSet = true; m_activeJobId.assign(value); }

    /**
     * <p> The ID of the active job for a branch of an Amplify app. </p>
     */
    inline Branch& WithActiveJobId(const Aws::String& value) { SetActiveJobId(value); return *this;}

    /**
     * <p> The ID of the active job for a branch of an Amplify app. </p>
     */
    inline Branch& WithActiveJobId(Aws::String&& value) { SetActiveJobId(std::move(value)); return *this;}

    /**
     * <p> The ID of the active job for a branch of an Amplify app. </p>
     */
    inline Branch& WithActiveJobId(const char* value) { SetActiveJobId(value); return *this;}


    /**
     * <p> The total number of jobs that are part of an Amplify app. </p>
     */
    inline const Aws::String& GetTotalNumberOfJobs() const{ return m_totalNumberOfJobs; }

    /**
     * <p> The total number of jobs that are part of an Amplify app. </p>
     */
    inline bool TotalNumberOfJobsHasBeenSet() const { return m_totalNumberOfJobsHasBeenSet; }

    /**
     * <p> The total number of jobs that are part of an Amplify app. </p>
     */
    inline void SetTotalNumberOfJobs(const Aws::String& value) { m_totalNumberOfJobsHasBeenSet = true; m_totalNumberOfJobs = value; }

    /**
     * <p> The total number of jobs that are part of an Amplify app. </p>
     */
    inline void SetTotalNumberOfJobs(Aws::String&& value) { m_totalNumberOfJobsHasBeenSet = true; m_totalNumberOfJobs = std::move(value); }

    /**
     * <p> The total number of jobs that are part of an Amplify app. </p>
     */
    inline void SetTotalNumberOfJobs(const char* value) { m_totalNumberOfJobsHasBeenSet = true; m_totalNumberOfJobs.assign(value); }

    /**
     * <p> The total number of jobs that are part of an Amplify app. </p>
     */
    inline Branch& WithTotalNumberOfJobs(const Aws::String& value) { SetTotalNumberOfJobs(value); return *this;}

    /**
     * <p> The total number of jobs that are part of an Amplify app. </p>
     */
    inline Branch& WithTotalNumberOfJobs(Aws::String&& value) { SetTotalNumberOfJobs(std::move(value)); return *this;}

    /**
     * <p> The total number of jobs that are part of an Amplify app. </p>
     */
    inline Branch& WithTotalNumberOfJobs(const char* value) { SetTotalNumberOfJobs(value); return *this;}


    /**
     * <p> Enables basic authorization for a branch of an Amplify app. </p>
     */
    inline bool GetEnableBasicAuth() const{ return m_enableBasicAuth; }

    /**
     * <p> Enables basic authorization for a branch of an Amplify app. </p>
     */
    inline bool EnableBasicAuthHasBeenSet() const { return m_enableBasicAuthHasBeenSet; }

    /**
     * <p> Enables basic authorization for a branch of an Amplify app. </p>
     */
    inline void SetEnableBasicAuth(bool value) { m_enableBasicAuthHasBeenSet = true; m_enableBasicAuth = value; }

    /**
     * <p> Enables basic authorization for a branch of an Amplify app. </p>
     */
    inline Branch& WithEnableBasicAuth(bool value) { SetEnableBasicAuth(value); return *this;}


    /**
     * <p>Enables performance mode for the branch.</p> <p>Performance mode optimizes
     * for faster hosting performance by keeping content cached at the edge for a
     * longer interval. When performance mode is enabled, hosting configuration or code
     * changes can take up to 10 minutes to roll out. </p>
     */
    inline bool GetEnablePerformanceMode() const{ return m_enablePerformanceMode; }

    /**
     * <p>Enables performance mode for the branch.</p> <p>Performance mode optimizes
     * for faster hosting performance by keeping content cached at the edge for a
     * longer interval. When performance mode is enabled, hosting configuration or code
     * changes can take up to 10 minutes to roll out. </p>
     */
    inline bool EnablePerformanceModeHasBeenSet() const { return m_enablePerformanceModeHasBeenSet; }

    /**
     * <p>Enables performance mode for the branch.</p> <p>Performance mode optimizes
     * for faster hosting performance by keeping content cached at the edge for a
     * longer interval. When performance mode is enabled, hosting configuration or code
     * changes can take up to 10 minutes to roll out. </p>
     */
    inline void SetEnablePerformanceMode(bool value) { m_enablePerformanceModeHasBeenSet = true; m_enablePerformanceMode = value; }

    /**
     * <p>Enables performance mode for the branch.</p> <p>Performance mode optimizes
     * for faster hosting performance by keeping content cached at the edge for a
     * longer interval. When performance mode is enabled, hosting configuration or code
     * changes can take up to 10 minutes to roll out. </p>
     */
    inline Branch& WithEnablePerformanceMode(bool value) { SetEnablePerformanceMode(value); return *this;}


    /**
     * <p> The thumbnail URL for the branch of an Amplify app. </p>
     */
    inline const Aws::String& GetThumbnailUrl() const{ return m_thumbnailUrl; }

    /**
     * <p> The thumbnail URL for the branch of an Amplify app. </p>
     */
    inline bool ThumbnailUrlHasBeenSet() const { return m_thumbnailUrlHasBeenSet; }

    /**
     * <p> The thumbnail URL for the branch of an Amplify app. </p>
     */
    inline void SetThumbnailUrl(const Aws::String& value) { m_thumbnailUrlHasBeenSet = true; m_thumbnailUrl = value; }

    /**
     * <p> The thumbnail URL for the branch of an Amplify app. </p>
     */
    inline void SetThumbnailUrl(Aws::String&& value) { m_thumbnailUrlHasBeenSet = true; m_thumbnailUrl = std::move(value); }

    /**
     * <p> The thumbnail URL for the branch of an Amplify app. </p>
     */
    inline void SetThumbnailUrl(const char* value) { m_thumbnailUrlHasBeenSet = true; m_thumbnailUrl.assign(value); }

    /**
     * <p> The thumbnail URL for the branch of an Amplify app. </p>
     */
    inline Branch& WithThumbnailUrl(const Aws::String& value) { SetThumbnailUrl(value); return *this;}

    /**
     * <p> The thumbnail URL for the branch of an Amplify app. </p>
     */
    inline Branch& WithThumbnailUrl(Aws::String&& value) { SetThumbnailUrl(std::move(value)); return *this;}

    /**
     * <p> The thumbnail URL for the branch of an Amplify app. </p>
     */
    inline Branch& WithThumbnailUrl(const char* value) { SetThumbnailUrl(value); return *this;}


    /**
     * <p> The basic authorization credentials for a branch of an Amplify app. You must
     * base64-encode the authorization credentials and provide them in the format
     * <code>user:password</code>.</p>
     */
    inline const Aws::String& GetBasicAuthCredentials() const{ return m_basicAuthCredentials; }

    /**
     * <p> The basic authorization credentials for a branch of an Amplify app. You must
     * base64-encode the authorization credentials and provide them in the format
     * <code>user:password</code>.</p>
     */
    inline bool BasicAuthCredentialsHasBeenSet() const { return m_basicAuthCredentialsHasBeenSet; }

    /**
     * <p> The basic authorization credentials for a branch of an Amplify app. You must
     * base64-encode the authorization credentials and provide them in the format
     * <code>user:password</code>.</p>
     */
    inline void SetBasicAuthCredentials(const Aws::String& value) { m_basicAuthCredentialsHasBeenSet = true; m_basicAuthCredentials = value; }

    /**
     * <p> The basic authorization credentials for a branch of an Amplify app. You must
     * base64-encode the authorization credentials and provide them in the format
     * <code>user:password</code>.</p>
     */
    inline void SetBasicAuthCredentials(Aws::String&& value) { m_basicAuthCredentialsHasBeenSet = true; m_basicAuthCredentials = std::move(value); }

    /**
     * <p> The basic authorization credentials for a branch of an Amplify app. You must
     * base64-encode the authorization credentials and provide them in the format
     * <code>user:password</code>.</p>
     */
    inline void SetBasicAuthCredentials(const char* value) { m_basicAuthCredentialsHasBeenSet = true; m_basicAuthCredentials.assign(value); }

    /**
     * <p> The basic authorization credentials for a branch of an Amplify app. You must
     * base64-encode the authorization credentials and provide them in the format
     * <code>user:password</code>.</p>
     */
    inline Branch& WithBasicAuthCredentials(const Aws::String& value) { SetBasicAuthCredentials(value); return *this;}

    /**
     * <p> The basic authorization credentials for a branch of an Amplify app. You must
     * base64-encode the authorization credentials and provide them in the format
     * <code>user:password</code>.</p>
     */
    inline Branch& WithBasicAuthCredentials(Aws::String&& value) { SetBasicAuthCredentials(std::move(value)); return *this;}

    /**
     * <p> The basic authorization credentials for a branch of an Amplify app. You must
     * base64-encode the authorization credentials and provide them in the format
     * <code>user:password</code>.</p>
     */
    inline Branch& WithBasicAuthCredentials(const char* value) { SetBasicAuthCredentials(value); return *this;}


    /**
     * <p> The build specification (build spec) content for the branch of an Amplify
     * app. </p>
     */
    inline const Aws::String& GetBuildSpec() const{ return m_buildSpec; }

    /**
     * <p> The build specification (build spec) content for the branch of an Amplify
     * app. </p>
     */
    inline bool BuildSpecHasBeenSet() const { return m_buildSpecHasBeenSet; }

    /**
     * <p> The build specification (build spec) content for the branch of an Amplify
     * app. </p>
     */
    inline void SetBuildSpec(const Aws::String& value) { m_buildSpecHasBeenSet = true; m_buildSpec = value; }

    /**
     * <p> The build specification (build spec) content for the branch of an Amplify
     * app. </p>
     */
    inline void SetBuildSpec(Aws::String&& value) { m_buildSpecHasBeenSet = true; m_buildSpec = std::move(value); }

    /**
     * <p> The build specification (build spec) content for the branch of an Amplify
     * app. </p>
     */
    inline void SetBuildSpec(const char* value) { m_buildSpecHasBeenSet = true; m_buildSpec.assign(value); }

    /**
     * <p> The build specification (build spec) content for the branch of an Amplify
     * app. </p>
     */
    inline Branch& WithBuildSpec(const Aws::String& value) { SetBuildSpec(value); return *this;}

    /**
     * <p> The build specification (build spec) content for the branch of an Amplify
     * app. </p>
     */
    inline Branch& WithBuildSpec(Aws::String&& value) { SetBuildSpec(std::move(value)); return *this;}

    /**
     * <p> The build specification (build spec) content for the branch of an Amplify
     * app. </p>
     */
    inline Branch& WithBuildSpec(const char* value) { SetBuildSpec(value); return *this;}


    /**
     * <p> The content Time to Live (TTL) for the website in seconds. </p>
     */
    inline const Aws::String& GetTtl() const{ return m_ttl; }

    /**
     * <p> The content Time to Live (TTL) for the website in seconds. </p>
     */
    inline bool TtlHasBeenSet() const { return m_ttlHasBeenSet; }

    /**
     * <p> The content Time to Live (TTL) for the website in seconds. </p>
     */
    inline void SetTtl(const Aws::String& value) { m_ttlHasBeenSet = true; m_ttl = value; }

    /**
     * <p> The content Time to Live (TTL) for the website in seconds. </p>
     */
    inline void SetTtl(Aws::String&& value) { m_ttlHasBeenSet = true; m_ttl = std::move(value); }

    /**
     * <p> The content Time to Live (TTL) for the website in seconds. </p>
     */
    inline void SetTtl(const char* value) { m_ttlHasBeenSet = true; m_ttl.assign(value); }

    /**
     * <p> The content Time to Live (TTL) for the website in seconds. </p>
     */
    inline Branch& WithTtl(const Aws::String& value) { SetTtl(value); return *this;}

    /**
     * <p> The content Time to Live (TTL) for the website in seconds. </p>
     */
    inline Branch& WithTtl(Aws::String&& value) { SetTtl(std::move(value)); return *this;}

    /**
     * <p> The content Time to Live (TTL) for the website in seconds. </p>
     */
    inline Branch& WithTtl(const char* value) { SetTtl(value); return *this;}


    /**
     * <p> A list of custom resources that are linked to this branch. </p>
     */
    inline const Aws::Vector<Aws::String>& GetAssociatedResources() const{ return m_associatedResources; }

    /**
     * <p> A list of custom resources that are linked to this branch. </p>
     */
    inline bool AssociatedResourcesHasBeenSet() const { return m_associatedResourcesHasBeenSet; }

    /**
     * <p> A list of custom resources that are linked to this branch. </p>
     */
    inline void SetAssociatedResources(const Aws::Vector<Aws::String>& value) { m_associatedResourcesHasBeenSet = true; m_associatedResources = value; }

    /**
     * <p> A list of custom resources that are linked to this branch. </p>
     */
    inline void SetAssociatedResources(Aws::Vector<Aws::String>&& value) { m_associatedResourcesHasBeenSet = true; m_associatedResources = std::move(value); }

    /**
     * <p> A list of custom resources that are linked to this branch. </p>
     */
    inline Branch& WithAssociatedResources(const Aws::Vector<Aws::String>& value) { SetAssociatedResources(value); return *this;}

    /**
     * <p> A list of custom resources that are linked to this branch. </p>
     */
    inline Branch& WithAssociatedResources(Aws::Vector<Aws::String>&& value) { SetAssociatedResources(std::move(value)); return *this;}

    /**
     * <p> A list of custom resources that are linked to this branch. </p>
     */
    inline Branch& AddAssociatedResources(const Aws::String& value) { m_associatedResourcesHasBeenSet = true; m_associatedResources.push_back(value); return *this; }

    /**
     * <p> A list of custom resources that are linked to this branch. </p>
     */
    inline Branch& AddAssociatedResources(Aws::String&& value) { m_associatedResourcesHasBeenSet = true; m_associatedResources.push_back(std::move(value)); return *this; }

    /**
     * <p> A list of custom resources that are linked to this branch. </p>
     */
    inline Branch& AddAssociatedResources(const char* value) { m_associatedResourcesHasBeenSet = true; m_associatedResources.push_back(value); return *this; }


    /**
     * <p> Enables pull request previews for the branch. </p>
     */
    inline bool GetEnablePullRequestPreview() const{ return m_enablePullRequestPreview; }

    /**
     * <p> Enables pull request previews for the branch. </p>
     */
    inline bool EnablePullRequestPreviewHasBeenSet() const { return m_enablePullRequestPreviewHasBeenSet; }

    /**
     * <p> Enables pull request previews for the branch. </p>
     */
    inline void SetEnablePullRequestPreview(bool value) { m_enablePullRequestPreviewHasBeenSet = true; m_enablePullRequestPreview = value; }

    /**
     * <p> Enables pull request previews for the branch. </p>
     */
    inline Branch& WithEnablePullRequestPreview(bool value) { SetEnablePullRequestPreview(value); return *this;}


    /**
     * <p> The Amplify environment name for the pull request. </p>
     */
    inline const Aws::String& GetPullRequestEnvironmentName() const{ return m_pullRequestEnvironmentName; }

    /**
     * <p> The Amplify environment name for the pull request. </p>
     */
    inline bool PullRequestEnvironmentNameHasBeenSet() const { return m_pullRequestEnvironmentNameHasBeenSet; }

    /**
     * <p> The Amplify environment name for the pull request. </p>
     */
    inline void SetPullRequestEnvironmentName(const Aws::String& value) { m_pullRequestEnvironmentNameHasBeenSet = true; m_pullRequestEnvironmentName = value; }

    /**
     * <p> The Amplify environment name for the pull request. </p>
     */
    inline void SetPullRequestEnvironmentName(Aws::String&& value) { m_pullRequestEnvironmentNameHasBeenSet = true; m_pullRequestEnvironmentName = std::move(value); }

    /**
     * <p> The Amplify environment name for the pull request. </p>
     */
    inline void SetPullRequestEnvironmentName(const char* value) { m_pullRequestEnvironmentNameHasBeenSet = true; m_pullRequestEnvironmentName.assign(value); }

    /**
     * <p> The Amplify environment name for the pull request. </p>
     */
    inline Branch& WithPullRequestEnvironmentName(const Aws::String& value) { SetPullRequestEnvironmentName(value); return *this;}

    /**
     * <p> The Amplify environment name for the pull request. </p>
     */
    inline Branch& WithPullRequestEnvironmentName(Aws::String&& value) { SetPullRequestEnvironmentName(std::move(value)); return *this;}

    /**
     * <p> The Amplify environment name for the pull request. </p>
     */
    inline Branch& WithPullRequestEnvironmentName(const char* value) { SetPullRequestEnvironmentName(value); return *this;}


    /**
     * <p> The destination branch if the branch is a pull request branch. </p>
     */
    inline const Aws::String& GetDestinationBranch() const{ return m_destinationBranch; }

    /**
     * <p> The destination branch if the branch is a pull request branch. </p>
     */
    inline bool DestinationBranchHasBeenSet() const { return m_destinationBranchHasBeenSet; }

    /**
     * <p> The destination branch if the branch is a pull request branch. </p>
     */
    inline void SetDestinationBranch(const Aws::String& value) { m_destinationBranchHasBeenSet = true; m_destinationBranch = value; }

    /**
     * <p> The destination branch if the branch is a pull request branch. </p>
     */
    inline void SetDestinationBranch(Aws::String&& value) { m_destinationBranchHasBeenSet = true; m_destinationBranch = std::move(value); }

    /**
     * <p> The destination branch if the branch is a pull request branch. </p>
     */
    inline void SetDestinationBranch(const char* value) { m_destinationBranchHasBeenSet = true; m_destinationBranch.assign(value); }

    /**
     * <p> The destination branch if the branch is a pull request branch. </p>
     */
    inline Branch& WithDestinationBranch(const Aws::String& value) { SetDestinationBranch(value); return *this;}

    /**
     * <p> The destination branch if the branch is a pull request branch. </p>
     */
    inline Branch& WithDestinationBranch(Aws::String&& value) { SetDestinationBranch(std::move(value)); return *this;}

    /**
     * <p> The destination branch if the branch is a pull request branch. </p>
     */
    inline Branch& WithDestinationBranch(const char* value) { SetDestinationBranch(value); return *this;}


    /**
     * <p> The source branch if the branch is a pull request branch. </p>
     */
    inline const Aws::String& GetSourceBranch() const{ return m_sourceBranch; }

    /**
     * <p> The source branch if the branch is a pull request branch. </p>
     */
    inline bool SourceBranchHasBeenSet() const { return m_sourceBranchHasBeenSet; }

    /**
     * <p> The source branch if the branch is a pull request branch. </p>
     */
    inline void SetSourceBranch(const Aws::String& value) { m_sourceBranchHasBeenSet = true; m_sourceBranch = value; }

    /**
     * <p> The source branch if the branch is a pull request branch. </p>
     */
    inline void SetSourceBranch(Aws::String&& value) { m_sourceBranchHasBeenSet = true; m_sourceBranch = std::move(value); }

    /**
     * <p> The source branch if the branch is a pull request branch. </p>
     */
    inline void SetSourceBranch(const char* value) { m_sourceBranchHasBeenSet = true; m_sourceBranch.assign(value); }

    /**
     * <p> The source branch if the branch is a pull request branch. </p>
     */
    inline Branch& WithSourceBranch(const Aws::String& value) { SetSourceBranch(value); return *this;}

    /**
     * <p> The source branch if the branch is a pull request branch. </p>
     */
    inline Branch& WithSourceBranch(Aws::String&& value) { SetSourceBranch(std::move(value)); return *this;}

    /**
     * <p> The source branch if the branch is a pull request branch. </p>
     */
    inline Branch& WithSourceBranch(const char* value) { SetSourceBranch(value); return *this;}


    /**
     * <p> The Amazon Resource Name (ARN) for a backend environment that is part of an
     * Amplify app. </p>
     */
    inline const Aws::String& GetBackendEnvironmentArn() const{ return m_backendEnvironmentArn; }

    /**
     * <p> The Amazon Resource Name (ARN) for a backend environment that is part of an
     * Amplify app. </p>
     */
    inline bool BackendEnvironmentArnHasBeenSet() const { return m_backendEnvironmentArnHasBeenSet; }

    /**
     * <p> The Amazon Resource Name (ARN) for a backend environment that is part of an
     * Amplify app. </p>
     */
    inline void SetBackendEnvironmentArn(const Aws::String& value) { m_backendEnvironmentArnHasBeenSet = true; m_backendEnvironmentArn = value; }

    /**
     * <p> The Amazon Resource Name (ARN) for a backend environment that is part of an
     * Amplify app. </p>
     */
    inline void SetBackendEnvironmentArn(Aws::String&& value) { m_backendEnvironmentArnHasBeenSet = true; m_backendEnvironmentArn = std::move(value); }

    /**
     * <p> The Amazon Resource Name (ARN) for a backend environment that is part of an
     * Amplify app. </p>
     */
    inline void SetBackendEnvironmentArn(const char* value) { m_backendEnvironmentArnHasBeenSet = true; m_backendEnvironmentArn.assign(value); }

    /**
     * <p> The Amazon Resource Name (ARN) for a backend environment that is part of an
     * Amplify app. </p>
     */
    inline Branch& WithBackendEnvironmentArn(const Aws::String& value) { SetBackendEnvironmentArn(value); return *this;}

    /**
     * <p> The Amazon Resource Name (ARN) for a backend environment that is part of an
     * Amplify app. </p>
     */
    inline Branch& WithBackendEnvironmentArn(Aws::String&& value) { SetBackendEnvironmentArn(std::move(value)); return *this;}

    /**
     * <p> The Amazon Resource Name (ARN) for a backend environment that is part of an
     * Amplify app. </p>
     */
    inline Branch& WithBackendEnvironmentArn(const char* value) { SetBackendEnvironmentArn(value); return *this;}

  private:

    Aws::String m_branchArn;
    bool m_branchArnHasBeenSet = false;

    Aws::String m_branchName;
    bool m_branchNameHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet = false;

    Stage m_stage;
    bool m_stageHasBeenSet = false;

    Aws::String m_displayName;
    bool m_displayNameHasBeenSet = false;

    bool m_enableNotification;
    bool m_enableNotificationHasBeenSet = false;

    Aws::Utils::DateTime m_createTime;
    bool m_createTimeHasBeenSet = false;

    Aws::Utils::DateTime m_updateTime;
    bool m_updateTimeHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_environmentVariables;
    bool m_environmentVariablesHasBeenSet = false;

    bool m_enableAutoBuild;
    bool m_enableAutoBuildHasBeenSet = false;

    Aws::Vector<Aws::String> m_customDomains;
    bool m_customDomainsHasBeenSet = false;

    Aws::String m_framework;
    bool m_frameworkHasBeenSet = false;

    Aws::String m_activeJobId;
    bool m_activeJobIdHasBeenSet = false;

    Aws::String m_totalNumberOfJobs;
    bool m_totalNumberOfJobsHasBeenSet = false;

    bool m_enableBasicAuth;
    bool m_enableBasicAuthHasBeenSet = false;

    bool m_enablePerformanceMode;
    bool m_enablePerformanceModeHasBeenSet = false;

    Aws::String m_thumbnailUrl;
    bool m_thumbnailUrlHasBeenSet = false;

    Aws::String m_basicAuthCredentials;
    bool m_basicAuthCredentialsHasBeenSet = false;

    Aws::String m_buildSpec;
    bool m_buildSpecHasBeenSet = false;

    Aws::String m_ttl;
    bool m_ttlHasBeenSet = false;

    Aws::Vector<Aws::String> m_associatedResources;
    bool m_associatedResourcesHasBeenSet = false;

    bool m_enablePullRequestPreview;
    bool m_enablePullRequestPreviewHasBeenSet = false;

    Aws::String m_pullRequestEnvironmentName;
    bool m_pullRequestEnvironmentNameHasBeenSet = false;

    Aws::String m_destinationBranch;
    bool m_destinationBranchHasBeenSet = false;

    Aws::String m_sourceBranch;
    bool m_sourceBranchHasBeenSet = false;

    Aws::String m_backendEnvironmentArn;
    bool m_backendEnvironmentArnHasBeenSet = false;
  };

} // namespace Model
} // namespace Amplify
} // namespace Aws
