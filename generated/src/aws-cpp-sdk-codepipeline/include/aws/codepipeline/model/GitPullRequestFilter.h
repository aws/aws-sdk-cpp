/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codepipeline/CodePipeline_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/codepipeline/model/GitBranchFilterCriteria.h>
#include <aws/codepipeline/model/GitFilePathFilterCriteria.h>
#include <aws/codepipeline/model/GitPullRequestEventType.h>
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
   * <p>The event criteria for the pull request trigger configuration, such as the
   * lists of branches or file paths to include and exclude.</p><p><h3>See Also:</h3>
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/codepipeline-2015-07-09/GitPullRequestFilter">AWS
   * API Reference</a></p>
   */
  class GitPullRequestFilter
  {
  public:
    AWS_CODEPIPELINE_API GitPullRequestFilter();
    AWS_CODEPIPELINE_API GitPullRequestFilter(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODEPIPELINE_API GitPullRequestFilter& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODEPIPELINE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The field that specifies which pull request events to filter on (opened,
     * updated, closed) for the trigger configuration.</p>
     */
    inline const Aws::Vector<GitPullRequestEventType>& GetEvents() const{ return m_events; }

    /**
     * <p>The field that specifies which pull request events to filter on (opened,
     * updated, closed) for the trigger configuration.</p>
     */
    inline bool EventsHasBeenSet() const { return m_eventsHasBeenSet; }

    /**
     * <p>The field that specifies which pull request events to filter on (opened,
     * updated, closed) for the trigger configuration.</p>
     */
    inline void SetEvents(const Aws::Vector<GitPullRequestEventType>& value) { m_eventsHasBeenSet = true; m_events = value; }

    /**
     * <p>The field that specifies which pull request events to filter on (opened,
     * updated, closed) for the trigger configuration.</p>
     */
    inline void SetEvents(Aws::Vector<GitPullRequestEventType>&& value) { m_eventsHasBeenSet = true; m_events = std::move(value); }

    /**
     * <p>The field that specifies which pull request events to filter on (opened,
     * updated, closed) for the trigger configuration.</p>
     */
    inline GitPullRequestFilter& WithEvents(const Aws::Vector<GitPullRequestEventType>& value) { SetEvents(value); return *this;}

    /**
     * <p>The field that specifies which pull request events to filter on (opened,
     * updated, closed) for the trigger configuration.</p>
     */
    inline GitPullRequestFilter& WithEvents(Aws::Vector<GitPullRequestEventType>&& value) { SetEvents(std::move(value)); return *this;}

    /**
     * <p>The field that specifies which pull request events to filter on (opened,
     * updated, closed) for the trigger configuration.</p>
     */
    inline GitPullRequestFilter& AddEvents(const GitPullRequestEventType& value) { m_eventsHasBeenSet = true; m_events.push_back(value); return *this; }

    /**
     * <p>The field that specifies which pull request events to filter on (opened,
     * updated, closed) for the trigger configuration.</p>
     */
    inline GitPullRequestFilter& AddEvents(GitPullRequestEventType&& value) { m_eventsHasBeenSet = true; m_events.push_back(std::move(value)); return *this; }


    /**
     * <p>The field that specifies to filter on branches for the pull request trigger
     * configuration.</p>
     */
    inline const GitBranchFilterCriteria& GetBranches() const{ return m_branches; }

    /**
     * <p>The field that specifies to filter on branches for the pull request trigger
     * configuration.</p>
     */
    inline bool BranchesHasBeenSet() const { return m_branchesHasBeenSet; }

    /**
     * <p>The field that specifies to filter on branches for the pull request trigger
     * configuration.</p>
     */
    inline void SetBranches(const GitBranchFilterCriteria& value) { m_branchesHasBeenSet = true; m_branches = value; }

    /**
     * <p>The field that specifies to filter on branches for the pull request trigger
     * configuration.</p>
     */
    inline void SetBranches(GitBranchFilterCriteria&& value) { m_branchesHasBeenSet = true; m_branches = std::move(value); }

    /**
     * <p>The field that specifies to filter on branches for the pull request trigger
     * configuration.</p>
     */
    inline GitPullRequestFilter& WithBranches(const GitBranchFilterCriteria& value) { SetBranches(value); return *this;}

    /**
     * <p>The field that specifies to filter on branches for the pull request trigger
     * configuration.</p>
     */
    inline GitPullRequestFilter& WithBranches(GitBranchFilterCriteria&& value) { SetBranches(std::move(value)); return *this;}


    /**
     * <p>The field that specifies to filter on file paths for the pull request trigger
     * configuration.</p>
     */
    inline const GitFilePathFilterCriteria& GetFilePaths() const{ return m_filePaths; }

    /**
     * <p>The field that specifies to filter on file paths for the pull request trigger
     * configuration.</p>
     */
    inline bool FilePathsHasBeenSet() const { return m_filePathsHasBeenSet; }

    /**
     * <p>The field that specifies to filter on file paths for the pull request trigger
     * configuration.</p>
     */
    inline void SetFilePaths(const GitFilePathFilterCriteria& value) { m_filePathsHasBeenSet = true; m_filePaths = value; }

    /**
     * <p>The field that specifies to filter on file paths for the pull request trigger
     * configuration.</p>
     */
    inline void SetFilePaths(GitFilePathFilterCriteria&& value) { m_filePathsHasBeenSet = true; m_filePaths = std::move(value); }

    /**
     * <p>The field that specifies to filter on file paths for the pull request trigger
     * configuration.</p>
     */
    inline GitPullRequestFilter& WithFilePaths(const GitFilePathFilterCriteria& value) { SetFilePaths(value); return *this;}

    /**
     * <p>The field that specifies to filter on file paths for the pull request trigger
     * configuration.</p>
     */
    inline GitPullRequestFilter& WithFilePaths(GitFilePathFilterCriteria&& value) { SetFilePaths(std::move(value)); return *this;}

  private:

    Aws::Vector<GitPullRequestEventType> m_events;
    bool m_eventsHasBeenSet = false;

    GitBranchFilterCriteria m_branches;
    bool m_branchesHasBeenSet = false;

    GitFilePathFilterCriteria m_filePaths;
    bool m_filePathsHasBeenSet = false;
  };

} // namespace Model
} // namespace CodePipeline
} // namespace Aws
