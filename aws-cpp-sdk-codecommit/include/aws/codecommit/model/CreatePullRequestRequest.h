/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#pragma once
#include <aws/codecommit/CodeCommit_EXPORTS.h>
#include <aws/codecommit/CodeCommitRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/codecommit/model/Target.h>
#include <utility>
#include <aws/core/utils/UUID.h>

namespace Aws
{
namespace CodeCommit
{
namespace Model
{

  /**
   */
  class AWS_CODECOMMIT_API CreatePullRequestRequest : public CodeCommitRequest
  {
  public:
    CreatePullRequestRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreatePullRequest"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The title of the pull request. This title will be used to identify the pull
     * request to other users in the repository.</p>
     */
    inline const Aws::String& GetTitle() const{ return m_title; }

    /**
     * <p>The title of the pull request. This title will be used to identify the pull
     * request to other users in the repository.</p>
     */
    inline bool TitleHasBeenSet() const { return m_titleHasBeenSet; }

    /**
     * <p>The title of the pull request. This title will be used to identify the pull
     * request to other users in the repository.</p>
     */
    inline void SetTitle(const Aws::String& value) { m_titleHasBeenSet = true; m_title = value; }

    /**
     * <p>The title of the pull request. This title will be used to identify the pull
     * request to other users in the repository.</p>
     */
    inline void SetTitle(Aws::String&& value) { m_titleHasBeenSet = true; m_title = std::move(value); }

    /**
     * <p>The title of the pull request. This title will be used to identify the pull
     * request to other users in the repository.</p>
     */
    inline void SetTitle(const char* value) { m_titleHasBeenSet = true; m_title.assign(value); }

    /**
     * <p>The title of the pull request. This title will be used to identify the pull
     * request to other users in the repository.</p>
     */
    inline CreatePullRequestRequest& WithTitle(const Aws::String& value) { SetTitle(value); return *this;}

    /**
     * <p>The title of the pull request. This title will be used to identify the pull
     * request to other users in the repository.</p>
     */
    inline CreatePullRequestRequest& WithTitle(Aws::String&& value) { SetTitle(std::move(value)); return *this;}

    /**
     * <p>The title of the pull request. This title will be used to identify the pull
     * request to other users in the repository.</p>
     */
    inline CreatePullRequestRequest& WithTitle(const char* value) { SetTitle(value); return *this;}


    /**
     * <p>A description of the pull request.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>A description of the pull request.</p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>A description of the pull request.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>A description of the pull request.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>A description of the pull request.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>A description of the pull request.</p>
     */
    inline CreatePullRequestRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>A description of the pull request.</p>
     */
    inline CreatePullRequestRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>A description of the pull request.</p>
     */
    inline CreatePullRequestRequest& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>The targets for the pull request, including the source of the code to be
     * reviewed (the source branch), and the destination where the creator of the pull
     * request intends the code to be merged after the pull request is closed (the
     * destination branch).</p>
     */
    inline const Aws::Vector<Target>& GetTargets() const{ return m_targets; }

    /**
     * <p>The targets for the pull request, including the source of the code to be
     * reviewed (the source branch), and the destination where the creator of the pull
     * request intends the code to be merged after the pull request is closed (the
     * destination branch).</p>
     */
    inline bool TargetsHasBeenSet() const { return m_targetsHasBeenSet; }

    /**
     * <p>The targets for the pull request, including the source of the code to be
     * reviewed (the source branch), and the destination where the creator of the pull
     * request intends the code to be merged after the pull request is closed (the
     * destination branch).</p>
     */
    inline void SetTargets(const Aws::Vector<Target>& value) { m_targetsHasBeenSet = true; m_targets = value; }

    /**
     * <p>The targets for the pull request, including the source of the code to be
     * reviewed (the source branch), and the destination where the creator of the pull
     * request intends the code to be merged after the pull request is closed (the
     * destination branch).</p>
     */
    inline void SetTargets(Aws::Vector<Target>&& value) { m_targetsHasBeenSet = true; m_targets = std::move(value); }

    /**
     * <p>The targets for the pull request, including the source of the code to be
     * reviewed (the source branch), and the destination where the creator of the pull
     * request intends the code to be merged after the pull request is closed (the
     * destination branch).</p>
     */
    inline CreatePullRequestRequest& WithTargets(const Aws::Vector<Target>& value) { SetTargets(value); return *this;}

    /**
     * <p>The targets for the pull request, including the source of the code to be
     * reviewed (the source branch), and the destination where the creator of the pull
     * request intends the code to be merged after the pull request is closed (the
     * destination branch).</p>
     */
    inline CreatePullRequestRequest& WithTargets(Aws::Vector<Target>&& value) { SetTargets(std::move(value)); return *this;}

    /**
     * <p>The targets for the pull request, including the source of the code to be
     * reviewed (the source branch), and the destination where the creator of the pull
     * request intends the code to be merged after the pull request is closed (the
     * destination branch).</p>
     */
    inline CreatePullRequestRequest& AddTargets(const Target& value) { m_targetsHasBeenSet = true; m_targets.push_back(value); return *this; }

