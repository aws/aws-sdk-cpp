/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agentcore/BedrockAgentCore_EXPORTS.h>
#include <aws/bedrock-agentcore/BedrockAgentCoreRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace BedrockAgentCore
{
namespace Model
{

  /**
   */
  class DeleteMemoryRecordRequest : public BedrockAgentCoreRequest
  {
  public:
    AWS_BEDROCKAGENTCORE_API DeleteMemoryRecordRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DeleteMemoryRecord"; }

    AWS_BEDROCKAGENTCORE_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The identifier of the AgentCore Memory resource from which to delete the
     * memory record.</p>
     */
    inline const Aws::String& GetMemoryId() const { return m_memoryId; }
    inline bool MemoryIdHasBeenSet() const { return m_memoryIdHasBeenSet; }
    template<typename MemoryIdT = Aws::String>
    void SetMemoryId(MemoryIdT&& value) { m_memoryIdHasBeenSet = true; m_memoryId = std::forward<MemoryIdT>(value); }
    template<typename MemoryIdT = Aws::String>
    DeleteMemoryRecordRequest& WithMemoryId(MemoryIdT&& value) { SetMemoryId(std::forward<MemoryIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of the memory record to delete.</p>
     */
    inline const Aws::String& GetMemoryRecordId() const { return m_memoryRecordId; }
    inline bool MemoryRecordIdHasBeenSet() const { return m_memoryRecordIdHasBeenSet; }
    template<typename MemoryRecordIdT = Aws::String>
    void SetMemoryRecordId(MemoryRecordIdT&& value) { m_memoryRecordIdHasBeenSet = true; m_memoryRecordId = std::forward<MemoryRecordIdT>(value); }
    template<typename MemoryRecordIdT = Aws::String>
    DeleteMemoryRecordRequest& WithMemoryRecordId(MemoryRecordIdT&& value) { SetMemoryRecordId(std::forward<MemoryRecordIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_memoryId;
    bool m_memoryIdHasBeenSet = false;

    Aws::String m_memoryRecordId;
    bool m_memoryRecordIdHasBeenSet = false;
  };

} // namespace Model
} // namespace BedrockAgentCore
} // namespace Aws
