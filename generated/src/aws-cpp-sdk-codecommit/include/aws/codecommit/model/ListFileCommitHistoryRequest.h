/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codecommit/CodeCommit_EXPORTS.h>
#include <aws/codecommit/CodeCommitRequest.h>
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
  class ListFileCommitHistoryRequest : public CodeCommitRequest
  {
  public:
    AWS_CODECOMMIT_API ListFileCommitHistoryRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListFileCommitHistory"; }

    AWS_CODECOMMIT_API Aws::String SerializePayload() const override;

    AWS_CODECOMMIT_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The name of the repository that contains the file.</p>
     */
    inline const Aws::String& GetRepositoryName() const{ return m_repositoryName; }
    inline bool RepositoryNameHasBeenSet() const { return m_repositoryNameHasBeenSet; }
    inline void SetRepositoryName(const Aws::String& value) { m_repositoryNameHasBeenSet = true; m_repositoryName = value; }
    inline void SetRepositoryName(Aws::String&& value) { m_repositoryNameHasBeenSet = true; m_repositoryName = std::move(value); }
    inline void SetRepositoryName(const char* value) { m_repositoryNameHasBeenSet = true; m_repositoryName.assign(value); }
    inline ListFileCommitHistoryRequest& WithRepositoryName(const Aws::String& value) { SetRepositoryName(value); return *this;}
    inline ListFileCommitHistoryRequest& WithRepositoryName(Aws::String&& value) { SetRepositoryName(std::move(value)); return *this;}
    inline ListFileCommitHistoryRequest& WithRepositoryName(const char* value) { SetRepositoryName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The fully quaified reference that identifies the commit that contains the
     * file. For example, you can specify a full commit ID, a tag, a branch name, or a
     * reference such as <code>refs/heads/main</code>. If none is provided, the head
     * commit is used.</p>
     */
    inline const Aws::String& GetCommitSpecifier() const{ return m_commitSpecifier; }
    inline bool CommitSpecifierHasBeenSet() const { return m_commitSpecifierHasBeenSet; }
    inline void SetCommitSpecifier(const Aws::String& value) { m_commitSpecifierHasBeenSet = true; m_commitSpecifier = value; }
    inline void SetCommitSpecifier(Aws::String&& value) { m_commitSpecifierHasBeenSet = true; m_commitSpecifier = std::move(value); }
    inline void SetCommitSpecifier(const char* value) { m_commitSpecifierHasBeenSet = true; m_commitSpecifier.assign(value); }
    inline ListFileCommitHistoryRequest& WithCommitSpecifier(const Aws::String& value) { SetCommitSpecifier(value); return *this;}
    inline ListFileCommitHistoryRequest& WithCommitSpecifier(Aws::String&& value) { SetCommitSpecifier(std::move(value)); return *this;}
    inline ListFileCommitHistoryRequest& WithCommitSpecifier(const char* value) { SetCommitSpecifier(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The full path of the file whose history you want to retrieve, including the
     * name of the file.</p>
     */
    inline const Aws::String& GetFilePath() const{ return m_filePath; }
    inline bool FilePathHasBeenSet() const { return m_filePathHasBeenSet; }
    inline void SetFilePath(const Aws::String& value) { m_filePathHasBeenSet = true; m_filePath = value; }
    inline void SetFilePath(Aws::String&& value) { m_filePathHasBeenSet = true; m_filePath = std::move(value); }
    inline void SetFilePath(const char* value) { m_filePathHasBeenSet = true; m_filePath.assign(value); }
    inline ListFileCommitHistoryRequest& WithFilePath(const Aws::String& value) { SetFilePath(value); return *this;}
    inline ListFileCommitHistoryRequest& WithFilePath(Aws::String&& value) { SetFilePath(std::move(value)); return *this;}
    inline ListFileCommitHistoryRequest& WithFilePath(const char* value) { SetFilePath(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A non-zero, non-negative integer used to limit the number of returned
     * results.</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }
    inline ListFileCommitHistoryRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>An enumeration token that allows the operation to batch the results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }
    inline ListFileCommitHistoryRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListFileCommitHistoryRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListFileCommitHistoryRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}
  private:

    Aws::String m_repositoryName;
    bool m_repositoryNameHasBeenSet = false;

    Aws::String m_commitSpecifier;
    bool m_commitSpecifierHasBeenSet = false;

    Aws::String m_filePath;
    bool m_filePathHasBeenSet = false;

    int m_maxResults;
    bool m_maxResultsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace CodeCommit
} // namespace Aws
