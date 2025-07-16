/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agentcore/BedrockAgentCore_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/bedrock-agentcore/model/MemoryRecordSummary.h>
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
namespace BedrockAgentCore
{
namespace Model
{
  class ListMemoryRecordsResult
  {
  public:
    AWS_BEDROCKAGENTCORE_API ListMemoryRecordsResult() = default;
    AWS_BEDROCKAGENTCORE_API ListMemoryRecordsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_BEDROCKAGENTCORE_API ListMemoryRecordsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The list of memory record summaries that match the specified criteria.</p>
     */
    inline const Aws::Vector<MemoryRecordSummary>& GetMemoryRecordSummaries() const { return m_memoryRecordSummaries; }
    template<typename MemoryRecordSummariesT = Aws::Vector<MemoryRecordSummary>>
    void SetMemoryRecordSummaries(MemoryRecordSummariesT&& value) { m_memoryRecordSummariesHasBeenSet = true; m_memoryRecordSummaries = std::forward<MemoryRecordSummariesT>(value); }
    template<typename MemoryRecordSummariesT = Aws::Vector<MemoryRecordSummary>>
    ListMemoryRecordsResult& WithMemoryRecordSummaries(MemoryRecordSummariesT&& value) { SetMemoryRecordSummaries(std::forward<MemoryRecordSummariesT>(value)); return *this;}
    template<typename MemoryRecordSummariesT = MemoryRecordSummary>
    ListMemoryRecordsResult& AddMemoryRecordSummaries(MemoryRecordSummariesT&& value) { m_memoryRecordSummariesHasBeenSet = true; m_memoryRecordSummaries.emplace_back(std::forward<MemoryRecordSummariesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The token to use in a subsequent request to get the next set of results. This
     * value is null when there are no more results to return.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListMemoryRecordsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListMemoryRecordsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<MemoryRecordSummary> m_memoryRecordSummaries;
    bool m_memoryRecordSummariesHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace BedrockAgentCore
} // namespace Aws
