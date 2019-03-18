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
#include <aws/codebuild/CodeBuild_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/DateTime.h>
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
   * project in AWS CodeBuild.</p><p><h3>See Also:</h3>   <a
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
    inline bool UrlHasBeenSet() const { return m_urlHasBeenSet; }

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
     * <p> The AWS CodeBuild endpoint where webhook events are sent.</p>
     */
    inline const Aws::String& GetPayloadUrl() const{ return m_payloadUrl; }

    /**
     * <p> The AWS CodeBuild endpoint where webhook events are sent.</p>
     */
    inline bool PayloadUrlHasBeenSet() const { return m_payloadUrlHasBeenSet; }

    /**
     * <p> The AWS CodeBuild endpoint where webhook events are sent.</p>
     */
    inline void SetPayloadUrl(const Aws::String& value) { m_payloadUrlHasBeenSet = true; m_payloadUrl = value; }

    /**
     * <p> The AWS CodeBuild endpoint where webhook events are sent.</p>
     */
    inline void SetPayloadUrl(Aws::String&& value) { m_payloadUrlHasBeenSet = true; m_payloadUrl = std::move(value); }

    /**
     * <p> The AWS CodeBuild endpoint where webhook events are sent.</p>
     */
    inline void SetPayloadUrl(const char* value) { m_payloadUrlHasBeenSet = true; m_payloadUrl.assign(value); }

    /**
     * <p> The AWS CodeBuild endpoint where webhook events are sent.</p>
     */
    inline Webhook& WithPayloadUrl(const Aws::String& value) { SetPayloadUrl(value); return *this;}

    /**
     * <p> The AWS CodeBuild endpoint where webhook events are sent.</p>
     */
    inline Webhook& WithPayloadUrl(Aws::String&& value) { SetPayloadUrl(std::move(value)); return *this;}

    /**
     * <p> The AWS CodeBuild endpoint where webhook events are sent.</p>
     */
    inline Webhook& WithPayloadUrl(const char* value) { SetPayloadUrl(value); return *this;}


    /**
     * <p> The secret token of the associated repository. </p> <note> <p> A Bitbucket
     * webhook does not support <code>secret</code>. </p> </note>
     */
    inline const Aws::String& GetSecret() const{ return m_secret; }

    /**
     * <p> The secret token of the associated repository. </p> <note> <p> A Bitbucket
     * webhook does not support <code>secret</code>. </p> </note>
     */
    inline bool SecretHasBeenSet() const { return m_secretHasBeenSet; }

    /**
     * <p> The secret token of the associated repository. </p> <note> <p> A Bitbucket
     * webhook does not support <code>secret</code>. </p> </note>
     */
    inline void SetSecret(const Aws::String& value) { m_secretHasBeenSet = true; m_secret = value; }

    /**
     * <p> The secret token of the associated repository. </p> <note> <p> A Bitbucket
     * webhook does not support <code>secret</code>. </p> </note>
     */
    inline void SetSecret(Aws::String&& value) { m_secretHasBeenSet = true; m_secret = std::move(value); }

    /**
     * <p> The secret token of the associated repository. </p> <note> <p> A Bitbucket
     * webhook does not support <code>secret</code>. </p> </note>
     */
    inline void SetSecret(const char* value) { m_secretHasBeenSet = true; m_secret.assign(value); }

    /**
     * <p> The secret token of the associated repository. </p> <note> <p> A Bitbucket
     * webhook does not support <code>secret</code>. </p> </note>
     */
    inline Webhook& WithSecret(const Aws::String& value) { SetSecret(value); return *this;}

    /**
     * <p> The secret token of the associated repository. </p> <note> <p> A Bitbucket
     * webhook does not support <code>secret</code>. </p> </note>
     */
    inline Webhook& WithSecret(Aws::String&& value) { SetSecret(std::move(value)); return *this;}

    /**
     * <p> The secret token of the associated repository. </p> <note> <p> A Bitbucket
     * webhook does not support <code>secret</code>. </p> </note>
     */
    inline Webhook& WithSecret(const char* value) { SetSecret(value); return *this;}


    /**
     * <p>A regular expression used to determine which repository branches are built
     * when a webhook is triggered. If the name of a branch matches the regular
     * expression, then it is built. If <code>branchFilter</code> is empty, then all
     * branches are built.</p> <note> <p> It is recommended that you use
     * <code>filterGroups</code> instead of <code>branchFilter</code>. </p> </note>
     */
    inline const Aws::String& GetBranchFilter() const{ return m_branchFilter; }

    /**
     * <p>A regular expression used to determine which repository branches are built
     * when a webhook is triggered. If the name of a branch matches the regular
     * expression, then it is built. If <code>branchFilter</code> is empty, then all
     * branches are built.</p> <note> <p> It is recommended that you use
     * <code>filterGroups</code> instead of <code>branchFilter</code>. </p> </note>
     */
    inline bool BranchFilterHasBeenSet() const { return m_branchFilterHasBeenSet; }

    /**
     * <p>A regular expression used to determine which repository branches are built
     * when a webhook is triggered. If the name of a branch matches the regular
     * expression, then it is built. If <code>branchFilter</code> is empty, then all
     * branches are built.</p> <note> <p> It is recommended that you use
     * <code>filterGroups</code> instead of <code>branchFilter</code>. </p> </note>
     */
    inline void SetBranchFilter(const Aws::String& value) { m_branchFilterHasBeenSet = true; m_branchFilter = value; }

    /**
     * <p>A regular expression used to determine which repository branches are built
     * when a webhook is triggered. If the name of a branch matches the regular
     * expression, then it is built. If <code>branchFilter</code> is empty, then all
     * branches are built.</p> <note> <p> It is recommended that you use
     * <code>filterGroups</code> instead of <code>branchFilter</code>. </p> </note>
     */
    inline void SetBranchFilter(Aws::String&& value) { m_branchFilterHasBeenSet = true; m_branchFilter = std::move(value); }

    /**
     * <p>A regular expression used to determine which repository branches are built
     * when a webhook is triggered. If the name of a branch matches the regular
     * expression, then it is built. If <code>branchFilter</code> is empty, then all
     * branches are built.</p> <note> <p> It is recommended that you use
     * <code>filterGroups</code> instead of <code>branchFilter</code>. </p> </note>
     */
    inline void SetBranchFilter(const char* value) { m_branchFilterHasBeenSet = true; m_branchFilter.assign(value); }

    /**
     * <p>A regular expression used to determine which repository branches are built
     * when a webhook is triggered. If the name of a branch matches the regular
     * expression, then it is built. If <code>branchFilter</code> is empty, then all
     * branches are built.</p> <note> <p> It is recommended that you use
     * <code>filterGroups</code> instead of <code>branchFilter</code>. </p> </note>
     */
    inline Webhook& WithBranchFilter(const Aws::String& value) { SetBranchFilter(value); return *this;}

    /**
     * <p>A regular expression used to determine which repository branches are built
     * when a webhook is triggered. If the name of a branch matches the regular
     * expression, then it is built. If <code>branchFilter</code> is empty, then all
     * branches are built.</p> <note> <p> It is recommended that you use
     * <code>filterGroups</code> instead of <code>branchFilter</code>. </p> </note>
     */
    inline Webhook& WithBranchFilter(Aws::String&& value) { SetBranchFilter(std::move(value)); return *this;}

    /**
     * <p>A regular expression used to determine which repository branches are built
     * when a webhook is triggered. If the name of a branch matches the regular
     * expression, then it is built. If <code>branchFilter</code> is empty, then all
     * branches are built.</p> <note> <p> It is recommended that you use
     * <code>filterGroups</code> instead of <code>branchFilter</code>. </p> </note>
     */
    inline Webhook& WithBranchFilter(const char* value) { SetBranchFilter(value); return *this;}


    /**
     * <p> An array of arrays of <code>WebhookFilter</code> objects used to determine
     * which webhooks are triggered. At least one <code>WebhookFilter</code> in the
     * array must specify <code>EVENT</code> as its <code>type</code>. </p> <p> For a
     * build to be triggered, at least one filter group in the
     * <code>filterGroups</code> array must pass. For a filter group to pass, each of
     * its filters must pass. </p>
     */
    inline const Aws::Vector<Aws::Vector<WebhookFilter>>& GetFilterGroups() const{ return m_filterGroups; }

    /**
     * <p> An array of arrays of <code>WebhookFilter</code> objects used to determine
     * which webhooks are triggered. At least one <code>WebhookFilter</code> in the
     * array must specify <code>EVENT</code> as its <code>type</code>. </p> <p> For a
     * build to be triggered, at least one filter group in the
     * <code>filterGroups</code> array must pass. For a filter group to pass, each of
     * its filters must pass. </p>
     */
    inline bool FilterGroupsHasBeenSet() const { return m_filterGroupsHasBeenSet; }

    /**
     * <p> An array of arrays of <code>WebhookFilter</code> objects used to determine
     * which webhooks are triggered. At least one <code>WebhookFilter</code> in the
     * array must specify <code>EVENT</code> as its <code>type</code>. </p> <p> For a
     * build to be triggered, at least one filter group in the
     * <code>filterGroups</code> array must pass. For a filter group to pass, each of
     * its filters must pass. </p>
     */
    inline void SetFilterGroups(const Aws::Vector<Aws::Vector<WebhookFilter>>& value) { m_filterGroupsHasBeenSet = true; m_filterGroups = value; }

    /**
     * <p> An array of arrays of <code>WebhookFilter</code> objects used to determine
     * which webhooks are triggered. At least one <code>WebhookFilter</code> in the
     * array must specify <code>EVENT</code> as its <code>type</code>. </p> <p> For a
     * build to be triggered, at least one filter group in the
     * <code>filterGroups</code> array must pass. For a filter group to pass, each of
     * its filters must pass. </p>
     */
    inline void SetFilterGroups(Aws::Vector<Aws::Vector<WebhookFilter>>&& value) { m_filterGroupsHasBeenSet = true; m_filterGroups = std::move(value); }

    /**
     * <p> An array of arrays of <code>WebhookFilter</code> objects used to determine
     * which webhooks are triggered. At least one <code>WebhookFilter</code> in the
     * array must specify <code>EVENT</code> as its <code>type</code>. </p> <p> For a
     * build to be triggered, at least one filter group in the
     * <code>filterGroups</code> array must pass. For a filter group to pass, each of
     * its filters must pass. </p>
     */
    inline Webhook& WithFilterGroups(const Aws::Vector<Aws::Vector<WebhookFilter>>& value) { SetFilterGroups(value); return *this;}

    /**
     * <p> An array of arrays of <code>WebhookFilter</code> objects used to determine
     * which webhooks are triggered. At least one <code>WebhookFilter</code> in the
     * array must specify <code>EVENT</code> as its <code>type</code>. </p> <p> For a
     * build to be triggered, at least one filter group in the
     * <code>filterGroups</code> array must pass. For a filter group to pass, each of
     * its filters must pass. </p>
     */
    inline Webhook& WithFilterGroups(Aws::Vector<Aws::Vector<WebhookFilter>>&& value) { SetFilterGroups(std::move(value)); return *this;}

    /**
     * <p> An array of arrays of <code>WebhookFilter</code> objects used to determine
     * which webhooks are triggered. At least one <code>WebhookFilter</code> in the
     * array must specify <code>EVENT</code> as its <code>type</code>. </p> <p> For a
     * build to be triggered, at least one filter group in the
     * <code>filterGroups</code> array must pass. For a filter group to pass, each of
     * its filters must pass. </p>
     */
    inline Webhook& AddFilterGroups(const Aws::Vector<WebhookFilter>& value) { m_filterGroupsHasBeenSet = true; m_filterGroups.push_back(value); return *this; }

    /**
     * <p> An array of arrays of <code>WebhookFilter</code> objects used to determine
     * which webhooks are triggered. At least one <code>WebhookFilter</code> in the
     * array must specify <code>EVENT</code> as its <code>type</code>. </p> <p> For a
     * build to be triggered, at least one filter group in the
     * <code>filterGroups</code> array must pass. For a filter group to pass, each of
     * its filters must pass. </p>
     */
    inline Webhook& AddFilterGroups(Aws::Vector<WebhookFilter>&& value) { m_filterGroupsHasBeenSet = true; m_filterGroups.push_back(std::move(value)); return *this; }


    /**
     * <p> A timestamp that indicates the last time a repository's secret token was
     * modified. </p>
     */
    inline const Aws::Utils::DateTime& GetLastModifiedSecret() const{ return m_lastModifiedSecret; }

    /**
     * <p> A timestamp that indicates the last time a repository's secret token was
     * modified. </p>
     */
    inline bool LastModifiedSecretHasBeenSet() const { return m_lastModifiedSecretHasBeenSet; }

    /**
     * <p> A timestamp that indicates the last time a repository's secret token was
     * modified. </p>
     */
    inline void SetLastModifiedSecret(const Aws::Utils::DateTime& value) { m_lastModifiedSecretHasBeenSet = true; m_lastModifiedSecret = value; }

    /**
     * <p> A timestamp that indicates the last time a repository's secret token was
     * modified. </p>
     */
    inline void SetLastModifiedSecret(Aws::Utils::DateTime&& value) { m_lastModifiedSecretHasBeenSet = true; m_lastModifiedSecret = std::move(value); }

    /**
     * <p> A timestamp that indicates the last time a repository's secret token was
     * modified. </p>
     */
    inline Webhook& WithLastModifiedSecret(const Aws::Utils::DateTime& value) { SetLastModifiedSecret(value); return *this;}

    /**
     * <p> A timestamp that indicates the last time a repository's secret token was
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

    Aws::Vector<Aws::Vector<WebhookFilter>> m_filterGroups;
    bool m_filterGroupsHasBeenSet;

    Aws::Utils::DateTime m_lastModifiedSecret;
    bool m_lastModifiedSecretHasBeenSet;
  };

} // namespace Model
} // namespace CodeBuild
} // namespace Aws
