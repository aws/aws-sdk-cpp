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
#include <aws/bedrock-runtime/model/PerformanceConfigLatency.h>
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
    AWS_BEDROCKRUNTIME_API InvokeModelRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "InvokeModel"; }

    AWS_BEDROCKRUNTIME_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The desired MIME type of the inference body in the response. The default
     * value is <code>application/json</code>.</p>
     */
    inline const Aws::String& GetAccept() const { return m_accept; }
    inline bool AcceptHasBeenSet() const { return m_acceptHasBeenSet; }
    template<typename AcceptT = Aws::String>
    void SetAccept(AcceptT&& value) { m_acceptHasBeenSet = true; m_accept = std::forward<AcceptT>(value); }
    template<typename AcceptT = Aws::String>
    InvokeModelRequest& WithAccept(AcceptT&& value) { SetAccept(std::forward<AcceptT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique identifier of the model to invoke to run inference.</p> <p>The
     * <code>modelId</code> to provide depends on the type of model or throughput that
     * you use:</p> <ul> <li> <p>If you use a base model, specify the model ID or its
     * ARN. For a list of model IDs for base models, see <a
     * href="https://docs.aws.amazon.com/bedrock/latest/userguide/model-ids.html#model-ids-arns">Amazon
     * Bedrock base model IDs (on-demand throughput)</a> in the Amazon Bedrock User
     * Guide.</p> </li> <li> <p>If you use an inference profile, specify the inference
     * profile ID or its ARN. For a list of inference profile IDs, see <a
     * href="https://docs.aws.amazon.com/bedrock/latest/userguide/cross-region-inference-support.html">Supported
     * Regions and models for cross-region inference</a> in the Amazon Bedrock User
     * Guide.</p> </li> <li> <p>If you use a provisioned model, specify the ARN of the
     * Provisioned Throughput. For more information, see <a
     * href="https://docs.aws.amazon.com/bedrock/latest/userguide/prov-thru-use.html">Run
     * inference using a Provisioned Throughput</a> in the Amazon Bedrock User
     * Guide.</p> </li> <li> <p>If you use a custom model, specify the ARN of the
     * custom model deployment (for on-demand inference) or the ARN of your provisioned
     * model (for Provisioned Throughput). For more information, see <a
     * href="https://docs.aws.amazon.com/bedrock/latest/userguide/model-customization-use.html">Use
     * a custom model in Amazon Bedrock</a> in the Amazon Bedrock User Guide.</p> </li>
     * <li> <p>If you use an <a
     * href="https://docs.aws.amazon.com/bedrock/latest/userguide/model-customization-import-model.html">imported
     * model</a>, specify the ARN of the imported model. You can get the model ARN from
     * a successful call to <a
     * href="https://docs.aws.amazon.com/bedrock/latest/APIReference/API_CreateModelImportJob.html">CreateModelImportJob</a>
     * or from the Imported models page in the Amazon Bedrock console.</p> </li> </ul>
     */
    inline const Aws::String& GetModelId() const { return m_modelId; }
    inline bool ModelIdHasBeenSet() const { return m_modelIdHasBeenSet; }
    template<typename ModelIdT = Aws::String>
    void SetModelId(ModelIdT&& value) { m_modelIdHasBeenSet = true; m_modelId = std::forward<ModelIdT>(value); }
    template<typename ModelIdT = Aws::String>
    InvokeModelRequest& WithModelId(ModelIdT&& value) { SetModelId(std::forward<ModelIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies whether to enable or disable the Bedrock trace. If enabled, you can
     * see the full Bedrock trace.</p>
     */
    inline Trace GetTrace() const { return m_trace; }
    inline bool TraceHasBeenSet() const { return m_traceHasBeenSet; }
    inline void SetTrace(Trace value) { m_traceHasBeenSet = true; m_trace = value; }
    inline InvokeModelRequest& WithTrace(Trace value) { SetTrace(value); return *this;}
    ///@}

    ///@{
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
    inline const Aws::String& GetGuardrailIdentifier() const { return m_guardrailIdentifier; }
    inline bool GuardrailIdentifierHasBeenSet() const { return m_guardrailIdentifierHasBeenSet; }
    template<typename GuardrailIdentifierT = Aws::String>
    void SetGuardrailIdentifier(GuardrailIdentifierT&& value) { m_guardrailIdentifierHasBeenSet = true; m_guardrailIdentifier = std::forward<GuardrailIdentifierT>(value); }
    template<typename GuardrailIdentifierT = Aws::String>
    InvokeModelRequest& WithGuardrailIdentifier(GuardrailIdentifierT&& value) { SetGuardrailIdentifier(std::forward<GuardrailIdentifierT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The version number for the guardrail. The value can also be
     * <code>DRAFT</code>.</p>
     */
    inline const Aws::String& GetGuardrailVersion() const { return m_guardrailVersion; }
    inline bool GuardrailVersionHasBeenSet() const { return m_guardrailVersionHasBeenSet; }
    template<typename GuardrailVersionT = Aws::String>
    void SetGuardrailVersion(GuardrailVersionT&& value) { m_guardrailVersionHasBeenSet = true; m_guardrailVersion = std::forward<GuardrailVersionT>(value); }
    template<typename GuardrailVersionT = Aws::String>
    InvokeModelRequest& WithGuardrailVersion(GuardrailVersionT&& value) { SetGuardrailVersion(std::forward<GuardrailVersionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Model performance settings for the request.</p>
     */
    inline PerformanceConfigLatency GetPerformanceConfigLatency() const { return m_performanceConfigLatency; }
    inline bool PerformanceConfigLatencyHasBeenSet() const { return m_performanceConfigLatencyHasBeenSet; }
    inline void SetPerformanceConfigLatency(PerformanceConfigLatency value) { m_performanceConfigLatencyHasBeenSet = true; m_performanceConfigLatency = value; }
    inline InvokeModelRequest& WithPerformanceConfigLatency(PerformanceConfigLatency value) { SetPerformanceConfigLatency(value); return *this;}
    ///@}
  private:


    Aws::String m_accept;
    bool m_acceptHasBeenSet = false;

    Aws::String m_modelId;
    bool m_modelIdHasBeenSet = false;

    Trace m_trace{Trace::NOT_SET};
    bool m_traceHasBeenSet = false;

    Aws::String m_guardrailIdentifier;
    bool m_guardrailIdentifierHasBeenSet = false;

    Aws::String m_guardrailVersion;
    bool m_guardrailVersionHasBeenSet = false;

    PerformanceConfigLatency m_performanceConfigLatency{PerformanceConfigLatency::NOT_SET};
    bool m_performanceConfigLatencyHasBeenSet = false;
  };

} // namespace Model
} // namespace BedrockRuntime
} // namespace Aws