    /**
     * <p>The targets for the pull request, including the source of the code to be
     * reviewed (the source branch), and the destination where the creator of the pull
     * request intends the code to be merged after the pull request is closed (the
     * destination branch).</p>
     */
    inline CreatePullRequestRequest& AddTargets(Target&& value) { m_targetsHasBeenSet = true; m_targets.push_back(std::move(value)); return *this; }


    /**
     * <p>A unique, client-generated idempotency token that when provided in a request,
     * ensures the request cannot be repeated with a changed parameter. If a request is
     * received with the same parameters and a token is included, the request will
     * return information about the initial request that used that token.</p> <note>
     * <p>The AWS SDKs prepopulate client request tokens. If using an AWS SDK, you do
     * not have to generate an idempotency token, as this will be done for you.</p>
     * </note>
     */
    inline const Aws::String& GetClientRequestToken() const{ return m_clientRequestToken; }

    /**
     * <p>A unique, client-generated idempotency token that when provided in a request,
     * ensures the request cannot be repeated with a changed parameter. If a request is
     * received with the same parameters and a token is included, the request will
     * return information about the initial request that used that token.</p> <note>
     * <p>The AWS SDKs prepopulate client request tokens. If using an AWS SDK, you do
     * not have to generate an idempotency token, as this will be done for you.</p>
     * </note>
     */
    inline bool ClientRequestTokenHasBeenSet() const { return m_clientRequestTokenHasBeenSet; }

    /**
     * <p>A unique, client-generated idempotency token that when provided in a request,
     * ensures the request cannot be repeated with a changed parameter. If a request is
     * received with the same parameters and a token is included, the request will
     * return information about the initial request that used that token.</p> <note>
     * <p>The AWS SDKs prepopulate client request tokens. If using an AWS SDK, you do
     * not have to generate an idempotency token, as this will be done for you.</p>
     * </note>
     */
    inline void SetClientRequestToken(const Aws::String& value) { m_clientRequestTokenHasBeenSet = true; m_clientRequestToken = value; }

    /**
     * <p>A unique, client-generated idempotency token that when provided in a request,
     * ensures the request cannot be repeated with a changed parameter. If a request is
     * received with the same parameters and a token is included, the request will
     * return information about the initial request that used that token.</p> <note>
     * <p>The AWS SDKs prepopulate client request tokens. If using an AWS SDK, you do
     * not have to generate an idempotency token, as this will be done for you.</p>
     * </note>
     */
    inline void SetClientRequestToken(Aws::String&& value) { m_clientRequestTokenHasBeenSet = true; m_clientRequestToken = std::move(value); }

    /**
     * <p>A unique, client-generated idempotency token that when provided in a request,
     * ensures the request cannot be repeated with a changed parameter. If a request is
     * received with the same parameters and a token is included, the request will
     * return information about the initial request that used that token.</p> <note>
     * <p>The AWS SDKs prepopulate client request tokens. If using an AWS SDK, you do
     * not have to generate an idempotency token, as this will be done for you.</p>
     * </note>
     */
    inline void SetClientRequestToken(const char* value) { m_clientRequestTokenHasBeenSet = true; m_clientRequestToken.assign(value); }

    /**
     * <p>A unique, client-generated idempotency token that when provided in a request,
     * ensures the request cannot be repeated with a changed parameter. If a request is
     * received with the same parameters and a token is included, the request will
     * return information about the initial request that used that token.</p> <note>
     * <p>The AWS SDKs prepopulate client request tokens. If using an AWS SDK, you do
     * not have to generate an idempotency token, as this will be done for you.</p>
     * </note>
     */
    inline CreatePullRequestRequest& WithClientRequestToken(const Aws::String& value) { SetClientRequestToken(value); return *this;}

    /**
     * <p>A unique, client-generated idempotency token that when provided in a request,
     * ensures the request cannot be repeated with a changed parameter. If a request is
     * received with the same parameters and a token is included, the request will
     * return information about the initial request that used that token.</p> <note>
     * <p>The AWS SDKs prepopulate client request tokens. If using an AWS SDK, you do
     * not have to generate an idempotency token, as this will be done for you.</p>
     * </note>
     */
    inline CreatePullRequestRequest& WithClientRequestToken(Aws::String&& value) { SetClientRequestToken(std::move(value)); return *this;}

    /**
     * <p>A unique, client-generated idempotency token that when provided in a request,
     * ensures the request cannot be repeated with a changed parameter. If a request is
     * received with the same parameters and a token is included, the request will
     * return information about the initial request that used that token.</p> <note>
     * <p>The AWS SDKs prepopulate client request tokens. If using an AWS SDK, you do
     * not have to generate an idempotency token, as this will be done for you.</p>
     * </note>
     */
    inline CreatePullRequestRequest& WithClientRequestToken(const char* value) { SetClientRequestToken(value); return *this;}

  private:

    Aws::String m_title;
    bool m_titleHasBeenSet;

    Aws::String m_description;
    bool m_descriptionHasBeenSet;

    Aws::Vector<Target> m_targets;
    bool m_targetsHasBeenSet;

    Aws::String m_clientRequestToken;
    bool m_clientRequestTokenHasBeenSet;
  };

} // namespace Model
} // namespace CodeCommit
} // namespace Aws
