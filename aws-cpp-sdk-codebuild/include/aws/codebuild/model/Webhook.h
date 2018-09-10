﻿/*
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
#include <aws/codebuild/CodeBuild_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
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
   * <p>Information about a webhook in GitHub that connects repository events to a
   * build project in AWS CodeBuild.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/codebuild-2016-10-06/Webhook">AWS
   * API Reference</a></p>
   */
  class AWS_CODEBUILD_API Webhook
  {
  public:
    Webhook();
    Webhook(Aws::Utils::Json::JsonView jsonValue);
    Webhook& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The URL to the webhook.</p>
     */
    inline const Aws::String& GetUrl() const{ return m_url; }

    /**
     * <p>The URL to the webhook.</p>
     */
    inline void SetUrl(const Aws::String& value) { m_urlHasBeenSet = true; m_url = value; }

    /**
     * <p>The URL to the webhook.</p>
     */
    inline void SetUrl(Aws::String&& value) { m_urlHasBeenSet = true; m_url = std::move(value); }

    /**
     * <p>The URL to the webhook.</p>
     */
    inline void SetUrl(const char* value) { m_urlHasBeenSet = true; m_url.assign(value); }

    /**
     * <p>The URL to the webhook.</p>
     */
    inline Webhook& WithUrl(const Aws::String& value) { SetUrl(value); return *this;}

    /**
     * <p>The URL to the webhook.</p>
     */
    inline Webhook& WithUrl(Aws::String&& value) { SetUrl(std::move(value)); return *this;}

    /**
     * <p>The URL to the webhook.</p>
     */
    inline Webhook& WithUrl(const char* value) { SetUrl(value); return *this;}


    /**
     * <p> The CodeBuild endpoint where webhook events are sent.</p>
     */
    inline const Aws::String& GetPayloadUrl() const{ return m_payloadUrl; }

    /**
     * <p> The CodeBuild endpoint where webhook events are sent.</p>
     */
    inline void SetPayloadUrl(const Aws::String& value) { m_payloadUrlHasBeenSet = true; m_payloadUrl = value; }

    /**
     * <p> The CodeBuild endpoint where webhook events are sent.</p>
     */
    inline void SetPayloadUrl(Aws::String&& value) { m_payloadUrlHasBeenSet = true; m_payloadUrl = std::move(value); }

    /**
     * <p> The CodeBuild endpoint where webhook events are sent.</p>
     */
    inline void SetPayloadUrl(const char* value) { m_payloadUrlHasBeenSet = true; m_payloadUrl.assign(value); }

    /**
     * <p> The CodeBuild endpoint where webhook events are sent.</p>
     */
    inline Webhook& WithPayloadUrl(const Aws::String& value) { SetPayloadUrl(value); return *this;}

    /**
     * <p> The CodeBuild endpoint where webhook events are sent.</p>
     */
    inline Webhook& WithPayloadUrl(Aws::String&& value) { SetPayloadUrl(std::move(value)); return *this;}

    /**
     * <p> The CodeBuild endpoint where webhook events are sent.</p>
     */
    inline Webhook& WithPayloadUrl(const char* value) { SetPayloadUrl(value); return *this;}


    /**
     * <p> The secret token of the associated repository. </p>
     */
    inline const Aws::String& GetSecret() const{ return m_secret; }

    /**
     * <p> The secret token of the associated repository. </p>
     */
    inline void SetSecret(const Aws::String& value) { m_secretHasBeenSet = true; m_secret = value; }

    /**
     * <p> The secret token of the associated repository. </p>
     */
    inline void SetSecret(Aws::String&& value) { m_secretHasBeenSet = true; m_secret = std::move(value); }

    /**
     * <p> The secret token of the associated repository. </p>
     */
    inline void SetSecret(const char* value) { m_secretHasBeenSet = true; m_secret.assign(value); }

    /**
     * <p> The secret token of the associated repository. </p>
     */
    inline Webhook& WithSecret(const Aws::String& value) { SetSecret(value); return *this;}

    /**
     * <p> The secret token of the associated repository. </p>
     */
    inline Webhook& WithSecret(Aws::String&& value) { SetSecret(std::move(value)); return *this;}

    /**
     * <p> The secret token of the associated repository. </p>
     */
    inline Webhook& WithSecret(const char* value) { SetSecret(value); return *this;}


    /**
     * <p>A regular expression used to determine which branches in a repository are
     * built when a webhook is triggered. If the name of a branch matches the regular
     * expression, then it is built. If it doesn't match, then it is not. If
     * branchFilter is empty, then all branches are built.</p>
     */
    inline const Aws::String& GetBranchFilter() const{ return m_branchFilter; }

    /**
     * <p>A regular expression used to determine which branches in a repository are
     * built when a webhook is triggered. If the name of a branch matches the regular
     * expression, then it is built. If it doesn't match, then it is not. If
     * branchFilter is empty, then all branches are built.</p>
     */
    inline void SetBranchFilter(const Aws::String& value) { m_branchFilterHasBeenSet = true; m_branchFilter = value; }

    /**
     * <p>A regular expression used to determine which branches in a repository are
     * built when a webhook is triggered. If the name of a branch matches the regular
     * expression, then it is built. If it doesn't match, then it is not. If
     * branchFilter is empty, then all branches are built.</p>
     */
    inline void SetBranchFilter(Aws::String&& value) { m_branchFilterHasBeenSet = true; m_branchFilter = std::move(value); }

    /**
     * <p>A regular expression used to determine which branches in a repository are
     * built when a webhook is triggered. If the name of a branch matches the regular
     * expression, then it is built. If it doesn't match, then it is not. If
     * branchFilter is empty, then all branches are built.</p>
     */
    inline void SetBranchFilter(const char* value) { m_branchFilterHasBeenSet = true; m_branchFilter.assign(value); }

    /**
     * <p>A regular expression used to determine which branches in a repository are
     * built when a webhook is triggered. If the name of a branch matches the regular
     * expression, then it is built. If it doesn't match, then it is not. If
     * branchFilter is empty, then all branches are built.</p>
     */
    inline Webhook& WithBranchFilter(const Aws::String& value) { SetBranchFilter(value); return *this;}

    /**
     * <p>A regular expression used to determine which branches in a repository are
     * built when a webhook is triggered. If the name of a branch matches the regular
     * expression, then it is built. If it doesn't match, then it is not. If
     * branchFilter is empty, then all branches are built.</p>
     */
    inline Webhook& WithBranchFilter(Aws::String&& value) { SetBranchFilter(std::move(value)); return *this;}

    /**
     * <p>A regular expression used to determine which branches in a repository are
     * built when a webhook is triggered. If the name of a branch matches the regular
     * expression, then it is built. If it doesn't match, then it is not. If
     * branchFilter is empty, then all branches are built.</p>
     */
    inline Webhook& WithBranchFilter(const char* value) { SetBranchFilter(value); return *this;}


    /**
     * <p> A timestamp indicating the last time a repository's secret token was
     * modified. </p>
     */
    inline const Aws::Utils::DateTime& GetLastModifiedSecret() const{ return m_lastModifiedSecret; }

    /**
     * <p> A timestamp indicating the last time a repository's secret token was
     * modified. </p>
     */
    inline void SetLastModifiedSecret(const Aws::Utils::DateTime& value) { m_lastModifiedSecretHasBeenSet = true; m_lastModifiedSecret = value; }

    /**
     * <p> A timestamp indicating the last time a repository's secret token was
     * modified. </p>
     */
    inline void SetLastModifiedSecret(Aws::Utils::DateTime&& value) { m_lastModifiedSecretHasBeenSet = true; m_lastModifiedSecret = std::move(value); }

    /**
     * <p> A timestamp indicating the last time a repository's secret token was
     * modified. </p>
     */
    inline Webhook& WithLastModifiedSecret(const Aws::Utils::DateTime& value) { SetLastModifiedSecret(value); return *this;}

    /**
     * <p> A timestamp indicating the last time a repository's secret token was
     * modified. </p>
     */
    inline Webhook& WithLastModifiedSecret(Aws::Utils::DateTime&& value) { SetLastModifiedSecret(std::move(value)); return *this;}

  private:

    Aws::String m_url;
    bool m_urlHasBeenSet;

    Aws::String m_payloadUrl;
    bool m_payloadUrlHasBeenSet;

    Aws::String m_secret;
    bool m_secretHasBeenSet;

    Aws::String m_branchFilter;
    bool m_branchFilterHasBeenSet;

    Aws::Utils::DateTime m_lastModifiedSecret;
    bool m_lastModifiedSecretHasBeenSet;
  };

} // namespace Model
} // namespace CodeBuild
} // namespace Aws
