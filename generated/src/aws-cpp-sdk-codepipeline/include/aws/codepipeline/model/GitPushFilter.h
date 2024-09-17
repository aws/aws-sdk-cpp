/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codepipeline/CodePipeline_EXPORTS.h>
#include <aws/codepipeline/model/GitTagFilterCriteria.h>
#include <aws/codepipeline/model/GitBranchFilterCriteria.h>
#include <aws/codepipeline/model/GitFilePathFilterCriteria.h>
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
   * <p>The event criteria that specify when a specified repository event will start
   * the pipeline for the specified trigger configuration, such as the lists of Git
   * tags to include and exclude.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/codepipeline-2015-07-09/GitPushFilter">AWS
   * API Reference</a></p>
   */
  class GitPushFilter
  {
  public:
    AWS_CODEPIPELINE_API GitPushFilter();
    AWS_CODEPIPELINE_API GitPushFilter(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODEPIPELINE_API GitPushFilter& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODEPIPELINE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The field that contains the details for the Git tags trigger
     * configuration.</p>
     */
    inline const GitTagFilterCriteria& GetTags() const{ return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    inline void SetTags(const GitTagFilterCriteria& value) { m_tagsHasBeenSet = true; m_tags = value; }
    inline void SetTags(GitTagFilterCriteria&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }
    inline GitPushFilter& WithTags(const GitTagFilterCriteria& value) { SetTags(value); return *this;}
    inline GitPushFilter& WithTags(GitTagFilterCriteria&& value) { SetTags(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The field that specifies to filter on branches for the push trigger
     * configuration.</p>
     */
    inline const GitBranchFilterCriteria& GetBranches() const{ return m_branches; }
    inline bool BranchesHasBeenSet() const { return m_branchesHasBeenSet; }
    inline void SetBranches(const GitBranchFilterCriteria& value) { m_branchesHasBeenSet = true; m_branches = value; }
    inline void SetBranches(GitBranchFilterCriteria&& value) { m_branchesHasBeenSet = true; m_branches = std::move(value); }
    inline GitPushFilter& WithBranches(const GitBranchFilterCriteria& value) { SetBranches(value); return *this;}
    inline GitPushFilter& WithBranches(GitBranchFilterCriteria&& value) { SetBranches(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The field that specifies to filter on file paths for the push trigger
     * configuration.</p>
     */
    inline const GitFilePathFilterCriteria& GetFilePaths() const{ return m_filePaths; }
    inline bool FilePathsHasBeenSet() const { return m_filePathsHasBeenSet; }
    inline void SetFilePaths(const GitFilePathFilterCriteria& value) { m_filePathsHasBeenSet = true; m_filePaths = value; }
    inline void SetFilePaths(GitFilePathFilterCriteria&& value) { m_filePathsHasBeenSet = true; m_filePaths = std::move(value); }
    inline GitPushFilter& WithFilePaths(const GitFilePathFilterCriteria& value) { SetFilePaths(value); return *this;}
    inline GitPushFilter& WithFilePaths(GitFilePathFilterCriteria&& value) { SetFilePaths(std::move(value)); return *this;}
    ///@}
  private:

    GitTagFilterCriteria m_tags;
    bool m_tagsHasBeenSet = false;

    GitBranchFilterCriteria m_branches;
    bool m_branchesHasBeenSet = false;

    GitFilePathFilterCriteria m_filePaths;
    bool m_filePathsHasBeenSet = false;
  };

} // namespace Model
} // namespace CodePipeline
} // namespace Aws
