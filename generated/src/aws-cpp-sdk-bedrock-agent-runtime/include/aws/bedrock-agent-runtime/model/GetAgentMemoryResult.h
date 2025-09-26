/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agent-runtime/BedrockAgentRuntime_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/bedrock-agent-runtime/model/Memory.h>
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
namespace BedrockAgentRuntime
{
namespace Model
{
  class GetAgentMemoryResult
  {
  public:
    AWS_BEDROCKAGENTRUNTIME_API GetAgentMemoryResult() = default;
    AWS_BEDROCKAGENTRUNTIME_API GetAgentMemoryResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_BEDROCKAGENTRUNTIME_API GetAgentMemoryResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>If the total number of results is greater than the maxItems value provided in
     * the request, use this token when making another request in the
     * <code>nextToken</code> field to return the next batch of results.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    GetAgentMemoryResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Contains details of the sessions stored in the memory</p>
     */
    inline const Aws::Vector<Memory>& GetMemoryContents() const { return m_memoryContents; }
    template<typename MemoryContentsT = Aws::Vector<Memory>>
    void SetMemoryContents(MemoryContentsT&& value) { m_memoryContentsHasBeenSet = true; m_memoryContents = std::forward<MemoryContentsT>(value); }
    template<typename MemoryContentsT = Aws::Vector<Memory>>
    GetAgentMemoryResult& WithMemoryContents(MemoryContentsT&& value) { SetMemoryContents(std::forward<MemoryContentsT>(value)); return *this;}
    template<typename MemoryContentsT = Memory>
    GetAgentMemoryResult& AddMemoryContents(MemoryContentsT&& value) { m_memoryContentsHasBeenSet = true; m_memoryContents.emplace_back(std::forward<MemoryContentsT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetAgentMemoryResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::Vector<Memory> m_memoryContents;
    bool m_memoryContentsHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace BedrockAgentRuntime
} // namespace Aws
