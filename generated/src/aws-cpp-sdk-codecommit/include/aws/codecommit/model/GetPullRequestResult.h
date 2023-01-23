/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codecommit/CodeCommit_EXPORTS.h>
#include <aws/codecommit/model/PullRequest.h>
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
  class GetPullRequestResult
  {
  public:
    AWS_CODECOMMIT_API GetPullRequestResult();
    AWS_CODECOMMIT_API GetPullRequestResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CODECOMMIT_API GetPullRequestResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Information about the specified pull request.</p>
     */
    inline const PullRequest& GetPullRequest() const{ return m_pullRequest; }

    /**
     * <p>Information about the specified pull request.</p>
     */
    inline void SetPullRequest(const PullRequest& value) { m_pullRequest = value; }

    /**
     * <p>Information about the specified pull request.</p>
     */
    inline void SetPullRequest(PullRequest&& value) { m_pullRequest = std::move(value); }

    /**
     * <p>Information about the specified pull request.</p>
     */
    inline GetPullRequestResult& WithPullRequest(const PullRequest& value) { SetPullRequest(value); return *this;}

    /**
     * <p>Information about the specified pull request.</p>
     */
    inline GetPullRequestResult& WithPullRequest(PullRequest&& value) { SetPullRequest(std::move(value)); return *this;}

  private:

    PullRequest m_pullRequest;
  };

} // namespace Model
} // namespace CodeCommit
} // namespace Aws
