/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-runtime/BedrockRuntime_EXPORTS.h>
#include <aws/bedrock-runtime/BedrockRuntimeRequest.h>
#include <aws/bedrock-runtime/model/ConverseStreamHandler.h>
#include <aws/core/utils/event/EventStreamDecoder.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/bedrock-runtime/model/InferenceConfiguration.h>
#include <aws/bedrock-runtime/model/ToolConfiguration.h>
#include <aws/bedrock-runtime/model/GuardrailStreamConfiguration.h>
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
  class ConverseStreamRequest : public BedrockRuntimeRequest
  {
  public:
    AWS_BEDROCKRUNTIME_API ConverseStreamRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ConverseStream"; }

    inline virtual bool HasEventStreamResponse() const override { return true; }
    AWS_BEDROCKRUNTIME_API Aws::String SerializePayload() const override;

    /**
     * Underlying Event Stream Decoder.
     */
    inline Aws::Utils::Event::EventStreamDecoder& GetEventStreamDecoder() { return m_decoder; }

    /**
     * Underlying Event Stream Handler which is used to define callback functions.
     */
    inline const ConverseStreamHandler& GetEventStreamHandler() const { return m_handler; }

    /**
     * Underlying Event Stream Handler which is used to define callback functions.
     */
    inline void SetEventStreamHandler(const ConverseStreamHandler& value) { m_handler = value; m_decoder.ResetEventStreamHandler(&m_handler); }

    /**
     * Underlying Event Stream Handler which is used to define callback functions.
     */
    inline ConverseStreamRequest& WithEventStreamHandler(const ConverseStreamHandler& value) { SetEventStreamHandler(value); return *this; }


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
    inline const Aws::String& GetModelId() const{ return m_modelId; }
    inline bool ModelIdHasBeenSet() const { return m_modelIdHasBeenSet; }
    inline void SetModelId(const Aws::String& value) { m_modelIdHasBeenSet = true; m_modelId = value; }
    inline void SetModelId(Aws::String&& value) { m_modelIdHasBeenSet = true; m_modelId = std::move(value); }
    inline void SetModelId(const char* value) { m_modelIdHasBeenSet = true; m_modelId.assign(value); }
    inline ConverseStreamRequest& WithModelId(const Aws::String& value) { SetModelId(value); return *this;}
    inline ConverseStreamRequest& WithModelId(Aws::String&& value) { SetModelId(std::move(value)); return *this;}
    inline ConverseStreamRequest& WithModelId(const char* value) { SetModelId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The messages that you want to send to the model.</p>
     */
    inline const Aws::Vector<Message>& GetMessages() const{ return m_messages; }
    inline bool MessagesHasBeenSet() const { return m_messagesHasBeenSet; }
    inline void SetMessages(const Aws::Vector<Message>& value) { m_messagesHasBeenSet = true; m_messages = value; }
    inline void SetMessages(Aws::Vector<Message>&& value) { m_messagesHasBeenSet = true; m_messages = std::move(value); }
    inline ConverseStreamRequest& WithMessages(const Aws::Vector<Message>& value) { SetMessages(value); return *this;}
    inline ConverseStreamRequest& WithMessages(Aws::Vector<Message>&& value) { SetMessages(std::move(value)); return *this;}
    inline ConverseStreamRequest& AddMessages(const Message& value) { m_messagesHasBeenSet = true; m_messages.push_back(value); return *this; }
    inline ConverseStreamRequest& AddMessages(Message&& value) { m_messagesHasBeenSet = true; m_messages.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A prompt that provides instructions or context to the model about the task it
     * should perform, or the persona it should adopt during the conversation.</p>
     */
    inline const Aws::Vector<SystemContentBlock>& GetSystem() const{ return m_system; }
    inline bool SystemHasBeenSet() const { return m_systemHasBeenSet; }
    inline void SetSystem(const Aws::Vector<SystemContentBlock>& value) { m_systemHasBeenSet = true; m_system = value; }
    inline void SetSystem(Aws::Vector<SystemContentBlock>&& value) { m_systemHasBeenSet = true; m_system = std::move(value); }
    inline ConverseStreamRequest& WithSystem(const Aws::Vector<SystemContentBlock>& value) { SetSystem(value); return *this;}
    inline ConverseStreamRequest& WithSystem(Aws::Vector<SystemContentBlock>&& value) { SetSystem(std::move(value)); return *this;}
    inline ConverseStreamRequest& AddSystem(const SystemContentBlock& value) { m_systemHasBeenSet = true; m_system.push_back(value); return *this; }
    inline ConverseStreamRequest& AddSystem(SystemContentBlock&& value) { m_systemHasBeenSet = true; m_system.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Inference parameters to pass to the model. <code>Converse</code> and
     * <code>ConverseStream</code> support a base set of inference parameters. If you
     * need to pass additional parameters that the model supports, use the
     * <code>additionalModelRequestFields</code> request field.</p>
     */
    inline const InferenceConfiguration& GetInferenceConfig() const{ return m_inferenceConfig; }
    inline bool InferenceConfigHasBeenSet() const { return m_inferenceConfigHasBeenSet; }
    inline void SetInferenceConfig(const InferenceConfiguration& value) { m_inferenceConfigHasBeenSet = true; m_inferenceConfig = value; }
    inline void SetInferenceConfig(InferenceConfiguration&& value) { m_inferenceConfigHasBeenSet = true; m_inferenceConfig = std::move(value); }
    inline ConverseStreamRequest& WithInferenceConfig(const InferenceConfiguration& value) { SetInferenceConfig(value); return *this;}
    inline ConverseStreamRequest& WithInferenceConfig(InferenceConfiguration&& value) { SetInferenceConfig(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Configuration information for the tools that the model can use when
     * generating a response.</p> <p>For information about models that support
     * streaming tool use, see <a
     * href="https://docs.aws.amazon.com/bedrock/latest/userguide/conversation-inference.html#conversation-inference-supported-models-features">Supported
     * models and model features</a>.</p>
     */
    inline const ToolConfiguration& GetToolConfig() const{ return m_toolConfig; }
    inline bool ToolConfigHasBeenSet() const { return m_toolConfigHasBeenSet; }
    inline void SetToolConfig(const ToolConfiguration& value) { m_toolConfigHasBeenSet = true; m_toolConfig = value; }
    inline void SetToolConfig(ToolConfiguration&& value) { m_toolConfigHasBeenSet = true; m_toolConfig = std::move(value); }
    inline ConverseStreamRequest& WithToolConfig(const ToolConfiguration& value) { SetToolConfig(value); return *this;}
    inline ConverseStreamRequest& WithToolConfig(ToolConfiguration&& value) { SetToolConfig(std::move(value)); return *this;}
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
    inline const GuardrailStreamConfiguration& GetGuardrailConfig() const{ return m_guardrailConfig; }
    inline bool GuardrailConfigHasBeenSet() const { return m_guardrailConfigHasBeenSet; }
    inline void SetGuardrailConfig(const GuardrailStreamConfiguration& value) { m_guardrailConfigHasBeenSet = true; m_guardrailConfig = value; }
    inline void SetGuardrailConfig(GuardrailStreamConfiguration&& value) { m_guardrailConfigHasBeenSet = true; m_guardrailConfig = std::move(value); }
    inline ConverseStreamRequest& WithGuardrailConfig(const GuardrailStreamConfiguration& value) { SetGuardrailConfig(value); return *this;}
    inline ConverseStreamRequest& WithGuardrailConfig(GuardrailStreamConfiguration&& value) { SetGuardrailConfig(std::move(value)); return *this;}
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
    inline Aws::Utils::DocumentView GetAdditionalModelRequestFields() const{ return m_additionalModelRequestFields; }
    inline bool AdditionalModelRequestFieldsHasBeenSet() const { return m_additionalModelRequestFieldsHasBeenSet; }
    inline void SetAdditionalModelRequestFields(const Aws::Utils::Document& value) { m_additionalModelRequestFieldsHasBeenSet = true; m_additionalModelRequestFields = value; }
    inline void SetAdditionalModelRequestFields(Aws::Utils::Document&& value) { m_additionalModelRequestFieldsHasBeenSet = true; m_additionalModelRequestFields = std::move(value); }
    inline ConverseStreamRequest& WithAdditionalModelRequestFields(const Aws::Utils::Document& value) { SetAdditionalModelRequestFields(value); return *this;}
    inline ConverseStreamRequest& WithAdditionalModelRequestFields(Aws::Utils::Document&& value) { SetAdditionalModelRequestFields(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Contains a map of variables in a prompt from Prompt management to objects
     * containing the values to fill in for them when running model invocation. This
     * field is ignored if you don't specify a prompt resource in the
     * <code>modelId</code> field.</p>
     */
    inline const Aws::Map<Aws::String, PromptVariableValues>& GetPromptVariables() const{ return m_promptVariables; }
    inline bool PromptVariablesHasBeenSet() const { return m_promptVariablesHasBeenSet; }
    inline void SetPromptVariables(const Aws::Map<Aws::String, PromptVariableValues>& value) { m_promptVariablesHasBeenSet = true; m_promptVariables = value; }
    inline void SetPromptVariables(Aws::Map<Aws::String, PromptVariableValues>&& value) { m_promptVariablesHasBeenSet = true; m_promptVariables = std::move(value); }
    inline ConverseStreamRequest& WithPromptVariables(const Aws::Map<Aws::String, PromptVariableValues>& value) { SetPromptVariables(value); return *this;}
    inline ConverseStreamRequest& WithPromptVariables(Aws::Map<Aws::String, PromptVariableValues>&& value) { SetPromptVariables(std::move(value)); return *this;}
    inline ConverseStreamRequest& AddPromptVariables(const Aws::String& key, const PromptVariableValues& value) { m_promptVariablesHasBeenSet = true; m_promptVariables.emplace(key, value); return *this; }
    inline ConverseStreamRequest& AddPromptVariables(Aws::String&& key, const PromptVariableValues& value) { m_promptVariablesHasBeenSet = true; m_promptVariables.emplace(std::move(key), value); return *this; }
    inline ConverseStreamRequest& AddPromptVariables(const Aws::String& key, PromptVariableValues&& value) { m_promptVariablesHasBeenSet = true; m_promptVariables.emplace(key, std::move(value)); return *this; }
    inline ConverseStreamRequest& AddPromptVariables(Aws::String&& key, PromptVariableValues&& value) { m_promptVariablesHasBeenSet = true; m_promptVariables.emplace(std::move(key), std::move(value)); return *this; }
    inline ConverseStreamRequest& AddPromptVariables(const char* key, PromptVariableValues&& value) { m_promptVariablesHasBeenSet = true; m_promptVariables.emplace(key, std::move(value)); return *this; }
    inline ConverseStreamRequest& AddPromptVariables(const char* key, const PromptVariableValues& value) { m_promptVariablesHasBeenSet = true; m_promptVariables.emplace(key, value); return *this; }
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
    inline const Aws::Vector<Aws::String>& GetAdditionalModelResponseFieldPaths() const{ return m_additionalModelResponseFieldPaths; }
    inline bool AdditionalModelResponseFieldPathsHasBeenSet() const { return m_additionalModelResponseFieldPathsHasBeenSet; }
    inline void SetAdditionalModelResponseFieldPaths(const Aws::Vector<Aws::String>& value) { m_additionalModelResponseFieldPathsHasBeenSet = true; m_additionalModelResponseFieldPaths = value; }
    inline void SetAdditionalModelResponseFieldPaths(Aws::Vector<Aws::String>&& value) { m_additionalModelResponseFieldPathsHasBeenSet = true; m_additionalModelResponseFieldPaths = std::move(value); }
    inline ConverseStreamRequest& WithAdditionalModelResponseFieldPaths(const Aws::Vector<Aws::String>& value) { SetAdditionalModelResponseFieldPaths(value); return *this;}
    inline ConverseStreamRequest& WithAdditionalModelResponseFieldPaths(Aws::Vector<Aws::String>&& value) { SetAdditionalModelResponseFieldPaths(std::move(value)); return *this;}
    inline ConverseStreamRequest& AddAdditionalModelResponseFieldPaths(const Aws::String& value) { m_additionalModelResponseFieldPathsHasBeenSet = true; m_additionalModelResponseFieldPaths.push_back(value); return *this; }
    inline ConverseStreamRequest& AddAdditionalModelResponseFieldPaths(Aws::String&& value) { m_additionalModelResponseFieldPathsHasBeenSet = true; m_additionalModelResponseFieldPaths.push_back(std::move(value)); return *this; }
    inline ConverseStreamRequest& AddAdditionalModelResponseFieldPaths(const char* value) { m_additionalModelResponseFieldPathsHasBeenSet = true; m_additionalModelResponseFieldPaths.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>Key-value pairs that you can use to filter invocation logs.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetRequestMetadata() const{ return m_requestMetadata; }
    inline bool RequestMetadataHasBeenSet() const { return m_requestMetadataHasBeenSet; }
    inline void SetRequestMetadata(const Aws::Map<Aws::String, Aws::String>& value) { m_requestMetadataHasBeenSet = true; m_requestMetadata = value; }
    inline void SetRequestMetadata(Aws::Map<Aws::String, Aws::String>&& value) { m_requestMetadataHasBeenSet = true; m_requestMetadata = std::move(value); }
    inline ConverseStreamRequest& WithRequestMetadata(const Aws::Map<Aws::String, Aws::String>& value) { SetRequestMetadata(value); return *this;}
    inline ConverseStreamRequest& WithRequestMetadata(Aws::Map<Aws::String, Aws::String>&& value) { SetRequestMetadata(std::move(value)); return *this;}
    inline ConverseStreamRequest& AddRequestMetadata(const Aws::String& key, const Aws::String& value) { m_requestMetadataHasBeenSet = true; m_requestMetadata.emplace(key, value); return *this; }
    inline ConverseStreamRequest& AddRequestMetadata(Aws::String&& key, const Aws::String& value) { m_requestMetadataHasBeenSet = true; m_requestMetadata.emplace(std::move(key), value); return *this; }
    inline ConverseStreamRequest& AddRequestMetadata(const Aws::String& key, Aws::String&& value) { m_requestMetadataHasBeenSet = true; m_requestMetadata.emplace(key, std::move(value)); return *this; }
    inline ConverseStreamRequest& AddRequestMetadata(Aws::String&& key, Aws::String&& value) { m_requestMetadataHasBeenSet = true; m_requestMetadata.emplace(std::move(key), std::move(value)); return *this; }
    inline ConverseStreamRequest& AddRequestMetadata(const char* key, Aws::String&& value) { m_requestMetadataHasBeenSet = true; m_requestMetadata.emplace(key, std::move(value)); return *this; }
    inline ConverseStreamRequest& AddRequestMetadata(Aws::String&& key, const char* value) { m_requestMetadataHasBeenSet = true; m_requestMetadata.emplace(std::move(key), value); return *this; }
    inline ConverseStreamRequest& AddRequestMetadata(const char* key, const char* value) { m_requestMetadataHasBeenSet = true; m_requestMetadata.emplace(key, value); return *this; }
    ///@}

    ///@{
    /**
     * <p>Model performance settings for the request.</p>
     */
    inline const PerformanceConfiguration& GetPerformanceConfig() const{ return m_performanceConfig; }
    inline bool PerformanceConfigHasBeenSet() const { return m_performanceConfigHasBeenSet; }
    inline void SetPerformanceConfig(const PerformanceConfiguration& value) { m_performanceConfigHasBeenSet = true; m_performanceConfig = value; }
    inline void SetPerformanceConfig(PerformanceConfiguration&& value) { m_performanceConfigHasBeenSet = true; m_performanceConfig = std::move(value); }
    inline ConverseStreamRequest& WithPerformanceConfig(const PerformanceConfiguration& value) { SetPerformanceConfig(value); return *this;}
    inline ConverseStreamRequest& WithPerformanceConfig(PerformanceConfiguration&& value) { SetPerformanceConfig(std::move(value)); return *this;}
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

    GuardrailStreamConfiguration m_guardrailConfig;
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
    ConverseStreamHandler m_handler;
    Aws::Utils::Event::EventStreamDecoder m_decoder;

  };

} // namespace Model
} // namespace BedrockRuntime
} // namespace Aws
