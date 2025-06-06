﻿/**
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
  class UpdatePullRequestDescriptionResult
  {
  public:
    AWS_CODECOMMIT_API UpdatePullRequestDescriptionResult() = default;
    AWS_CODECOMMIT_API UpdatePullRequestDescriptionResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CODECOMMIT_API UpdatePullRequestDescriptionResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Information about the updated pull request.</p>
     */
    inline const PullRequest& GetPullRequest() const { return m_pullRequest; }
    template<typename PullRequestT = PullRequest>
    void SetPullRequest(PullRequestT&& value) { m_pullRequestHasBeenSet = true; m_pullRequest = std::forward<PullRequestT>(value); }
    template<typename PullRequestT = PullRequest>
    UpdatePullRequestDescriptionResult& WithPullRequest(PullRequestT&& value) { SetPullRequest(std::forward<PullRequestT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    UpdatePullRequestDescriptionResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    PullRequest m_pullRequest;
    bool m_pullRequestHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace CodeCommit
} // namespace Aws
