/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agent-runtime/BedrockAgentRuntime_EXPORTS.h>
#include <aws/bedrock-agent-runtime/BedrockAgentRuntimeRequest.h>
#include <aws/bedrock-agent-runtime/model/OptimizePromptHandler.h>
#include <aws/core/utils/event/EventStreamDecoder.h>
#include <aws/bedrock-agent-runtime/model/InputPrompt.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace BedrockAgentRuntime
{
namespace Model
{

  /**
   */
  class OptimizePromptRequest : public BedrockAgentRuntimeRequest
  {
  public:
    AWS_BEDROCKAGENTRUNTIME_API OptimizePromptRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "OptimizePrompt"; }

    inline virtual bool HasEventStreamResponse() const override { return true; }
    AWS_BEDROCKAGENTRUNTIME_API Aws::String SerializePayload() const override;

    /**
     * Underlying Event Stream Decoder.
     */
    inline Aws::Utils::Event::EventStreamDecoder& GetEventStreamDecoder() { return m_decoder; }

    /**
     * Underlying Event Stream Handler which is used to define callback functions.
     */
    inline const OptimizePromptHandler& GetEventStreamHandler() const { return m_handler; }

    /**
     * Underlying Event Stream Handler which is used to define callback functions.
     */
    inline void SetEventStreamHandler(const OptimizePromptHandler& value) { m_handler = value; m_decoder.ResetEventStreamHandler(&m_handler); }

    /**
     * Underlying Event Stream Handler which is used to define callback functions.
     */
    inline OptimizePromptRequest& WithEventStreamHandler(const OptimizePromptHandler& value) { SetEventStreamHandler(value); return *this; }


    ///@{
    /**
     * <p>Contains the prompt to optimize.</p>
     */
    inline const InputPrompt& GetInput() const{ return m_input; }
    inline bool InputHasBeenSet() const { return m_inputHasBeenSet; }
    inline void SetInput(const InputPrompt& value) { m_inputHasBeenSet = true; m_input = value; }
    inline void SetInput(InputPrompt&& value) { m_inputHasBeenSet = true; m_input = std::move(value); }
    inline OptimizePromptRequest& WithInput(const InputPrompt& value) { SetInput(value); return *this;}
    inline OptimizePromptRequest& WithInput(InputPrompt&& value) { SetInput(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique identifier of the model that you want to optimize the prompt
     * for.</p>
     */
    inline const Aws::String& GetTargetModelId() const{ return m_targetModelId; }
    inline bool TargetModelIdHasBeenSet() const { return m_targetModelIdHasBeenSet; }
    inline void SetTargetModelId(const Aws::String& value) { m_targetModelIdHasBeenSet = true; m_targetModelId = value; }
    inline void SetTargetModelId(Aws::String&& value) { m_targetModelIdHasBeenSet = true; m_targetModelId = std::move(value); }
    inline void SetTargetModelId(const char* value) { m_targetModelIdHasBeenSet = true; m_targetModelId.assign(value); }
    inline OptimizePromptRequest& WithTargetModelId(const Aws::String& value) { SetTargetModelId(value); return *this;}
    inline OptimizePromptRequest& WithTargetModelId(Aws::String&& value) { SetTargetModelId(std::move(value)); return *this;}
    inline OptimizePromptRequest& WithTargetModelId(const char* value) { SetTargetModelId(value); return *this;}
    ///@}
  private:

    InputPrompt m_input;
    bool m_inputHasBeenSet = false;

    Aws::String m_targetModelId;
    bool m_targetModelIdHasBeenSet = false;
    OptimizePromptHandler m_handler;
    Aws::Utils::Event::EventStreamDecoder m_decoder;

  };

} // namespace Model
} // namespace BedrockAgentRuntime
} // namespace Aws
