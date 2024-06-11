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
    AWS_CODECOMMIT_API UpdatePullRequestDescriptionResult();
    AWS_CODECOMMIT_API UpdatePullRequestDescriptionResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CODECOMMIT_API UpdatePullRequestDescriptionResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Information about the updated pull request.</p>
     */
    inline const PullRequest& GetPullRequest() const{ return m_pullRequest; }
    inline void SetPullRequest(const PullRequest& value) { m_pullRequest = value; }
    inline void SetPullRequest(PullRequest&& value) { m_pullRequest = std::move(value); }
    inline UpdatePullRequestDescriptionResult& WithPullRequest(const PullRequest& value) { SetPullRequest(value); return *this;}
    inline UpdatePullRequestDescriptionResult& WithPullRequest(PullRequest&& value) { SetPullRequest(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline UpdatePullRequestDescriptionResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline UpdatePullRequestDescriptionResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline UpdatePullRequestDescriptionResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    PullRequest m_pullRequest;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace CodeCommit
} // namespace Aws
