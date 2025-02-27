/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agent-runtime/BedrockAgentRuntime_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/bedrock-agent-runtime/model/BedrockSessionContentBlock.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace BedrockAgentRuntime
{
namespace Model
{

  /**
   * <p>Payload content, such as text and images, for the invocation
   * step.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agent-runtime-2023-07-26/InvocationStepPayload">AWS
   * API Reference</a></p>
   */
  class InvocationStepPayload
  {
  public:
    AWS_BEDROCKAGENTRUNTIME_API InvocationStepPayload();
    AWS_BEDROCKAGENTRUNTIME_API InvocationStepPayload(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENTRUNTIME_API InvocationStepPayload& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENTRUNTIME_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The content for the invocation step.</p>
     */
    inline const Aws::Vector<BedrockSessionContentBlock>& GetContentBlocks() const{ return m_contentBlocks; }
    inline bool ContentBlocksHasBeenSet() const { return m_contentBlocksHasBeenSet; }
    inline void SetContentBlocks(const Aws::Vector<BedrockSessionContentBlock>& value) { m_contentBlocksHasBeenSet = true; m_contentBlocks = value; }
    inline void SetContentBlocks(Aws::Vector<BedrockSessionContentBlock>&& value) { m_contentBlocksHasBeenSet = true; m_contentBlocks = std::move(value); }
    inline InvocationStepPayload& WithContentBlocks(const Aws::Vector<BedrockSessionContentBlock>& value) { SetContentBlocks(value); return *this;}
    inline InvocationStepPayload& WithContentBlocks(Aws::Vector<BedrockSessionContentBlock>&& value) { SetContentBlocks(std::move(value)); return *this;}
    inline InvocationStepPayload& AddContentBlocks(const BedrockSessionContentBlock& value) { m_contentBlocksHasBeenSet = true; m_contentBlocks.push_back(value); return *this; }
    inline InvocationStepPayload& AddContentBlocks(BedrockSessionContentBlock&& value) { m_contentBlocksHasBeenSet = true; m_contentBlocks.push_back(std::move(value)); return *this; }
    ///@}
  private:

    Aws::Vector<BedrockSessionContentBlock> m_contentBlocks;
    bool m_contentBlocksHasBeenSet = false;
  };

} // namespace Model
} // namespace BedrockAgentRuntime
} // namespace Aws
