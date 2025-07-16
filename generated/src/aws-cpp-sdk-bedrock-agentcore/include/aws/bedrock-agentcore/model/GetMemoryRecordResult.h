/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agentcore/BedrockAgentCore_EXPORTS.h>
#include <aws/bedrock-agentcore/model/MemoryRecord.h>
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
namespace BedrockAgentCore
{
namespace Model
{
  class GetMemoryRecordResult
  {
  public:
    AWS_BEDROCKAGENTCORE_API GetMemoryRecordResult() = default;
    AWS_BEDROCKAGENTCORE_API GetMemoryRecordResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_BEDROCKAGENTCORE_API GetMemoryRecordResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The requested memory record.</p>
     */
    inline const MemoryRecord& GetMemoryRecord() const { return m_memoryRecord; }
    template<typename MemoryRecordT = MemoryRecord>
    void SetMemoryRecord(MemoryRecordT&& value) { m_memoryRecordHasBeenSet = true; m_memoryRecord = std::forward<MemoryRecordT>(value); }
    template<typename MemoryRecordT = MemoryRecord>
    GetMemoryRecordResult& WithMemoryRecord(MemoryRecordT&& value) { SetMemoryRecord(std::forward<MemoryRecordT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetMemoryRecordResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    MemoryRecord m_memoryRecord;
    bool m_memoryRecordHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace BedrockAgentCore
} // namespace Aws
