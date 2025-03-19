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
    AWS_CODECOMMIT_API GetDifferencesRequest() = default;

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
    inline const Aws::String& GetRepositoryName() const { return m_repositoryName; }
    inline bool RepositoryNameHasBeenSet() const { return m_repositoryNameHasBeenSet; }
    template<typename RepositoryNameT = Aws::String>
    void SetRepositoryName(RepositoryNameT&& value) { m_repositoryNameHasBeenSet = true; m_repositoryName = std::forward<RepositoryNameT>(value); }
    template<typename RepositoryNameT = Aws::String>
    GetDifferencesRequest& WithRepositoryName(RepositoryNameT&& value) { SetRepositoryName(std::forward<RepositoryNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The branch, tag, HEAD, or other fully qualified reference used to identify a
     * commit (for example, the full commit ID). Optional. If not specified, all
     * changes before the <code>afterCommitSpecifier</code> value are shown. If you do
     * not use <code>beforeCommitSpecifier</code> in your request, consider limiting
     * the results with <code>maxResults</code>.</p>
     */
    inline const Aws::String& GetBeforeCommitSpecifier() const { return m_beforeCommitSpecifier; }
    inline bool BeforeCommitSpecifierHasBeenSet() const { return m_beforeCommitSpecifierHasBeenSet; }
    template<typename BeforeCommitSpecifierT = Aws::String>
    void SetBeforeCommitSpecifier(BeforeCommitSpecifierT&& value) { m_beforeCommitSpecifierHasBeenSet = true; m_beforeCommitSpecifier = std::forward<BeforeCommitSpecifierT>(value); }
    template<typename BeforeCommitSpecifierT = Aws::String>
    GetDifferencesRequest& WithBeforeCommitSpecifier(BeforeCommitSpecifierT&& value) { SetBeforeCommitSpecifier(std::forward<BeforeCommitSpecifierT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The branch, tag, HEAD, or other fully qualified reference used to identify a
     * commit.</p>
     */
    inline const Aws::String& GetAfterCommitSpecifier() const { return m_afterCommitSpecifier; }
    inline bool AfterCommitSpecifierHasBeenSet() const { return m_afterCommitSpecifierHasBeenSet; }
    template<typename AfterCommitSpecifierT = Aws::String>
    void SetAfterCommitSpecifier(AfterCommitSpecifierT&& value) { m_afterCommitSpecifierHasBeenSet = true; m_afterCommitSpecifier = std::forward<AfterCommitSpecifierT>(value); }
    template<typename AfterCommitSpecifierT = Aws::String>
    GetDifferencesRequest& WithAfterCommitSpecifier(AfterCommitSpecifierT&& value) { SetAfterCommitSpecifier(std::forward<AfterCommitSpecifierT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The file path in which to check for differences. Limits the results to this
     * path. Can also be used to specify the previous name of a directory or folder. If
     * <code>beforePath</code> and <code>afterPath</code> are not specified,
     * differences are shown for all paths.</p>
     */
    inline const Aws::String& GetBeforePath() const { return m_beforePath; }
    inline bool BeforePathHasBeenSet() const { return m_beforePathHasBeenSet; }
    template<typename BeforePathT = Aws::String>
    void SetBeforePath(BeforePathT&& value) { m_beforePathHasBeenSet = true; m_beforePath = std::forward<BeforePathT>(value); }
    template<typename BeforePathT = Aws::String>
    GetDifferencesRequest& WithBeforePath(BeforePathT&& value) { SetBeforePath(std::forward<BeforePathT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The file path in which to check differences. Limits the results to this path.
     * Can also be used to specify the changed name of a directory or folder, if it has
     * changed. If not specified, differences are shown for all paths.</p>
     */
    inline const Aws::String& GetAfterPath() const { return m_afterPath; }
    inline bool AfterPathHasBeenSet() const { return m_afterPathHasBeenSet; }
    template<typename AfterPathT = Aws::String>
    void SetAfterPath(AfterPathT&& value) { m_afterPathHasBeenSet = true; m_afterPath = std::forward<AfterPathT>(value); }
    template<typename AfterPathT = Aws::String>
    GetDifferencesRequest& WithAfterPath(AfterPathT&& value) { SetAfterPath(std::forward<AfterPathT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A non-zero, non-negative integer used to limit the number of returned
     * results.</p>
     */
    inline int GetMaxResults() const { return m_maxResults; }
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }
    inline GetDifferencesRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>An enumeration token that, when provided in a request, returns the next batch
     * of the results.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    GetDifferencesRequest& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
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

    int m_maxResults{0};
    bool m_maxResultsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace CodeCommit
} // namespace Aws
