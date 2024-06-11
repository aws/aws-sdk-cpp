﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-runtime/BedrockRuntime_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace BedrockRuntime
{
namespace Model
{

  /**
   * <p>Base inference parameters to pass to a model in a call to <a
   * href="https://docs.aws.amazon.com/bedrock/latest/APIReference/API_runtime_Converse.html">Converse</a>
   * or <a
   * href="https://docs.aws.amazon.com/bedrock/latest/APIReference/API_runtime_ConverseStream.html">ConverseStream</a>.
   * For more information, see <a
   * href="https://docs.aws.amazon.com/bedrock/latest/userguide/model-parameters.html">Inference
   * parameters for foundation models</a>.</p> <p>If you need to pass additional
   * parameters that the model supports, use the
   * <code>additionalModelRequestFields</code> request field in the call to
   * <code>Converse</code> or <code>ConverseStream</code>. For more information, see
   * <a
   * href="https://docs.aws.amazon.com/bedrock/latest/userguide/model-parameters.html">Model
   * parameters</a>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-runtime-2023-09-30/InferenceConfiguration">AWS
   * API Reference</a></p>
   */
  class InferenceConfiguration
  {
  public:
    AWS_BEDROCKRUNTIME_API InferenceConfiguration();
    AWS_BEDROCKRUNTIME_API InferenceConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKRUNTIME_API InferenceConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKRUNTIME_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The maximum number of tokens to allow in the generated response. The default
     * value is the maximum allowed value for the model that you are using. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/bedrock/latest/userguide/model-parameters.html">Inference
     * parameters for foundatio{ "messages": [ { "role": "user", "content": [ { "text":
     * "what's the weather in Queens, NY and Austin, TX?" } ] }, { "role": "assistant",
     * "content": [ { "toolUse": { "toolUseId": "1", "name": "get_weather", "input": {
     * "city": "Queens", "state": "NY" } } }, { "toolUse": { "toolUseId": "2", "name":
     * "get_weather", "input": { "city": "Austin", "state": "TX" } } } ] }, { "role":
     * "user", "content": [ { "toolResult": { "toolUseId": "2", "content": [ { "json":
     * { "weather": "40" } } ] } }, { "text": "..." }, { "toolResult": { "toolUseId":
     * "1", "content": [ { "text": "result text" } ] } } ] } ], "toolConfig": {
     * "tools": [ { "name": "get_weather", "description": "Get weather", "inputSchema":
     * { "type": "object", "properties": { "city": { "type": "string", "description":
     * "City of location" }, "state": { "type": "string", "description": "State of
     * location" } }, "required": ["city", "state"] } } ] } } n models</a>. </p>
     */
    inline int GetMaxTokens() const{ return m_maxTokens; }
    inline bool MaxTokensHasBeenSet() const { return m_maxTokensHasBeenSet; }
    inline void SetMaxTokens(int value) { m_maxTokensHasBeenSet = true; m_maxTokens = value; }
    inline InferenceConfiguration& WithMaxTokens(int value) { SetMaxTokens(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The likelihood of the model selecting higher-probability options while
     * generating a response. A lower value makes the model more likely to choose
     * higher-probability options, while a higher value makes the model more likely to
     * choose lower-probability options.</p> <p>The default value is the default value
     * for the model that you are using. For more information, see <a
     * href="https://docs.aws.amazon.com/bedrock/latest/userguide/model-parameters.html">Inference
     * parameters for foundation models</a>. </p>
     */
    inline double GetTemperature() const{ return m_temperature; }
    inline bool TemperatureHasBeenSet() const { return m_temperatureHasBeenSet; }
    inline void SetTemperature(double value) { m_temperatureHasBeenSet = true; m_temperature = value; }
    inline InferenceConfiguration& WithTemperature(double value) { SetTemperature(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The percentage of most-likely candidates that the model considers for the
     * next token. For example, if you choose a value of 0.8 for <code>topP</code>, the
     * model selects from the top 80% of the probability distribution of tokens that
     * could be next in the sequence.</p> <p>The default value is the default value for
     * the model that you are using. For more information, see <a
     * href="https://docs.aws.amazon.com/bedrock/latest/userguide/model-parameters.html">Inference
     * parameters for foundation models</a>. </p>
     */
    inline double GetTopP() const{ return m_topP; }
    inline bool TopPHasBeenSet() const { return m_topPHasBeenSet; }
    inline void SetTopP(double value) { m_topPHasBeenSet = true; m_topP = value; }
    inline InferenceConfiguration& WithTopP(double value) { SetTopP(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of stop sequences. A stop sequence is a sequence of characters that
     * causes the model to stop generating the response. </p>
     */
    inline const Aws::Vector<Aws::String>& GetStopSequences() const{ return m_stopSequences; }
    inline bool StopSequencesHasBeenSet() const { return m_stopSequencesHasBeenSet; }
    inline void SetStopSequences(const Aws::Vector<Aws::String>& value) { m_stopSequencesHasBeenSet = true; m_stopSequences = value; }
    inline void SetStopSequences(Aws::Vector<Aws::String>&& value) { m_stopSequencesHasBeenSet = true; m_stopSequences = std::move(value); }
    inline InferenceConfiguration& WithStopSequences(const Aws::Vector<Aws::String>& value) { SetStopSequences(value); return *this;}
    inline InferenceConfiguration& WithStopSequences(Aws::Vector<Aws::String>&& value) { SetStopSequences(std::move(value)); return *this;}
    inline InferenceConfiguration& AddStopSequences(const Aws::String& value) { m_stopSequencesHasBeenSet = true; m_stopSequences.push_back(value); return *this; }
    inline InferenceConfiguration& AddStopSequences(Aws::String&& value) { m_stopSequencesHasBeenSet = true; m_stopSequences.push_back(std::move(value)); return *this; }
    inline InferenceConfiguration& AddStopSequences(const char* value) { m_stopSequencesHasBeenSet = true; m_stopSequences.push_back(value); return *this; }
    ///@}
  private:

    int m_maxTokens;
    bool m_maxTokensHasBeenSet = false;

    double m_temperature;
    bool m_temperatureHasBeenSet = false;

    double m_topP;
    bool m_topPHasBeenSet = false;

    Aws::Vector<Aws::String> m_stopSequences;
    bool m_stopSequencesHasBeenSet = false;
  };

} // namespace Model
} // namespace BedrockRuntime
} // namespace Aws
