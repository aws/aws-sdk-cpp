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
#include <aws/amplify/model/Backend.h>
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


    ///@{
    /**
     * <p> The Amazon Resource Name (ARN) for a branch that is part of an Amplify app.
     * </p>
     */
    inline const Aws::String& GetBranchArn() const{ return m_branchArn; }
    inline bool BranchArnHasBeenSet() const { return m_branchArnHasBeenSet; }
    inline void SetBranchArn(const Aws::String& value) { m_branchArnHasBeenSet = true; m_branchArn = value; }
    inline void SetBranchArn(Aws::String&& value) { m_branchArnHasBeenSet = true; m_branchArn = std::move(value); }
    inline void SetBranchArn(const char* value) { m_branchArnHasBeenSet = true; m_branchArn.assign(value); }
    inline Branch& WithBranchArn(const Aws::String& value) { SetBranchArn(value); return *this;}
    inline Branch& WithBranchArn(Aws::String&& value) { SetBranchArn(std::move(value)); return *this;}
    inline Branch& WithBranchArn(const char* value) { SetBranchArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The name for the branch that is part of an Amplify app. </p>
     */
    inline const Aws::String& GetBranchName() const{ return m_branchName; }
    inline bool BranchNameHasBeenSet() const { return m_branchNameHasBeenSet; }
    inline void SetBranchName(const Aws::String& value) { m_branchNameHasBeenSet = true; m_branchName = value; }
    inline void SetBranchName(Aws::String&& value) { m_branchNameHasBeenSet = true; m_branchName = std::move(value); }
    inline void SetBranchName(const char* value) { m_branchNameHasBeenSet = true; m_branchName.assign(value); }
    inline Branch& WithBranchName(const Aws::String& value) { SetBranchName(value); return *this;}
    inline Branch& WithBranchName(Aws::String&& value) { SetBranchName(std::move(value)); return *this;}
    inline Branch& WithBranchName(const char* value) { SetBranchName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The description for the branch that is part of an Amplify app. </p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }
    inline Branch& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline Branch& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline Branch& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The tag for the branch of an Amplify app. </p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tagsHasBeenSet = true; m_tags = value; }
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }
    inline Branch& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}
    inline Branch& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}
    inline Branch& AddTags(const Aws::String& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }
    inline Branch& AddTags(Aws::String&& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }
    inline Branch& AddTags(const Aws::String& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }
    inline Branch& AddTags(Aws::String&& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), std::move(value)); return *this; }
    inline Branch& AddTags(const char* key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }
    inline Branch& AddTags(Aws::String&& key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }
    inline Branch& AddTags(const char* key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }
    ///@}

    ///@{
    /**
     * <p> The current stage for the branch that is part of an Amplify app. </p>
     */
    inline const Stage& GetStage() const{ return m_stage; }
    inline bool StageHasBeenSet() const { return m_stageHasBeenSet; }
    inline void SetStage(const Stage& value) { m_stageHasBeenSet = true; m_stage = value; }
    inline void SetStage(Stage&& value) { m_stageHasBeenSet = true; m_stage = std::move(value); }
    inline Branch& WithStage(const Stage& value) { SetStage(value); return *this;}
    inline Branch& WithStage(Stage&& value) { SetStage(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The display name for the branch. This is used as the default domain prefix.
     * </p>
     */
    inline const Aws::String& GetDisplayName() const{ return m_displayName; }
    inline bool DisplayNameHasBeenSet() const { return m_displayNameHasBeenSet; }
    inline void SetDisplayName(const Aws::String& value) { m_displayNameHasBeenSet = true; m_displayName = value; }
    inline void SetDisplayName(Aws::String&& value) { m_displayNameHasBeenSet = true; m_displayName = std::move(value); }
    inline void SetDisplayName(const char* value) { m_displayNameHasBeenSet = true; m_displayName.assign(value); }
    inline Branch& WithDisplayName(const Aws::String& value) { SetDisplayName(value); return *this;}
    inline Branch& WithDisplayName(Aws::String&& value) { SetDisplayName(std::move(value)); return *this;}
    inline Branch& WithDisplayName(const char* value) { SetDisplayName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> Enables notifications for a branch that is part of an Amplify app. </p>
     */
    inline bool GetEnableNotification() const{ return m_enableNotification; }
    inline bool EnableNotificationHasBeenSet() const { return m_enableNotificationHasBeenSet; }
    inline void SetEnableNotification(bool value) { m_enableNotificationHasBeenSet = true; m_enableNotification = value; }
    inline Branch& WithEnableNotification(bool value) { SetEnableNotification(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A timestamp of when Amplify created the branch.</p>
     */
    inline const Aws::Utils::DateTime& GetCreateTime() const{ return m_createTime; }
    inline bool CreateTimeHasBeenSet() const { return m_createTimeHasBeenSet; }
    inline void SetCreateTime(const Aws::Utils::DateTime& value) { m_createTimeHasBeenSet = true; m_createTime = value; }
    inline void SetCreateTime(Aws::Utils::DateTime&& value) { m_createTimeHasBeenSet = true; m_createTime = std::move(value); }
    inline Branch& WithCreateTime(const Aws::Utils::DateTime& value) { SetCreateTime(value); return *this;}
    inline Branch& WithCreateTime(Aws::Utils::DateTime&& value) { SetCreateTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A timestamp for the last updated time for a branch.</p>
     */
    inline const Aws::Utils::DateTime& GetUpdateTime() const{ return m_updateTime; }
    inline bool UpdateTimeHasBeenSet() const { return m_updateTimeHasBeenSet; }
    inline void SetUpdateTime(const Aws::Utils::DateTime& value) { m_updateTimeHasBeenSet = true; m_updateTime = value; }
    inline void SetUpdateTime(Aws::Utils::DateTime&& value) { m_updateTimeHasBeenSet = true; m_updateTime = std::move(value); }
    inline Branch& WithUpdateTime(const Aws::Utils::DateTime& value) { SetUpdateTime(value); return *this;}
    inline Branch& WithUpdateTime(Aws::Utils::DateTime&& value) { SetUpdateTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The environment variables specific to a branch of an Amplify app. </p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetEnvironmentVariables() const{ return m_environmentVariables; }
    inline bool EnvironmentVariablesHasBeenSet() const { return m_environmentVariablesHasBeenSet; }
    inline void SetEnvironmentVariables(const Aws::Map<Aws::String, Aws::String>& value) { m_environmentVariablesHasBeenSet = true; m_environmentVariables = value; }
    inline void SetEnvironmentVariables(Aws::Map<Aws::String, Aws::String>&& value) { m_environmentVariablesHasBeenSet = true; m_environmentVariables = std::move(value); }
    inline Branch& WithEnvironmentVariables(const Aws::Map<Aws::String, Aws::String>& value) { SetEnvironmentVariables(value); return *this;}
    inline Branch& WithEnvironmentVariables(Aws::Map<Aws::String, Aws::String>&& value) { SetEnvironmentVariables(std::move(value)); return *this;}
    inline Branch& AddEnvironmentVariables(const Aws::String& key, const Aws::String& value) { m_environmentVariablesHasBeenSet = true; m_environmentVariables.emplace(key, value); return *this; }
    inline Branch& AddEnvironmentVariables(Aws::String&& key, const Aws::String& value) { m_environmentVariablesHasBeenSet = true; m_environmentVariables.emplace(std::move(key), value); return *this; }
    inline Branch& AddEnvironmentVariables(const Aws::String& key, Aws::String&& value) { m_environmentVariablesHasBeenSet = true; m_environmentVariables.emplace(key, std::move(value)); return *this; }
    inline Branch& AddEnvironmentVariables(Aws::String&& key, Aws::String&& value) { m_environmentVariablesHasBeenSet = true; m_environmentVariables.emplace(std::move(key), std::move(value)); return *this; }
    inline Branch& AddEnvironmentVariables(const char* key, Aws::String&& value) { m_environmentVariablesHasBeenSet = true; m_environmentVariables.emplace(key, std::move(value)); return *this; }
    inline Branch& AddEnvironmentVariables(Aws::String&& key, const char* value) { m_environmentVariablesHasBeenSet = true; m_environmentVariables.emplace(std::move(key), value); return *this; }
    inline Branch& AddEnvironmentVariables(const char* key, const char* value) { m_environmentVariablesHasBeenSet = true; m_environmentVariables.emplace(key, value); return *this; }
    ///@}

    ///@{
    /**
     * <p> Enables auto-building on push for a branch of an Amplify app. </p>
     */
    inline bool GetEnableAutoBuild() const{ return m_enableAutoBuild; }
    inline bool EnableAutoBuildHasBeenSet() const { return m_enableAutoBuildHasBeenSet; }
    inline void SetEnableAutoBuild(bool value) { m_enableAutoBuildHasBeenSet = true; m_enableAutoBuild = value; }
    inline Branch& WithEnableAutoBuild(bool value) { SetEnableAutoBuild(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The custom domains for a branch of an Amplify app. </p>
     */
    inline const Aws::Vector<Aws::String>& GetCustomDomains() const{ return m_customDomains; }
    inline bool CustomDomainsHasBeenSet() const { return m_customDomainsHasBeenSet; }
    inline void SetCustomDomains(const Aws::Vector<Aws::String>& value) { m_customDomainsHasBeenSet = true; m_customDomains = value; }
    inline void SetCustomDomains(Aws::Vector<Aws::String>&& value) { m_customDomainsHasBeenSet = true; m_customDomains = std::move(value); }
    inline Branch& WithCustomDomains(const Aws::Vector<Aws::String>& value) { SetCustomDomains(value); return *this;}
    inline Branch& WithCustomDomains(Aws::Vector<Aws::String>&& value) { SetCustomDomains(std::move(value)); return *this;}
    inline Branch& AddCustomDomains(const Aws::String& value) { m_customDomainsHasBeenSet = true; m_customDomains.push_back(value); return *this; }
    inline Branch& AddCustomDomains(Aws::String&& value) { m_customDomainsHasBeenSet = true; m_customDomains.push_back(std::move(value)); return *this; }
    inline Branch& AddCustomDomains(const char* value) { m_customDomainsHasBeenSet = true; m_customDomains.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p> The framework for a branch of an Amplify app. </p>
     */
    inline const Aws::String& GetFramework() const{ return m_framework; }
    inline bool FrameworkHasBeenSet() const { return m_frameworkHasBeenSet; }
    inline void SetFramework(const Aws::String& value) { m_frameworkHasBeenSet = true; m_framework = value; }
    inline void SetFramework(Aws::String&& value) { m_frameworkHasBeenSet = true; m_framework = std::move(value); }
    inline void SetFramework(const char* value) { m_frameworkHasBeenSet = true; m_framework.assign(value); }
    inline Branch& WithFramework(const Aws::String& value) { SetFramework(value); return *this;}
    inline Branch& WithFramework(Aws::String&& value) { SetFramework(std::move(value)); return *this;}
    inline Branch& WithFramework(const char* value) { SetFramework(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The ID of the active job for a branch of an Amplify app. </p>
     */
    inline const Aws::String& GetActiveJobId() const{ return m_activeJobId; }
    inline bool ActiveJobIdHasBeenSet() const { return m_activeJobIdHasBeenSet; }
    inline void SetActiveJobId(const Aws::String& value) { m_activeJobIdHasBeenSet = true; m_activeJobId = value; }
    inline void SetActiveJobId(Aws::String&& value) { m_activeJobIdHasBeenSet = true; m_activeJobId = std::move(value); }
    inline void SetActiveJobId(const char* value) { m_activeJobIdHasBeenSet = true; m_activeJobId.assign(value); }
    inline Branch& WithActiveJobId(const Aws::String& value) { SetActiveJobId(value); return *this;}
    inline Branch& WithActiveJobId(Aws::String&& value) { SetActiveJobId(std::move(value)); return *this;}
    inline Branch& WithActiveJobId(const char* value) { SetActiveJobId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The total number of jobs that are part of an Amplify app. </p>
     */
    inline const Aws::String& GetTotalNumberOfJobs() const{ return m_totalNumberOfJobs; }
    inline bool TotalNumberOfJobsHasBeenSet() const { return m_totalNumberOfJobsHasBeenSet; }
    inline void SetTotalNumberOfJobs(const Aws::String& value) { m_totalNumberOfJobsHasBeenSet = true; m_totalNumberOfJobs = value; }
    inline void SetTotalNumberOfJobs(Aws::String&& value) { m_totalNumberOfJobsHasBeenSet = true; m_totalNumberOfJobs = std::move(value); }
    inline void SetTotalNumberOfJobs(const char* value) { m_totalNumberOfJobsHasBeenSet = true; m_totalNumberOfJobs.assign(value); }
    inline Branch& WithTotalNumberOfJobs(const Aws::String& value) { SetTotalNumberOfJobs(value); return *this;}
    inline Branch& WithTotalNumberOfJobs(Aws::String&& value) { SetTotalNumberOfJobs(std::move(value)); return *this;}
    inline Branch& WithTotalNumberOfJobs(const char* value) { SetTotalNumberOfJobs(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> Enables basic authorization for a branch of an Amplify app. </p>
     */
    inline bool GetEnableBasicAuth() const{ return m_enableBasicAuth; }
    inline bool EnableBasicAuthHasBeenSet() const { return m_enableBasicAuthHasBeenSet; }
    inline void SetEnableBasicAuth(bool value) { m_enableBasicAuthHasBeenSet = true; m_enableBasicAuth = value; }
    inline Branch& WithEnableBasicAuth(bool value) { SetEnableBasicAuth(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Enables performance mode for the branch.</p> <p>Performance mode optimizes
     * for faster hosting performance by keeping content cached at the edge for a
     * longer interval. When performance mode is enabled, hosting configuration or code
     * changes can take up to 10 minutes to roll out. </p>
     */
    inline bool GetEnablePerformanceMode() const{ return m_enablePerformanceMode; }
    inline bool EnablePerformanceModeHasBeenSet() const { return m_enablePerformanceModeHasBeenSet; }
    inline void SetEnablePerformanceMode(bool value) { m_enablePerformanceModeHasBeenSet = true; m_enablePerformanceMode = value; }
    inline Branch& WithEnablePerformanceMode(bool value) { SetEnablePerformanceMode(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The thumbnail URL for the branch of an Amplify app. </p>
     */
    inline const Aws::String& GetThumbnailUrl() const{ return m_thumbnailUrl; }
    inline bool ThumbnailUrlHasBeenSet() const { return m_thumbnailUrlHasBeenSet; }
    inline void SetThumbnailUrl(const Aws::String& value) { m_thumbnailUrlHasBeenSet = true; m_thumbnailUrl = value; }
    inline void SetThumbnailUrl(Aws::String&& value) { m_thumbnailUrlHasBeenSet = true; m_thumbnailUrl = std::move(value); }
    inline void SetThumbnailUrl(const char* value) { m_thumbnailUrlHasBeenSet = true; m_thumbnailUrl.assign(value); }
    inline Branch& WithThumbnailUrl(const Aws::String& value) { SetThumbnailUrl(value); return *this;}
    inline Branch& WithThumbnailUrl(Aws::String&& value) { SetThumbnailUrl(std::move(value)); return *this;}
    inline Branch& WithThumbnailUrl(const char* value) { SetThumbnailUrl(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The basic authorization credentials for a branch of an Amplify app. You must
     * base64-encode the authorization credentials and provide them in the format
     * <code>user:password</code>.</p>
     */
    inline const Aws::String& GetBasicAuthCredentials() const{ return m_basicAuthCredentials; }
    inline bool BasicAuthCredentialsHasBeenSet() const { return m_basicAuthCredentialsHasBeenSet; }
    inline void SetBasicAuthCredentials(const Aws::String& value) { m_basicAuthCredentialsHasBeenSet = true; m_basicAuthCredentials = value; }
    inline void SetBasicAuthCredentials(Aws::String&& value) { m_basicAuthCredentialsHasBeenSet = true; m_basicAuthCredentials = std::move(value); }
    inline void SetBasicAuthCredentials(const char* value) { m_basicAuthCredentialsHasBeenSet = true; m_basicAuthCredentials.assign(value); }
    inline Branch& WithBasicAuthCredentials(const Aws::String& value) { SetBasicAuthCredentials(value); return *this;}
    inline Branch& WithBasicAuthCredentials(Aws::String&& value) { SetBasicAuthCredentials(std::move(value)); return *this;}
    inline Branch& WithBasicAuthCredentials(const char* value) { SetBasicAuthCredentials(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The build specification (build spec) content for the branch of an Amplify
     * app. </p>
     */
    inline const Aws::String& GetBuildSpec() const{ return m_buildSpec; }
    inline bool BuildSpecHasBeenSet() const { return m_buildSpecHasBeenSet; }
    inline void SetBuildSpec(const Aws::String& value) { m_buildSpecHasBeenSet = true; m_buildSpec = value; }
    inline void SetBuildSpec(Aws::String&& value) { m_buildSpecHasBeenSet = true; m_buildSpec = std::move(value); }
    inline void SetBuildSpec(const char* value) { m_buildSpecHasBeenSet = true; m_buildSpec.assign(value); }
    inline Branch& WithBuildSpec(const Aws::String& value) { SetBuildSpec(value); return *this;}
    inline Branch& WithBuildSpec(Aws::String&& value) { SetBuildSpec(std::move(value)); return *this;}
    inline Branch& WithBuildSpec(const char* value) { SetBuildSpec(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The content Time to Live (TTL) for the website in seconds. </p>
     */
    inline const Aws::String& GetTtl() const{ return m_ttl; }
    inline bool TtlHasBeenSet() const { return m_ttlHasBeenSet; }
    inline void SetTtl(const Aws::String& value) { m_ttlHasBeenSet = true; m_ttl = value; }
    inline void SetTtl(Aws::String&& value) { m_ttlHasBeenSet = true; m_ttl = std::move(value); }
    inline void SetTtl(const char* value) { m_ttlHasBeenSet = true; m_ttl.assign(value); }
    inline Branch& WithTtl(const Aws::String& value) { SetTtl(value); return *this;}
    inline Branch& WithTtl(Aws::String&& value) { SetTtl(std::move(value)); return *this;}
    inline Branch& WithTtl(const char* value) { SetTtl(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> A list of custom resources that are linked to this branch. </p>
     */
    inline const Aws::Vector<Aws::String>& GetAssociatedResources() const{ return m_associatedResources; }
    inline bool AssociatedResourcesHasBeenSet() const { return m_associatedResourcesHasBeenSet; }
    inline void SetAssociatedResources(const Aws::Vector<Aws::String>& value) { m_associatedResourcesHasBeenSet = true; m_associatedResources = value; }
    inline void SetAssociatedResources(Aws::Vector<Aws::String>&& value) { m_associatedResourcesHasBeenSet = true; m_associatedResources = std::move(value); }
    inline Branch& WithAssociatedResources(const Aws::Vector<Aws::String>& value) { SetAssociatedResources(value); return *this;}
    inline Branch& WithAssociatedResources(Aws::Vector<Aws::String>&& value) { SetAssociatedResources(std::move(value)); return *this;}
    inline Branch& AddAssociatedResources(const Aws::String& value) { m_associatedResourcesHasBeenSet = true; m_associatedResources.push_back(value); return *this; }
    inline Branch& AddAssociatedResources(Aws::String&& value) { m_associatedResourcesHasBeenSet = true; m_associatedResources.push_back(std::move(value)); return *this; }
    inline Branch& AddAssociatedResources(const char* value) { m_associatedResourcesHasBeenSet = true; m_associatedResources.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p> Enables pull request previews for the branch. </p>
     */
    inline bool GetEnablePullRequestPreview() const{ return m_enablePullRequestPreview; }
    inline bool EnablePullRequestPreviewHasBeenSet() const { return m_enablePullRequestPreviewHasBeenSet; }
    inline void SetEnablePullRequestPreview(bool value) { m_enablePullRequestPreviewHasBeenSet = true; m_enablePullRequestPreview = value; }
    inline Branch& WithEnablePullRequestPreview(bool value) { SetEnablePullRequestPreview(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The Amplify environment name for the pull request. </p>
     */
    inline const Aws::String& GetPullRequestEnvironmentName() const{ return m_pullRequestEnvironmentName; }
    inline bool PullRequestEnvironmentNameHasBeenSet() const { return m_pullRequestEnvironmentNameHasBeenSet; }
    inline void SetPullRequestEnvironmentName(const Aws::String& value) { m_pullRequestEnvironmentNameHasBeenSet = true; m_pullRequestEnvironmentName = value; }
    inline void SetPullRequestEnvironmentName(Aws::String&& value) { m_pullRequestEnvironmentNameHasBeenSet = true; m_pullRequestEnvironmentName = std::move(value); }
    inline void SetPullRequestEnvironmentName(const char* value) { m_pullRequestEnvironmentNameHasBeenSet = true; m_pullRequestEnvironmentName.assign(value); }
    inline Branch& WithPullRequestEnvironmentName(const Aws::String& value) { SetPullRequestEnvironmentName(value); return *this;}
    inline Branch& WithPullRequestEnvironmentName(Aws::String&& value) { SetPullRequestEnvironmentName(std::move(value)); return *this;}
    inline Branch& WithPullRequestEnvironmentName(const char* value) { SetPullRequestEnvironmentName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The destination branch if the branch is a pull request branch. </p>
     */
    inline const Aws::String& GetDestinationBranch() const{ return m_destinationBranch; }
    inline bool DestinationBranchHasBeenSet() const { return m_destinationBranchHasBeenSet; }
    inline void SetDestinationBranch(const Aws::String& value) { m_destinationBranchHasBeenSet = true; m_destinationBranch = value; }
    inline void SetDestinationBranch(Aws::String&& value) { m_destinationBranchHasBeenSet = true; m_destinationBranch = std::move(value); }
    inline void SetDestinationBranch(const char* value) { m_destinationBranchHasBeenSet = true; m_destinationBranch.assign(value); }
    inline Branch& WithDestinationBranch(const Aws::String& value) { SetDestinationBranch(value); return *this;}
    inline Branch& WithDestinationBranch(Aws::String&& value) { SetDestinationBranch(std::move(value)); return *this;}
    inline Branch& WithDestinationBranch(const char* value) { SetDestinationBranch(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The source branch if the branch is a pull request branch. </p>
     */
    inline const Aws::String& GetSourceBranch() const{ return m_sourceBranch; }
    inline bool SourceBranchHasBeenSet() const { return m_sourceBranchHasBeenSet; }
    inline void SetSourceBranch(const Aws::String& value) { m_sourceBranchHasBeenSet = true; m_sourceBranch = value; }
    inline void SetSourceBranch(Aws::String&& value) { m_sourceBranchHasBeenSet = true; m_sourceBranch = std::move(value); }
    inline void SetSourceBranch(const char* value) { m_sourceBranchHasBeenSet = true; m_sourceBranch.assign(value); }
    inline Branch& WithSourceBranch(const Aws::String& value) { SetSourceBranch(value); return *this;}
    inline Branch& WithSourceBranch(Aws::String&& value) { SetSourceBranch(std::move(value)); return *this;}
    inline Branch& WithSourceBranch(const char* value) { SetSourceBranch(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The Amazon Resource Name (ARN) for a backend environment that is part of an
     * Amplify app. </p> <p>This property is available to Amplify Gen 1 apps only. When
     * you deploy an application with Amplify Gen 2, you provision the app's backend
     * infrastructure using Typescript code.</p>
     */
    inline const Aws::String& GetBackendEnvironmentArn() const{ return m_backendEnvironmentArn; }
    inline bool BackendEnvironmentArnHasBeenSet() const { return m_backendEnvironmentArnHasBeenSet; }
    inline void SetBackendEnvironmentArn(const Aws::String& value) { m_backendEnvironmentArnHasBeenSet = true; m_backendEnvironmentArn = value; }
    inline void SetBackendEnvironmentArn(Aws::String&& value) { m_backendEnvironmentArnHasBeenSet = true; m_backendEnvironmentArn = std::move(value); }
    inline void SetBackendEnvironmentArn(const char* value) { m_backendEnvironmentArnHasBeenSet = true; m_backendEnvironmentArn.assign(value); }
    inline Branch& WithBackendEnvironmentArn(const Aws::String& value) { SetBackendEnvironmentArn(value); return *this;}
    inline Branch& WithBackendEnvironmentArn(Aws::String&& value) { SetBackendEnvironmentArn(std::move(value)); return *this;}
    inline Branch& WithBackendEnvironmentArn(const char* value) { SetBackendEnvironmentArn(value); return *this;}
    ///@}

    ///@{
    
    inline const Backend& GetBackend() const{ return m_backend; }
    inline bool BackendHasBeenSet() const { return m_backendHasBeenSet; }
    inline void SetBackend(const Backend& value) { m_backendHasBeenSet = true; m_backend = value; }
    inline void SetBackend(Backend&& value) { m_backendHasBeenSet = true; m_backend = std::move(value); }
    inline Branch& WithBackend(const Backend& value) { SetBackend(value); return *this;}
    inline Branch& WithBackend(Backend&& value) { SetBackend(std::move(value)); return *this;}
    ///@}
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

    Backend m_backend;
    bool m_backendHasBeenSet = false;
  };

} // namespace Model
} // namespace Amplify
} // namespace Aws
