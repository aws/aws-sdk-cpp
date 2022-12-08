/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codecommit/CodeCommit_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/codecommit/model/CommentsForPullRequest.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace CodeCommit
{
namespace Model
{
  class GetCommentsForPullRequestResult
  {
  public:
    AWS_CODECOMMIT_API GetCommentsForPullRequestResult();
    AWS_CODECOMMIT_API GetCommentsForPullRequestResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CODECOMMIT_API GetCommentsForPullRequestResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>An array of comment objects on the pull request.</p>
     */
    inline const Aws::Vector<CommentsForPullRequest>& GetCommentsForPullRequestData() const{ return m_commentsForPullRequestData; }

    /**
     * <p>An array of comment objects on the pull request.</p>
     */
    inline void SetCommentsForPullRequestData(const Aws::Vector<CommentsForPullRequest>& value) { m_commentsForPullRequestData = value; }

    /**
     * <p>An array of comment objects on the pull request.</p>
     */
    inline void SetCommentsForPullRequestData(Aws::Vector<CommentsForPullRequest>&& value) { m_commentsForPullRequestData = std::move(value); }

    /**
     * <p>An array of comment objects on the pull request.</p>
     */
    inline GetCommentsForPullRequestResult& WithCommentsForPullRequestData(const Aws::Vector<CommentsForPullRequest>& value) { SetCommentsForPullRequestData(value); return *this;}

    /**
     * <p>An array of comment objects on the pull request.</p>
     */
    inline GetCommentsForPullRequestResult& WithCommentsForPullRequestData(Aws::Vector<CommentsForPullRequest>&& value) { SetCommentsForPullRequestData(std::move(value)); return *this;}

    /**
     * <p>An array of comment objects on the pull request.</p>
     */
    inline GetCommentsForPullRequestResult& AddCommentsForPullRequestData(const CommentsForPullRequest& value) { m_commentsForPullRequestData.push_back(value); return *this; }

    /**
     * <p>An array of comment objects on the pull request.</p>
     */
    inline GetCommentsForPullRequestResult& AddCommentsForPullRequestData(CommentsForPullRequest&& value) { m_commentsForPullRequestData.push_back(std::move(value)); return *this; }


    /**
     * <p>An enumeration token that can be used in a request to return the next batch
     * of the results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>An enumeration token that can be used in a request to return the next batch
     * of the results.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>An enumeration token that can be used in a request to return the next batch
     * of the results.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>An enumeration token that can be used in a request to return the next batch
     * of the results.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>An enumeration token that can be used in a request to return the next batch
     * of the results.</p>
     */
    inline GetCommentsForPullRequestResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>An enumeration token that can be used in a request to return the next batch
     * of the results.</p>
     */
    inline GetCommentsForPullRequestResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>An enumeration token that can be used in a request to return the next batch
     * of the results.</p>
     */
    inline GetCommentsForPullRequestResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<CommentsForPullRequest> m_commentsForPullRequestData;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace CodeCommit
} // namespace Aws
