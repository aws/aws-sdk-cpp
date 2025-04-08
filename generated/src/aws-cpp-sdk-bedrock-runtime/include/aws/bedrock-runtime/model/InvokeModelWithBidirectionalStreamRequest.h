/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-runtime/BedrockRuntime_EXPORTS.h>
#include <aws/bedrock-runtime/BedrockRuntimeRequest.h>
#include <aws/bedrock-runtime/model/InvokeModelWithBidirectionalStreamHandler.h>
#include <aws/core/utils/event/EventStreamDecoder.h>
#include <memory>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/bedrock-runtime/model/InvokeModelWithBidirectionalStreamInput.h>
#include <utility>

namespace Aws
{
namespace BedrockRuntime
{
namespace Model
{

  /**
   */
  class InvokeModelWithBidirectionalStreamRequest : public BedrockRuntimeRequest
  {
  public:
    AWS_BEDROCKRUNTIME_API InvokeModelWithBidirectionalStreamRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "InvokeModelWithBidirectionalStream"; }

    inline virtual bool IsEventStreamRequest() const override { return true; }
    inline virtual bool HasEventStreamResponse() const override { return true; }
    // SerializePayload will not be invoked.
    // This request is sent by encoding its data in event-streams which is sent as IOStream via GetBody()
    AWS_BEDROCKRUNTIME_API Aws::String SerializePayload() const override { return {}; }
    AWS_BEDROCKRUNTIME_API std::shared_ptr<Aws::IOStream> GetBody() const override;
    /**
     * Underlying Event Stream Decoder.
     */
    inline Aws::Utils::Event::EventStreamDecoder& GetEventStreamDecoder() { return m_decoder; }

    /**
     * Underlying Event Stream Handler which is used to define callback functions.
     */
    inline InvokeModelWithBidirectionalStreamHandler& GetEventStreamHandler() { return m_handler; }

    /**
     * Underlying Event Stream Handler which is used to define callback functions.
     */
    inline void SetEventStreamHandler(const InvokeModelWithBidirectionalStreamHandler& value) { m_handler = value; m_decoder.ResetEventStreamHandler(&m_handler); }

    /**
     * Underlying Event Stream Handler which is used to define callback functions.
     */
    inline InvokeModelWithBidirectionalStreamRequest& WithEventStreamHandler(const InvokeModelWithBidirectionalStreamHandler& value) { SetEventStreamHandler(value); return *this; }


    ///@{
    /**
     * <p>The model ID or ARN of the model ID to use. Currently, only
     * <code>amazon.nova-sonic-v1:0</code> is supported.</p>
     */
    inline const Aws::String& GetModelId() const { return m_modelId; }
    inline bool ModelIdHasBeenSet() const { return m_modelIdHasBeenSet; }
    template<typename ModelIdT = Aws::String>
    void SetModelId(ModelIdT&& value) { m_modelIdHasBeenSet = true; m_modelId = std::forward<ModelIdT>(value); }
    template<typename ModelIdT = Aws::String>
    InvokeModelWithBidirectionalStreamRequest& WithModelId(ModelIdT&& value) { SetModelId(std::forward<ModelIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The prompt and inference parameters in the format specified in the
     * <code>BidirectionalInputPayloadPart</code> in the header. You must provide the
     * body in JSON format. To see the format and content of the request and response
     * bodies for different models, refer to <a
     * href="https://docs.aws.amazon.com/bedrock/latest/userguide/model-parameters.html">Inference
     * parameters</a>. For more information, see <a
     * href="https://docs.aws.amazon.com/bedrock/latest/userguide/api-methods-run.html">Run
     * inference</a> in the Bedrock User Guide.</p>
     */
    AWS_BEDROCKRUNTIME_API std::shared_ptr<InvokeModelWithBidirectionalStreamInput> GetMemberBody() const  { return m_body; }
    AWS_BEDROCKRUNTIME_API void SetBody(const std::shared_ptr<InvokeModelWithBidirectionalStreamInput>& value) { m_bodyHasBeenSet = true; m_body = value; }
    AWS_BEDROCKRUNTIME_API InvokeModelWithBidirectionalStreamRequest& WithBody(const std::shared_ptr<InvokeModelWithBidirectionalStreamInput>& value) { SetBody(value); return *this;}

    ///@}
  private:

    Aws::String m_modelId;
    bool m_modelIdHasBeenSet = false;

    std::shared_ptr<InvokeModelWithBidirectionalStreamInput> m_body;
    bool m_bodyHasBeenSet = false;
    InvokeModelWithBidirectionalStreamHandler m_handler;
    Aws::Utils::Event::EventStreamDecoder m_decoder{Utils::Event::EventStreamDecoder(&m_handler)};

  };

} // namespace Model
} // namespace BedrockRuntime
} // namespace Aws
