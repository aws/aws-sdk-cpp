/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agent-runtime/BedrockAgentRuntime_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
    AWS_BEDROCKAGENTRUNTIME_API GetAgentMemoryResult();
    AWS_BEDROCKAGENTRUNTIME_API GetAgentMemoryResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_BEDROCKAGENTRUNTIME_API GetAgentMemoryResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Contains details of the sessions stored in the memory</p>
     */
    inline const Aws::Vector<Memory>& GetMemoryContents() const{ return m_memoryContents; }
    inline void SetMemoryContents(const Aws::Vector<Memory>& value) { m_memoryContents = value; }
    inline void SetMemoryContents(Aws::Vector<Memory>&& value) { m_memoryContents = std::move(value); }
    inline GetAgentMemoryResult& WithMemoryContents(const Aws::Vector<Memory>& value) { SetMemoryContents(value); return *this;}
    inline GetAgentMemoryResult& WithMemoryContents(Aws::Vector<Memory>&& value) { SetMemoryContents(std::move(value)); return *this;}
    inline GetAgentMemoryResult& AddMemoryContents(const Memory& value) { m_memoryContents.push_back(value); return *this; }
    inline GetAgentMemoryResult& AddMemoryContents(Memory&& value) { m_memoryContents.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>If the total number of results is greater than the maxItems value provided in
     * the request, use this token when making another request in the
     * <code>nextToken</code> field to return the next batch of results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }
    inline GetAgentMemoryResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline GetAgentMemoryResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline GetAgentMemoryResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline GetAgentMemoryResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline GetAgentMemoryResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline GetAgentMemoryResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<Memory> m_memoryContents;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace BedrockAgentRuntime
} // namespace Aws
