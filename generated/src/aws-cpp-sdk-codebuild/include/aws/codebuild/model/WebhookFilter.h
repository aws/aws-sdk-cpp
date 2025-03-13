/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
   * <p>A filter used to determine which webhooks trigger a build. </p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/codebuild-2016-10-06/WebhookFilter">AWS
   * API Reference</a></p>
   */
  class WebhookFilter
  {
  public:
    AWS_CODEBUILD_API WebhookFilter() = default;
    AWS_CODEBUILD_API WebhookFilter(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODEBUILD_API WebhookFilter& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODEBUILD_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p> The type of webhook filter. There are 11 webhook filter types:
     * <code>EVENT</code>, <code>ACTOR_ACCOUNT_ID</code>, <code>HEAD_REF</code>,
     * <code>BASE_REF</code>, <code>FILE_PATH</code>, <code>COMMIT_MESSAGE</code>,
     * <code>TAG_NAME</code>, <code>RELEASE_NAME</code>, <code>REPOSITORY_NAME</code>,
     * <code>ORGANIZATION_NAME</code>, and <code>WORKFLOW_NAME</code>. </p> <ul> <li>
     * <p> EVENT </p> <ul> <li> <p> A webhook event triggers a build when the provided
     * <code>pattern</code> matches one of nine event types: <code>PUSH</code>,
     * <code>PULL_REQUEST_CREATED</code>, <code>PULL_REQUEST_UPDATED</code>,
     * <code>PULL_REQUEST_CLOSED</code>, <code>PULL_REQUEST_REOPENED</code>,
     * <code>PULL_REQUEST_MERGED</code>, <code>RELEASED</code>,
     * <code>PRERELEASED</code>, and <code>WORKFLOW_JOB_QUEUED</code>. The
     * <code>EVENT</code> patterns are specified as a comma-separated string. For
     * example, <code>PUSH, PULL_REQUEST_CREATED, PULL_REQUEST_UPDATED</code> filters
     * all push, pull request created, and pull request updated events. </p>  <p>
     * Types <code>PULL_REQUEST_REOPENED</code> and <code>WORKFLOW_JOB_QUEUED</code>
     * work with GitHub and GitHub Enterprise only. Types <code>RELEASED</code> and
     * <code>PRERELEASED</code> work with GitHub only.</p>  </li> </ul> </li>
     * <li> <p>ACTOR_ACCOUNT_ID</p> <ul> <li> <p> A webhook event triggers a build when
     * a GitHub, GitHub Enterprise, or Bitbucket account ID matches the regular
     * expression <code>pattern</code>. </p> </li> </ul> </li> <li> <p>HEAD_REF</p>
     * <ul> <li> <p> A webhook event triggers a build when the head reference matches
     * the regular expression <code>pattern</code>. For example,
     * <code>refs/heads/branch-name</code> and <code>refs/tags/tag-name</code>. </p>
     *  <p> Works with GitHub and GitHub Enterprise push, GitHub and GitHub
     * Enterprise pull request, Bitbucket push, and Bitbucket pull request events.</p>
     *  </li> </ul> </li> <li> <p>BASE_REF</p> <ul> <li> <p> A webhook event
     * triggers a build when the base reference matches the regular expression
     * <code>pattern</code>. For example, <code>refs/heads/branch-name</code>. </p>
     *  <p> Works with pull request events only. </p>  </li> </ul> </li>
     * <li> <p>FILE_PATH</p> <ul> <li> <p> A webhook triggers a build when the path of
     * a changed file matches the regular expression <code>pattern</code>. </p> 
     * <p> Works with push and pull request events only. </p>  </li> </ul> </li>
     * <li> <p>COMMIT_MESSAGE</p> <ul> <li> <p>A webhook triggers a build when the head
     * commit message matches the regular expression <code>pattern</code>.</p> 
     * <p> Works with push and pull request events only. </p>  </li> </ul> </li>
     * <li> <p>TAG_NAME</p> <ul> <li> <p>A webhook triggers a build when the tag name
     * of the release matches the regular expression <code>pattern</code>.</p> 
     * <p> Works with <code>RELEASED</code> and <code>PRERELEASED</code> events only.
     * </p>  </li> </ul> </li> <li> <p>RELEASE_NAME</p> <ul> <li> <p>A webhook
     * triggers a build when the release name matches the regular expression
     * <code>pattern</code>.</p>  <p> Works with <code>RELEASED</code> and
     * <code>PRERELEASED</code> events only. </p>  </li> </ul> </li> <li>
     * <p>REPOSITORY_NAME</p> <ul> <li> <p>A webhook triggers a build when the
     * repository name matches the regular expression <code>pattern</code>.</p> 
     * <p> Works with GitHub global or organization webhooks only. </p>  </li>
     * </ul> </li> <li> <p>ORGANIZATION_NAME</p> <ul> <li> <p>A webhook triggers a
     * build when the organization name matches the regular expression
     * <code>pattern</code>.</p>  <p> Works with GitHub global webhooks only.
     * </p>  </li> </ul> </li> <li> <p>WORKFLOW_NAME</p> <ul> <li> <p>A webhook
     * triggers a build when the workflow name matches the regular expression
     * <code>pattern</code>.</p>  <p> Works with <code>WORKFLOW_JOB_QUEUED</code>
     * events only. </p>   <p>For CodeBuild-hosted Buildkite runner
     * builds, WORKFLOW_NAME filters will filter by pipeline name.</p>  </li>
     * </ul> </li> </ul>
     */
    inline WebhookFilterType GetType() const { return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(WebhookFilterType value) { m_typeHasBeenSet = true; m_type = value; }
    inline WebhookFilter& WithType(WebhookFilterType value) { SetType(value); return *this;}
    ///@}

    ///@{
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
    inline const Aws::String& GetPattern() const { return m_pattern; }
    inline bool PatternHasBeenSet() const { return m_patternHasBeenSet; }
    template<typename PatternT = Aws::String>
    void SetPattern(PatternT&& value) { m_patternHasBeenSet = true; m_pattern = std::forward<PatternT>(value); }
    template<typename PatternT = Aws::String>
    WebhookFilter& WithPattern(PatternT&& value) { SetPattern(std::forward<PatternT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> Used to indicate that the <code>pattern</code> determines which webhook
     * events do not trigger a build. If true, then a webhook event that does not match
     * the <code>pattern</code> triggers a build. If false, then a webhook event that
     * matches the <code>pattern</code> triggers a build. </p>
     */
    inline bool GetExcludeMatchedPattern() const { return m_excludeMatchedPattern; }
    inline bool ExcludeMatchedPatternHasBeenSet() const { return m_excludeMatchedPatternHasBeenSet; }
    inline void SetExcludeMatchedPattern(bool value) { m_excludeMatchedPatternHasBeenSet = true; m_excludeMatchedPattern = value; }
    inline WebhookFilter& WithExcludeMatchedPattern(bool value) { SetExcludeMatchedPattern(value); return *this;}
    ///@}
  private:

    WebhookFilterType m_type{WebhookFilterType::NOT_SET};
    bool m_typeHasBeenSet = false;

    Aws::String m_pattern;
    bool m_patternHasBeenSet = false;

    bool m_excludeMatchedPattern{false};
    bool m_excludeMatchedPatternHasBeenSet = false;
  };

} // namespace Model
} // namespace CodeBuild
} // namespace Aws
