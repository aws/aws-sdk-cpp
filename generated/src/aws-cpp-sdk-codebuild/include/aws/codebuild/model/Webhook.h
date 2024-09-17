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
    AWS_CODEBUILD_API Webhook();
    AWS_CODEBUILD_API Webhook(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODEBUILD_API Webhook& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODEBUILD_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The URL to the webhook.</p>
     */
    inline const Aws::String& GetUrl() const{ return m_url; }
    inline bool UrlHasBeenSet() const { return m_urlHasBeenSet; }
    inline void SetUrl(const Aws::String& value) { m_urlHasBeenSet = true; m_url = value; }
    inline void SetUrl(Aws::String&& value) { m_urlHasBeenSet = true; m_url = std::move(value); }
    inline void SetUrl(const char* value) { m_urlHasBeenSet = true; m_url.assign(value); }
    inline Webhook& WithUrl(const Aws::String& value) { SetUrl(value); return *this;}
    inline Webhook& WithUrl(Aws::String&& value) { SetUrl(std::move(value)); return *this;}
    inline Webhook& WithUrl(const char* value) { SetUrl(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The CodeBuild endpoint where webhook events are sent.</p>
     */
    inline const Aws::String& GetPayloadUrl() const{ return m_payloadUrl; }
    inline bool PayloadUrlHasBeenSet() const { return m_payloadUrlHasBeenSet; }
    inline void SetPayloadUrl(const Aws::String& value) { m_payloadUrlHasBeenSet = true; m_payloadUrl = value; }
    inline void SetPayloadUrl(Aws::String&& value) { m_payloadUrlHasBeenSet = true; m_payloadUrl = std::move(value); }
    inline void SetPayloadUrl(const char* value) { m_payloadUrlHasBeenSet = true; m_payloadUrl.assign(value); }
    inline Webhook& WithPayloadUrl(const Aws::String& value) { SetPayloadUrl(value); return *this;}
    inline Webhook& WithPayloadUrl(Aws::String&& value) { SetPayloadUrl(std::move(value)); return *this;}
    inline Webhook& WithPayloadUrl(const char* value) { SetPayloadUrl(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The secret token of the associated repository. </p>  <p>A Bitbucket
     * webhook does not support <code>secret</code>. </p> 
     */
    inline const Aws::String& GetSecret() const{ return m_secret; }
    inline bool SecretHasBeenSet() const { return m_secretHasBeenSet; }
    inline void SetSecret(const Aws::String& value) { m_secretHasBeenSet = true; m_secret = value; }
    inline void SetSecret(Aws::String&& value) { m_secretHasBeenSet = true; m_secret = std::move(value); }
    inline void SetSecret(const char* value) { m_secretHasBeenSet = true; m_secret.assign(value); }
    inline Webhook& WithSecret(const Aws::String& value) { SetSecret(value); return *this;}
    inline Webhook& WithSecret(Aws::String&& value) { SetSecret(std::move(value)); return *this;}
    inline Webhook& WithSecret(const char* value) { SetSecret(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A regular expression used to determine which repository branches are built
     * when a webhook is triggered. If the name of a branch matches the regular
     * expression, then it is built. If <code>branchFilter</code> is empty, then all
     * branches are built.</p>  <p>It is recommended that you use
     * <code>filterGroups</code> instead of <code>branchFilter</code>. </p> 
     */
    inline const Aws::String& GetBranchFilter() const{ return m_branchFilter; }
    inline bool BranchFilterHasBeenSet() const { return m_branchFilterHasBeenSet; }
    inline void SetBranchFilter(const Aws::String& value) { m_branchFilterHasBeenSet = true; m_branchFilter = value; }
    inline void SetBranchFilter(Aws::String&& value) { m_branchFilterHasBeenSet = true; m_branchFilter = std::move(value); }
    inline void SetBranchFilter(const char* value) { m_branchFilterHasBeenSet = true; m_branchFilter.assign(value); }
    inline Webhook& WithBranchFilter(const Aws::String& value) { SetBranchFilter(value); return *this;}
    inline Webhook& WithBranchFilter(Aws::String&& value) { SetBranchFilter(std::move(value)); return *this;}
    inline Webhook& WithBranchFilter(const char* value) { SetBranchFilter(value); return *this;}
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
    inline const Aws::Vector<Aws::Vector<WebhookFilter>>& GetFilterGroups() const{ return m_filterGroups; }
    inline bool FilterGroupsHasBeenSet() const { return m_filterGroupsHasBeenSet; }
    inline void SetFilterGroups(const Aws::Vector<Aws::Vector<WebhookFilter>>& value) { m_filterGroupsHasBeenSet = true; m_filterGroups = value; }
    inline void SetFilterGroups(Aws::Vector<Aws::Vector<WebhookFilter>>&& value) { m_filterGroupsHasBeenSet = true; m_filterGroups = std::move(value); }
    inline Webhook& WithFilterGroups(const Aws::Vector<Aws::Vector<WebhookFilter>>& value) { SetFilterGroups(value); return *this;}
    inline Webhook& WithFilterGroups(Aws::Vector<Aws::Vector<WebhookFilter>>&& value) { SetFilterGroups(std::move(value)); return *this;}
    inline Webhook& AddFilterGroups(const Aws::Vector<WebhookFilter>& value) { m_filterGroupsHasBeenSet = true; m_filterGroups.push_back(value); return *this; }
    inline Webhook& AddFilterGroups(Aws::Vector<WebhookFilter>&& value) { m_filterGroupsHasBeenSet = true; m_filterGroups.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Specifies the type of build this webhook will trigger.</p>
     */
    inline const WebhookBuildType& GetBuildType() const{ return m_buildType; }
    inline bool BuildTypeHasBeenSet() const { return m_buildTypeHasBeenSet; }
    inline void SetBuildType(const WebhookBuildType& value) { m_buildTypeHasBeenSet = true; m_buildType = value; }
    inline void SetBuildType(WebhookBuildType&& value) { m_buildTypeHasBeenSet = true; m_buildType = std::move(value); }
    inline Webhook& WithBuildType(const WebhookBuildType& value) { SetBuildType(value); return *this;}
    inline Webhook& WithBuildType(WebhookBuildType&& value) { SetBuildType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>If manualCreation is true, CodeBuild doesn't create a webhook in GitHub and
     * instead returns <code>payloadUrl</code> and <code>secret</code> values for the
     * webhook. The <code>payloadUrl</code> and <code>secret</code> values in the
     * output can be used to manually create a webhook within GitHub.</p> 
     * <p>manualCreation is only available for GitHub webhooks.</p> 
     */
    inline bool GetManualCreation() const{ return m_manualCreation; }
    inline bool ManualCreationHasBeenSet() const { return m_manualCreationHasBeenSet; }
    inline void SetManualCreation(bool value) { m_manualCreationHasBeenSet = true; m_manualCreation = value; }
    inline Webhook& WithManualCreation(bool value) { SetManualCreation(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A timestamp that indicates the last time a repository's secret token was
     * modified. </p>
     */
    inline const Aws::Utils::DateTime& GetLastModifiedSecret() const{ return m_lastModifiedSecret; }
    inline bool LastModifiedSecretHasBeenSet() const { return m_lastModifiedSecretHasBeenSet; }
    inline void SetLastModifiedSecret(const Aws::Utils::DateTime& value) { m_lastModifiedSecretHasBeenSet = true; m_lastModifiedSecret = value; }
    inline void SetLastModifiedSecret(Aws::Utils::DateTime&& value) { m_lastModifiedSecretHasBeenSet = true; m_lastModifiedSecret = std::move(value); }
    inline Webhook& WithLastModifiedSecret(const Aws::Utils::DateTime& value) { SetLastModifiedSecret(value); return *this;}
    inline Webhook& WithLastModifiedSecret(Aws::Utils::DateTime&& value) { SetLastModifiedSecret(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The scope configuration for global or organization webhooks.</p> 
     * <p>Global or organization webhooks are only available for GitHub and Github
     * Enterprise webhooks.</p> 
     */
    inline const ScopeConfiguration& GetScopeConfiguration() const{ return m_scopeConfiguration; }
    inline bool ScopeConfigurationHasBeenSet() const { return m_scopeConfigurationHasBeenSet; }
    inline void SetScopeConfiguration(const ScopeConfiguration& value) { m_scopeConfigurationHasBeenSet = true; m_scopeConfiguration = value; }
    inline void SetScopeConfiguration(ScopeConfiguration&& value) { m_scopeConfigurationHasBeenSet = true; m_scopeConfiguration = std::move(value); }
    inline Webhook& WithScopeConfiguration(const ScopeConfiguration& value) { SetScopeConfiguration(value); return *this;}
    inline Webhook& WithScopeConfiguration(ScopeConfiguration&& value) { SetScopeConfiguration(std::move(value)); return *this;}
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

    WebhookBuildType m_buildType;
    bool m_buildTypeHasBeenSet = false;

    bool m_manualCreation;
    bool m_manualCreationHasBeenSet = false;

    Aws::Utils::DateTime m_lastModifiedSecret;
    bool m_lastModifiedSecretHasBeenSet = false;

    ScopeConfiguration m_scopeConfiguration;
    bool m_scopeConfigurationHasBeenSet = false;
  };

} // namespace Model
} // namespace CodeBuild
} // namespace Aws
