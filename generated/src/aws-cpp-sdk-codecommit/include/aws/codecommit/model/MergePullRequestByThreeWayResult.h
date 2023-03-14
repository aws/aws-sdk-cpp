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
  class MergePullRequestByThreeWayResult
  {
  public:
    AWS_CODECOMMIT_API MergePullRequestByThreeWayResult();
    AWS_CODECOMMIT_API MergePullRequestByThreeWayResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CODECOMMIT_API MergePullRequestByThreeWayResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    
    inline const PullRequest& GetPullRequest() const{ return m_pullRequest; }

    
    inline void SetPullRequest(const PullRequest& value) { m_pullRequest = value; }

    
    inline void SetPullRequest(PullRequest&& value) { m_pullRequest = std::move(value); }

    
    inline MergePullRequestByThreeWayResult& WithPullRequest(const PullRequest& value) { SetPullRequest(value); return *this;}

    
    inline MergePullRequestByThreeWayResult& WithPullRequest(PullRequest&& value) { SetPullRequest(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline MergePullRequestByThreeWayResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline MergePullRequestByThreeWayResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline MergePullRequestByThreeWayResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    PullRequest m_pullRequest;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace CodeCommit
} // namespace Aws
