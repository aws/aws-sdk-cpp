/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agentcore/BedrockAgentCore_EXPORTS.h>
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
  class DeleteMemoryRecordResult
  {
  public:
    AWS_BEDROCKAGENTCORE_API DeleteMemoryRecordResult() = default;
    AWS_BEDROCKAGENTCORE_API DeleteMemoryRecordResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_BEDROCKAGENTCORE_API DeleteMemoryRecordResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The identifier of the memory record that was deleted.</p>
     */
    inline const Aws::String& GetMemoryRecordId() const { return m_memoryRecordId; }
    template<typename MemoryRecordIdT = Aws::String>
    void SetMemoryRecordId(MemoryRecordIdT&& value) { m_memoryRecordIdHasBeenSet = true; m_memoryRecordId = std::forward<MemoryRecordIdT>(value); }
    template<typename MemoryRecordIdT = Aws::String>
    DeleteMemoryRecordResult& WithMemoryRecordId(MemoryRecordIdT&& value) { SetMemoryRecordId(std::forward<MemoryRecordIdT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    DeleteMemoryRecordResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_memoryRecordId;
    bool m_memoryRecordIdHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace BedrockAgentCore
} // namespace Aws
