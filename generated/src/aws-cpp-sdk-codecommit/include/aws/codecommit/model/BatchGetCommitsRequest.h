/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codecommit/CodeCommit_EXPORTS.h>
#include <aws/codecommit/CodeCommitRequest.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace CodeCommit
{
namespace Model
{

  /**
   */
  class BatchGetCommitsRequest : public CodeCommitRequest
  {
  public:
    AWS_CODECOMMIT_API BatchGetCommitsRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "BatchGetCommits"; }

    AWS_CODECOMMIT_API Aws::String SerializePayload() const override;

    AWS_CODECOMMIT_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The full commit IDs of the commits to get information about.</p> 
     * <p>You must supply the full SHA IDs of each commit. You cannot use shortened SHA
     * IDs.</p> 
     */
    inline const Aws::Vector<Aws::String>& GetCommitIds() const { return m_commitIds; }
    inline bool CommitIdsHasBeenSet() const { return m_commitIdsHasBeenSet; }
    template<typename CommitIdsT = Aws::Vector<Aws::String>>
    void SetCommitIds(CommitIdsT&& value) { m_commitIdsHasBeenSet = true; m_commitIds = std::forward<CommitIdsT>(value); }
    template<typename CommitIdsT = Aws::Vector<Aws::String>>
    BatchGetCommitsRequest& WithCommitIds(CommitIdsT&& value) { SetCommitIds(std::forward<CommitIdsT>(value)); return *this;}
    template<typename CommitIdsT = Aws::String>
    BatchGetCommitsRequest& AddCommitIds(CommitIdsT&& value) { m_commitIdsHasBeenSet = true; m_commitIds.emplace_back(std::forward<CommitIdsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The name of the repository that contains the commits.</p>
     */
    inline const Aws::String& GetRepositoryName() const { return m_repositoryName; }
    inline bool RepositoryNameHasBeenSet() const { return m_repositoryNameHasBeenSet; }
    template<typename RepositoryNameT = Aws::String>
    void SetRepositoryName(RepositoryNameT&& value) { m_repositoryNameHasBeenSet = true; m_repositoryName = std::forward<RepositoryNameT>(value); }
    template<typename RepositoryNameT = Aws::String>
    BatchGetCommitsRequest& WithRepositoryName(RepositoryNameT&& value) { SetRepositoryName(std::forward<RepositoryNameT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<Aws::String> m_commitIds;
    bool m_commitIdsHasBeenSet = false;

    Aws::String m_repositoryName;
    bool m_repositoryNameHasBeenSet = false;
  };

} // namespace Model
} // namespace CodeCommit
} // namespace Aws
