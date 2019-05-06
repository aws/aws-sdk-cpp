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
#include <aws/codecommit/model/PullRequestStatusEnum.h>
#include <utility>

namespace Aws
{
namespace CodeCommit
{
namespace Model
{

  /**
   */
  class AWS_CODECOMMIT_API ListPullRequestsRequest : public CodeCommitRequest
  {
  public:
    ListPullRequestsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListPullRequests"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The name of the repository for which you want to list pull requests.</p>
     */
    inline const Aws::String& GetRepositoryName() const{ return m_repositoryName; }

    /**
     * <p>The name of the repository for which you want to list pull requests.</p>
     */
    inline bool RepositoryNameHasBeenSet() const { return m_repositoryNameHasBeenSet; }

    /**
     * <p>The name of the repository for which you want to list pull requests.</p>
     */
    inline void SetRepositoryName(const Aws::String& value) { m_repositoryNameHasBeenSet = true; m_repositoryName = value; }

    /**
     * <p>The name of the repository for which you want to list pull requests.</p>
     */
    inline void SetRepositoryName(Aws::String&& value) { m_repositoryNameHasBeenSet = true; m_repositoryName = std::move(value); }

    /**
     * <p>The name of the repository for which you want to list pull requests.</p>
     */
    inline void SetRepositoryName(const char* value) { m_repositoryNameHasBeenSet = true; m_repositoryName.assign(value); }

    /**
     * <p>The name of the repository for which you want to list pull requests.</p>
     */
    inline ListPullRequestsRequest& WithRepositoryName(const Aws::String& value) { SetRepositoryName(value); return *this;}

    /**
     * <p>The name of the repository for which you want to list pull requests.</p>
     */
    inline ListPullRequestsRequest& WithRepositoryName(Aws::String&& value) { SetRepositoryName(std::move(value)); return *this;}

    /**
     * <p>The name of the repository for which you want to list pull requests.</p>
     */
    inline ListPullRequestsRequest& WithRepositoryName(const char* value) { SetRepositoryName(value); return *this;}


    /**
     * <p>Optional. The Amazon Resource Name (ARN) of the user who created the pull
     * request. If used, this filters the results to pull requests created by that
     * user.</p>
     */
    inline const Aws::String& GetAuthorArn() const{ return m_authorArn; }

    /**
     * <p>Optional. The Amazon Resource Name (ARN) of the user who created the pull
     * request. If used, this filters the results to pull requests created by that
     * user.</p>
     */
    inline bool AuthorArnHasBeenSet() const { return m_authorArnHasBeenSet; }

    /**
     * <p>Optional. The Amazon Resource Name (ARN) of the user who created the pull
     * request. If used, this filters the results to pull requests created by that
     * user.</p>
     */
    inline void SetAuthorArn(const Aws::String& value) { m_authorArnHasBeenSet = true; m_authorArn = value; }

    /**
     * <p>Optional. The Amazon Resource Name (ARN) of the user who created the pull
     * request. If used, this filters the results to pull requests created by that
     * user.</p>
     */
    inline void SetAuthorArn(Aws::String&& value) { m_authorArnHasBeenSet = true; m_authorArn = std::move(value); }

    /**
     * <p>Optional. The Amazon Resource Name (ARN) of the user who created the pull
     * request. If used, this filters the results to pull requests created by that
     * user.</p>
     */
    inline void SetAuthorArn(const char* value) { m_authorArnHasBeenSet = true; m_authorArn.assign(value); }

    /**
     * <p>Optional. The Amazon Resource Name (ARN) of the user who created the pull
     * request. If used, this filters the results to pull requests created by that
     * user.</p>
     */
    inline ListPullRequestsRequest& WithAuthorArn(const Aws::String& value) { SetAuthorArn(value); return *this;}

    /**
     * <p>Optional. The Amazon Resource Name (ARN) of the user who created the pull
     * request. If used, this filters the results to pull requests created by that
     * user.</p>
     */
    inline ListPullRequestsRequest& WithAuthorArn(Aws::String&& value) { SetAuthorArn(std::move(value)); return *this;}

    /**
     * <p>Optional. The Amazon Resource Name (ARN) of the user who created the pull
     * request. If used, this filters the results to pull requests created by that
     * user.</p>
     */
    inline ListPullRequestsRequest& WithAuthorArn(const char* value) { SetAuthorArn(value); return *this;}


    /**
     * <p>Optional. The status of the pull request. If used, this refines the results
     * to the pull requests that match the specified status.</p>
     */
    inline const PullRequestStatusEnum& GetPullRequestStatus() const{ return m_pullRequestStatus; }

    /**
     * <p>Optional. The status of the pull request. If used, this refines the results
     * to the pull requests that match the specified status.</p>
     */
    inline bool PullRequestStatusHasBeenSet() const { return m_pullRequestStatusHasBeenSet; }

    /**
     * <p>Optional. The status of the pull request. If used, this refines the results
     * to the pull requests that match the specified status.</p>
     */
    inline void SetPullRequestStatus(const PullRequestStatusEnum& value) { m_pullRequestStatusHasBeenSet = true; m_pullRequestStatus = value; }

    /**
     * <p>Optional. The status of the pull request. If used, this refines the results
     * to the pull requests that match the specified status.</p>
     */
    inline void SetPullRequestStatus(PullRequestStatusEnum&& value) { m_pullRequestStatusHasBeenSet = true; m_pullRequestStatus = std::move(value); }

    /**
     * <p>Optional. The status of the pull request. If used, this refines the results
     * to the pull requests that match the specified status.</p>
     */
    inline ListPullRequestsRequest& WithPullRequestStatus(const PullRequestStatusEnum& value) { SetPullRequestStatus(value); return *this;}

    /**
     * <p>Optional. The status of the pull request. If used, this refines the results
     * to the pull requests that match the specified status.</p>
     */
    inline ListPullRequestsRequest& WithPullRequestStatus(PullRequestStatusEnum&& value) { SetPullRequestStatus(std::move(value)); return *this;}


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
    inline ListPullRequestsRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>An enumeration token that when provided in a request, returns the next batch
     * of the results.</p>
     */
    inline ListPullRequestsRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>An enumeration token that when provided in a request, returns the next batch
     * of the results.</p>
     */
    inline ListPullRequestsRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}


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
    inline ListPullRequestsRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}

  private:

    Aws::String m_repositoryName;
    bool m_repositoryNameHasBeenSet;

    Aws::String m_authorArn;
    bool m_authorArnHasBeenSet;

    PullRequestStatusEnum m_pullRequestStatus;
    bool m_pullRequestStatusHasBeenSet;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet;

    int m_maxResults;
    bool m_maxResultsHasBeenSet;
  };

} // namespace Model
} // namespace CodeCommit
} // namespace Aws
