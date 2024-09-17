/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codebuild/CodeBuild_EXPORTS.h>
#include <aws/codebuild/CodeBuildRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/codebuild/model/WebhookBuildType.h>
#include <aws/codebuild/model/ScopeConfiguration.h>
#include <aws/codebuild/model/WebhookFilter.h>
#include <utility>

namespace Aws
{
namespace CodeBuild
{
namespace Model
{

  /**
   */
  class CreateWebhookRequest : public CodeBuildRequest
  {
  public:
    AWS_CODEBUILD_API CreateWebhookRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateWebhook"; }

    AWS_CODEBUILD_API Aws::String SerializePayload() const override;

    AWS_CODEBUILD_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The name of the CodeBuild project.</p>
     */
    inline const Aws::String& GetProjectName() const{ return m_projectName; }
    inline bool ProjectNameHasBeenSet() const { return m_projectNameHasBeenSet; }
    inline void SetProjectName(const Aws::String& value) { m_projectNameHasBeenSet = true; m_projectName = value; }
    inline void SetProjectName(Aws::String&& value) { m_projectNameHasBeenSet = true; m_projectName = std::move(value); }
    inline void SetProjectName(const char* value) { m_projectNameHasBeenSet = true; m_projectName.assign(value); }
    inline CreateWebhookRequest& WithProjectName(const Aws::String& value) { SetProjectName(value); return *this;}
    inline CreateWebhookRequest& WithProjectName(Aws::String&& value) { SetProjectName(std::move(value)); return *this;}
    inline CreateWebhookRequest& WithProjectName(const char* value) { SetProjectName(value); return *this;}
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
    inline CreateWebhookRequest& WithBranchFilter(const Aws::String& value) { SetBranchFilter(value); return *this;}
    inline CreateWebhookRequest& WithBranchFilter(Aws::String&& value) { SetBranchFilter(std::move(value)); return *this;}
    inline CreateWebhookRequest& WithBranchFilter(const char* value) { SetBranchFilter(value); return *this;}
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
    inline CreateWebhookRequest& WithFilterGroups(const Aws::Vector<Aws::Vector<WebhookFilter>>& value) { SetFilterGroups(value); return *this;}
    inline CreateWebhookRequest& WithFilterGroups(Aws::Vector<Aws::Vector<WebhookFilter>>&& value) { SetFilterGroups(std::move(value)); return *this;}
    inline CreateWebhookRequest& AddFilterGroups(const Aws::Vector<WebhookFilter>& value) { m_filterGroupsHasBeenSet = true; m_filterGroups.push_back(value); return *this; }
    inline CreateWebhookRequest& AddFilterGroups(Aws::Vector<WebhookFilter>&& value) { m_filterGroupsHasBeenSet = true; m_filterGroups.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Specifies the type of build this webhook will trigger.</p>
     */
    inline const WebhookBuildType& GetBuildType() const{ return m_buildType; }
    inline bool BuildTypeHasBeenSet() const { return m_buildTypeHasBeenSet; }
    inline void SetBuildType(const WebhookBuildType& value) { m_buildTypeHasBeenSet = true; m_buildType = value; }
    inline void SetBuildType(WebhookBuildType&& value) { m_buildTypeHasBeenSet = true; m_buildType = std::move(value); }
    inline CreateWebhookRequest& WithBuildType(const WebhookBuildType& value) { SetBuildType(value); return *this;}
    inline CreateWebhookRequest& WithBuildType(WebhookBuildType&& value) { SetBuildType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>If manualCreation is true, CodeBuild doesn't create a webhook in GitHub and
     * instead returns <code>payloadUrl</code> and <code>secret</code> values for the
     * webhook. The <code>payloadUrl</code> and <code>secret</code> values in the
     * output can be used to manually create a webhook within GitHub.</p>  <p>
     * <code>manualCreation</code> is only available for GitHub webhooks.</p> 
     */
    inline bool GetManualCreation() const{ return m_manualCreation; }
    inline bool ManualCreationHasBeenSet() const { return m_manualCreationHasBeenSet; }
    inline void SetManualCreation(bool value) { m_manualCreationHasBeenSet = true; m_manualCreation = value; }
    inline CreateWebhookRequest& WithManualCreation(bool value) { SetManualCreation(value); return *this;}
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
    inline CreateWebhookRequest& WithScopeConfiguration(const ScopeConfiguration& value) { SetScopeConfiguration(value); return *this;}
    inline CreateWebhookRequest& WithScopeConfiguration(ScopeConfiguration&& value) { SetScopeConfiguration(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_projectName;
    bool m_projectNameHasBeenSet = false;

    Aws::String m_branchFilter;
    bool m_branchFilterHasBeenSet = false;

    Aws::Vector<Aws::Vector<WebhookFilter>> m_filterGroups;
    bool m_filterGroupsHasBeenSet = false;

    WebhookBuildType m_buildType;
    bool m_buildTypeHasBeenSet = false;

    bool m_manualCreation;
    bool m_manualCreationHasBeenSet = false;

    ScopeConfiguration m_scopeConfiguration;
    bool m_scopeConfigurationHasBeenSet = false;
  };

} // namespace Model
} // namespace CodeBuild
} // namespace Aws
