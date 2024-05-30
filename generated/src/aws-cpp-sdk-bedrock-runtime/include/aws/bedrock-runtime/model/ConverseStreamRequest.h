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
#include <aws/core/utils/Document.h>
#include <aws/bedrock-runtime/model/Message.h>
#include <aws/bedrock-runtime/model/SystemContentBlock.h>
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


    /**
     * <p>The ID for the model.</p> <p>The <code>modelId</code> to provide depends on
     * the type of model that you use:</p> <ul> <li> <p>If you use a base model,
     * specify the model ID or its ARN. For a list of model IDs for base models, see <a
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
     * <p>The ID for the model.</p> <p>The <code>modelId</code> to provide depends on
     * the type of model that you use:</p> <ul> <li> <p>If you use a base model,
     * specify the model ID or its ARN. For a list of model IDs for base models, see <a
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
     * <p>The ID for the model.</p> <p>The <code>modelId</code> to provide depends on
     * the type of model that you use:</p> <ul> <li> <p>If you use a base model,
     * specify the model ID or its ARN. For a list of model IDs for base models, see <a
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
     * <p>The ID for the model.</p> <p>The <code>modelId</code> to provide depends on
     * the type of model that you use:</p> <ul> <li> <p>If you use a base model,
     * specify the model ID or its ARN. For a list of model IDs for base models, see <a
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
     * <p>The ID for the model.</p> <p>The <code>modelId</code> to provide depends on
     * the type of model that you use:</p> <ul> <li> <p>If you use a base model,
     * specify the model ID or its ARN. For a list of model IDs for base models, see <a
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
     * <p>The ID for the model.</p> <p>The <code>modelId</code> to provide depends on
     * the type of model that you use:</p> <ul> <li> <p>If you use a base model,
     * specify the model ID or its ARN. For a list of model IDs for base models, see <a
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
    inline ConverseStreamRequest& WithModelId(const Aws::String& value) { SetModelId(value); return *this;}

    /**
     * <p>The ID for the model.</p> <p>The <code>modelId</code> to provide depends on
     * the type of model that you use:</p> <ul> <li> <p>If you use a base model,
     * specify the model ID or its ARN. For a list of model IDs for base models, see <a
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
    inline ConverseStreamRequest& WithModelId(Aws::String&& value) { SetModelId(std::move(value)); return *this;}

    /**
     * <p>The ID for the model.</p> <p>The <code>modelId</code> to provide depends on
     * the type of model that you use:</p> <ul> <li> <p>If you use a base model,
     * specify the model ID or its ARN. For a list of model IDs for base models, see <a
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
    inline ConverseStreamRequest& WithModelId(const char* value) { SetModelId(value); return *this;}


    /**
     * <p>The messages that you want to send to the model.</p>
     */
    inline const Aws::Vector<Message>& GetMessages() const{ return m_messages; }

    /**
     * <p>The messages that you want to send to the model.</p>
     */
    inline bool MessagesHasBeenSet() const { return m_messagesHasBeenSet; }

    /**
     * <p>The messages that you want to send to the model.</p>
     */
    inline void SetMessages(const Aws::Vector<Message>& value) { m_messagesHasBeenSet = true; m_messages = value; }

    /**
     * <p>The messages that you want to send to the model.</p>
     */
    inline void SetMessages(Aws::Vector<Message>&& value) { m_messagesHasBeenSet = true; m_messages = std::move(value); }

    /**
     * <p>The messages that you want to send to the model.</p>
     */
    inline ConverseStreamRequest& WithMessages(const Aws::Vector<Message>& value) { SetMessages(value); return *this;}

    /**
     * <p>The messages that you want to send to the model.</p>
     */
    inline ConverseStreamRequest& WithMessages(Aws::Vector<Message>&& value) { SetMessages(std::move(value)); return *this;}

    /**
     * <p>The messages that you want to send to the model.</p>
     */
    inline ConverseStreamRequest& AddMessages(const Message& value) { m_messagesHasBeenSet = true; m_messages.push_back(value); return *this; }

    /**
     * <p>The messages that you want to send to the model.</p>
     */
    inline ConverseStreamRequest& AddMessages(Message&& value) { m_messagesHasBeenSet = true; m_messages.push_back(std::move(value)); return *this; }


    /**
     * <p>A system prompt to send to the model.</p>
     */
    inline const Aws::Vector<SystemContentBlock>& GetSystem() const{ return m_system; }

    /**
     * <p>A system prompt to send to the model.</p>
     */
    inline bool SystemHasBeenSet() const { return m_systemHasBeenSet; }

    /**
     * <p>A system prompt to send to the model.</p>
     */
    inline void SetSystem(const Aws::Vector<SystemContentBlock>& value) { m_systemHasBeenSet = true; m_system = value; }

    /**
     * <p>A system prompt to send to the model.</p>
     */
    inline void SetSystem(Aws::Vector<SystemContentBlock>&& value) { m_systemHasBeenSet = true; m_system = std::move(value); }

    /**
     * <p>A system prompt to send to the model.</p>
     */
    inline ConverseStreamRequest& WithSystem(const Aws::Vector<SystemContentBlock>& value) { SetSystem(value); return *this;}

    /**
     * <p>A system prompt to send to the model.</p>
     */
    inline ConverseStreamRequest& WithSystem(Aws::Vector<SystemContentBlock>&& value) { SetSystem(std::move(value)); return *this;}

    /**
     * <p>A system prompt to send to the model.</p>
     */
    inline ConverseStreamRequest& AddSystem(const SystemContentBlock& value) { m_systemHasBeenSet = true; m_system.push_back(value); return *this; }

    /**
     * <p>A system prompt to send to the model.</p>
     */
    inline ConverseStreamRequest& AddSystem(SystemContentBlock&& value) { m_systemHasBeenSet = true; m_system.push_back(std::move(value)); return *this; }


    /**
     * <p>Inference parameters to pass to the model. <code>ConverseStream</code>
     * supports a base set of inference parameters. If you need to pass additional
     * parameters that the model supports, use the
     * <code>additionalModelRequestFields</code> request field.</p>
     */
    inline const InferenceConfiguration& GetInferenceConfig() const{ return m_inferenceConfig; }

    /**
     * <p>Inference parameters to pass to the model. <code>ConverseStream</code>
     * supports a base set of inference parameters. If you need to pass additional
     * parameters that the model supports, use the
     * <code>additionalModelRequestFields</code> request field.</p>
     */
    inline bool InferenceConfigHasBeenSet() const { return m_inferenceConfigHasBeenSet; }

    /**
     * <p>Inference parameters to pass to the model. <code>ConverseStream</code>
     * supports a base set of inference parameters. If you need to pass additional
     * parameters that the model supports, use the
     * <code>additionalModelRequestFields</code> request field.</p>
     */
    inline void SetInferenceConfig(const InferenceConfiguration& value) { m_inferenceConfigHasBeenSet = true; m_inferenceConfig = value; }

    /**
     * <p>Inference parameters to pass to the model. <code>ConverseStream</code>
     * supports a base set of inference parameters. If you need to pass additional
     * parameters that the model supports, use the
     * <code>additionalModelRequestFields</code> request field.</p>
     */
    inline void SetInferenceConfig(InferenceConfiguration&& value) { m_inferenceConfigHasBeenSet = true; m_inferenceConfig = std::move(value); }

    /**
     * <p>Inference parameters to pass to the model. <code>ConverseStream</code>
     * supports a base set of inference parameters. If you need to pass additional
     * parameters that the model supports, use the
     * <code>additionalModelRequestFields</code> request field.</p>
     */
    inline ConverseStreamRequest& WithInferenceConfig(const InferenceConfiguration& value) { SetInferenceConfig(value); return *this;}

    /**
     * <p>Inference parameters to pass to the model. <code>ConverseStream</code>
     * supports a base set of inference parameters. If you need to pass additional
     * parameters that the model supports, use the
     * <code>additionalModelRequestFields</code> request field.</p>
     */
    inline ConverseStreamRequest& WithInferenceConfig(InferenceConfiguration&& value) { SetInferenceConfig(std::move(value)); return *this;}


    /**
     * <p>Configuration information for the tools that the model can use when
     * generating a response.</p>  <p>This field is only supported by Anthropic
     * Claude 3 models.</p> 
     */
    inline const ToolConfiguration& GetToolConfig() const{ return m_toolConfig; }

    /**
     * <p>Configuration information for the tools that the model can use when
     * generating a response.</p>  <p>This field is only supported by Anthropic
     * Claude 3 models.</p> 
     */
    inline bool ToolConfigHasBeenSet() const { return m_toolConfigHasBeenSet; }

    /**
     * <p>Configuration information for the tools that the model can use when
     * generating a response.</p>  <p>This field is only supported by Anthropic
     * Claude 3 models.</p> 
     */
    inline void SetToolConfig(const ToolConfiguration& value) { m_toolConfigHasBeenSet = true; m_toolConfig = value; }

    /**
     * <p>Configuration information for the tools that the model can use when
     * generating a response.</p>  <p>This field is only supported by Anthropic
     * Claude 3 models.</p> 
     */
    inline void SetToolConfig(ToolConfiguration&& value) { m_toolConfigHasBeenSet = true; m_toolConfig = std::move(value); }

    /**
     * <p>Configuration information for the tools that the model can use when
     * generating a response.</p>  <p>This field is only supported by Anthropic
     * Claude 3 models.</p> 
     */
    inline ConverseStreamRequest& WithToolConfig(const ToolConfiguration& value) { SetToolConfig(value); return *this;}

    /**
     * <p>Configuration information for the tools that the model can use when
     * generating a response.</p>  <p>This field is only supported by Anthropic
     * Claude 3 models.</p> 
     */
    inline ConverseStreamRequest& WithToolConfig(ToolConfiguration&& value) { SetToolConfig(std::move(value)); return *this;}


    /**
     * <p>Additional inference parameters that the model supports, beyond the base set
     * of inference parameters that <code>ConverseStream</code> supports in the
     * <code>inferenceConfig</code> field.</p>
     */
    inline Aws::Utils::DocumentView GetAdditionalModelRequestFields() const{ return m_additionalModelRequestFields; }

    /**
     * <p>Additional inference parameters that the model supports, beyond the base set
     * of inference parameters that <code>ConverseStream</code> supports in the
     * <code>inferenceConfig</code> field.</p>
     */
    inline bool AdditionalModelRequestFieldsHasBeenSet() const { return m_additionalModelRequestFieldsHasBeenSet; }

    /**
     * <p>Additional inference parameters that the model supports, beyond the base set
     * of inference parameters that <code>ConverseStream</code> supports in the
     * <code>inferenceConfig</code> field.</p>
     */
    inline void SetAdditionalModelRequestFields(const Aws::Utils::Document& value) { m_additionalModelRequestFieldsHasBeenSet = true; m_additionalModelRequestFields = value; }

    /**
     * <p>Additional inference parameters that the model supports, beyond the base set
     * of inference parameters that <code>ConverseStream</code> supports in the
     * <code>inferenceConfig</code> field.</p>
     */
    inline void SetAdditionalModelRequestFields(Aws::Utils::Document&& value) { m_additionalModelRequestFieldsHasBeenSet = true; m_additionalModelRequestFields = std::move(value); }

    /**
     * <p>Additional inference parameters that the model supports, beyond the base set
     * of inference parameters that <code>ConverseStream</code> supports in the
     * <code>inferenceConfig</code> field.</p>
     */
    inline ConverseStreamRequest& WithAdditionalModelRequestFields(const Aws::Utils::Document& value) { SetAdditionalModelRequestFields(value); return *this;}

    /**
     * <p>Additional inference parameters that the model supports, beyond the base set
     * of inference parameters that <code>ConverseStream</code> supports in the
     * <code>inferenceConfig</code> field.</p>
     */
    inline ConverseStreamRequest& WithAdditionalModelRequestFields(Aws::Utils::Document&& value) { SetAdditionalModelRequestFields(std::move(value)); return *this;}


    /**
     * <p>Additional model parameters field paths to return in the response.
     * <code>ConverseStream</code> returns the requested fields as a JSON Pointer
     * object in the <code>additionalModelResultFields</code> field. The following is
     * example JSON for <code>additionalModelResponseFieldPaths</code>.</p> <p> <code>[
     * "/stop_sequence" ]</code> </p> <p>For information about the JSON Pointer syntax,
     * see the <a href="https://datatracker.ietf.org/doc/html/rfc6901">Internet
     * Engineering Task Force (IETF)</a> documentation.</p> <p>
     * <code>ConverseStream</code> rejects an empty JSON Pointer or incorrectly
     * structured JSON Pointer with a <code>400</code> error code. if the JSON Pointer
     * is valid, but the requested field is not in the model response, it is ignored by
     * <code>ConverseStream</code>.</p>
     */
    inline const Aws::Vector<Aws::String>& GetAdditionalModelResponseFieldPaths() const{ return m_additionalModelResponseFieldPaths; }

    /**
     * <p>Additional model parameters field paths to return in the response.
     * <code>ConverseStream</code> returns the requested fields as a JSON Pointer
     * object in the <code>additionalModelResultFields</code> field. The following is
     * example JSON for <code>additionalModelResponseFieldPaths</code>.</p> <p> <code>[
     * "/stop_sequence" ]</code> </p> <p>For information about the JSON Pointer syntax,
     * see the <a href="https://datatracker.ietf.org/doc/html/rfc6901">Internet
     * Engineering Task Force (IETF)</a> documentation.</p> <p>
     * <code>ConverseStream</code> rejects an empty JSON Pointer or incorrectly
     * structured JSON Pointer with a <code>400</code> error code. if the JSON Pointer
     * is valid, but the requested field is not in the model response, it is ignored by
     * <code>ConverseStream</code>.</p>
     */
    inline bool AdditionalModelResponseFieldPathsHasBeenSet() const { return m_additionalModelResponseFieldPathsHasBeenSet; }

    /**
     * <p>Additional model parameters field paths to return in the response.
     * <code>ConverseStream</code> returns the requested fields as a JSON Pointer
     * object in the <code>additionalModelResultFields</code> field. The following is
     * example JSON for <code>additionalModelResponseFieldPaths</code>.</p> <p> <code>[
     * "/stop_sequence" ]</code> </p> <p>For information about the JSON Pointer syntax,
     * see the <a href="https://datatracker.ietf.org/doc/html/rfc6901">Internet
     * Engineering Task Force (IETF)</a> documentation.</p> <p>
     * <code>ConverseStream</code> rejects an empty JSON Pointer or incorrectly
     * structured JSON Pointer with a <code>400</code> error code. if the JSON Pointer
     * is valid, but the requested field is not in the model response, it is ignored by
     * <code>ConverseStream</code>.</p>
     */
    inline void SetAdditionalModelResponseFieldPaths(const Aws::Vector<Aws::String>& value) { m_additionalModelResponseFieldPathsHasBeenSet = true; m_additionalModelResponseFieldPaths = value; }

    /**
     * <p>Additional model parameters field paths to return in the response.
     * <code>ConverseStream</code> returns the requested fields as a JSON Pointer
     * object in the <code>additionalModelResultFields</code> field. The following is
     * example JSON for <code>additionalModelResponseFieldPaths</code>.</p> <p> <code>[
     * "/stop_sequence" ]</code> </p> <p>For information about the JSON Pointer syntax,
     * see the <a href="https://datatracker.ietf.org/doc/html/rfc6901">Internet
     * Engineering Task Force (IETF)</a> documentation.</p> <p>
     * <code>ConverseStream</code> rejects an empty JSON Pointer or incorrectly
     * structured JSON Pointer with a <code>400</code> error code. if the JSON Pointer
     * is valid, but the requested field is not in the model response, it is ignored by
     * <code>ConverseStream</code>.</p>
     */
    inline void SetAdditionalModelResponseFieldPaths(Aws::Vector<Aws::String>&& value) { m_additionalModelResponseFieldPathsHasBeenSet = true; m_additionalModelResponseFieldPaths = std::move(value); }

    /**
     * <p>Additional model parameters field paths to return in the response.
     * <code>ConverseStream</code> returns the requested fields as a JSON Pointer
     * object in the <code>additionalModelResultFields</code> field. The following is
     * example JSON for <code>additionalModelResponseFieldPaths</code>.</p> <p> <code>[
     * "/stop_sequence" ]</code> </p> <p>For information about the JSON Pointer syntax,
     * see the <a href="https://datatracker.ietf.org/doc/html/rfc6901">Internet
     * Engineering Task Force (IETF)</a> documentation.</p> <p>
     * <code>ConverseStream</code> rejects an empty JSON Pointer or incorrectly
     * structured JSON Pointer with a <code>400</code> error code. if the JSON Pointer
     * is valid, but the requested field is not in the model response, it is ignored by
     * <code>ConverseStream</code>.</p>
     */
    inline ConverseStreamRequest& WithAdditionalModelResponseFieldPaths(const Aws::Vector<Aws::String>& value) { SetAdditionalModelResponseFieldPaths(value); return *this;}

    /**
     * <p>Additional model parameters field paths to return in the response.
     * <code>ConverseStream</code> returns the requested fields as a JSON Pointer
     * object in the <code>additionalModelResultFields</code> field. The following is
     * example JSON for <code>additionalModelResponseFieldPaths</code>.</p> <p> <code>[
     * "/stop_sequence" ]</code> </p> <p>For information about the JSON Pointer syntax,
     * see the <a href="https://datatracker.ietf.org/doc/html/rfc6901">Internet
     * Engineering Task Force (IETF)</a> documentation.</p> <p>
     * <code>ConverseStream</code> rejects an empty JSON Pointer or incorrectly
     * structured JSON Pointer with a <code>400</code> error code. if the JSON Pointer
     * is valid, but the requested field is not in the model response, it is ignored by
     * <code>ConverseStream</code>.</p>
     */
    inline ConverseStreamRequest& WithAdditionalModelResponseFieldPaths(Aws::Vector<Aws::String>&& value) { SetAdditionalModelResponseFieldPaths(std::move(value)); return *this;}

    /**
     * <p>Additional model parameters field paths to return in the response.
     * <code>ConverseStream</code> returns the requested fields as a JSON Pointer
     * object in the <code>additionalModelResultFields</code> field. The following is
     * example JSON for <code>additionalModelResponseFieldPaths</code>.</p> <p> <code>[
     * "/stop_sequence" ]</code> </p> <p>For information about the JSON Pointer syntax,
     * see the <a href="https://datatracker.ietf.org/doc/html/rfc6901">Internet
     * Engineering Task Force (IETF)</a> documentation.</p> <p>
     * <code>ConverseStream</code> rejects an empty JSON Pointer or incorrectly
     * structured JSON Pointer with a <code>400</code> error code. if the JSON Pointer
     * is valid, but the requested field is not in the model response, it is ignored by
     * <code>ConverseStream</code>.</p>
     */
    inline ConverseStreamRequest& AddAdditionalModelResponseFieldPaths(const Aws::String& value) { m_additionalModelResponseFieldPathsHasBeenSet = true; m_additionalModelResponseFieldPaths.push_back(value); return *this; }

    /**
     * <p>Additional model parameters field paths to return in the response.
     * <code>ConverseStream</code> returns the requested fields as a JSON Pointer
     * object in the <code>additionalModelResultFields</code> field. The following is
     * example JSON for <code>additionalModelResponseFieldPaths</code>.</p> <p> <code>[
     * "/stop_sequence" ]</code> </p> <p>For information about the JSON Pointer syntax,
     * see the <a href="https://datatracker.ietf.org/doc/html/rfc6901">Internet
     * Engineering Task Force (IETF)</a> documentation.</p> <p>
     * <code>ConverseStream</code> rejects an empty JSON Pointer or incorrectly
     * structured JSON Pointer with a <code>400</code> error code. if the JSON Pointer
     * is valid, but the requested field is not in the model response, it is ignored by
     * <code>ConverseStream</code>.</p>
     */
    inline ConverseStreamRequest& AddAdditionalModelResponseFieldPaths(Aws::String&& value) { m_additionalModelResponseFieldPathsHasBeenSet = true; m_additionalModelResponseFieldPaths.push_back(std::move(value)); return *this; }

    /**
     * <p>Additional model parameters field paths to return in the response.
     * <code>ConverseStream</code> returns the requested fields as a JSON Pointer
     * object in the <code>additionalModelResultFields</code> field. The following is
     * example JSON for <code>additionalModelResponseFieldPaths</code>.</p> <p> <code>[
     * "/stop_sequence" ]</code> </p> <p>For information about the JSON Pointer syntax,
     * see the <a href="https://datatracker.ietf.org/doc/html/rfc6901">Internet
     * Engineering Task Force (IETF)</a> documentation.</p> <p>
     * <code>ConverseStream</code> rejects an empty JSON Pointer or incorrectly
     * structured JSON Pointer with a <code>400</code> error code. if the JSON Pointer
     * is valid, but the requested field is not in the model response, it is ignored by
     * <code>ConverseStream</code>.</p>
     */
    inline ConverseStreamRequest& AddAdditionalModelResponseFieldPaths(const char* value) { m_additionalModelResponseFieldPathsHasBeenSet = true; m_additionalModelResponseFieldPaths.push_back(value); return *this; }

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

    Aws::Utils::Document m_additionalModelRequestFields;
    bool m_additionalModelRequestFieldsHasBeenSet = false;

    Aws::Vector<Aws::String> m_additionalModelResponseFieldPaths;
    bool m_additionalModelResponseFieldPathsHasBeenSet = false;
    ConverseStreamHandler m_handler;
    Aws::Utils::Event::EventStreamDecoder m_decoder;

  };

} // namespace Model
} // namespace BedrockRuntime
} // namespace Aws
