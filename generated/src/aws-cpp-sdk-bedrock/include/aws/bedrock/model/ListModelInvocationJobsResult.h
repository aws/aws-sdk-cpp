/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock/Bedrock_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/bedrock/model/ModelInvocationJobSummary.h>
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
namespace Bedrock
{
namespace Model
{
  class ListModelInvocationJobsResult
  {
  public:
    AWS_BEDROCK_API ListModelInvocationJobsResult() = default;
    AWS_BEDROCK_API ListModelInvocationJobsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_BEDROCK_API ListModelInvocationJobsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>If there are more results than can fit in the response, a
     * <code>nextToken</code> is returned. Use the <code>nextToken</code> in a request
     * to return the next batch of results.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListModelInvocationJobsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of items, each of which contains a summary about a batch inference
     * job.</p>
     */
    inline const Aws::Vector<ModelInvocationJobSummary>& GetInvocationJobSummaries() const { return m_invocationJobSummaries; }
    template<typename InvocationJobSummariesT = Aws::Vector<ModelInvocationJobSummary>>
    void SetInvocationJobSummaries(InvocationJobSummariesT&& value) { m_invocationJobSummariesHasBeenSet = true; m_invocationJobSummaries = std::forward<InvocationJobSummariesT>(value); }
    template<typename InvocationJobSummariesT = Aws::Vector<ModelInvocationJobSummary>>
    ListModelInvocationJobsResult& WithInvocationJobSummaries(InvocationJobSummariesT&& value) { SetInvocationJobSummaries(std::forward<InvocationJobSummariesT>(value)); return *this;}
    template<typename InvocationJobSummariesT = ModelInvocationJobSummary>
    ListModelInvocationJobsResult& AddInvocationJobSummaries(InvocationJobSummariesT&& value) { m_invocationJobSummariesHasBeenSet = true; m_invocationJobSummaries.emplace_back(std::forward<InvocationJobSummariesT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListModelInvocationJobsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::Vector<ModelInvocationJobSummary> m_invocationJobSummaries;
    bool m_invocationJobSummariesHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Bedrock
} // namespace Aws
