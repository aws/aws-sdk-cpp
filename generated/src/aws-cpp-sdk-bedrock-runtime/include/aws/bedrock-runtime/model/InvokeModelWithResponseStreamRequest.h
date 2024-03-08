/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-runtime/BedrockRuntime_EXPORTS.h>
#include <aws/bedrock-runtime/BedrockRuntimeRequest.h>
#include <aws/bedrock-runtime/model/InvokeModelWithResponseStreamHandler.h>
#include <aws/core/utils/event/EventStreamDecoder.h>
#include <aws/core/utils/Array.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace BedrockRuntime
{
namespace Model
{

  /**
   */
  class InvokeModelWithResponseStreamRequest : public StreamingBedrockRuntimeRequest
  {
  public:
    AWS_BEDROCKRUNTIME_API InvokeModelWithResponseStreamRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "InvokeModelWithResponseStream"; }

    AWS_BEDROCKRUNTIME_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

    /**
     * Underlying Event Stream Decoder.
     */
    inline Aws::Utils::Event::EventStreamDecoder& GetEventStreamDecoder() { return m_decoder; }

    /**
     * Underlying Event Stream Handler which is used to define callback functions.
     */
    inline const InvokeModelWithResponseStreamHandler& GetEventStreamHandler() const { return m_handler; }

    /**
     * Underlying Event Stream Handler which is used to define callback functions.
     */
    inline void SetEventStreamHandler(const InvokeModelWithResponseStreamHandler& value) { m_handler = value; m_decoder.ResetEventStreamHandler(&m_handler); }

    /**
     * Underlying Event Stream Handler which is used to define callback functions.
     */
    inline InvokeModelWithResponseStreamRequest& WithEventStreamHandler(const InvokeModelWithResponseStreamHandler& value) { SetEventStreamHandler(value); return *this; }


    /**
     * <p>The desired MIME type of the inference body in the response. The default
     * value is <code>application/json</code>.</p>
     */
    inline const Aws::String& GetAccept() const{ return m_accept; }

    /**
     * <p>The desired MIME type of the inference body in the response. The default
     * value is <code>application/json</code>.</p>
     */
    inline bool AcceptHasBeenSet() const { return m_acceptHasBeenSet; }

    /**
     * <p>The desired MIME type of the inference body in the response. The default
     * value is <code>application/json</code>.</p>
     */
    inline void SetAccept(const Aws::String& value) { m_acceptHasBeenSet = true; m_accept = value; }

    /**
     * <p>The desired MIME type of the inference body in the response. The default
     * value is <code>application/json</code>.</p>
     */
    inline void SetAccept(Aws::String&& value) { m_acceptHasBeenSet = true; m_accept = std::move(value); }

    /**
     * <p>The desired MIME type of the inference body in the response. The default
     * value is <code>application/json</code>.</p>
     */
    inline void SetAccept(const char* value) { m_acceptHasBeenSet = true; m_accept.assign(value); }

    /**
     * <p>The desired MIME type of the inference body in the response. The default
     * value is <code>application/json</code>.</p>
     */
    inline InvokeModelWithResponseStreamRequest& WithAccept(const Aws::String& value) { SetAccept(value); return *this;}

    /**
     * <p>The desired MIME type of the inference body in the response. The default
     * value is <code>application/json</code>.</p>
     */
    inline InvokeModelWithResponseStreamRequest& WithAccept(Aws::String&& value) { SetAccept(std::move(value)); return *this;}

    /**
     * <p>The desired MIME type of the inference body in the response. The default
     * value is <code>application/json</code>.</p>
     */
    inline InvokeModelWithResponseStreamRequest& WithAccept(const char* value) { SetAccept(value); return *this;}


    /**
     * <p>Id of the model to invoke using the streaming request.</p>
     */
    inline const Aws::String& GetModelId() const{ return m_modelId; }

    /**
     * <p>Id of the model to invoke using the streaming request.</p>
     */
    inline bool ModelIdHasBeenSet() const { return m_modelIdHasBeenSet; }

    /**
     * <p>Id of the model to invoke using the streaming request.</p>
     */
    inline void SetModelId(const Aws::String& value) { m_modelIdHasBeenSet = true; m_modelId = value; }

    /**
     * <p>Id of the model to invoke using the streaming request.</p>
     */
    inline void SetModelId(Aws::String&& value) { m_modelIdHasBeenSet = true; m_modelId = std::move(value); }

    /**
     * <p>Id of the model to invoke using the streaming request.</p>
     */
    inline void SetModelId(const char* value) { m_modelIdHasBeenSet = true; m_modelId.assign(value); }

    /**
     * <p>Id of the model to invoke using the streaming request.</p>
     */
    inline InvokeModelWithResponseStreamRequest& WithModelId(const Aws::String& value) { SetModelId(value); return *this;}

    /**
     * <p>Id of the model to invoke using the streaming request.</p>
     */
    inline InvokeModelWithResponseStreamRequest& WithModelId(Aws::String&& value) { SetModelId(std::move(value)); return *this;}

    /**
     * <p>Id of the model to invoke using the streaming request.</p>
     */
    inline InvokeModelWithResponseStreamRequest& WithModelId(const char* value) { SetModelId(value); return *this;}

  private:


    Aws::String m_accept;
    bool m_acceptHasBeenSet = false;

    Aws::String m_modelId;
    bool m_modelIdHasBeenSet = false;
    InvokeModelWithResponseStreamHandler m_handler;
    Aws::Utils::Event::EventStreamDecoder m_decoder;

  };

} // namespace Model
} // namespace BedrockRuntime
} // namespace Aws
