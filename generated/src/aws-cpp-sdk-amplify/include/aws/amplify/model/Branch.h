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
    AWS_AMPLIFY_API Branch() = default;
    AWS_AMPLIFY_API Branch(Aws::Utils::Json::JsonView jsonValue);
    AWS_AMPLIFY_API Branch& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_AMPLIFY_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p> The Amazon Resource Name (ARN) for a branch that is part of an Amplify app.
     * </p>
     */
    inline const Aws::String& GetBranchArn() const { return m_branchArn; }
    inline bool BranchArnHasBeenSet() const { return m_branchArnHasBeenSet; }
    template<typename BranchArnT = Aws::String>
    void SetBranchArn(BranchArnT&& value) { m_branchArnHasBeenSet = true; m_branchArn = std::forward<BranchArnT>(value); }
    template<typename BranchArnT = Aws::String>
    Branch& WithBranchArn(BranchArnT&& value) { SetBranchArn(std::forward<BranchArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The name for the branch that is part of an Amplify app. </p>
     */
    inline const Aws::String& GetBranchName() const { return m_branchName; }
    inline bool BranchNameHasBeenSet() const { return m_branchNameHasBeenSet; }
    template<typename BranchNameT = Aws::String>
    void SetBranchName(BranchNameT&& value) { m_branchNameHasBeenSet = true; m_branchName = std::forward<BranchNameT>(value); }
    template<typename BranchNameT = Aws::String>
    Branch& WithBranchName(BranchNameT&& value) { SetBranchName(std::forward<BranchNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The description for the branch that is part of an Amplify app. </p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    Branch& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The tag for the branch of an Amplify app. </p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const { return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    template<typename TagsT = Aws::Map<Aws::String, Aws::String>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Map<Aws::String, Aws::String>>
    Branch& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsKeyT = Aws::String, typename TagsValueT = Aws::String>
    Branch& AddTags(TagsKeyT&& key, TagsValueT&& value) {
      m_tagsHasBeenSet = true; m_tags.emplace(std::forward<TagsKeyT>(key), std::forward<TagsValueT>(value)); return *this;
    }
    ///@}

    ///@{
    /**
     * <p> The current stage for the branch that is part of an Amplify app. </p>
     */
    inline Stage GetStage() const { return m_stage; }
    inline bool StageHasBeenSet() const { return m_stageHasBeenSet; }
    inline void SetStage(Stage value) { m_stageHasBeenSet = true; m_stage = value; }
    inline Branch& WithStage(Stage value) { SetStage(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The display name for the branch. This is used as the default domain prefix.
     * </p>
     */
    inline const Aws::String& GetDisplayName() const { return m_displayName; }
    inline bool DisplayNameHasBeenSet() const { return m_displayNameHasBeenSet; }
    template<typename DisplayNameT = Aws::String>
    void SetDisplayName(DisplayNameT&& value) { m_displayNameHasBeenSet = true; m_displayName = std::forward<DisplayNameT>(value); }
    template<typename DisplayNameT = Aws::String>
    Branch& WithDisplayName(DisplayNameT&& value) { SetDisplayName(std::forward<DisplayNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> Enables notifications for a branch that is part of an Amplify app. </p>
     */
    inline bool GetEnableNotification() const { return m_enableNotification; }
    inline bool EnableNotificationHasBeenSet() const { return m_enableNotificationHasBeenSet; }
    inline void SetEnableNotification(bool value) { m_enableNotificationHasBeenSet = true; m_enableNotification = value; }
    inline Branch& WithEnableNotification(bool value) { SetEnableNotification(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A timestamp of when Amplify created the branch.</p>
     */
    inline const Aws::Utils::DateTime& GetCreateTime() const { return m_createTime; }
    inline bool CreateTimeHasBeenSet() const { return m_createTimeHasBeenSet; }
    template<typename CreateTimeT = Aws::Utils::DateTime>
    void SetCreateTime(CreateTimeT&& value) { m_createTimeHasBeenSet = true; m_createTime = std::forward<CreateTimeT>(value); }
    template<typename CreateTimeT = Aws::Utils::DateTime>
    Branch& WithCreateTime(CreateTimeT&& value) { SetCreateTime(std::forward<CreateTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A timestamp for the last updated time for a branch.</p>
     */
    inline const Aws::Utils::DateTime& GetUpdateTime() const { return m_updateTime; }
    inline bool UpdateTimeHasBeenSet() const { return m_updateTimeHasBeenSet; }
    template<typename UpdateTimeT = Aws::Utils::DateTime>
    void SetUpdateTime(UpdateTimeT&& value) { m_updateTimeHasBeenSet = true; m_updateTime = std::forward<UpdateTimeT>(value); }
    template<typename UpdateTimeT = Aws::Utils::DateTime>
    Branch& WithUpdateTime(UpdateTimeT&& value) { SetUpdateTime(std::forward<UpdateTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The environment variables specific to a branch of an Amplify app. </p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetEnvironmentVariables() const { return m_environmentVariables; }
    inline bool EnvironmentVariablesHasBeenSet() const { return m_environmentVariablesHasBeenSet; }
    template<typename EnvironmentVariablesT = Aws::Map<Aws::String, Aws::String>>
    void SetEnvironmentVariables(EnvironmentVariablesT&& value) { m_environmentVariablesHasBeenSet = true; m_environmentVariables = std::forward<EnvironmentVariablesT>(value); }
    template<typename EnvironmentVariablesT = Aws::Map<Aws::String, Aws::String>>
    Branch& WithEnvironmentVariables(EnvironmentVariablesT&& value) { SetEnvironmentVariables(std::forward<EnvironmentVariablesT>(value)); return *this;}
    template<typename EnvironmentVariablesKeyT = Aws::String, typename EnvironmentVariablesValueT = Aws::String>
    Branch& AddEnvironmentVariables(EnvironmentVariablesKeyT&& key, EnvironmentVariablesValueT&& value) {
      m_environmentVariablesHasBeenSet = true; m_environmentVariables.emplace(std::forward<EnvironmentVariablesKeyT>(key), std::forward<EnvironmentVariablesValueT>(value)); return *this;
    }
    ///@}

    ///@{
    /**
     * <p> Enables auto-building on push for a branch of an Amplify app. </p>
     */
    inline bool GetEnableAutoBuild() const { return m_enableAutoBuild; }
    inline bool EnableAutoBuildHasBeenSet() const { return m_enableAutoBuildHasBeenSet; }
    inline void SetEnableAutoBuild(bool value) { m_enableAutoBuildHasBeenSet = true; m_enableAutoBuild = value; }
    inline Branch& WithEnableAutoBuild(bool value) { SetEnableAutoBuild(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies whether the skew protection feature is enabled for the branch.</p>
     * <p>Deployment skew protection is available to Amplify applications to eliminate
     * version skew issues between client and servers in web applications. When you
     * apply skew protection to a branch, you can ensure that your clients always
     * interact with the correct version of server-side assets, regardless of when a
     * deployment occurs. For more information about skew protection, see <a
     * href="https://docs.aws.amazon.com/amplify/latest/userguide/skew-protection.html">Skew
     * protection for Amplify deployments</a> in the <i>Amplify User Guide</i>.</p>
     */
    inline bool GetEnableSkewProtection() const { return m_enableSkewProtection; }
    inline bool EnableSkewProtectionHasBeenSet() const { return m_enableSkewProtectionHasBeenSet; }
    inline void SetEnableSkewProtection(bool value) { m_enableSkewProtectionHasBeenSet = true; m_enableSkewProtection = value; }
    inline Branch& WithEnableSkewProtection(bool value) { SetEnableSkewProtection(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The custom domains for a branch of an Amplify app. </p>
     */
    inline const Aws::Vector<Aws::String>& GetCustomDomains() const { return m_customDomains; }
    inline bool CustomDomainsHasBeenSet() const { return m_customDomainsHasBeenSet; }
    template<typename CustomDomainsT = Aws::Vector<Aws::String>>
    void SetCustomDomains(CustomDomainsT&& value) { m_customDomainsHasBeenSet = true; m_customDomains = std::forward<CustomDomainsT>(value); }
    template<typename CustomDomainsT = Aws::Vector<Aws::String>>
    Branch& WithCustomDomains(CustomDomainsT&& value) { SetCustomDomains(std::forward<CustomDomainsT>(value)); return *this;}
    template<typename CustomDomainsT = Aws::String>
    Branch& AddCustomDomains(CustomDomainsT&& value) { m_customDomainsHasBeenSet = true; m_customDomains.emplace_back(std::forward<CustomDomainsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p> The framework for a branch of an Amplify app. </p>
     */
    inline const Aws::String& GetFramework() const { return m_framework; }
    inline bool FrameworkHasBeenSet() const { return m_frameworkHasBeenSet; }
    template<typename FrameworkT = Aws::String>
    void SetFramework(FrameworkT&& value) { m_frameworkHasBeenSet = true; m_framework = std::forward<FrameworkT>(value); }
    template<typename FrameworkT = Aws::String>
    Branch& WithFramework(FrameworkT&& value) { SetFramework(std::forward<FrameworkT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The ID of the active job for a branch of an Amplify app. </p>
     */
    inline const Aws::String& GetActiveJobId() const { return m_activeJobId; }
    inline bool ActiveJobIdHasBeenSet() const { return m_activeJobIdHasBeenSet; }
    template<typename ActiveJobIdT = Aws::String>
    void SetActiveJobId(ActiveJobIdT&& value) { m_activeJobIdHasBeenSet = true; m_activeJobId = std::forward<ActiveJobIdT>(value); }
    template<typename ActiveJobIdT = Aws::String>
    Branch& WithActiveJobId(ActiveJobIdT&& value) { SetActiveJobId(std::forward<ActiveJobIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The total number of jobs that are part of an Amplify app. </p>
     */
    inline const Aws::String& GetTotalNumberOfJobs() const { return m_totalNumberOfJobs; }
    inline bool TotalNumberOfJobsHasBeenSet() const { return m_totalNumberOfJobsHasBeenSet; }
    template<typename TotalNumberOfJobsT = Aws::String>
    void SetTotalNumberOfJobs(TotalNumberOfJobsT&& value) { m_totalNumberOfJobsHasBeenSet = true; m_totalNumberOfJobs = std::forward<TotalNumberOfJobsT>(value); }
    template<typename TotalNumberOfJobsT = Aws::String>
    Branch& WithTotalNumberOfJobs(TotalNumberOfJobsT&& value) { SetTotalNumberOfJobs(std::forward<TotalNumberOfJobsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> Enables basic authorization for a branch of an Amplify app. </p>
     */
    inline bool GetEnableBasicAuth() const { return m_enableBasicAuth; }
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
    inline bool GetEnablePerformanceMode() const { return m_enablePerformanceMode; }
    inline bool EnablePerformanceModeHasBeenSet() const { return m_enablePerformanceModeHasBeenSet; }
    inline void SetEnablePerformanceMode(bool value) { m_enablePerformanceModeHasBeenSet = true; m_enablePerformanceMode = value; }
    inline Branch& WithEnablePerformanceMode(bool value) { SetEnablePerformanceMode(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The thumbnail URL for the branch of an Amplify app. </p>
     */
    inline const Aws::String& GetThumbnailUrl() const { return m_thumbnailUrl; }
    inline bool ThumbnailUrlHasBeenSet() const { return m_thumbnailUrlHasBeenSet; }
    template<typename ThumbnailUrlT = Aws::String>
    void SetThumbnailUrl(ThumbnailUrlT&& value) { m_thumbnailUrlHasBeenSet = true; m_thumbnailUrl = std::forward<ThumbnailUrlT>(value); }
    template<typename ThumbnailUrlT = Aws::String>
    Branch& WithThumbnailUrl(ThumbnailUrlT&& value) { SetThumbnailUrl(std::forward<ThumbnailUrlT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The basic authorization credentials for a branch of an Amplify app. You must
     * base64-encode the authorization credentials and provide them in the format
     * <code>user:password</code>.</p>
     */
    inline const Aws::String& GetBasicAuthCredentials() const { return m_basicAuthCredentials; }
    inline bool BasicAuthCredentialsHasBeenSet() const { return m_basicAuthCredentialsHasBeenSet; }
    template<typename BasicAuthCredentialsT = Aws::String>
    void SetBasicAuthCredentials(BasicAuthCredentialsT&& value) { m_basicAuthCredentialsHasBeenSet = true; m_basicAuthCredentials = std::forward<BasicAuthCredentialsT>(value); }
    template<typename BasicAuthCredentialsT = Aws::String>
    Branch& WithBasicAuthCredentials(BasicAuthCredentialsT&& value) { SetBasicAuthCredentials(std::forward<BasicAuthCredentialsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The build specification (build spec) content for the branch of an Amplify
     * app. </p>
     */
    inline const Aws::String& GetBuildSpec() const { return m_buildSpec; }
    inline bool BuildSpecHasBeenSet() const { return m_buildSpecHasBeenSet; }
    template<typename BuildSpecT = Aws::String>
    void SetBuildSpec(BuildSpecT&& value) { m_buildSpecHasBeenSet = true; m_buildSpec = std::forward<BuildSpecT>(value); }
    template<typename BuildSpecT = Aws::String>
    Branch& WithBuildSpec(BuildSpecT&& value) { SetBuildSpec(std::forward<BuildSpecT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The content Time to Live (TTL) for the website in seconds. </p>
     */
    inline const Aws::String& GetTtl() const { return m_ttl; }
    inline bool TtlHasBeenSet() const { return m_ttlHasBeenSet; }
    template<typename TtlT = Aws::String>
    void SetTtl(TtlT&& value) { m_ttlHasBeenSet = true; m_ttl = std::forward<TtlT>(value); }
    template<typename TtlT = Aws::String>
    Branch& WithTtl(TtlT&& value) { SetTtl(std::forward<TtlT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> A list of custom resources that are linked to this branch. </p>
     */
    inline const Aws::Vector<Aws::String>& GetAssociatedResources() const { return m_associatedResources; }
    inline bool AssociatedResourcesHasBeenSet() const { return m_associatedResourcesHasBeenSet; }
    template<typename AssociatedResourcesT = Aws::Vector<Aws::String>>
    void SetAssociatedResources(AssociatedResourcesT&& value) { m_associatedResourcesHasBeenSet = true; m_associatedResources = std::forward<AssociatedResourcesT>(value); }
    template<typename AssociatedResourcesT = Aws::Vector<Aws::String>>
    Branch& WithAssociatedResources(AssociatedResourcesT&& value) { SetAssociatedResources(std::forward<AssociatedResourcesT>(value)); return *this;}
    template<typename AssociatedResourcesT = Aws::String>
    Branch& AddAssociatedResources(AssociatedResourcesT&& value) { m_associatedResourcesHasBeenSet = true; m_associatedResources.emplace_back(std::forward<AssociatedResourcesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p> Enables pull request previews for the branch. </p>
     */
    inline bool GetEnablePullRequestPreview() const { return m_enablePullRequestPreview; }
    inline bool EnablePullRequestPreviewHasBeenSet() const { return m_enablePullRequestPreviewHasBeenSet; }
    inline void SetEnablePullRequestPreview(bool value) { m_enablePullRequestPreviewHasBeenSet = true; m_enablePullRequestPreview = value; }
    inline Branch& WithEnablePullRequestPreview(bool value) { SetEnablePullRequestPreview(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The Amplify environment name for the pull request. </p>
     */
    inline const Aws::String& GetPullRequestEnvironmentName() const { return m_pullRequestEnvironmentName; }
    inline bool PullRequestEnvironmentNameHasBeenSet() const { return m_pullRequestEnvironmentNameHasBeenSet; }
    template<typename PullRequestEnvironmentNameT = Aws::String>
    void SetPullRequestEnvironmentName(PullRequestEnvironmentNameT&& value) { m_pullRequestEnvironmentNameHasBeenSet = true; m_pullRequestEnvironmentName = std::forward<PullRequestEnvironmentNameT>(value); }
    template<typename PullRequestEnvironmentNameT = Aws::String>
    Branch& WithPullRequestEnvironmentName(PullRequestEnvironmentNameT&& value) { SetPullRequestEnvironmentName(std::forward<PullRequestEnvironmentNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The destination branch if the branch is a pull request branch. </p>
     */
    inline const Aws::String& GetDestinationBranch() const { return m_destinationBranch; }
    inline bool DestinationBranchHasBeenSet() const { return m_destinationBranchHasBeenSet; }
    template<typename DestinationBranchT = Aws::String>
    void SetDestinationBranch(DestinationBranchT&& value) { m_destinationBranchHasBeenSet = true; m_destinationBranch = std::forward<DestinationBranchT>(value); }
    template<typename DestinationBranchT = Aws::String>
    Branch& WithDestinationBranch(DestinationBranchT&& value) { SetDestinationBranch(std::forward<DestinationBranchT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The source branch if the branch is a pull request branch. </p>
     */
    inline const Aws::String& GetSourceBranch() const { return m_sourceBranch; }
    inline bool SourceBranchHasBeenSet() const { return m_sourceBranchHasBeenSet; }
    template<typename SourceBranchT = Aws::String>
    void SetSourceBranch(SourceBranchT&& value) { m_sourceBranchHasBeenSet = true; m_sourceBranch = std::forward<SourceBranchT>(value); }
    template<typename SourceBranchT = Aws::String>
    Branch& WithSourceBranch(SourceBranchT&& value) { SetSourceBranch(std::forward<SourceBranchT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The Amazon Resource Name (ARN) for a backend environment that is part of an
     * Amplify app. </p> <p>This property is available to Amplify Gen 1 apps only. When
     * you deploy an application with Amplify Gen 2, you provision the app's backend
     * infrastructure using Typescript code.</p>
     */
    inline const Aws::String& GetBackendEnvironmentArn() const { return m_backendEnvironmentArn; }
    inline bool BackendEnvironmentArnHasBeenSet() const { return m_backendEnvironmentArnHasBeenSet; }
    template<typename BackendEnvironmentArnT = Aws::String>
    void SetBackendEnvironmentArn(BackendEnvironmentArnT&& value) { m_backendEnvironmentArnHasBeenSet = true; m_backendEnvironmentArn = std::forward<BackendEnvironmentArnT>(value); }
    template<typename BackendEnvironmentArnT = Aws::String>
    Branch& WithBackendEnvironmentArn(BackendEnvironmentArnT&& value) { SetBackendEnvironmentArn(std::forward<BackendEnvironmentArnT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Backend& GetBackend() const { return m_backend; }
    inline bool BackendHasBeenSet() const { return m_backendHasBeenSet; }
    template<typename BackendT = Backend>
    void SetBackend(BackendT&& value) { m_backendHasBeenSet = true; m_backend = std::forward<BackendT>(value); }
    template<typename BackendT = Backend>
    Branch& WithBackend(BackendT&& value) { SetBackend(std::forward<BackendT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the IAM role for a branch of an SSR app.
     * The Compute role allows the Amplify Hosting compute service to securely access
     * specific Amazon Web Services resources based on the role's permissions. For more
     * information about the SSR Compute role, see <a
     * href="https://docs.aws.amazon.com/amplify/latest/userguide/amplify-SSR-compute-role.html">Adding
     * an SSR Compute role</a> in the <i>Amplify User Guide</i>.</p>
     */
    inline const Aws::String& GetComputeRoleArn() const { return m_computeRoleArn; }
    inline bool ComputeRoleArnHasBeenSet() const { return m_computeRoleArnHasBeenSet; }
    template<typename ComputeRoleArnT = Aws::String>
    void SetComputeRoleArn(ComputeRoleArnT&& value) { m_computeRoleArnHasBeenSet = true; m_computeRoleArn = std::forward<ComputeRoleArnT>(value); }
    template<typename ComputeRoleArnT = Aws::String>
    Branch& WithComputeRoleArn(ComputeRoleArnT&& value) { SetComputeRoleArn(std::forward<ComputeRoleArnT>(value)); return *this;}
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

    Stage m_stage{Stage::NOT_SET};
    bool m_stageHasBeenSet = false;

    Aws::String m_displayName;
    bool m_displayNameHasBeenSet = false;

    bool m_enableNotification{false};
    bool m_enableNotificationHasBeenSet = false;

    Aws::Utils::DateTime m_createTime{};
    bool m_createTimeHasBeenSet = false;

    Aws::Utils::DateTime m_updateTime{};
    bool m_updateTimeHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_environmentVariables;
    bool m_environmentVariablesHasBeenSet = false;

    bool m_enableAutoBuild{false};
    bool m_enableAutoBuildHasBeenSet = false;

    bool m_enableSkewProtection{false};
    bool m_enableSkewProtectionHasBeenSet = false;

    Aws::Vector<Aws::String> m_customDomains;
    bool m_customDomainsHasBeenSet = false;

    Aws::String m_framework;
    bool m_frameworkHasBeenSet = false;

    Aws::String m_activeJobId;
    bool m_activeJobIdHasBeenSet = false;

    Aws::String m_totalNumberOfJobs;
    bool m_totalNumberOfJobsHasBeenSet = false;

    bool m_enableBasicAuth{false};
    bool m_enableBasicAuthHasBeenSet = false;

    bool m_enablePerformanceMode{false};
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

    bool m_enablePullRequestPreview{false};
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

    Aws::String m_computeRoleArn;
    bool m_computeRoleArnHasBeenSet = false;
  };

} // namespace Model
} // namespace Amplify
} // namespace Aws
