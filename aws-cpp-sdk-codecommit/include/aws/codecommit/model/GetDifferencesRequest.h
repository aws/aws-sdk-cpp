/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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
  class AWS_CODECOMMIT_API GetDifferencesRequest : public CodeCommitRequest
  {
  public:
    GetDifferencesRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetDifferences"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The name of the repository where you want to get differences.</p>
     */
    inline const Aws::String& GetRepositoryName() const{ return m_repositoryName; }

    /**
     * <p>The name of the repository where you want to get differences.</p>
     */
    inline bool RepositoryNameHasBeenSet() const { return m_repositoryNameHasBeenSet; }

    /**
     * <p>The name of the repository where you want to get differences.</p>
     */
    inline void SetRepositoryName(const Aws::String& value) { m_repositoryNameHasBeenSet = true; m_repositoryName = value; }

    /**
     * <p>The name of the repository where you want to get differences.</p>
     */
    inline void SetRepositoryName(Aws::String&& value) { m_repositoryNameHasBeenSet = true; m_repositoryName = std::move(value); }

    /**
     * <p>The name of the repository where you want to get differences.</p>
     */
    inline void SetRepositoryName(const char* value) { m_repositoryNameHasBeenSet = true; m_repositoryName.assign(value); }

    /**
     * <p>The name of the repository where you want to get differences.</p>
     */
    inline GetDifferencesRequest& WithRepositoryName(const Aws::String& value) { SetRepositoryName(value); return *this;}

    /**
     * <p>The name of the repository where you want to get differences.</p>
     */
    inline GetDifferencesRequest& WithRepositoryName(Aws::String&& value) { SetRepositoryName(std::move(value)); return *this;}

    /**
     * <p>The name of the repository where you want to get differences.</p>
     */
    inline GetDifferencesRequest& WithRepositoryName(const char* value) { SetRepositoryName(value); return *this;}


    /**
     * <p>The branch, tag, HEAD, or other fully qualified reference used to identify a
     * commit. For example, the full commit ID. Optional. If not specified, all changes
     * prior to the <code>afterCommitSpecifier</code> value will be shown. If you do
     * not use <code>beforeCommitSpecifier</code> in your request, consider limiting
     * the results with <code>maxResults</code>.</p>
     */
    inline const Aws::String& GetBeforeCommitSpecifier() const{ return m_beforeCommitSpecifier; }

    /**
     * <p>The branch, tag, HEAD, or other fully qualified reference used to identify a
     * commit. For example, the full commit ID. Optional. If not specified, all changes
     * prior to the <code>afterCommitSpecifier</code> value will be shown. If you do
     * not use <code>beforeCommitSpecifier</code> in your request, consider limiting
     * the results with <code>maxResults</code>.</p>
     */
    inline bool BeforeCommitSpecifierHasBeenSet() const { return m_beforeCommitSpecifierHasBeenSet; }

    /**
     * <p>The branch, tag, HEAD, or other fully qualified reference used to identify a
     * commit. For example, the full commit ID. Optional. If not specified, all changes
     * prior to the <code>afterCommitSpecifier</code> value will be shown. If you do
     * not use <code>beforeCommitSpecifier</code> in your request, consider limiting
     * the results with <code>maxResults</code>.</p>
     */
    inline void SetBeforeCommitSpecifier(const Aws::String& value) { m_beforeCommitSpecifierHasBeenSet = true; m_beforeCommitSpecifier = value; }

    /**
     * <p>The branch, tag, HEAD, or other fully qualified reference used to identify a
     * commit. For example, the full commit ID. Optional. If not specified, all changes
     * prior to the <code>afterCommitSpecifier</code> value will be shown. If you do
     * not use <code>beforeCommitSpecifier</code> in your request, consider limiting
     * the results with <code>maxResults</code>.</p>
     */
    inline void SetBeforeCommitSpecifier(Aws::String&& value) { m_beforeCommitSpecifierHasBeenSet = true; m_beforeCommitSpecifier = std::move(value); }

    /**
     * <p>The branch, tag, HEAD, or other fully qualified reference used to identify a
     * commit. For example, the full commit ID. Optional. If not specified, all changes
     * prior to the <code>afterCommitSpecifier</code> value will be shown. If you do
     * not use <code>beforeCommitSpecifier</code> in your request, consider limiting
     * the results with <code>maxResults</code>.</p>
     */
    inline void SetBeforeCommitSpecifier(const char* value) { m_beforeCommitSpecifierHasBeenSet = true; m_beforeCommitSpecifier.assign(value); }

    /**
     * <p>The branch, tag, HEAD, or other fully qualified reference used to identify a
     * commit. For example, the full commit ID. Optional. If not specified, all changes
     * prior to the <code>afterCommitSpecifier</code> value will be shown. If you do
     * not use <code>beforeCommitSpecifier</code> in your request, consider limiting
     * the results with <code>maxResults</code>.</p>
     */
    inline GetDifferencesRequest& WithBeforeCommitSpecifier(const Aws::String& value) { SetBeforeCommitSpecifier(value); return *this;}

    /**
     * <p>The branch, tag, HEAD, or other fully qualified reference used to identify a
     * commit. For example, the full commit ID. Optional. If not specified, all changes
     * prior to the <code>afterCommitSpecifier</code> value will be shown. If you do
     * not use <code>beforeCommitSpecifier</code> in your request, consider limiting
     * the results with <code>maxResults</code>.</p>
     */
    inline GetDifferencesRequest& WithBeforeCommitSpecifier(Aws::String&& value) { SetBeforeCommitSpecifier(std::move(value)); return *this;}

    /**
     * <p>The branch, tag, HEAD, or other fully qualified reference used to identify a
     * commit. For example, the full commit ID. Optional. If not specified, all changes
     * prior to the <code>afterCommitSpecifier</code> value will be shown. If you do
     * not use <code>beforeCommitSpecifier</code> in your request, consider limiting
     * the results with <code>maxResults</code>.</p>
     */
    inline GetDifferencesRequest& WithBeforeCommitSpecifier(const char* value) { SetBeforeCommitSpecifier(value); return *this;}


    /**
     * <p>The branch, tag, HEAD, or other fully qualified reference used to identify a
     * commit.</p>
     */
    inline const Aws::String& GetAfterCommitSpecifier() const{ return m_afterCommitSpecifier; }

    /**
     * <p>The branch, tag, HEAD, or other fully qualified reference used to identify a
     * commit.</p>
     */
    inline bool AfterCommitSpecifierHasBeenSet() const { return m_afterCommitSpecifierHasBeenSet; }

    /**
     * <p>The branch, tag, HEAD, or other fully qualified reference used to identify a
     * commit.</p>
     */
    inline void SetAfterCommitSpecifier(const Aws::String& value) { m_afterCommitSpecifierHasBeenSet = true; m_afterCommitSpecifier = value; }

    /**
     * <p>The branch, tag, HEAD, or other fully qualified reference used to identify a
     * commit.</p>
     */
    inline void SetAfterCommitSpecifier(Aws::String&& value) { m_afterCommitSpecifierHasBeenSet = true; m_afterCommitSpecifier = std::move(value); }

    /**
     * <p>The branch, tag, HEAD, or other fully qualified reference used to identify a
     * commit.</p>
     */
    inline void SetAfterCommitSpecifier(const char* value) { m_afterCommitSpecifierHasBeenSet = true; m_afterCommitSpecifier.assign(value); }

    /**
     * <p>The branch, tag, HEAD, or other fully qualified reference used to identify a
     * commit.</p>
     */
    inline GetDifferencesRequest& WithAfterCommitSpecifier(const Aws::String& value) { SetAfterCommitSpecifier(value); return *this;}

    /**
     * <p>The branch, tag, HEAD, or other fully qualified reference used to identify a
     * commit.</p>
     */
    inline GetDifferencesRequest& WithAfterCommitSpecifier(Aws::String&& value) { SetAfterCommitSpecifier(std::move(value)); return *this;}

    /**
     * <p>The branch, tag, HEAD, or other fully qualified reference used to identify a
     * commit.</p>
     */
    inline GetDifferencesRequest& WithAfterCommitSpecifier(const char* value) { SetAfterCommitSpecifier(value); return *this;}


    /**
     * <p>The file path in which to check for differences. Limits the results to this
     * path. Can also be used to specify the previous name of a directory or folder. If
     * <code>beforePath</code> and <code>afterPath</code> are not specified,
     * differences will be shown for all paths.</p>
     */
    inline const Aws::String& GetBeforePath() const{ return m_beforePath; }

    /**
     * <p>The file path in which to check for differences. Limits the results to this
     * path. Can also be used to specify the previous name of a directory or folder. If
     * <code>beforePath</code> and <code>afterPath</code> are not specified,
     * differences will be shown for all paths.</p>
     */
    inline bool BeforePathHasBeenSet() const { return m_beforePathHasBeenSet; }

    /**
     * <p>The file path in which to check for differences. Limits the results to this
     * path. Can also be used to specify the previous name of a directory or folder. If
     * <code>beforePath</code> and <code>afterPath</code> are not specified,
     * differences will be shown for all paths.</p>
     */
    inline void SetBeforePath(const Aws::String& value) { m_beforePathHasBeenSet = true; m_beforePath = value; }

    /**
     * <p>The file path in which to check for differences. Limits the results to this
     * path. Can also be used to specify the previous name of a directory or folder. If
     * <code>beforePath</code> and <code>afterPath</code> are not specified,
     * differences will be shown for all paths.</p>
     */
    inline void SetBeforePath(Aws::String&& value) { m_beforePathHasBeenSet = true; m_beforePath = std::move(value); }

    /**
     * <p>The file path in which to check for differences. Limits the results to this
     * path. Can also be used to specify the previous name of a directory or folder. If
     * <code>beforePath</code> and <code>afterPath</code> are not specified,
     * differences will be shown for all paths.</p>
     */
    inline void SetBeforePath(const char* value) { m_beforePathHasBeenSet = true; m_beforePath.assign(value); }

    /**
     * <p>The file path in which to check for differences. Limits the results to this
     * path. Can also be used to specify the previous name of a directory or folder. If
     * <code>beforePath</code> and <code>afterPath</code> are not specified,
     * differences will be shown for all paths.</p>
     */
    inline GetDifferencesRequest& WithBeforePath(const Aws::String& value) { SetBeforePath(value); return *this;}

    /**
     * <p>The file path in which to check for differences. Limits the results to this
     * path. Can also be used to specify the previous name of a directory or folder. If
     * <code>beforePath</code> and <code>afterPath</code> are not specified,
     * differences will be shown for all paths.</p>
     */
    inline GetDifferencesRequest& WithBeforePath(Aws::String&& value) { SetBeforePath(std::move(value)); return *this;}

    /**
     * <p>The file path in which to check for differences. Limits the results to this
     * path. Can also be used to specify the previous name of a directory or folder. If
     * <code>beforePath</code> and <code>afterPath</code> are not specified,
     * differences will be shown for all paths.</p>
     */
    inline GetDifferencesRequest& WithBeforePath(const char* value) { SetBeforePath(value); return *this;}


    /**
     * <p>The file path in which to check differences. Limits the results to this path.
     * Can also be used to specify the changed name of a directory or folder, if it has
     * changed. If not specified, differences will be shown for all paths.</p>
     */
    inline const Aws::String& GetAfterPath() const{ return m_afterPath; }

    /**
     * <p>The file path in which to check differences. Limits the results to this path.
     * Can also be used to specify the changed name of a directory or folder, if it has
     * changed. If not specified, differences will be shown for all paths.</p>
     */
    inline bool AfterPathHasBeenSet() const { return m_afterPathHasBeenSet; }

    /**
     * <p>The file path in which to check differences. Limits the results to this path.
     * Can also be used to specify the changed name of a directory or folder, if it has
     * changed. If not specified, differences will be shown for all paths.</p>
     */
    inline void SetAfterPath(const Aws::String& value) { m_afterPathHasBeenSet = true; m_afterPath = value; }

    /**
     * <p>The file path in which to check differences. Limits the results to this path.
     * Can also be used to specify the changed name of a directory or folder, if it has
     * changed. If not specified, differences will be shown for all paths.</p>
     */
    inline void SetAfterPath(Aws::String&& value) { m_afterPathHasBeenSet = true; m_afterPath = std::move(value); }

    /**
     * <p>The file path in which to check differences. Limits the results to this path.
     * Can also be used to specify the changed name of a directory or folder, if it has
     * changed. If not specified, differences will be shown for all paths.</p>
     */
    inline void SetAfterPath(const char* value) { m_afterPathHasBeenSet = true; m_afterPath.assign(value); }

    /**
     * <p>The file path in which to check differences. Limits the results to this path.
     * Can also be used to specify the changed name of a directory or folder, if it has
     * changed. If not specified, differences will be shown for all paths.</p>
     */
    inline GetDifferencesRequest& WithAfterPath(const Aws::String& value) { SetAfterPath(value); return *this;}

    /**
     * <p>The file path in which to check differences. Limits the results to this path.
     * Can also be used to specify the changed name of a directory or folder, if it has
     * changed. If not specified, differences will be shown for all paths.</p>
     */
    inline GetDifferencesRequest& WithAfterPath(Aws::String&& value) { SetAfterPath(std::move(value)); return *this;}

    /**
     * <p>The file path in which to check differences. Limits the results to this path.
     * Can also be used to specify the changed name of a directory or folder, if it has
     * changed. If not specified, differences will be shown for all paths.</p>
     */
    inline GetDifferencesRequest& WithAfterPath(const char* value) { SetAfterPath(value); return *this;}


    /**
     * <p>A non-negative integer used to limit the number of returned results.</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }

    /**
     * <p>A non-negative integer used to limit the number of returned results.</p>
     */
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }

    /**
     * <p>A non-negative integer used to limit the number of returned results.</p>
     */
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }

    /**
     * <p>A non-negative integer used to limit the number of returned results.</p>
     */
    inline GetDifferencesRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}


    /**
     * <p>An enumeration token that when provided in a request, returns the next batch
     * of the results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>An enumeration token that when provided in a request, returns the next batch
     * of the results.</p>
     */
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    /**
     * <p>An enumeration token that when provided in a request, returns the next batch
     * of the results.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>An enumeration token that when provided in a request, returns the next batch
     * of the results.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    /**
     * <p>An enumeration token that when provided in a request, returns the next batch
     * of the results.</p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p>An enumeration token that when provided in a request, returns the next batch
     * of the results.</p>
     */
    inline GetDifferencesRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>An enumeration token that when provided in a request, returns the next batch
     * of the results.</p>
     */
    inline GetDifferencesRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>An enumeration token that when provided in a request, returns the next batch
     * of the results.</p>
     */
    inline GetDifferencesRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::String m_repositoryName;
    bool m_repositoryNameHasBeenSet;

    Aws::String m_beforeCommitSpecifier;
    bool m_beforeCommitSpecifierHasBeenSet;

    Aws::String m_afterCommitSpecifier;
    bool m_afterCommitSpecifierHasBeenSet;

    Aws::String m_beforePath;
    bool m_beforePathHasBeenSet;

    Aws::String m_afterPath;
    bool m_afterPathHasBeenSet;

    int m_maxResults;
    bool m_maxResultsHasBeenSet;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet;
  };

} // namespace Model
} // namespace CodeCommit
} // namespace Aws
