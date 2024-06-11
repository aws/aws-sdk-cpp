﻿/**
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
#include <aws/bedrock-runtime/model/Trace.h>
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


    ///@{
    /**
     * <p>The desired MIME type of the inference body in the response. The default
     * value is <code>application/json</code>.</p>
     */
    inline const Aws::String& GetAccept() const{ return m_accept; }
    inline bool AcceptHasBeenSet() const { return m_acceptHasBeenSet; }
    inline void SetAccept(const Aws::String& value) { m_acceptHasBeenSet = true; m_accept = value; }
    inline void SetAccept(Aws::String&& value) { m_acceptHasBeenSet = true; m_accept = std::move(value); }
    inline void SetAccept(const char* value) { m_acceptHasBeenSet = true; m_accept.assign(value); }
    inline InvokeModelWithResponseStreamRequest& WithAccept(const Aws::String& value) { SetAccept(value); return *this;}
    inline InvokeModelWithResponseStreamRequest& WithAccept(Aws::String&& value) { SetAccept(std::move(value)); return *this;}
    inline InvokeModelWithResponseStreamRequest& WithAccept(const char* value) { SetAccept(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique identifier of the model to invoke to run inference.</p> <p>The
     * <code>modelId</code> to provide depends on the type of model that you use:</p>
     * <ul> <li> <p>If you use a base model, specify the model ID or its ARN. For a
     * list of model IDs for base models, see <a
     * href="https://docs.aws.amazon.com/bedrock/latest/userguide/model-ids.html#model-ids-arns">Amazon
     * Bedrock base model IDs (on-demand throughput)</a> in the Amazon Bedrock User
     * Guide.</p> </li> <li> <p>If you use a provisioned model, specify the ARN of the
     * Provisioned Throughput. For more information, see <a
     * href="https://docs.aws.amazon.com/bedrock/latest/userguide/prov-thru-use.html">Run
     * inference using a Provisioned Throughput</a> in the Amazon Bedrock User
     * Guide.</p> </li> <li> <p>If you use a custom model, first purchase Provisioned
     * Throughput for it. Then specify the ARN of the resulting provisioned model. For
     * more information, see <a
     * href="https://docs.aws.amazon.com/bedrock/latest/userguide/model-customization-use.html">Use
     * a custom model in Amazon Bedrock</a> in the Amazon Bedrock User Guide.</p> </li>
     * </ul>
     */
    inline const Aws::String& GetModelId() const{ return m_modelId; }
    inline bool ModelIdHasBeenSet() const { return m_modelIdHasBeenSet; }
    inline void SetModelId(const Aws::String& value) { m_modelIdHasBeenSet = true; m_modelId = value; }
    inline void SetModelId(Aws::String&& value) { m_modelIdHasBeenSet = true; m_modelId = std::move(value); }
    inline void SetModelId(const char* value) { m_modelIdHasBeenSet = true; m_modelId.assign(value); }
    inline InvokeModelWithResponseStreamRequest& WithModelId(const Aws::String& value) { SetModelId(value); return *this;}
    inline InvokeModelWithResponseStreamRequest& WithModelId(Aws::String&& value) { SetModelId(std::move(value)); return *this;}
    inline InvokeModelWithResponseStreamRequest& WithModelId(const char* value) { SetModelId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies whether to enable or disable the Bedrock trace. If enabled, you can
     * see the full Bedrock trace.</p>
     */
    inline const Trace& GetTrace() const{ return m_trace; }
    inline bool TraceHasBeenSet() const { return m_traceHasBeenSet; }
    inline void SetTrace(const Trace& value) { m_traceHasBeenSet = true; m_trace = value; }
    inline void SetTrace(Trace&& value) { m_traceHasBeenSet = true; m_trace = std::move(value); }
    inline InvokeModelWithResponseStreamRequest& WithTrace(const Trace& value) { SetTrace(value); return *this;}
    inline InvokeModelWithResponseStreamRequest& WithTrace(Trace&& value) { SetTrace(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique identifier of the guardrail that you want to use. If you don't
     * provide a value, no guardrail is applied to the invocation.</p> <p>An error is
     * thrown in the following situations.</p> <ul> <li> <p>You don't provide a
     * guardrail identifier but you specify the
     * <code>amazon-bedrock-guardrailConfig</code> field in the request body.</p> </li>
     * <li> <p>You enable the guardrail but the <code>contentType</code> isn't
     * <code>application/json</code>.</p> </li> <li> <p>You provide a guardrail
     * identifier, but <code>guardrailVersion</code> isn't specified.</p> </li> </ul>
     */
    inline const Aws::String& GetGuardrailIdentifier() const{ return m_guardrailIdentifier; }
    inline bool GuardrailIdentifierHasBeenSet() const { return m_guardrailIdentifierHasBeenSet; }
    inline void SetGuardrailIdentifier(const Aws::String& value) { m_guardrailIdentifierHasBeenSet = true; m_guardrailIdentifier = value; }
    inline void SetGuardrailIdentifier(Aws::String&& value) { m_guardrailIdentifierHasBeenSet = true; m_guardrailIdentifier = std::move(value); }
    inline void SetGuardrailIdentifier(const char* value) { m_guardrailIdentifierHasBeenSet = true; m_guardrailIdentifier.assign(value); }
    inline InvokeModelWithResponseStreamRequest& WithGuardrailIdentifier(const Aws::String& value) { SetGuardrailIdentifier(value); return *this;}
    inline InvokeModelWithResponseStreamRequest& WithGuardrailIdentifier(Aws::String&& value) { SetGuardrailIdentifier(std::move(value)); return *this;}
    inline InvokeModelWithResponseStreamRequest& WithGuardrailIdentifier(const char* value) { SetGuardrailIdentifier(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The version number for the guardrail. The value can also be
     * <code>DRAFT</code>.</p>
     */
    inline const Aws::String& GetGuardrailVersion() const{ return m_guardrailVersion; }
    inline bool GuardrailVersionHasBeenSet() const { return m_guardrailVersionHasBeenSet; }
    inline void SetGuardrailVersion(const Aws::String& value) { m_guardrailVersionHasBeenSet = true; m_guardrailVersion = value; }
    inline void SetGuardrailVersion(Aws::String&& value) { m_guardrailVersionHasBeenSet = true; m_guardrailVersion = std::move(value); }
    inline void SetGuardrailVersion(const char* value) { m_guardrailVersionHasBeenSet = true; m_guardrailVersion.assign(value); }
    inline InvokeModelWithResponseStreamRequest& WithGuardrailVersion(const Aws::String& value) { SetGuardrailVersion(value); return *this;}
    inline InvokeModelWithResponseStreamRequest& WithGuardrailVersion(Aws::String&& value) { SetGuardrailVersion(std::move(value)); return *this;}
    inline InvokeModelWithResponseStreamRequest& WithGuardrailVersion(const char* value) { SetGuardrailVersion(value); return *this;}
    ///@}
  private:


    Aws::String m_accept;
    bool m_acceptHasBeenSet = false;

    Aws::String m_modelId;
    bool m_modelIdHasBeenSet = false;

    Trace m_trace;
    bool m_traceHasBeenSet = false;

    Aws::String m_guardrailIdentifier;
    bool m_guardrailIdentifierHasBeenSet = false;

    Aws::String m_guardrailVersion;
    bool m_guardrailVersionHasBeenSet = false;
    InvokeModelWithResponseStreamHandler m_handler;
    Aws::Utils::Event::EventStreamDecoder m_decoder;

  };

} // namespace Model
} // namespace BedrockRuntime
} // namespace Aws
