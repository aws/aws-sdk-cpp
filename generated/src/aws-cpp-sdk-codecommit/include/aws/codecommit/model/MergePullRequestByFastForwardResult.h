/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codecommit/CodeCommit_EXPORTS.h>
#include <aws/codecommit/model/PullRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
  class MergePullRequestByFastForwardResult
  {
  public:
    AWS_CODECOMMIT_API MergePullRequestByFastForwardResult();
    AWS_CODECOMMIT_API MergePullRequestByFastForwardResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CODECOMMIT_API MergePullRequestByFastForwardResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Information about the specified pull request, including the merge.</p>
     */
    inline const PullRequest& GetPullRequest() const{ return m_pullRequest; }

    /**
     * <p>Information about the specified pull request, including the merge.</p>
     */
    inline void SetPullRequest(const PullRequest& value) { m_pullRequest = value; }

    /**
     * <p>Information about the specified pull request, including the merge.</p>
     */
    inline void SetPullRequest(PullRequest&& value) { m_pullRequest = std::move(value); }

    /**
     * <p>Information about the specified pull request, including the merge.</p>
     */
    inline MergePullRequestByFastForwardResult& WithPullRequest(const PullRequest& value) { SetPullRequest(value); return *this;}

    /**
     * <p>Information about the specified pull request, including the merge.</p>
     */
    inline MergePullRequestByFastForwardResult& WithPullRequest(PullRequest&& value) { SetPullRequest(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline MergePullRequestByFastForwardResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline MergePullRequestByFastForwardResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline MergePullRequestByFastForwardResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    PullRequest m_pullRequest;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace CodeCommit
} // namespace Aws
