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
  class UpdateWebhookRequest : public CodeBuildRequest
  {
  public:
    AWS_CODEBUILD_API UpdateWebhookRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateWebhook"; }

    AWS_CODEBUILD_API Aws::String SerializePayload() const override;

    AWS_CODEBUILD_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The name of the CodeBuild project.</p>
     */
    inline const Aws::String& GetProjectName() const{ return m_projectName; }

    /**
     * <p>The name of the CodeBuild project.</p>
     */
    inline bool ProjectNameHasBeenSet() const { return m_projectNameHasBeenSet; }

    /**
     * <p>The name of the CodeBuild project.</p>
     */
    inline void SetProjectName(const Aws::String& value) { m_projectNameHasBeenSet = true; m_projectName = value; }

    /**
     * <p>The name of the CodeBuild project.</p>
     */
    inline void SetProjectName(Aws::String&& value) { m_projectNameHasBeenSet = true; m_projectName = std::move(value); }

    /**
     * <p>The name of the CodeBuild project.</p>
     */
    inline void SetProjectName(const char* value) { m_projectNameHasBeenSet = true; m_projectName.assign(value); }

    /**
     * <p>The name of the CodeBuild project.</p>
     */
    inline UpdateWebhookRequest& WithProjectName(const Aws::String& value) { SetProjectName(value); return *this;}

    /**
     * <p>The name of the CodeBuild project.</p>
     */
    inline UpdateWebhookRequest& WithProjectName(Aws::String&& value) { SetProjectName(std::move(value)); return *this;}

    /**
     * <p>The name of the CodeBuild project.</p>
     */
    inline UpdateWebhookRequest& WithProjectName(const char* value) { SetProjectName(value); return *this;}


    /**
     * <p>A regular expression used to determine which repository branches are built
     * when a webhook is triggered. If the name of a branch matches the regular
     * expression, then it is built. If <code>branchFilter</code> is empty, then all
     * branches are built.</p>  <p> It is recommended that you use
     * <code>filterGroups</code> instead of <code>branchFilter</code>. </p> 
     */
    inline const Aws::String& GetBranchFilter() const{ return m_branchFilter; }

    /**
     * <p>A regular expression used to determine which repository branches are built
     * when a webhook is triggered. If the name of a branch matches the regular
     * expression, then it is built. If <code>branchFilter</code> is empty, then all
     * branches are built.</p>  <p> It is recommended that you use
     * <code>filterGroups</code> instead of <code>branchFilter</code>. </p> 
     */
    inline bool BranchFilterHasBeenSet() const { return m_branchFilterHasBeenSet; }

    /**
     * <p>A regular expression used to determine which repository branches are built
     * when a webhook is triggered. If the name of a branch matches the regular
     * expression, then it is built. If <code>branchFilter</code> is empty, then all
     * branches are built.</p>  <p> It is recommended that you use
     * <code>filterGroups</code> instead of <code>branchFilter</code>. </p> 
     */
    inline void SetBranchFilter(const Aws::String& value) { m_branchFilterHasBeenSet = true; m_branchFilter = value; }

    /**
     * <p>A regular expression used to determine which repository branches are built
     * when a webhook is triggered. If the name of a branch matches the regular
     * expression, then it is built. If <code>branchFilter</code> is empty, then all
     * branches are built.</p>  <p> It is recommended that you use
     * <code>filterGroups</code> instead of <code>branchFilter</code>. </p> 
     */
    inline void SetBranchFilter(Aws::String&& value) { m_branchFilterHasBeenSet = true; m_branchFilter = std::move(value); }

    /**
     * <p>A regular expression used to determine which repository branches are built
     * when a webhook is triggered. If the name of a branch matches the regular
     * expression, then it is built. If <code>branchFilter</code> is empty, then all
     * branches are built.</p>  <p> It is recommended that you use
     * <code>filterGroups</code> instead of <code>branchFilter</code>. </p> 
     */
    inline void SetBranchFilter(const char* value) { m_branchFilterHasBeenSet = true; m_branchFilter.assign(value); }

    /**
     * <p>A regular expression used to determine which repository branches are built
     * when a webhook is triggered. If the name of a branch matches the regular
     * expression, then it is built. If <code>branchFilter</code> is empty, then all
     * branches are built.</p>  <p> It is recommended that you use
     * <code>filterGroups</code> instead of <code>branchFilter</code>. </p> 
     */
    inline UpdateWebhookRequest& WithBranchFilter(const Aws::String& value) { SetBranchFilter(value); return *this;}

    /**
     * <p>A regular expression used to determine which repository branches are built
     * when a webhook is triggered. If the name of a branch matches the regular
     * expression, then it is built. If <code>branchFilter</code> is empty, then all
     * branches are built.</p>  <p> It is recommended that you use
     * <code>filterGroups</code> instead of <code>branchFilter</code>. </p> 
     */
    inline UpdateWebhookRequest& WithBranchFilter(Aws::String&& value) { SetBranchFilter(std::move(value)); return *this;}

    /**
     * <p>A regular expression used to determine which repository branches are built
     * when a webhook is triggered. If the name of a branch matches the regular
     * expression, then it is built. If <code>branchFilter</code> is empty, then all
     * branches are built.</p>  <p> It is recommended that you use
     * <code>filterGroups</code> instead of <code>branchFilter</code>. </p> 
     */
    inline UpdateWebhookRequest& WithBranchFilter(const char* value) { SetBranchFilter(value); return *this;}


    /**
     * <p> A boolean value that specifies whether the associated GitHub repository's
     * secret token should be updated. If you use Bitbucket for your repository,
     * <code>rotateSecret</code> is ignored. </p>
     */
    inline bool GetRotateSecret() const{ return m_rotateSecret; }

    /**
     * <p> A boolean value that specifies whether the associated GitHub repository's
     * secret token should be updated. If you use Bitbucket for your repository,
     * <code>rotateSecret</code> is ignored. </p>
     */
    inline bool RotateSecretHasBeenSet() const { return m_rotateSecretHasBeenSet; }

    /**
     * <p> A boolean value that specifies whether the associated GitHub repository's
     * secret token should be updated. If you use Bitbucket for your repository,
     * <code>rotateSecret</code> is ignored. </p>
     */
    inline void SetRotateSecret(bool value) { m_rotateSecretHasBeenSet = true; m_rotateSecret = value; }

    /**
     * <p> A boolean value that specifies whether the associated GitHub repository's
     * secret token should be updated. If you use Bitbucket for your repository,
     * <code>rotateSecret</code> is ignored. </p>
     */
    inline UpdateWebhookRequest& WithRotateSecret(bool value) { SetRotateSecret(value); return *this;}


    /**
     * <p> An array of arrays of <code>WebhookFilter</code> objects used to determine
     * if a webhook event can trigger a build. A filter group must contain at least one
     * <code>EVENT</code> <code>WebhookFilter</code>. </p>
     */
    inline const Aws::Vector<Aws::Vector<WebhookFilter>>& GetFilterGroups() const{ return m_filterGroups; }

    /**
     * <p> An array of arrays of <code>WebhookFilter</code> objects used to determine
     * if a webhook event can trigger a build. A filter group must contain at least one
     * <code>EVENT</code> <code>WebhookFilter</code>. </p>
     */
    inline bool FilterGroupsHasBeenSet() const { return m_filterGroupsHasBeenSet; }

    /**
     * <p> An array of arrays of <code>WebhookFilter</code> objects used to determine
     * if a webhook event can trigger a build. A filter group must contain at least one
     * <code>EVENT</code> <code>WebhookFilter</code>. </p>
     */
    inline void SetFilterGroups(const Aws::Vector<Aws::Vector<WebhookFilter>>& value) { m_filterGroupsHasBeenSet = true; m_filterGroups = value; }

    /**
     * <p> An array of arrays of <code>WebhookFilter</code> objects used to determine
     * if a webhook event can trigger a build. A filter group must contain at least one
     * <code>EVENT</code> <code>WebhookFilter</code>. </p>
     */
    inline void SetFilterGroups(Aws::Vector<Aws::Vector<WebhookFilter>>&& value) { m_filterGroupsHasBeenSet = true; m_filterGroups = std::move(value); }

    /**
     * <p> An array of arrays of <code>WebhookFilter</code> objects used to determine
     * if a webhook event can trigger a build. A filter group must contain at least one
     * <code>EVENT</code> <code>WebhookFilter</code>. </p>
     */
    inline UpdateWebhookRequest& WithFilterGroups(const Aws::Vector<Aws::Vector<WebhookFilter>>& value) { SetFilterGroups(value); return *this;}

    /**
     * <p> An array of arrays of <code>WebhookFilter</code> objects used to determine
     * if a webhook event can trigger a build. A filter group must contain at least one
     * <code>EVENT</code> <code>WebhookFilter</code>. </p>
     */
    inline UpdateWebhookRequest& WithFilterGroups(Aws::Vector<Aws::Vector<WebhookFilter>>&& value) { SetFilterGroups(std::move(value)); return *this;}

    /**
     * <p> An array of arrays of <code>WebhookFilter</code> objects used to determine
     * if a webhook event can trigger a build. A filter group must contain at least one
     * <code>EVENT</code> <code>WebhookFilter</code>. </p>
     */
    inline UpdateWebhookRequest& AddFilterGroups(const Aws::Vector<WebhookFilter>& value) { m_filterGroupsHasBeenSet = true; m_filterGroups.push_back(value); return *this; }

    /**
     * <p> An array of arrays of <code>WebhookFilter</code> objects used to determine
     * if a webhook event can trigger a build. A filter group must contain at least one
     * <code>EVENT</code> <code>WebhookFilter</code>. </p>
     */
    inline UpdateWebhookRequest& AddFilterGroups(Aws::Vector<WebhookFilter>&& value) { m_filterGroupsHasBeenSet = true; m_filterGroups.push_back(std::move(value)); return *this; }


    /**
     * <p>Specifies the type of build this webhook will trigger.</p>
     */
    inline const WebhookBuildType& GetBuildType() const{ return m_buildType; }

    /**
     * <p>Specifies the type of build this webhook will trigger.</p>
     */
    inline bool BuildTypeHasBeenSet() const { return m_buildTypeHasBeenSet; }

    /**
     * <p>Specifies the type of build this webhook will trigger.</p>
     */
    inline void SetBuildType(const WebhookBuildType& value) { m_buildTypeHasBeenSet = true; m_buildType = value; }

    /**
     * <p>Specifies the type of build this webhook will trigger.</p>
     */
    inline void SetBuildType(WebhookBuildType&& value) { m_buildTypeHasBeenSet = true; m_buildType = std::move(value); }

    /**
     * <p>Specifies the type of build this webhook will trigger.</p>
     */
    inline UpdateWebhookRequest& WithBuildType(const WebhookBuildType& value) { SetBuildType(value); return *this;}

    /**
     * <p>Specifies the type of build this webhook will trigger.</p>
     */
    inline UpdateWebhookRequest& WithBuildType(WebhookBuildType&& value) { SetBuildType(std::move(value)); return *this;}

  private:

    Aws::String m_projectName;
    bool m_projectNameHasBeenSet = false;

    Aws::String m_branchFilter;
    bool m_branchFilterHasBeenSet = false;

    bool m_rotateSecret;
    bool m_rotateSecretHasBeenSet = false;

    Aws::Vector<Aws::Vector<WebhookFilter>> m_filterGroups;
    bool m_filterGroupsHasBeenSet = false;

    WebhookBuildType m_buildType;
    bool m_buildTypeHasBeenSet = false;
  };

} // namespace Model
} // namespace CodeBuild
} // namespace Aws
