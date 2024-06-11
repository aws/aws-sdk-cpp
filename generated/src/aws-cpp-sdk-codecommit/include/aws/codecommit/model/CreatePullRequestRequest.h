﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
  class CreatePullRequestRequest : public CodeCommitRequest
  {
  public:
    AWS_CODECOMMIT_API CreatePullRequestRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreatePullRequest"; }

    AWS_CODECOMMIT_API Aws::String SerializePayload() const override;

    AWS_CODECOMMIT_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The title of the pull request. This title is used to identify the pull
     * request to other users in the repository.</p>
     */
    inline const Aws::String& GetTitle() const{ return m_title; }
    inline bool TitleHasBeenSet() const { return m_titleHasBeenSet; }
    inline void SetTitle(const Aws::String& value) { m_titleHasBeenSet = true; m_title = value; }
    inline void SetTitle(Aws::String&& value) { m_titleHasBeenSet = true; m_title = std::move(value); }
    inline void SetTitle(const char* value) { m_titleHasBeenSet = true; m_title.assign(value); }
    inline CreatePullRequestRequest& WithTitle(const Aws::String& value) { SetTitle(value); return *this;}
    inline CreatePullRequestRequest& WithTitle(Aws::String&& value) { SetTitle(std::move(value)); return *this;}
    inline CreatePullRequestRequest& WithTitle(const char* value) { SetTitle(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A description of the pull request.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }
    inline CreatePullRequestRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline CreatePullRequestRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline CreatePullRequestRequest& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The targets for the pull request, including the source of the code to be
     * reviewed (the source branch) and the destination where the creator of the pull
     * request intends the code to be merged after the pull request is closed (the
     * destination branch).</p>
     */
    inline const Aws::Vector<Target>& GetTargets() const{ return m_targets; }
    inline bool TargetsHasBeenSet() const { return m_targetsHasBeenSet; }
    inline void SetTargets(const Aws::Vector<Target>& value) { m_targetsHasBeenSet = true; m_targets = value; }
    inline void SetTargets(Aws::Vector<Target>&& value) { m_targetsHasBeenSet = true; m_targets = std::move(value); }
    inline CreatePullRequestRequest& WithTargets(const Aws::Vector<Target>& value) { SetTargets(value); return *this;}
    inline CreatePullRequestRequest& WithTargets(Aws::Vector<Target>&& value) { SetTargets(std::move(value)); return *this;}
    inline CreatePullRequestRequest& AddTargets(const Target& value) { m_targetsHasBeenSet = true; m_targets.push_back(value); return *this; }
    inline CreatePullRequestRequest& AddTargets(Target&& value) { m_targetsHasBeenSet = true; m_targets.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A unique, client-generated idempotency token that, when provided in a
     * request, ensures the request cannot be repeated with a changed parameter. If a
     * request is received with the same parameters and a token is included, the
     * request returns information about the initial request that used that token.</p>
     *  <p>The Amazon Web ServicesSDKs prepopulate client request tokens. If you
     * are using an Amazon Web ServicesSDK, an idempotency token is created for
     * you.</p> 
     */
    inline const Aws::String& GetClientRequestToken() const{ return m_clientRequestToken; }
    inline bool ClientRequestTokenHasBeenSet() const { return m_clientRequestTokenHasBeenSet; }
    inline void SetClientRequestToken(const Aws::String& value) { m_clientRequestTokenHasBeenSet = true; m_clientRequestToken = value; }
    inline void SetClientRequestToken(Aws::String&& value) { m_clientRequestTokenHasBeenSet = true; m_clientRequestToken = std::move(value); }
    inline void SetClientRequestToken(const char* value) { m_clientRequestTokenHasBeenSet = true; m_clientRequestToken.assign(value); }
    inline CreatePullRequestRequest& WithClientRequestToken(const Aws::String& value) { SetClientRequestToken(value); return *this;}
    inline CreatePullRequestRequest& WithClientRequestToken(Aws::String&& value) { SetClientRequestToken(std::move(value)); return *this;}
    inline CreatePullRequestRequest& WithClientRequestToken(const char* value) { SetClientRequestToken(value); return *this;}
    ///@}
  private:

    Aws::String m_title;
    bool m_titleHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::Vector<Target> m_targets;
    bool m_targetsHasBeenSet = false;

    Aws::String m_clientRequestToken;
    bool m_clientRequestTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace CodeCommit
} // namespace Aws
