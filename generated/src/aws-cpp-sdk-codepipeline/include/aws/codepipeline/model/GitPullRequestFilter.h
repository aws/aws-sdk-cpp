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
   * lists of branches or file paths to include and exclude.</p> <p>The following are
   * valid values for the events for this filter:</p> <ul> <li> <p>CLOSED</p> </li>
   * <li> <p>OPEN</p> </li> <li> <p>UPDATED</p> </li> </ul><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/codepipeline-2015-07-09/GitPullRequestFilter">AWS
   * API Reference</a></p>
   */
  class GitPullRequestFilter
  {
  public:
    AWS_CODEPIPELINE_API GitPullRequestFilter() = default;
    AWS_CODEPIPELINE_API GitPullRequestFilter(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODEPIPELINE_API GitPullRequestFilter& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODEPIPELINE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The field that specifies which pull request events to filter on (OPEN,
     * UPDATED, CLOSED) for the trigger configuration.</p>
     */
    inline const Aws::Vector<GitPullRequestEventType>& GetEvents() const { return m_events; }
    inline bool EventsHasBeenSet() const { return m_eventsHasBeenSet; }
    template<typename EventsT = Aws::Vector<GitPullRequestEventType>>
    void SetEvents(EventsT&& value) { m_eventsHasBeenSet = true; m_events = std::forward<EventsT>(value); }
    template<typename EventsT = Aws::Vector<GitPullRequestEventType>>
    GitPullRequestFilter& WithEvents(EventsT&& value) { SetEvents(std::forward<EventsT>(value)); return *this;}
    inline GitPullRequestFilter& AddEvents(GitPullRequestEventType value) { m_eventsHasBeenSet = true; m_events.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The field that specifies to filter on branches for the pull request trigger
     * configuration.</p>
     */
    inline const GitBranchFilterCriteria& GetBranches() const { return m_branches; }
    inline bool BranchesHasBeenSet() const { return m_branchesHasBeenSet; }
    template<typename BranchesT = GitBranchFilterCriteria>
    void SetBranches(BranchesT&& value) { m_branchesHasBeenSet = true; m_branches = std::forward<BranchesT>(value); }
    template<typename BranchesT = GitBranchFilterCriteria>
    GitPullRequestFilter& WithBranches(BranchesT&& value) { SetBranches(std::forward<BranchesT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The field that specifies to filter on file paths for the pull request trigger
     * configuration.</p>
     */
    inline const GitFilePathFilterCriteria& GetFilePaths() const { return m_filePaths; }
    inline bool FilePathsHasBeenSet() const { return m_filePathsHasBeenSet; }
    template<typename FilePathsT = GitFilePathFilterCriteria>
    void SetFilePaths(FilePathsT&& value) { m_filePathsHasBeenSet = true; m_filePaths = std::forward<FilePathsT>(value); }
    template<typename FilePathsT = GitFilePathFilterCriteria>
    GitPullRequestFilter& WithFilePaths(FilePathsT&& value) { SetFilePaths(std::forward<FilePathsT>(value)); return *this;}
    ///@}
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
