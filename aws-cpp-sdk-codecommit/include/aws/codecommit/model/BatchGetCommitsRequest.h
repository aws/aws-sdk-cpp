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
    AWS_CODECOMMIT_API BatchGetCommitsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "BatchGetCommits"; }

    AWS_CODECOMMIT_API Aws::String SerializePayload() const override;

    AWS_CODECOMMIT_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The full commit IDs of the commits to get information about.</p> 
     * <p>You must supply the full SHA IDs of each commit. You cannot use shortened SHA
     * IDs.</p> 
     */
    inline const Aws::Vector<Aws::String>& GetCommitIds() const{ return m_commitIds; }

    /**
     * <p>The full commit IDs of the commits to get information about.</p> 
     * <p>You must supply the full SHA IDs of each commit. You cannot use shortened SHA
     * IDs.</p> 
     */
    inline bool CommitIdsHasBeenSet() const { return m_commitIdsHasBeenSet; }

    /**
     * <p>The full commit IDs of the commits to get information about.</p> 
     * <p>You must supply the full SHA IDs of each commit. You cannot use shortened SHA
     * IDs.</p> 
     */
    inline void SetCommitIds(const Aws::Vector<Aws::String>& value) { m_commitIdsHasBeenSet = true; m_commitIds = value; }

    /**
     * <p>The full commit IDs of the commits to get information about.</p> 
     * <p>You must supply the full SHA IDs of each commit. You cannot use shortened SHA
     * IDs.</p> 
     */
    inline void SetCommitIds(Aws::Vector<Aws::String>&& value) { m_commitIdsHasBeenSet = true; m_commitIds = std::move(value); }

    /**
     * <p>The full commit IDs of the commits to get information about.</p> 
     * <p>You must supply the full SHA IDs of each commit. You cannot use shortened SHA
     * IDs.</p> 
     */
    inline BatchGetCommitsRequest& WithCommitIds(const Aws::Vector<Aws::String>& value) { SetCommitIds(value); return *this;}

    /**
     * <p>The full commit IDs of the commits to get information about.</p> 
     * <p>You must supply the full SHA IDs of each commit. You cannot use shortened SHA
     * IDs.</p> 
     */
    inline BatchGetCommitsRequest& WithCommitIds(Aws::Vector<Aws::String>&& value) { SetCommitIds(std::move(value)); return *this;}

    /**
     * <p>The full commit IDs of the commits to get information about.</p> 
     * <p>You must supply the full SHA IDs of each commit. You cannot use shortened SHA
     * IDs.</p> 
     */
    inline BatchGetCommitsRequest& AddCommitIds(const Aws::String& value) { m_commitIdsHasBeenSet = true; m_commitIds.push_back(value); return *this; }

    /**
     * <p>The full commit IDs of the commits to get information about.</p> 
     * <p>You must supply the full SHA IDs of each commit. You cannot use shortened SHA
     * IDs.</p> 
     */
    inline BatchGetCommitsRequest& AddCommitIds(Aws::String&& value) { m_commitIdsHasBeenSet = true; m_commitIds.push_back(std::move(value)); return *this; }

    /**
     * <p>The full commit IDs of the commits to get information about.</p> 
     * <p>You must supply the full SHA IDs of each commit. You cannot use shortened SHA
     * IDs.</p> 
     */
    inline BatchGetCommitsRequest& AddCommitIds(const char* value) { m_commitIdsHasBeenSet = true; m_commitIds.push_back(value); return *this; }


    /**
     * <p>The name of the repository that contains the commits.</p>
     */
    inline const Aws::String& GetRepositoryName() const{ return m_repositoryName; }

    /**
     * <p>The name of the repository that contains the commits.</p>
     */
    inline bool RepositoryNameHasBeenSet() const { return m_repositoryNameHasBeenSet; }

    /**
     * <p>The name of the repository that contains the commits.</p>
     */
    inline void SetRepositoryName(const Aws::String& value) { m_repositoryNameHasBeenSet = true; m_repositoryName = value; }

    /**
     * <p>The name of the repository that contains the commits.</p>
     */
    inline void SetRepositoryName(Aws::String&& value) { m_repositoryNameHasBeenSet = true; m_repositoryName = std::move(value); }

    /**
     * <p>The name of the repository that contains the commits.</p>
     */
    inline void SetRepositoryName(const char* value) { m_repositoryNameHasBeenSet = true; m_repositoryName.assign(value); }

    /**
     * <p>The name of the repository that contains the commits.</p>
     */
    inline BatchGetCommitsRequest& WithRepositoryName(const Aws::String& value) { SetRepositoryName(value); return *this;}

    /**
     * <p>The name of the repository that contains the commits.</p>
     */
    inline BatchGetCommitsRequest& WithRepositoryName(Aws::String&& value) { SetRepositoryName(std::move(value)); return *this;}

    /**
     * <p>The name of the repository that contains the commits.</p>
     */
    inline BatchGetCommitsRequest& WithRepositoryName(const char* value) { SetRepositoryName(value); return *this;}

  private:

    Aws::Vector<Aws::String> m_commitIds;
    bool m_commitIdsHasBeenSet = false;

    Aws::String m_repositoryName;
    bool m_repositoryNameHasBeenSet = false;
  };

} // namespace Model
} // namespace CodeCommit
} // namespace Aws
