/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-runtime/BedrockRuntime_EXPORTS.h>
#include <aws/bedrock-runtime/BedrockRuntimeRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/bedrock-runtime/model/InferenceConfiguration.h>
#include <aws/bedrock-runtime/model/ToolConfiguration.h>
#include <aws/bedrock-runtime/model/GuardrailConfiguration.h>
#include <aws/core/utils/Document.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/bedrock-runtime/model/PerformanceConfiguration.h>
#include <aws/bedrock-runtime/model/Message.h>
#include <aws/bedrock-runtime/model/SystemContentBlock.h>
#include <aws/bedrock-runtime/model/PromptVariableValues.h>
#include <utility>

namespace Aws
{
namespace BedrockRuntime
{
namespace Model
{

  /**
   */
  class ConverseRequest : public BedrockRuntimeRequest
  {
  public:
    AWS_BEDROCKRUNTIME_API ConverseRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "Converse"; }

    AWS_BEDROCKRUNTIME_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>Specifies the model or throughput with which to run inference, or the prompt
     * resource to use in inference. The value depends on the resource that you
     * use:</p> <ul> <li> <p>If you use a base model, specify the model ID or its ARN.
     * For a list of model IDs for base models, see <a
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
     * Guide.</p> </li> <li> <p>If you use a custom model, first purchase Provisioned
     * Throughput for it. Then specify the ARN of the resulting provisioned model. For
     * more information, see <a
     * href="https://docs.aws.amazon.com/bedrock/latest/userguide/model-customization-use.html">Use
     * a custom model in Amazon Bedrock</a> in the Amazon Bedrock User Guide.</p> </li>
     * <li> <p>To include a prompt that was defined in <a
     * href="https://docs.aws.amazon.com/bedrock/latest/userguide/prompt-management.html">Prompt
     * management</a>, specify the ARN of the prompt version to use.</p> </li> </ul>
     * <p>The Converse API doesn't support <a
     * href="https://docs.aws.amazon.com/bedrock/latest/userguide/model-customization-import-model.html">imported
     * models</a>.</p>
     */
    inline const Aws::String& GetModelId() const { return m_modelId; }
    inline bool ModelIdHasBeenSet() const { return m_modelIdHasBeenSet; }
    template<typename ModelIdT = Aws::String>
    void SetModelId(ModelIdT&& value) { m_modelIdHasBeenSet = true; m_modelId = std::forward<ModelIdT>(value); }
    template<typename ModelIdT = Aws::String>
    ConverseRequest& WithModelId(ModelIdT&& value) { SetModelId(std::forward<ModelIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The messages that you want to send to the model.</p>
     */
    inline const Aws::Vector<Message>& GetMessages() const { return m_messages; }
    inline bool MessagesHasBeenSet() const { return m_messagesHasBeenSet; }
    template<typename MessagesT = Aws::Vector<Message>>
    void SetMessages(MessagesT&& value) { m_messagesHasBeenSet = true; m_messages = std::forward<MessagesT>(value); }
    template<typename MessagesT = Aws::Vector<Message>>
    ConverseRequest& WithMessages(MessagesT&& value) { SetMessages(std::forward<MessagesT>(value)); return *this;}
    template<typename MessagesT = Message>
    ConverseRequest& AddMessages(MessagesT&& value) { m_messagesHasBeenSet = true; m_messages.emplace_back(std::forward<MessagesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A prompt that provides instructions or context to the model about the task it
     * should perform, or the persona it should adopt during the conversation.</p>
     */
    inline const Aws::Vector<SystemContentBlock>& GetSystem() const { return m_system; }
    inline bool SystemHasBeenSet() const { return m_systemHasBeenSet; }
    template<typename SystemT = Aws::Vector<SystemContentBlock>>
    void SetSystem(SystemT&& value) { m_systemHasBeenSet = true; m_system = std::forward<SystemT>(value); }
    template<typename SystemT = Aws::Vector<SystemContentBlock>>
    ConverseRequest& WithSystem(SystemT&& value) { SetSystem(std::forward<SystemT>(value)); return *this;}
    template<typename SystemT = SystemContentBlock>
    ConverseRequest& AddSystem(SystemT&& value) { m_systemHasBeenSet = true; m_system.emplace_back(std::forward<SystemT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Inference parameters to pass to the model. <code>Converse</code> and
     * <code>ConverseStream</code> support a base set of inference parameters. If you
     * need to pass additional parameters that the model supports, use the
     * <code>additionalModelRequestFields</code> request field.</p>
     */
    inline const InferenceConfiguration& GetInferenceConfig() const { return m_inferenceConfig; }
    inline bool InferenceConfigHasBeenSet() const { return m_inferenceConfigHasBeenSet; }
    template<typename InferenceConfigT = InferenceConfiguration>
    void SetInferenceConfig(InferenceConfigT&& value) { m_inferenceConfigHasBeenSet = true; m_inferenceConfig = std::forward<InferenceConfigT>(value); }
    template<typename InferenceConfigT = InferenceConfiguration>
    ConverseRequest& WithInferenceConfig(InferenceConfigT&& value) { SetInferenceConfig(std::forward<InferenceConfigT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Configuration information for the tools that the model can use when
     * generating a response. </p> <p>For information about models that support tool
     * use, see <a
     * href="https://docs.aws.amazon.com/bedrock/latest/userguide/conversation-inference.html#conversation-inference-supported-models-features">Supported
     * models and model features</a>.</p>
     */
    inline const ToolConfiguration& GetToolConfig() const { return m_toolConfig; }
    inline bool ToolConfigHasBeenSet() const { return m_toolConfigHasBeenSet; }
    template<typename ToolConfigT = ToolConfiguration>
    void SetToolConfig(ToolConfigT&& value) { m_toolConfigHasBeenSet = true; m_toolConfig = std::forward<ToolConfigT>(value); }
    template<typename ToolConfigT = ToolConfiguration>
    ConverseRequest& WithToolConfig(ToolConfigT&& value) { SetToolConfig(std::forward<ToolConfigT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Configuration information for a guardrail that you want to use in the
     * request. If you include <code>guardContent</code> blocks in the
     * <code>content</code> field in the <code>messages</code> field, the guardrail
     * operates only on those messages. If you include no <code>guardContent</code>
     * blocks, the guardrail operates on all messages in the request body and in any
     * included prompt resource.</p>
     */
    inline const GuardrailConfiguration& GetGuardrailConfig() const { return m_guardrailConfig; }
    inline bool GuardrailConfigHasBeenSet() const { return m_guardrailConfigHasBeenSet; }
    template<typename GuardrailConfigT = GuardrailConfiguration>
    void SetGuardrailConfig(GuardrailConfigT&& value) { m_guardrailConfigHasBeenSet = true; m_guardrailConfig = std::forward<GuardrailConfigT>(value); }
    template<typename GuardrailConfigT = GuardrailConfiguration>
    ConverseRequest& WithGuardrailConfig(GuardrailConfigT&& value) { SetGuardrailConfig(std::forward<GuardrailConfigT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Additional inference parameters that the model supports, beyond the base set
     * of inference parameters that <code>Converse</code> and
     * <code>ConverseStream</code> support in the <code>inferenceConfig</code> field.
     * For more information, see <a
     * href="https://docs.aws.amazon.com/bedrock/latest/userguide/model-parameters.html">Model
     * parameters</a>.</p>
     */
    inline Aws::Utils::DocumentView GetAdditionalModelRequestFields() const { return m_additionalModelRequestFields; }
    inline bool AdditionalModelRequestFieldsHasBeenSet() const { return m_additionalModelRequestFieldsHasBeenSet; }
    template<typename AdditionalModelRequestFieldsT = Aws::Utils::Document>
    void SetAdditionalModelRequestFields(AdditionalModelRequestFieldsT&& value) { m_additionalModelRequestFieldsHasBeenSet = true; m_additionalModelRequestFields = std::forward<AdditionalModelRequestFieldsT>(value); }
    template<typename AdditionalModelRequestFieldsT = Aws::Utils::Document>
    ConverseRequest& WithAdditionalModelRequestFields(AdditionalModelRequestFieldsT&& value) { SetAdditionalModelRequestFields(std::forward<AdditionalModelRequestFieldsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Contains a map of variables in a prompt from Prompt management to objects
     * containing the values to fill in for them when running model invocation. This
     * field is ignored if you don't specify a prompt resource in the
     * <code>modelId</code> field.</p>
     */
    inline const Aws::Map<Aws::String, PromptVariableValues>& GetPromptVariables() const { return m_promptVariables; }
    inline bool PromptVariablesHasBeenSet() const { return m_promptVariablesHasBeenSet; }
    template<typename PromptVariablesT = Aws::Map<Aws::String, PromptVariableValues>>
    void SetPromptVariables(PromptVariablesT&& value) { m_promptVariablesHasBeenSet = true; m_promptVariables = std::forward<PromptVariablesT>(value); }
    template<typename PromptVariablesT = Aws::Map<Aws::String, PromptVariableValues>>
    ConverseRequest& WithPromptVariables(PromptVariablesT&& value) { SetPromptVariables(std::forward<PromptVariablesT>(value)); return *this;}
    template<typename PromptVariablesKeyT = Aws::String, typename PromptVariablesValueT = PromptVariableValues>
    ConverseRequest& AddPromptVariables(PromptVariablesKeyT&& key, PromptVariablesValueT&& value) {
      m_promptVariablesHasBeenSet = true; m_promptVariables.emplace(std::forward<PromptVariablesKeyT>(key), std::forward<PromptVariablesValueT>(value)); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>Additional model parameters field paths to return in the response.
     * <code>Converse</code> and <code>ConverseStream</code> return the requested
     * fields as a JSON Pointer object in the
     * <code>additionalModelResponseFields</code> field. The following is example JSON
     * for <code>additionalModelResponseFieldPaths</code>.</p> <p> <code>[
     * "/stop_sequence" ]</code> </p> <p>For information about the JSON Pointer syntax,
     * see the <a href="https://datatracker.ietf.org/doc/html/rfc6901">Internet
     * Engineering Task Force (IETF)</a> documentation.</p> <p> <code>Converse</code>
     * and <code>ConverseStream</code> reject an empty JSON Pointer or incorrectly
     * structured JSON Pointer with a <code>400</code> error code. if the JSON Pointer
     * is valid, but the requested field is not in the model response, it is ignored by
     * <code>Converse</code>.</p>
     */
    inline const Aws::Vector<Aws::String>& GetAdditionalModelResponseFieldPaths() const { return m_additionalModelResponseFieldPaths; }
    inline bool AdditionalModelResponseFieldPathsHasBeenSet() const { return m_additionalModelResponseFieldPathsHasBeenSet; }
    template<typename AdditionalModelResponseFieldPathsT = Aws::Vector<Aws::String>>
    void SetAdditionalModelResponseFieldPaths(AdditionalModelResponseFieldPathsT&& value) { m_additionalModelResponseFieldPathsHasBeenSet = true; m_additionalModelResponseFieldPaths = std::forward<AdditionalModelResponseFieldPathsT>(value); }
    template<typename AdditionalModelResponseFieldPathsT = Aws::Vector<Aws::String>>
    ConverseRequest& WithAdditionalModelResponseFieldPaths(AdditionalModelResponseFieldPathsT&& value) { SetAdditionalModelResponseFieldPaths(std::forward<AdditionalModelResponseFieldPathsT>(value)); return *this;}
    template<typename AdditionalModelResponseFieldPathsT = Aws::String>
    ConverseRequest& AddAdditionalModelResponseFieldPaths(AdditionalModelResponseFieldPathsT&& value) { m_additionalModelResponseFieldPathsHasBeenSet = true; m_additionalModelResponseFieldPaths.emplace_back(std::forward<AdditionalModelResponseFieldPathsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Key-value pairs that you can use to filter invocation logs.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetRequestMetadata() const { return m_requestMetadata; }
    inline bool RequestMetadataHasBeenSet() const { return m_requestMetadataHasBeenSet; }
    template<typename RequestMetadataT = Aws::Map<Aws::String, Aws::String>>
    void SetRequestMetadata(RequestMetadataT&& value) { m_requestMetadataHasBeenSet = true; m_requestMetadata = std::forward<RequestMetadataT>(value); }
    template<typename RequestMetadataT = Aws::Map<Aws::String, Aws::String>>
    ConverseRequest& WithRequestMetadata(RequestMetadataT&& value) { SetRequestMetadata(std::forward<RequestMetadataT>(value)); return *this;}
    template<typename RequestMetadataKeyT = Aws::String, typename RequestMetadataValueT = Aws::String>
    ConverseRequest& AddRequestMetadata(RequestMetadataKeyT&& key, RequestMetadataValueT&& value) {
      m_requestMetadataHasBeenSet = true; m_requestMetadata.emplace(std::forward<RequestMetadataKeyT>(key), std::forward<RequestMetadataValueT>(value)); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>Model performance settings for the request.</p>
     */
    inline const PerformanceConfiguration& GetPerformanceConfig() const { return m_performanceConfig; }
    inline bool PerformanceConfigHasBeenSet() const { return m_performanceConfigHasBeenSet; }
    template<typename PerformanceConfigT = PerformanceConfiguration>
    void SetPerformanceConfig(PerformanceConfigT&& value) { m_performanceConfigHasBeenSet = true; m_performanceConfig = std::forward<PerformanceConfigT>(value); }
    template<typename PerformanceConfigT = PerformanceConfiguration>
    ConverseRequest& WithPerformanceConfig(PerformanceConfigT&& value) { SetPerformanceConfig(std::forward<PerformanceConfigT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_modelId;
    bool m_modelIdHasBeenSet = false;

    Aws::Vector<Message> m_messages;
    bool m_messagesHasBeenSet = false;

    Aws::Vector<SystemContentBlock> m_system;
    bool m_systemHasBeenSet = false;

    InferenceConfiguration m_inferenceConfig;
    bool m_inferenceConfigHasBeenSet = false;

    ToolConfiguration m_toolConfig;
    bool m_toolConfigHasBeenSet = false;

    GuardrailConfiguration m_guardrailConfig;
    bool m_guardrailConfigHasBeenSet = false;

    Aws::Utils::Document m_additionalModelRequestFields;
    bool m_additionalModelRequestFieldsHasBeenSet = false;

    Aws::Map<Aws::String, PromptVariableValues> m_promptVariables;
    bool m_promptVariablesHasBeenSet = false;

    Aws::Vector<Aws::String> m_additionalModelResponseFieldPaths;
    bool m_additionalModelResponseFieldPathsHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_requestMetadata;
    bool m_requestMetadataHasBeenSet = false;

    PerformanceConfiguration m_performanceConfig;
    bool m_performanceConfigHasBeenSet = false;
  };

} // namespace Model
} // namespace BedrockRuntime
} // namespace Aws
