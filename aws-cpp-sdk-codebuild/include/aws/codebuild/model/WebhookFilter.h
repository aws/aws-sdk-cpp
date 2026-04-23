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
#include <aws/codebuild/model/WebhookFilterType.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
   * <p> A filter used to determine which webhooks trigger a build. </p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/codebuild-2016-10-06/WebhookFilter">AWS
   * API Reference</a></p>
   */
  class AWS_CODEBUILD_API WebhookFilter
  {
  public:
    WebhookFilter();
    WebhookFilter(Aws::Utils::Json::JsonView jsonValue);
    WebhookFilter& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p> The type of webhook filter. There are five webhook filter types:
     * <code>EVENT</code>, <code>ACTOR_ACCOUNT_ID</code>, <code>HEAD_REF</code>,
     * <code>BASE_REF</code>, and <code>FILE_PATH</code>. </p> <dl> <dt> EVENT </dt>
     * <dd> <p> A webhook event triggers a build when the provided <code>pattern</code>
     * matches one of four event types: <code>PUSH</code>,
     * <code>PULL_REQUEST_CREATED</code>, <code>PULL_REQUEST_UPDATED</code>, and
     * <code>PULL_REQUEST_REOPENED</code>. The <code>EVENT</code> patterns are
     * specified as a comma-separated string. For example, <code>PUSH,
     * PULL_REQUEST_CREATED, PULL_REQUEST_UPDATED</code> filters all push, pull request
     * created, and pull request updated events. </p> <note> <p> The
     * <code>PULL_REQUEST_REOPENED</code> works with GitHub and GitHub Enterprise only.
     * </p> </note> </dd> <dt> ACTOR_ACCOUNT_ID </dt> <dd> <p> A webhook event triggers
     * a build when a GitHub, GitHub Enterprise, or Bitbucket account ID matches the
     * regular expression <code>pattern</code>. </p> </dd> <dt> HEAD_REF </dt> <dd> <p>
     * A webhook event triggers a build when the head reference matches the regular
     * expression <code>pattern</code>. For example,
     * <code>refs/heads/branch-name</code> and <code>refs/tags/tag-name</code>. </p>
     * <p> Works with GitHub and GitHub Enterprise push, GitHub and GitHub Enterprise
     * pull request, Bitbucket push, and Bitbucket pull request events. </p> </dd> <dt>
     * BASE_REF </dt> <dd> <p> A webhook event triggers a build when the base reference
     * matches the regular expression <code>pattern</code>. For example,
     * <code>refs/heads/branch-name</code>. </p> <note> <p> Works with pull request
     * events only. </p> </note> </dd> <dt> FILE_PATH </dt> <dd> <p> A webhook triggers
     * a build when the path of a changed file matches the regular expression
     * <code>pattern</code>. </p> <note> <p> Works with GitHub and GitHub Enterprise
     * push events only. </p> </note> </dd> </dl>
     */
    inline const WebhookFilterType& GetType() const{ return m_type; }

    /**
     * <p> The type of webhook filter. There are five webhook filter types:
     * <code>EVENT</code>, <code>ACTOR_ACCOUNT_ID</code>, <code>HEAD_REF</code>,
     * <code>BASE_REF</code>, and <code>FILE_PATH</code>. </p> <dl> <dt> EVENT </dt>
     * <dd> <p> A webhook event triggers a build when the provided <code>pattern</code>
     * matches one of four event types: <code>PUSH</code>,
     * <code>PULL_REQUEST_CREATED</code>, <code>PULL_REQUEST_UPDATED</code>, and
     * <code>PULL_REQUEST_REOPENED</code>. The <code>EVENT</code> patterns are
     * specified as a comma-separated string. For example, <code>PUSH,
     * PULL_REQUEST_CREATED, PULL_REQUEST_UPDATED</code> filters all push, pull request
     * created, and pull request updated events. </p> <note> <p> The
     * <code>PULL_REQUEST_REOPENED</code> works with GitHub and GitHub Enterprise only.
     * </p> </note> </dd> <dt> ACTOR_ACCOUNT_ID </dt> <dd> <p> A webhook event triggers
     * a build when a GitHub, GitHub Enterprise, or Bitbucket account ID matches the
     * regular expression <code>pattern</code>. </p> </dd> <dt> HEAD_REF </dt> <dd> <p>
     * A webhook event triggers a build when the head reference matches the regular
     * expression <code>pattern</code>. For example,
     * <code>refs/heads/branch-name</code> and <code>refs/tags/tag-name</code>. </p>
     * <p> Works with GitHub and GitHub Enterprise push, GitHub and GitHub Enterprise
     * pull request, Bitbucket push, and Bitbucket pull request events. </p> </dd> <dt>
     * BASE_REF </dt> <dd> <p> A webhook event triggers a build when the base reference
     * matches the regular expression <code>pattern</code>. For example,
     * <code>refs/heads/branch-name</code>. </p> <note> <p> Works with pull request
     * events only. </p> </note> </dd> <dt> FILE_PATH </dt> <dd> <p> A webhook triggers
     * a build when the path of a changed file matches the regular expression
     * <code>pattern</code>. </p> <note> <p> Works with GitHub and GitHub Enterprise
     * push events only. </p> </note> </dd> </dl>
     */
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }

    /**
     * <p> The type of webhook filter. There are five webhook filter types:
     * <code>EVENT</code>, <code>ACTOR_ACCOUNT_ID</code>, <code>HEAD_REF</code>,
     * <code>BASE_REF</code>, and <code>FILE_PATH</code>. </p> <dl> <dt> EVENT </dt>
     * <dd> <p> A webhook event triggers a build when the provided <code>pattern</code>
     * matches one of four event types: <code>PUSH</code>,
     * <code>PULL_REQUEST_CREATED</code>, <code>PULL_REQUEST_UPDATED</code>, and
     * <code>PULL_REQUEST_REOPENED</code>. The <code>EVENT</code> patterns are
     * specified as a comma-separated string. For example, <code>PUSH,
     * PULL_REQUEST_CREATED, PULL_REQUEST_UPDATED</code> filters all push, pull request
     * created, and pull request updated events. </p> <note> <p> The
     * <code>PULL_REQUEST_REOPENED</code> works with GitHub and GitHub Enterprise only.
     * </p> </note> </dd> <dt> ACTOR_ACCOUNT_ID </dt> <dd> <p> A webhook event triggers
     * a build when a GitHub, GitHub Enterprise, or Bitbucket account ID matches the
     * regular expression <code>pattern</code>. </p> </dd> <dt> HEAD_REF </dt> <dd> <p>
     * A webhook event triggers a build when the head reference matches the regular
     * expression <code>pattern</code>. For example,
     * <code>refs/heads/branch-name</code> and <code>refs/tags/tag-name</code>. </p>
     * <p> Works with GitHub and GitHub Enterprise push, GitHub and GitHub Enterprise
     * pull request, Bitbucket push, and Bitbucket pull request events. </p> </dd> <dt>
     * BASE_REF </dt> <dd> <p> A webhook event triggers a build when the base reference
     * matches the regular expression <code>pattern</code>. For example,
     * <code>refs/heads/branch-name</code>. </p> <note> <p> Works with pull request
     * events only. </p> </note> </dd> <dt> FILE_PATH </dt> <dd> <p> A webhook triggers
     * a build when the path of a changed file matches the regular expression
     * <code>pattern</code>. </p> <note> <p> Works with GitHub and GitHub Enterprise
     * push events only. </p> </note> </dd> </dl>
     */
    inline void SetType(const WebhookFilterType& value) { m_typeHasBeenSet = true; m_type = value; }

    /**
     * <p> The type of webhook filter. There are five webhook filter types:
     * <code>EVENT</code>, <code>ACTOR_ACCOUNT_ID</code>, <code>HEAD_REF</code>,
     * <code>BASE_REF</code>, and <code>FILE_PATH</code>. </p> <dl> <dt> EVENT </dt>
     * <dd> <p> A webhook event triggers a build when the provided <code>pattern</code>
     * matches one of four event types: <code>PUSH</code>,
     * <code>PULL_REQUEST_CREATED</code>, <code>PULL_REQUEST_UPDATED</code>, and
     * <code>PULL_REQUEST_REOPENED</code>. The <code>EVENT</code> patterns are
     * specified as a comma-separated string. For example, <code>PUSH,
     * PULL_REQUEST_CREATED, PULL_REQUEST_UPDATED</code> filters all push, pull request
     * created, and pull request updated events. </p> <note> <p> The
     * <code>PULL_REQUEST_REOPENED</code> works with GitHub and GitHub Enterprise only.
     * </p> </note> </dd> <dt> ACTOR_ACCOUNT_ID </dt> <dd> <p> A webhook event triggers
     * a build when a GitHub, GitHub Enterprise, or Bitbucket account ID matches the
     * regular expression <code>pattern</code>. </p> </dd> <dt> HEAD_REF </dt> <dd> <p>
     * A webhook event triggers a build when the head reference matches the regular
     * expression <code>pattern</code>. For example,
     * <code>refs/heads/branch-name</code> and <code>refs/tags/tag-name</code>. </p>
     * <p> Works with GitHub and GitHub Enterprise push, GitHub and GitHub Enterprise
     * pull request, Bitbucket push, and Bitbucket pull request events. </p> </dd> <dt>
     * BASE_REF </dt> <dd> <p> A webhook event triggers a build when the base reference
     * matches the regular expression <code>pattern</code>. For example,
     * <code>refs/heads/branch-name</code>. </p> <note> <p> Works with pull request
     * events only. </p> </note> </dd> <dt> FILE_PATH </dt> <dd> <p> A webhook triggers
     * a build when the path of a changed file matches the regular expression
     * <code>pattern</code>. </p> <note> <p> Works with GitHub and GitHub Enterprise
     * push events only. </p> </note> </dd> </dl>
     */
    inline void SetType(WebhookFilterType&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }

    /**
     * <p> The type of webhook filter. There are five webhook filter types:
     * <code>EVENT</code>, <code>ACTOR_ACCOUNT_ID</code>, <code>HEAD_REF</code>,
     * <code>BASE_REF</code>, and <code>FILE_PATH</code>. </p> <dl> <dt> EVENT </dt>
     * <dd> <p> A webhook event triggers a build when the provided <code>pattern</code>
     * matches one of four event types: <code>PUSH</code>,
     * <code>PULL_REQUEST_CREATED</code>, <code>PULL_REQUEST_UPDATED</code>, and
     * <code>PULL_REQUEST_REOPENED</code>. The <code>EVENT</code> patterns are
     * specified as a comma-separated string. For example, <code>PUSH,
     * PULL_REQUEST_CREATED, PULL_REQUEST_UPDATED</code> filters all push, pull request
     * created, and pull request updated events. </p> <note> <p> The
     * <code>PULL_REQUEST_REOPENED</code> works with GitHub and GitHub Enterprise only.
     * </p> </note> </dd> <dt> ACTOR_ACCOUNT_ID </dt> <dd> <p> A webhook event triggers
     * a build when a GitHub, GitHub Enterprise, or Bitbucket account ID matches the
     * regular expression <code>pattern</code>. </p> </dd> <dt> HEAD_REF </dt> <dd> <p>
     * A webhook event triggers a build when the head reference matches the regular
     * expression <code>pattern</code>. For example,
     * <code>refs/heads/branch-name</code> and <code>refs/tags/tag-name</code>. </p>
     * <p> Works with GitHub and GitHub Enterprise push, GitHub and GitHub Enterprise
     * pull request, Bitbucket push, and Bitbucket pull request events. </p> </dd> <dt>
     * BASE_REF </dt> <dd> <p> A webhook event triggers a build when the base reference
     * matches the regular expression <code>pattern</code>. For example,
     * <code>refs/heads/branch-name</code>. </p> <note> <p> Works with pull request
     * events only. </p> </note> </dd> <dt> FILE_PATH </dt> <dd> <p> A webhook triggers
     * a build when the path of a changed file matches the regular expression
     * <code>pattern</code>. </p> <note> <p> Works with GitHub and GitHub Enterprise
     * push events only. </p> </note> </dd> </dl>
     */
    inline WebhookFilter& WithType(const WebhookFilterType& value) { SetType(value); return *this;}

    /**
     * <p> The type of webhook filter. There are five webhook filter types:
     * <code>EVENT</code>, <code>ACTOR_ACCOUNT_ID</code>, <code>HEAD_REF</code>,
     * <code>BASE_REF</code>, and <code>FILE_PATH</code>. </p> <dl> <dt> EVENT </dt>
     * <dd> <p> A webhook event triggers a build when the provided <code>pattern</code>
     * matches one of four event types: <code>PUSH</code>,
     * <code>PULL_REQUEST_CREATED</code>, <code>PULL_REQUEST_UPDATED</code>, and
     * <code>PULL_REQUEST_REOPENED</code>. The <code>EVENT</code> patterns are
     * specified as a comma-separated string. For example, <code>PUSH,
     * PULL_REQUEST_CREATED, PULL_REQUEST_UPDATED</code> filters all push, pull request
     * created, and pull request updated events. </p> <note> <p> The
     * <code>PULL_REQUEST_REOPENED</code> works with GitHub and GitHub Enterprise only.
     * </p> </note> </dd> <dt> ACTOR_ACCOUNT_ID </dt> <dd> <p> A webhook event triggers
     * a build when a GitHub, GitHub Enterprise, or Bitbucket account ID matches the
     * regular expression <code>pattern</code>. </p> </dd> <dt> HEAD_REF </dt> <dd> <p>
     * A webhook event triggers a build when the head reference matches the regular
     * expression <code>pattern</code>. For example,
     * <code>refs/heads/branch-name</code> and <code>refs/tags/tag-name</code>. </p>
     * <p> Works with GitHub and GitHub Enterprise push, GitHub and GitHub Enterprise
     * pull request, Bitbucket push, and Bitbucket pull request events. </p> </dd> <dt>
     * BASE_REF </dt> <dd> <p> A webhook event triggers a build when the base reference
     * matches the regular expression <code>pattern</code>. For example,
     * <code>refs/heads/branch-name</code>. </p> <note> <p> Works with pull request
     * events only. </p> </note> </dd> <dt> FILE_PATH </dt> <dd> <p> A webhook triggers
     * a build when the path of a changed file matches the regular expression
     * <code>pattern</code>. </p> <note> <p> Works with GitHub and GitHub Enterprise
     * push events only. </p> </note> </dd> </dl>
     */
    inline WebhookFilter& WithType(WebhookFilterType&& value) { SetType(std::move(value)); return *this;}


    /**
     * <p> For a <code>WebHookFilter</code> that uses <code>EVENT</code> type, a
     * comma-separated string that specifies one or more events. For example, the
     * webhook filter <code>PUSH, PULL_REQUEST_CREATED, PULL_REQUEST_UPDATED</code>
     * allows all push, pull request created, and pull request updated events to
     * trigger a build. </p> <p> For a <code>WebHookFilter</code> that uses any of the
     * other filter types, a regular expression pattern. For example, a
     * <code>WebHookFilter</code> that uses <code>HEAD_REF</code> for its
     * <code>type</code> and the pattern <code>^refs/heads/</code> triggers a build
     * when the head reference is a branch with a reference name
     * <code>refs/heads/branch-name</code>. </p>
     */
    inline const Aws::String& GetPattern() const{ return m_pattern; }

    /**
     * <p> For a <code>WebHookFilter</code> that uses <code>EVENT</code> type, a
     * comma-separated string that specifies one or more events. For example, the
     * webhook filter <code>PUSH, PULL_REQUEST_CREATED, PULL_REQUEST_UPDATED</code>
     * allows all push, pull request created, and pull request updated events to
     * trigger a build. </p> <p> For a <code>WebHookFilter</code> that uses any of the
     * other filter types, a regular expression pattern. For example, a
     * <code>WebHookFilter</code> that uses <code>HEAD_REF</code> for its
     * <code>type</code> and the pattern <code>^refs/heads/</code> triggers a build
     * when the head reference is a branch with a reference name
     * <code>refs/heads/branch-name</code>. </p>
     */
    inline bool PatternHasBeenSet() const { return m_patternHasBeenSet; }

    /**
     * <p> For a <code>WebHookFilter</code> that uses <code>EVENT</code> type, a
     * comma-separated string that specifies one or more events. For example, the
     * webhook filter <code>PUSH, PULL_REQUEST_CREATED, PULL_REQUEST_UPDATED</code>
     * allows all push, pull request created, and pull request updated events to
     * trigger a build. </p> <p> For a <code>WebHookFilter</code> that uses any of the
     * other filter types, a regular expression pattern. For example, a
     * <code>WebHookFilter</code> that uses <code>HEAD_REF</code> for its
     * <code>type</code> and the pattern <code>^refs/heads/</code> triggers a build
     * when the head reference is a branch with a reference name
     * <code>refs/heads/branch-name</code>. </p>
     */
    inline void SetPattern(const Aws::String& value) { m_patternHasBeenSet = true; m_pattern = value; }

    /**
     * <p> For a <code>WebHookFilter</code> that uses <code>EVENT</code> type, a
     * comma-separated string that specifies one or more events. For example, the
     * webhook filter <code>PUSH, PULL_REQUEST_CREATED, PULL_REQUEST_UPDATED</code>
     * allows all push, pull request created, and pull request updated events to
     * trigger a build. </p> <p> For a <code>WebHookFilter</code> that uses any of the
     * other filter types, a regular expression pattern. For example, a
     * <code>WebHookFilter</code> that uses <code>HEAD_REF</code> for its
     * <code>type</code> and the pattern <code>^refs/heads/</code> triggers a build
     * when the head reference is a branch with a reference name
     * <code>refs/heads/branch-name</code>. </p>
     */
    inline void SetPattern(Aws::String&& value) { m_patternHasBeenSet = true; m_pattern = std::move(value); }

    /**
     * <p> For a <code>WebHookFilter</code> that uses <code>EVENT</code> type, a
     * comma-separated string that specifies one or more events. For example, the
     * webhook filter <code>PUSH, PULL_REQUEST_CREATED, PULL_REQUEST_UPDATED</code>
     * allows all push, pull request created, and pull request updated events to
     * trigger a build. </p> <p> For a <code>WebHookFilter</code> that uses any of the
     * other filter types, a regular expression pattern. For example, a
     * <code>WebHookFilter</code> that uses <code>HEAD_REF</code> for its
     * <code>type</code> and the pattern <code>^refs/heads/</code> triggers a build
     * when the head reference is a branch with a reference name
     * <code>refs/heads/branch-name</code>. </p>
     */
    inline void SetPattern(const char* value) { m_patternHasBeenSet = true; m_pattern.assign(value); }

    /**
     * <p> For a <code>WebHookFilter</code> that uses <code>EVENT</code> type, a
     * comma-separated string that specifies one or more events. For example, the
     * webhook filter <code>PUSH, PULL_REQUEST_CREATED, PULL_REQUEST_UPDATED</code>
     * allows all push, pull request created, and pull request updated events to
     * trigger a build. </p> <p> For a <code>WebHookFilter</code> that uses any of the
     * other filter types, a regular expression pattern. For example, a
     * <code>WebHookFilter</code> that uses <code>HEAD_REF</code> for its
     * <code>type</code> and the pattern <code>^refs/heads/</code> triggers a build
     * when the head reference is a branch with a reference name
     * <code>refs/heads/branch-name</code>. </p>
     */
    inline WebhookFilter& WithPattern(const Aws::String& value) { SetPattern(value); return *this;}

    /**
     * <p> For a <code>WebHookFilter</code> that uses <code>EVENT</code> type, a
     * comma-separated string that specifies one or more events. For example, the
     * webhook filter <code>PUSH, PULL_REQUEST_CREATED, PULL_REQUEST_UPDATED</code>
     * allows all push, pull request created, and pull request updated events to
     * trigger a build. </p> <p> For a <code>WebHookFilter</code> that uses any of the
     * other filter types, a regular expression pattern. For example, a
     * <code>WebHookFilter</code> that uses <code>HEAD_REF</code> for its
     * <code>type</code> and the pattern <code>^refs/heads/</code> triggers a build
     * when the head reference is a branch with a reference name
     * <code>refs/heads/branch-name</code>. </p>
     */
    inline WebhookFilter& WithPattern(Aws::String&& value) { SetPattern(std::move(value)); return *this;}

    /**
     * <p> For a <code>WebHookFilter</code> that uses <code>EVENT</code> type, a
     * comma-separated string that specifies one or more events. For example, the
     * webhook filter <code>PUSH, PULL_REQUEST_CREATED, PULL_REQUEST_UPDATED</code>
     * allows all push, pull request created, and pull request updated events to
     * trigger a build. </p> <p> For a <code>WebHookFilter</code> that uses any of the
     * other filter types, a regular expression pattern. For example, a
     * <code>WebHookFilter</code> that uses <code>HEAD_REF</code> for its
     * <code>type</code> and the pattern <code>^refs/heads/</code> triggers a build
     * when the head reference is a branch with a reference name
     * <code>refs/heads/branch-name</code>. </p>
     */
    inline WebhookFilter& WithPattern(const char* value) { SetPattern(value); return *this;}


    /**
     * <p> Used to indicate that the <code>pattern</code> determines which webhook
     * events do not trigger a build. If true, then a webhook event that does not match
     * the <code>pattern</code> triggers a build. If false, then a webhook event that
     * matches the <code>pattern</code> triggers a build. </p>
     */
    inline bool GetExcludeMatchedPattern() const{ return m_excludeMatchedPattern; }

    /**
     * <p> Used to indicate that the <code>pattern</code> determines which webhook
     * events do not trigger a build. If true, then a webhook event that does not match
     * the <code>pattern</code> triggers a build. If false, then a webhook event that
     * matches the <code>pattern</code> triggers a build. </p>
     */
    inline bool ExcludeMatchedPatternHasBeenSet() const { return m_excludeMatchedPatternHasBeenSet; }

    /**
     * <p> Used to indicate that the <code>pattern</code> determines which webhook
     * events do not trigger a build. If true, then a webhook event that does not match
     * the <code>pattern</code> triggers a build. If false, then a webhook event that
     * matches the <code>pattern</code> triggers a build. </p>
     */
    inline void SetExcludeMatchedPattern(bool value) { m_excludeMatchedPatternHasBeenSet = true; m_excludeMatchedPattern = value; }

    /**
     * <p> Used to indicate that the <code>pattern</code> determines which webhook
     * events do not trigger a build. If true, then a webhook event that does not match
     * the <code>pattern</code> triggers a build. If false, then a webhook event that
     * matches the <code>pattern</code> triggers a build. </p>
     */
    inline WebhookFilter& WithExcludeMatchedPattern(bool value) { SetExcludeMatchedPattern(value); return *this;}

  private:

    WebhookFilterType m_type;
    bool m_typeHasBeenSet;

    Aws::String m_pattern;
    bool m_patternHasBeenSet;

    bool m_excludeMatchedPattern;
    bool m_excludeMatchedPatternHasBeenSet;
  };

} // namespace Model
} // namespace CodeBuild
} // namespace Aws
