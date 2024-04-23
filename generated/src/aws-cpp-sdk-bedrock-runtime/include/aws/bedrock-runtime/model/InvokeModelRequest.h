/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-runtime/BedrockRuntime_EXPORTS.h>
#include <aws/bedrock-runtime/BedrockRuntimeRequest.h>
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
  class InvokeModelRequest : public StreamingBedrockRuntimeRequest
  {
  public:
    AWS_BEDROCKRUNTIME_API InvokeModelRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "InvokeModel"; }

    AWS_BEDROCKRUNTIME_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


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
    inline InvokeModelRequest& WithAccept(const Aws::String& value) { SetAccept(value); return *this;}

    /**
     * <p>The desired MIME type of the inference body in the response. The default
     * value is <code>application/json</code>.</p>
     */
    inline InvokeModelRequest& WithAccept(Aws::String&& value) { SetAccept(std::move(value)); return *this;}

    /**
     * <p>The desired MIME type of the inference body in the response. The default
     * value is <code>application/json</code>.</p>
     */
    inline InvokeModelRequest& WithAccept(const char* value) { SetAccept(value); return *this;}


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
    inline bool ModelIdHasBeenSet() const { return m_modelIdHasBeenSet; }

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
    inline void SetModelId(const Aws::String& value) { m_modelIdHasBeenSet = true; m_modelId = value; }

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
    inline void SetModelId(Aws::String&& value) { m_modelIdHasBeenSet = true; m_modelId = std::move(value); }

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
    inline void SetModelId(const char* value) { m_modelIdHasBeenSet = true; m_modelId.assign(value); }

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
    inline InvokeModelRequest& WithModelId(const Aws::String& value) { SetModelId(value); return *this;}

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
    inline InvokeModelRequest& WithModelId(Aws::String&& value) { SetModelId(std::move(value)); return *this;}

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
    inline InvokeModelRequest& WithModelId(const char* value) { SetModelId(value); return *this;}


    /**
     * <p>Specifies whether to enable or disable the Bedrock trace. If enabled, you can
     * see the full Bedrock trace.</p>
     */
    inline const Trace& GetTrace() const{ return m_trace; }

    /**
     * <p>Specifies whether to enable or disable the Bedrock trace. If enabled, you can
     * see the full Bedrock trace.</p>
     */
    inline bool TraceHasBeenSet() const { return m_traceHasBeenSet; }

    /**
     * <p>Specifies whether to enable or disable the Bedrock trace. If enabled, you can
     * see the full Bedrock trace.</p>
     */
    inline void SetTrace(const Trace& value) { m_traceHasBeenSet = true; m_trace = value; }

    /**
     * <p>Specifies whether to enable or disable the Bedrock trace. If enabled, you can
     * see the full Bedrock trace.</p>
     */
    inline void SetTrace(Trace&& value) { m_traceHasBeenSet = true; m_trace = std::move(value); }

    /**
     * <p>Specifies whether to enable or disable the Bedrock trace. If enabled, you can
     * see the full Bedrock trace.</p>
     */
    inline InvokeModelRequest& WithTrace(const Trace& value) { SetTrace(value); return *this;}

    /**
     * <p>Specifies whether to enable or disable the Bedrock trace. If enabled, you can
     * see the full Bedrock trace.</p>
     */
    inline InvokeModelRequest& WithTrace(Trace&& value) { SetTrace(std::move(value)); return *this;}


    /**
     * <p>The unique identifier of the guardrail that you want to use. If you don't
     * provide a value, no guardrail is applied to the invocation.</p> <p>An error will
     * be thrown in the following situations.</p> <ul> <li> <p>You don't provide a
     * guardrail identifier but you specify the
     * <code>amazon-bedrock-guardrailConfig</code> field in the request body.</p> </li>
     * <li> <p>You enable the guardrail but the <code>contentType</code> isn't
     * <code>application/json</code>.</p> </li> <li> <p>You provide a guardrail
     * identifier, but <code>guardrailVersion</code> isn't specified.</p> </li> </ul>
     */
    inline const Aws::String& GetGuardrailIdentifier() const{ return m_guardrailIdentifier; }

    /**
     * <p>The unique identifier of the guardrail that you want to use. If you don't
     * provide a value, no guardrail is applied to the invocation.</p> <p>An error will
     * be thrown in the following situations.</p> <ul> <li> <p>You don't provide a
     * guardrail identifier but you specify the
     * <code>amazon-bedrock-guardrailConfig</code> field in the request body.</p> </li>
     * <li> <p>You enable the guardrail but the <code>contentType</code> isn't
     * <code>application/json</code>.</p> </li> <li> <p>You provide a guardrail
     * identifier, but <code>guardrailVersion</code> isn't specified.</p> </li> </ul>
     */
    inline bool GuardrailIdentifierHasBeenSet() const { return m_guardrailIdentifierHasBeenSet; }

    /**
     * <p>The unique identifier of the guardrail that you want to use. If you don't
     * provide a value, no guardrail is applied to the invocation.</p> <p>An error will
     * be thrown in the following situations.</p> <ul> <li> <p>You don't provide a
     * guardrail identifier but you specify the
     * <code>amazon-bedrock-guardrailConfig</code> field in the request body.</p> </li>
     * <li> <p>You enable the guardrail but the <code>contentType</code> isn't
     * <code>application/json</code>.</p> </li> <li> <p>You provide a guardrail
     * identifier, but <code>guardrailVersion</code> isn't specified.</p> </li> </ul>
     */
    inline void SetGuardrailIdentifier(const Aws::String& value) { m_guardrailIdentifierHasBeenSet = true; m_guardrailIdentifier = value; }

    /**
     * <p>The unique identifier of the guardrail that you want to use. If you don't
     * provide a value, no guardrail is applied to the invocation.</p> <p>An error will
     * be thrown in the following situations.</p> <ul> <li> <p>You don't provide a
     * guardrail identifier but you specify the
     * <code>amazon-bedrock-guardrailConfig</code> field in the request body.</p> </li>
     * <li> <p>You enable the guardrail but the <code>contentType</code> isn't
     * <code>application/json</code>.</p> </li> <li> <p>You provide a guardrail
     * identifier, but <code>guardrailVersion</code> isn't specified.</p> </li> </ul>
     */
    inline void SetGuardrailIdentifier(Aws::String&& value) { m_guardrailIdentifierHasBeenSet = true; m_guardrailIdentifier = std::move(value); }

    /**
     * <p>The unique identifier of the guardrail that you want to use. If you don't
     * provide a value, no guardrail is applied to the invocation.</p> <p>An error will
     * be thrown in the following situations.</p> <ul> <li> <p>You don't provide a
     * guardrail identifier but you specify the
     * <code>amazon-bedrock-guardrailConfig</code> field in the request body.</p> </li>
     * <li> <p>You enable the guardrail but the <code>contentType</code> isn't
     * <code>application/json</code>.</p> </li> <li> <p>You provide a guardrail
     * identifier, but <code>guardrailVersion</code> isn't specified.</p> </li> </ul>
     */
    inline void SetGuardrailIdentifier(const char* value) { m_guardrailIdentifierHasBeenSet = true; m_guardrailIdentifier.assign(value); }

    /**
     * <p>The unique identifier of the guardrail that you want to use. If you don't
     * provide a value, no guardrail is applied to the invocation.</p> <p>An error will
     * be thrown in the following situations.</p> <ul> <li> <p>You don't provide a
     * guardrail identifier but you specify the
     * <code>amazon-bedrock-guardrailConfig</code> field in the request body.</p> </li>
     * <li> <p>You enable the guardrail but the <code>contentType</code> isn't
     * <code>application/json</code>.</p> </li> <li> <p>You provide a guardrail
     * identifier, but <code>guardrailVersion</code> isn't specified.</p> </li> </ul>
     */
    inline InvokeModelRequest& WithGuardrailIdentifier(const Aws::String& value) { SetGuardrailIdentifier(value); return *this;}

    /**
     * <p>The unique identifier of the guardrail that you want to use. If you don't
     * provide a value, no guardrail is applied to the invocation.</p> <p>An error will
     * be thrown in the following situations.</p> <ul> <li> <p>You don't provide a
     * guardrail identifier but you specify the
     * <code>amazon-bedrock-guardrailConfig</code> field in the request body.</p> </li>
     * <li> <p>You enable the guardrail but the <code>contentType</code> isn't
     * <code>application/json</code>.</p> </li> <li> <p>You provide a guardrail
     * identifier, but <code>guardrailVersion</code> isn't specified.</p> </li> </ul>
     */
    inline InvokeModelRequest& WithGuardrailIdentifier(Aws::String&& value) { SetGuardrailIdentifier(std::move(value)); return *this;}

    /**
     * <p>The unique identifier of the guardrail that you want to use. If you don't
     * provide a value, no guardrail is applied to the invocation.</p> <p>An error will
     * be thrown in the following situations.</p> <ul> <li> <p>You don't provide a
     * guardrail identifier but you specify the
     * <code>amazon-bedrock-guardrailConfig</code> field in the request body.</p> </li>
     * <li> <p>You enable the guardrail but the <code>contentType</code> isn't
     * <code>application/json</code>.</p> </li> <li> <p>You provide a guardrail
     * identifier, but <code>guardrailVersion</code> isn't specified.</p> </li> </ul>
     */
    inline InvokeModelRequest& WithGuardrailIdentifier(const char* value) { SetGuardrailIdentifier(value); return *this;}


    /**
     * <p>The version number for the guardrail. The value can also be
     * <code>DRAFT</code>.</p>
     */
    inline const Aws::String& GetGuardrailVersion() const{ return m_guardrailVersion; }

    /**
     * <p>The version number for the guardrail. The value can also be
     * <code>DRAFT</code>.</p>
     */
    inline bool GuardrailVersionHasBeenSet() const { return m_guardrailVersionHasBeenSet; }

    /**
     * <p>The version number for the guardrail. The value can also be
     * <code>DRAFT</code>.</p>
     */
    inline void SetGuardrailVersion(const Aws::String& value) { m_guardrailVersionHasBeenSet = true; m_guardrailVersion = value; }

    /**
     * <p>The version number for the guardrail. The value can also be
     * <code>DRAFT</code>.</p>
     */
    inline void SetGuardrailVersion(Aws::String&& value) { m_guardrailVersionHasBeenSet = true; m_guardrailVersion = std::move(value); }

    /**
     * <p>The version number for the guardrail. The value can also be
     * <code>DRAFT</code>.</p>
     */
    inline void SetGuardrailVersion(const char* value) { m_guardrailVersionHasBeenSet = true; m_guardrailVersion.assign(value); }

    /**
     * <p>The version number for the guardrail. The value can also be
     * <code>DRAFT</code>.</p>
     */
    inline InvokeModelRequest& WithGuardrailVersion(const Aws::String& value) { SetGuardrailVersion(value); return *this;}

    /**
     * <p>The version number for the guardrail. The value can also be
     * <code>DRAFT</code>.</p>
     */
    inline InvokeModelRequest& WithGuardrailVersion(Aws::String&& value) { SetGuardrailVersion(std::move(value)); return *this;}

    /**
     * <p>The version number for the guardrail. The value can also be
     * <code>DRAFT</code>.</p>
     */
    inline InvokeModelRequest& WithGuardrailVersion(const char* value) { SetGuardrailVersion(value); return *this;}

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
  };

} // namespace Model
} // namespace BedrockRuntime
} // namespace Aws
