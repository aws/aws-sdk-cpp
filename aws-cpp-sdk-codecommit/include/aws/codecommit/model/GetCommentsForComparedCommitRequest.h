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
  class AWS_CODECOMMIT_API GetCommentsForComparedCommitRequest : public CodeCommitRequest
  {
  public:
    GetCommentsForComparedCommitRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetCommentsForComparedCommit"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The name of the repository where you want to compare commits.</p>
     */
    inline const Aws::String& GetRepositoryName() const{ return m_repositoryName; }

    /**
     * <p>The name of the repository where you want to compare commits.</p>
     */
    inline bool RepositoryNameHasBeenSet() const { return m_repositoryNameHasBeenSet; }

    /**
     * <p>The name of the repository where you want to compare commits.</p>
     */
    inline void SetRepositoryName(const Aws::String& value) { m_repositoryNameHasBeenSet = true; m_repositoryName = value; }

    /**
     * <p>The name of the repository where you want to compare commits.</p>
     */
    inline void SetRepositoryName(Aws::String&& value) { m_repositoryNameHasBeenSet = true; m_repositoryName = std::move(value); }

    /**
     * <p>The name of the repository where you want to compare commits.</p>
     */
    inline void SetRepositoryName(const char* value) { m_repositoryNameHasBeenSet = true; m_repositoryName.assign(value); }

    /**
     * <p>The name of the repository where you want to compare commits.</p>
     */
    inline GetCommentsForComparedCommitRequest& WithRepositoryName(const Aws::String& value) { SetRepositoryName(value); return *this;}

    /**
     * <p>The name of the repository where you want to compare commits.</p>
     */
    inline GetCommentsForComparedCommitRequest& WithRepositoryName(Aws::String&& value) { SetRepositoryName(std::move(value)); return *this;}

    /**
     * <p>The name of the repository where you want to compare commits.</p>
     */
    inline GetCommentsForComparedCommitRequest& WithRepositoryName(const char* value) { SetRepositoryName(value); return *this;}


    /**
     * <p>To establish the directionality of the comparison, the full commit ID of the
     * 'before' commit.</p>
     */
    inline const Aws::String& GetBeforeCommitId() const{ return m_beforeCommitId; }

    /**
     * <p>To establish the directionality of the comparison, the full commit ID of the
     * 'before' commit.</p>
     */
    inline bool BeforeCommitIdHasBeenSet() const { return m_beforeCommitIdHasBeenSet; }

    /**
     * <p>To establish the directionality of the comparison, the full commit ID of the
     * 'before' commit.</p>
     */
    inline void SetBeforeCommitId(const Aws::String& value) { m_beforeCommitIdHasBeenSet = true; m_beforeCommitId = value; }

    /**
     * <p>To establish the directionality of the comparison, the full commit ID of the
     * 'before' commit.</p>
     */
    inline void SetBeforeCommitId(Aws::String&& value) { m_beforeCommitIdHasBeenSet = true; m_beforeCommitId = std::move(value); }

    /**
     * <p>To establish the directionality of the comparison, the full commit ID of the
     * 'before' commit.</p>
     */
    inline void SetBeforeCommitId(const char* value) { m_beforeCommitIdHasBeenSet = true; m_beforeCommitId.assign(value); }

    /**
     * <p>To establish the directionality of the comparison, the full commit ID of the
     * 'before' commit.</p>
     */
    inline GetCommentsForComparedCommitRequest& WithBeforeCommitId(const Aws::String& value) { SetBeforeCommitId(value); return *this;}

    /**
     * <p>To establish the directionality of the comparison, the full commit ID of the
     * 'before' commit.</p>
     */
    inline GetCommentsForComparedCommitRequest& WithBeforeCommitId(Aws::String&& value) { SetBeforeCommitId(std::move(value)); return *this;}

    /**
     * <p>To establish the directionality of the comparison, the full commit ID of the
     * 'before' commit.</p>
     */
    inline GetCommentsForComparedCommitRequest& WithBeforeCommitId(const char* value) { SetBeforeCommitId(value); return *this;}


    /**
     * <p>To establish the directionality of the comparison, the full commit ID of the
     * 'after' commit.</p>
     */
    inline const Aws::String& GetAfterCommitId() const{ return m_afterCommitId; }

    /**
     * <p>To establish the directionality of the comparison, the full commit ID of the
     * 'after' commit.</p>
     */
    inline bool AfterCommitIdHasBeenSet() const { return m_afterCommitIdHasBeenSet; }

    /**
     * <p>To establish the directionality of the comparison, the full commit ID of the
     * 'after' commit.</p>
     */
    inline void SetAfterCommitId(const Aws::String& value) { m_afterCommitIdHasBeenSet = true; m_afterCommitId = value; }

    /**
     * <p>To establish the directionality of the comparison, the full commit ID of the
     * 'after' commit.</p>
     */
    inline void SetAfterCommitId(Aws::String&& value) { m_afterCommitIdHasBeenSet = true; m_afterCommitId = std::move(value); }

    /**
     * <p>To establish the directionality of the comparison, the full commit ID of the
     * 'after' commit.</p>
     */
    inline void SetAfterCommitId(const char* value) { m_afterCommitIdHasBeenSet = true; m_afterCommitId.assign(value); }

    /**
     * <p>To establish the directionality of the comparison, the full commit ID of the
     * 'after' commit.</p>
     */
    inline GetCommentsForComparedCommitRequest& WithAfterCommitId(const Aws::String& value) { SetAfterCommitId(value); return *this;}

    /**
     * <p>To establish the directionality of the comparison, the full commit ID of the
     * 'after' commit.</p>
     */
    inline GetCommentsForComparedCommitRequest& WithAfterCommitId(Aws::String&& value) { SetAfterCommitId(std::move(value)); return *this;}

    /**
     * <p>To establish the directionality of the comparison, the full commit ID of the
     * 'after' commit.</p>
     */
    inline GetCommentsForComparedCommitRequest& WithAfterCommitId(const char* value) { SetAfterCommitId(value); return *this;}


    /**
     * <p>An enumeration token that when provided in a request, returns the next batch
     * of the results. </p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>An enumeration token that when provided in a request, returns the next batch
     * of the results. </p>
     */
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    /**
     * <p>An enumeration token that when provided in a request, returns the next batch
     * of the results. </p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>An enumeration token that when provided in a request, returns the next batch
     * of the results. </p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    /**
     * <p>An enumeration token that when provided in a request, returns the next batch
     * of the results. </p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p>An enumeration token that when provided in a request, returns the next batch
     * of the results. </p>
     */
    inline GetCommentsForComparedCommitRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>An enumeration token that when provided in a request, returns the next batch
     * of the results. </p>
     */
    inline GetCommentsForComparedCommitRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>An enumeration token that when provided in a request, returns the next batch
     * of the results. </p>
     */
    inline GetCommentsForComparedCommitRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p>A non-negative integer used to limit the number of returned results. The
     * default is 100 comments, and is configurable up to 500.</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }

    /**
     * <p>A non-negative integer used to limit the number of returned results. The
     * default is 100 comments, and is configurable up to 500.</p>
     */
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }

    /**
     * <p>A non-negative integer used to limit the number of returned results. The
     * default is 100 comments, and is configurable up to 500.</p>
     */
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }

    /**
     * <p>A non-negative integer used to limit the number of returned results. The
     * default is 100 comments, and is configurable up to 500.</p>
     */
    inline GetCommentsForComparedCommitRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}

  private:

    Aws::String m_repositoryName;
    bool m_repositoryNameHasBeenSet;

    Aws::String m_beforeCommitId;
    bool m_beforeCommitIdHasBeenSet;

    Aws::String m_afterCommitId;
    bool m_afterCommitIdHasBeenSet;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet;

    int m_maxResults;
    bool m_maxResultsHasBeenSet;
  };

} // namespace Model
} // namespace CodeCommit
} // namespace Aws
