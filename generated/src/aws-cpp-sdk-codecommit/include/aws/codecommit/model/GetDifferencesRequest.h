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
  class GetDifferencesRequest : public CodeCommitRequest
  {
  public:
    AWS_CODECOMMIT_API GetDifferencesRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetDifferences"; }

    AWS_CODECOMMIT_API Aws::String SerializePayload() const override;

    AWS_CODECOMMIT_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The name of the repository where you want to get differences.</p>
     */
    inline const Aws::String& GetRepositoryName() const{ return m_repositoryName; }
    inline bool RepositoryNameHasBeenSet() const { return m_repositoryNameHasBeenSet; }
    inline void SetRepositoryName(const Aws::String& value) { m_repositoryNameHasBeenSet = true; m_repositoryName = value; }
    inline void SetRepositoryName(Aws::String&& value) { m_repositoryNameHasBeenSet = true; m_repositoryName = std::move(value); }
    inline void SetRepositoryName(const char* value) { m_repositoryNameHasBeenSet = true; m_repositoryName.assign(value); }
    inline GetDifferencesRequest& WithRepositoryName(const Aws::String& value) { SetRepositoryName(value); return *this;}
    inline GetDifferencesRequest& WithRepositoryName(Aws::String&& value) { SetRepositoryName(std::move(value)); return *this;}
    inline GetDifferencesRequest& WithRepositoryName(const char* value) { SetRepositoryName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The branch, tag, HEAD, or other fully qualified reference used to identify a
     * commit (for example, the full commit ID). Optional. If not specified, all
     * changes before the <code>afterCommitSpecifier</code> value are shown. If you do
     * not use <code>beforeCommitSpecifier</code> in your request, consider limiting
     * the results with <code>maxResults</code>.</p>
     */
    inline const Aws::String& GetBeforeCommitSpecifier() const{ return m_beforeCommitSpecifier; }
    inline bool BeforeCommitSpecifierHasBeenSet() const { return m_beforeCommitSpecifierHasBeenSet; }
    inline void SetBeforeCommitSpecifier(const Aws::String& value) { m_beforeCommitSpecifierHasBeenSet = true; m_beforeCommitSpecifier = value; }
    inline void SetBeforeCommitSpecifier(Aws::String&& value) { m_beforeCommitSpecifierHasBeenSet = true; m_beforeCommitSpecifier = std::move(value); }
    inline void SetBeforeCommitSpecifier(const char* value) { m_beforeCommitSpecifierHasBeenSet = true; m_beforeCommitSpecifier.assign(value); }
    inline GetDifferencesRequest& WithBeforeCommitSpecifier(const Aws::String& value) { SetBeforeCommitSpecifier(value); return *this;}
    inline GetDifferencesRequest& WithBeforeCommitSpecifier(Aws::String&& value) { SetBeforeCommitSpecifier(std::move(value)); return *this;}
    inline GetDifferencesRequest& WithBeforeCommitSpecifier(const char* value) { SetBeforeCommitSpecifier(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The branch, tag, HEAD, or other fully qualified reference used to identify a
     * commit.</p>
     */
    inline const Aws::String& GetAfterCommitSpecifier() const{ return m_afterCommitSpecifier; }
    inline bool AfterCommitSpecifierHasBeenSet() const { return m_afterCommitSpecifierHasBeenSet; }
    inline void SetAfterCommitSpecifier(const Aws::String& value) { m_afterCommitSpecifierHasBeenSet = true; m_afterCommitSpecifier = value; }
    inline void SetAfterCommitSpecifier(Aws::String&& value) { m_afterCommitSpecifierHasBeenSet = true; m_afterCommitSpecifier = std::move(value); }
    inline void SetAfterCommitSpecifier(const char* value) { m_afterCommitSpecifierHasBeenSet = true; m_afterCommitSpecifier.assign(value); }
    inline GetDifferencesRequest& WithAfterCommitSpecifier(const Aws::String& value) { SetAfterCommitSpecifier(value); return *this;}
    inline GetDifferencesRequest& WithAfterCommitSpecifier(Aws::String&& value) { SetAfterCommitSpecifier(std::move(value)); return *this;}
    inline GetDifferencesRequest& WithAfterCommitSpecifier(const char* value) { SetAfterCommitSpecifier(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The file path in which to check for differences. Limits the results to this
     * path. Can also be used to specify the previous name of a directory or folder. If
     * <code>beforePath</code> and <code>afterPath</code> are not specified,
     * differences are shown for all paths.</p>
     */
    inline const Aws::String& GetBeforePath() const{ return m_beforePath; }
    inline bool BeforePathHasBeenSet() const { return m_beforePathHasBeenSet; }
    inline void SetBeforePath(const Aws::String& value) { m_beforePathHasBeenSet = true; m_beforePath = value; }
    inline void SetBeforePath(Aws::String&& value) { m_beforePathHasBeenSet = true; m_beforePath = std::move(value); }
    inline void SetBeforePath(const char* value) { m_beforePathHasBeenSet = true; m_beforePath.assign(value); }
    inline GetDifferencesRequest& WithBeforePath(const Aws::String& value) { SetBeforePath(value); return *this;}
    inline GetDifferencesRequest& WithBeforePath(Aws::String&& value) { SetBeforePath(std::move(value)); return *this;}
    inline GetDifferencesRequest& WithBeforePath(const char* value) { SetBeforePath(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The file path in which to check differences. Limits the results to this path.
     * Can also be used to specify the changed name of a directory or folder, if it has
     * changed. If not specified, differences are shown for all paths.</p>
     */
    inline const Aws::String& GetAfterPath() const{ return m_afterPath; }
    inline bool AfterPathHasBeenSet() const { return m_afterPathHasBeenSet; }
    inline void SetAfterPath(const Aws::String& value) { m_afterPathHasBeenSet = true; m_afterPath = value; }
    inline void SetAfterPath(Aws::String&& value) { m_afterPathHasBeenSet = true; m_afterPath = std::move(value); }
    inline void SetAfterPath(const char* value) { m_afterPathHasBeenSet = true; m_afterPath.assign(value); }
    inline GetDifferencesRequest& WithAfterPath(const Aws::String& value) { SetAfterPath(value); return *this;}
    inline GetDifferencesRequest& WithAfterPath(Aws::String&& value) { SetAfterPath(std::move(value)); return *this;}
    inline GetDifferencesRequest& WithAfterPath(const char* value) { SetAfterPath(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A non-zero, non-negative integer used to limit the number of returned
     * results.</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }
    inline GetDifferencesRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>An enumeration token that, when provided in a request, returns the next batch
     * of the results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }
    inline GetDifferencesRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline GetDifferencesRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline GetDifferencesRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}
  private:

    Aws::String m_repositoryName;
    bool m_repositoryNameHasBeenSet = false;

    Aws::String m_beforeCommitSpecifier;
    bool m_beforeCommitSpecifierHasBeenSet = false;

    Aws::String m_afterCommitSpecifier;
    bool m_afterCommitSpecifierHasBeenSet = false;

    Aws::String m_beforePath;
    bool m_beforePathHasBeenSet = false;

    Aws::String m_afterPath;
    bool m_afterPathHasBeenSet = false;

    int m_maxResults;
    bool m_maxResultsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace CodeCommit
} // namespace Aws
