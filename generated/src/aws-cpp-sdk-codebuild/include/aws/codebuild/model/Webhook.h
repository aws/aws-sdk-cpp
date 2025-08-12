/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codebuild/CodeBuild_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/codebuild/model/WebhookBuildType.h>
#include <aws/core/utils/DateTime.h>
#include <aws/codebuild/model/ScopeConfiguration.h>
#include <aws/codebuild/model/WebhookStatus.h>
#include <aws/codebuild/model/PullRequestBuildPolicy.h>
#include <aws/codebuild/model/WebhookFilter.h>
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
namespace CodeBuild
{
namespace Model
{

  /**
   * <p>Information about a webhook that connects repository events to a build
   * project in CodeBuild.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/codebuild-2016-10-06/Webhook">AWS
   * API Reference</a></p>
   */
  class Webhook
  {
  public:
    AWS_CODEBUILD_API Webhook() = default;
    AWS_CODEBUILD_API Webhook(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODEBUILD_API Webhook& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODEBUILD_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The URL to the webhook.</p>
     */
    inline const Aws::String& GetUrl() const { return m_url; }
    inline bool UrlHasBeenSet() const { return m_urlHasBeenSet; }
    template<typename UrlT = Aws::String>
    void SetUrl(UrlT&& value) { m_urlHasBeenSet = true; m_url = std::forward<UrlT>(value); }
    template<typename UrlT = Aws::String>
    Webhook& WithUrl(UrlT&& value) { SetUrl(std::forward<UrlT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The CodeBuild endpoint where webhook events are sent.</p>
     */
    inline const Aws::String& GetPayloadUrl() const { return m_payloadUrl; }
    inline bool PayloadUrlHasBeenSet() const { return m_payloadUrlHasBeenSet; }
    template<typename PayloadUrlT = Aws::String>
    void SetPayloadUrl(PayloadUrlT&& value) { m_payloadUrlHasBeenSet = true; m_payloadUrl = std::forward<PayloadUrlT>(value); }
    template<typename PayloadUrlT = Aws::String>
    Webhook& WithPayloadUrl(PayloadUrlT&& value) { SetPayloadUrl(std::forward<PayloadUrlT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The secret token of the associated repository. </p>  <p>A Bitbucket
     * webhook does not support <code>secret</code>. </p> 
     */
    inline const Aws::String& GetSecret() const { return m_secret; }
    inline bool SecretHasBeenSet() const { return m_secretHasBeenSet; }
    template<typename SecretT = Aws::String>
    void SetSecret(SecretT&& value) { m_secretHasBeenSet = true; m_secret = std::forward<SecretT>(value); }
    template<typename SecretT = Aws::String>
    Webhook& WithSecret(SecretT&& value) { SetSecret(std::forward<SecretT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A regular expression used to determine which repository branches are built
     * when a webhook is triggered. If the name of a branch matches the regular
     * expression, then it is built. If <code>branchFilter</code> is empty, then all
     * branches are built.</p>  <p>It is recommended that you use
     * <code>filterGroups</code> instead of <code>branchFilter</code>. </p> 
     */
    inline const Aws::String& GetBranchFilter() const { return m_branchFilter; }
    inline bool BranchFilterHasBeenSet() const { return m_branchFilterHasBeenSet; }
    template<typename BranchFilterT = Aws::String>
    void SetBranchFilter(BranchFilterT&& value) { m_branchFilterHasBeenSet = true; m_branchFilter = std::forward<BranchFilterT>(value); }
    template<typename BranchFilterT = Aws::String>
    Webhook& WithBranchFilter(BranchFilterT&& value) { SetBranchFilter(std::forward<BranchFilterT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An array of arrays of <code>WebhookFilter</code> objects used to determine
     * which webhooks are triggered. At least one <code>WebhookFilter</code> in the
     * array must specify <code>EVENT</code> as its <code>type</code>. </p> <p>For a
     * build to be triggered, at least one filter group in the
     * <code>filterGroups</code> array must pass. For a filter group to pass, each of
     * its filters must pass. </p>
     */
    inline const Aws::Vector<Aws::Vector<WebhookFilter>>& GetFilterGroups() const { return m_filterGroups; }
    inline bool FilterGroupsHasBeenSet() const { return m_filterGroupsHasBeenSet; }
    template<typename FilterGroupsT = Aws::Vector<Aws::Vector<WebhookFilter>>>
    void SetFilterGroups(FilterGroupsT&& value) { m_filterGroupsHasBeenSet = true; m_filterGroups = std::forward<FilterGroupsT>(value); }
    template<typename FilterGroupsT = Aws::Vector<Aws::Vector<WebhookFilter>>>
    Webhook& WithFilterGroups(FilterGroupsT&& value) { SetFilterGroups(std::forward<FilterGroupsT>(value)); return *this;}
    template<typename FilterGroupsT = Aws::Vector<WebhookFilter>>
    Webhook& AddFilterGroups(FilterGroupsT&& value) { m_filterGroupsHasBeenSet = true; m_filterGroups.emplace_back(std::forward<FilterGroupsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Specifies the type of build this webhook will trigger.</p>  <p>
     * <code>RUNNER_BUILDKITE_BUILD</code> is only available for <code>NO_SOURCE</code>
     * source type projects configured for Buildkite runner builds. For more
     * information about CodeBuild-hosted Buildkite runner builds, see <a
     * href="https://docs.aws.amazon.com/codebuild/latest/userguide/sample-runner-buildkite.html">Tutorial:
     * Configure a CodeBuild-hosted Buildkite runner</a> in the <i>CodeBuild user
     * guide</i>.</p> 
     */
    inline WebhookBuildType GetBuildType() const { return m_buildType; }
    inline bool BuildTypeHasBeenSet() const { return m_buildTypeHasBeenSet; }
    inline void SetBuildType(WebhookBuildType value) { m_buildTypeHasBeenSet = true; m_buildType = value; }
    inline Webhook& WithBuildType(WebhookBuildType value) { SetBuildType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>If manualCreation is true, CodeBuild doesn't create a webhook in GitHub and
     * instead returns <code>payloadUrl</code> and <code>secret</code> values for the
     * webhook. The <code>payloadUrl</code> and <code>secret</code> values in the
     * output can be used to manually create a webhook within GitHub.</p> 
     * <p>manualCreation is only available for GitHub webhooks.</p> 
     */
    inline bool GetManualCreation() const { return m_manualCreation; }
    inline bool ManualCreationHasBeenSet() const { return m_manualCreationHasBeenSet; }
    inline void SetManualCreation(bool value) { m_manualCreationHasBeenSet = true; m_manualCreation = value; }
    inline Webhook& WithManualCreation(bool value) { SetManualCreation(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A timestamp that indicates the last time a repository's secret token was
     * modified. </p>
     */
    inline const Aws::Utils::DateTime& GetLastModifiedSecret() const { return m_lastModifiedSecret; }
    inline bool LastModifiedSecretHasBeenSet() const { return m_lastModifiedSecretHasBeenSet; }
    template<typename LastModifiedSecretT = Aws::Utils::DateTime>
    void SetLastModifiedSecret(LastModifiedSecretT&& value) { m_lastModifiedSecretHasBeenSet = true; m_lastModifiedSecret = std::forward<LastModifiedSecretT>(value); }
    template<typename LastModifiedSecretT = Aws::Utils::DateTime>
    Webhook& WithLastModifiedSecret(LastModifiedSecretT&& value) { SetLastModifiedSecret(std::forward<LastModifiedSecretT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The scope configuration for global or organization webhooks.</p> 
     * <p>Global or organization webhooks are only available for GitHub and Github
     * Enterprise webhooks.</p> 
     */
    inline const ScopeConfiguration& GetScopeConfiguration() const { return m_scopeConfiguration; }
    inline bool ScopeConfigurationHasBeenSet() const { return m_scopeConfigurationHasBeenSet; }
    template<typename ScopeConfigurationT = ScopeConfiguration>
    void SetScopeConfiguration(ScopeConfigurationT&& value) { m_scopeConfigurationHasBeenSet = true; m_scopeConfiguration = std::forward<ScopeConfigurationT>(value); }
    template<typename ScopeConfigurationT = ScopeConfiguration>
    Webhook& WithScopeConfiguration(ScopeConfigurationT&& value) { SetScopeConfiguration(std::forward<ScopeConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the webhook. Valid values include:</p> <ul> <li> <p>
     * <code>CREATING</code>: The webhook is being created.</p> </li> <li> <p>
     * <code>CREATE_FAILED</code>: The webhook has failed to create.</p> </li> <li> <p>
     * <code>ACTIVE</code>: The webhook has succeeded and is active.</p> </li> <li> <p>
     * <code>DELETING</code>: The webhook is being deleted.</p> </li> </ul>
     */
    inline WebhookStatus GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(WebhookStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline Webhook& WithStatus(WebhookStatus value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A message associated with the status of a webhook.</p>
     */
    inline const Aws::String& GetStatusMessage() const { return m_statusMessage; }
    inline bool StatusMessageHasBeenSet() const { return m_statusMessageHasBeenSet; }
    template<typename StatusMessageT = Aws::String>
    void SetStatusMessage(StatusMessageT&& value) { m_statusMessageHasBeenSet = true; m_statusMessage = std::forward<StatusMessageT>(value); }
    template<typename StatusMessageT = Aws::String>
    Webhook& WithStatusMessage(StatusMessageT&& value) { SetStatusMessage(std::forward<StatusMessageT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const PullRequestBuildPolicy& GetPullRequestBuildPolicy() const { return m_pullRequestBuildPolicy; }
    inline bool PullRequestBuildPolicyHasBeenSet() const { return m_pullRequestBuildPolicyHasBeenSet; }
    template<typename PullRequestBuildPolicyT = PullRequestBuildPolicy>
    void SetPullRequestBuildPolicy(PullRequestBuildPolicyT&& value) { m_pullRequestBuildPolicyHasBeenSet = true; m_pullRequestBuildPolicy = std::forward<PullRequestBuildPolicyT>(value); }
    template<typename PullRequestBuildPolicyT = PullRequestBuildPolicy>
    Webhook& WithPullRequestBuildPolicy(PullRequestBuildPolicyT&& value) { SetPullRequestBuildPolicy(std::forward<PullRequestBuildPolicyT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_url;
    bool m_urlHasBeenSet = false;

    Aws::String m_payloadUrl;
    bool m_payloadUrlHasBeenSet = false;

    Aws::String m_secret;
    bool m_secretHasBeenSet = false;

    Aws::String m_branchFilter;
    bool m_branchFilterHasBeenSet = false;

    Aws::Vector<Aws::Vector<WebhookFilter>> m_filterGroups;
    bool m_filterGroupsHasBeenSet = false;

    WebhookBuildType m_buildType{WebhookBuildType::NOT_SET};
    bool m_buildTypeHasBeenSet = false;

    bool m_manualCreation{false};
    bool m_manualCreationHasBeenSet = false;

    Aws::Utils::DateTime m_lastModifiedSecret{};
    bool m_lastModifiedSecretHasBeenSet = false;

    ScopeConfiguration m_scopeConfiguration;
    bool m_scopeConfigurationHasBeenSet = false;

    WebhookStatus m_status{WebhookStatus::NOT_SET};
    bool m_statusHasBeenSet = false;

    Aws::String m_statusMessage;
    bool m_statusMessageHasBeenSet = false;

    PullRequestBuildPolicy m_pullRequestBuildPolicy;
    bool m_pullRequestBuildPolicyHasBeenSet = false;
  };

} // namespace Model
} // namespace CodeBuild
} // namespace Aws
