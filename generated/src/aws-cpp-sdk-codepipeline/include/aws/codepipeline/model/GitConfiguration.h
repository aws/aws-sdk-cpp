/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codepipeline/CodePipeline_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/codepipeline/model/GitPushFilter.h>
#include <aws/codepipeline/model/GitPullRequestFilter.h>
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
namespace CodePipeline
{
namespace Model
{

  /**
   * <p>A type of trigger configuration for Git-based source actions.</p> 
   * <p>You can specify the Git configuration trigger type for all third-party
   * Git-based source actions that are supported by the
   * <code>CodeStarSourceConnection</code> action type.</p> <p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/codepipeline-2015-07-09/GitConfiguration">AWS
   * API Reference</a></p>
   */
  class GitConfiguration
  {
  public:
    AWS_CODEPIPELINE_API GitConfiguration() = default;
    AWS_CODEPIPELINE_API GitConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODEPIPELINE_API GitConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODEPIPELINE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the pipeline source action where the trigger configuration, such
     * as Git tags, is specified. The trigger configuration will start the pipeline
     * upon the specified change only.</p>  <p>You can only specify one trigger
     * configuration per source action.</p> 
     */
    inline const Aws::String& GetSourceActionName() const { return m_sourceActionName; }
    inline bool SourceActionNameHasBeenSet() const { return m_sourceActionNameHasBeenSet; }
    template<typename SourceActionNameT = Aws::String>
    void SetSourceActionName(SourceActionNameT&& value) { m_sourceActionNameHasBeenSet = true; m_sourceActionName = std::forward<SourceActionNameT>(value); }
    template<typename SourceActionNameT = Aws::String>
    GitConfiguration& WithSourceActionName(SourceActionNameT&& value) { SetSourceActionName(std::forward<SourceActionNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The field where the repository event that will start the pipeline, such as
     * pushing Git tags, is specified with details.</p>
     */
    inline const Aws::Vector<GitPushFilter>& GetPush() const { return m_push; }
    inline bool PushHasBeenSet() const { return m_pushHasBeenSet; }
    template<typename PushT = Aws::Vector<GitPushFilter>>
    void SetPush(PushT&& value) { m_pushHasBeenSet = true; m_push = std::forward<PushT>(value); }
    template<typename PushT = Aws::Vector<GitPushFilter>>
    GitConfiguration& WithPush(PushT&& value) { SetPush(std::forward<PushT>(value)); return *this;}
    template<typename PushT = GitPushFilter>
    GitConfiguration& AddPush(PushT&& value) { m_pushHasBeenSet = true; m_push.emplace_back(std::forward<PushT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The field where the repository event that will start the pipeline is
     * specified as pull requests.</p>
     */
    inline const Aws::Vector<GitPullRequestFilter>& GetPullRequest() const { return m_pullRequest; }
    inline bool PullRequestHasBeenSet() const { return m_pullRequestHasBeenSet; }
    template<typename PullRequestT = Aws::Vector<GitPullRequestFilter>>
    void SetPullRequest(PullRequestT&& value) { m_pullRequestHasBeenSet = true; m_pullRequest = std::forward<PullRequestT>(value); }
    template<typename PullRequestT = Aws::Vector<GitPullRequestFilter>>
    GitConfiguration& WithPullRequest(PullRequestT&& value) { SetPullRequest(std::forward<PullRequestT>(value)); return *this;}
    template<typename PullRequestT = GitPullRequestFilter>
    GitConfiguration& AddPullRequest(PullRequestT&& value) { m_pullRequestHasBeenSet = true; m_pullRequest.emplace_back(std::forward<PullRequestT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_sourceActionName;
    bool m_sourceActionNameHasBeenSet = false;

    Aws::Vector<GitPushFilter> m_push;
    bool m_pushHasBeenSet = false;

    Aws::Vector<GitPullRequestFilter> m_pullRequest;
    bool m_pullRequestHasBeenSet = false;
  };

} // namespace Model
} // namespace CodePipeline
} // namespace Aws
