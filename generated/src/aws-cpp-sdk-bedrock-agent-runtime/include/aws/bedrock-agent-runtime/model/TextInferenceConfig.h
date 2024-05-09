/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agent-runtime/BedrockAgentRuntime_EXPORTS.h>
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
namespace BedrockAgentRuntime
{
namespace Model
{

  /**
   * <p>Configuration settings for text generation using a language model via the
   * RetrieveAndGenerate operation. Includes parameters like temperature, top-p,
   * maximum token count, and stop sequences. </p>  <p>The valid range of
   * <code>maxTokens</code> depends on the accepted values for your chosen model's
   * inference parameters. To see the inference parameters for your model, see <a
   * href="https://docs.aws.amazon.com/bedrock/latest/userguide/model-parameters.html">Inference
   * parameters for foundation models.</a> </p> <p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agent-runtime-2023-07-26/TextInferenceConfig">AWS
   * API Reference</a></p>
   */
  class TextInferenceConfig
  {
  public:
    AWS_BEDROCKAGENTRUNTIME_API TextInferenceConfig();
    AWS_BEDROCKAGENTRUNTIME_API TextInferenceConfig(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENTRUNTIME_API TextInferenceConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENTRUNTIME_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The maximum number of tokens to generate in the output text. Do not use the
     * minimum of 0 or the maximum of 65536. The limit values described here are
     * arbitary values, for actual values consult the limits defined by your specific
     * model.</p>
     */
    inline int GetMaxTokens() const{ return m_maxTokens; }

    /**
     * <p>The maximum number of tokens to generate in the output text. Do not use the
     * minimum of 0 or the maximum of 65536. The limit values described here are
     * arbitary values, for actual values consult the limits defined by your specific
     * model.</p>
     */
    inline bool MaxTokensHasBeenSet() const { return m_maxTokensHasBeenSet; }

    /**
     * <p>The maximum number of tokens to generate in the output text. Do not use the
     * minimum of 0 or the maximum of 65536. The limit values described here are
     * arbitary values, for actual values consult the limits defined by your specific
     * model.</p>
     */
    inline void SetMaxTokens(int value) { m_maxTokensHasBeenSet = true; m_maxTokens = value; }

    /**
     * <p>The maximum number of tokens to generate in the output text. Do not use the
     * minimum of 0 or the maximum of 65536. The limit values described here are
     * arbitary values, for actual values consult the limits defined by your specific
     * model.</p>
     */
    inline TextInferenceConfig& WithMaxTokens(int value) { SetMaxTokens(value); return *this;}


    /**
     * <p>A list of sequences of characters that, if generated, will cause the model to
     * stop generating further tokens. Do not use a minimum length of 1 or a maximum
     * length of 1000. The limit values described here are arbitary values, for actual
     * values consult the limits defined by your specific model.</p>
     */
    inline const Aws::Vector<Aws::String>& GetStopSequences() const{ return m_stopSequences; }

    /**
     * <p>A list of sequences of characters that, if generated, will cause the model to
     * stop generating further tokens. Do not use a minimum length of 1 or a maximum
     * length of 1000. The limit values described here are arbitary values, for actual
     * values consult the limits defined by your specific model.</p>
     */
    inline bool StopSequencesHasBeenSet() const { return m_stopSequencesHasBeenSet; }

    /**
     * <p>A list of sequences of characters that, if generated, will cause the model to
     * stop generating further tokens. Do not use a minimum length of 1 or a maximum
     * length of 1000. The limit values described here are arbitary values, for actual
     * values consult the limits defined by your specific model.</p>
     */
    inline void SetStopSequences(const Aws::Vector<Aws::String>& value) { m_stopSequencesHasBeenSet = true; m_stopSequences = value; }

    /**
     * <p>A list of sequences of characters that, if generated, will cause the model to
     * stop generating further tokens. Do not use a minimum length of 1 or a maximum
     * length of 1000. The limit values described here are arbitary values, for actual
     * values consult the limits defined by your specific model.</p>
     */
    inline void SetStopSequences(Aws::Vector<Aws::String>&& value) { m_stopSequencesHasBeenSet = true; m_stopSequences = std::move(value); }

    /**
     * <p>A list of sequences of characters that, if generated, will cause the model to
     * stop generating further tokens. Do not use a minimum length of 1 or a maximum
     * length of 1000. The limit values described here are arbitary values, for actual
     * values consult the limits defined by your specific model.</p>
     */
    inline TextInferenceConfig& WithStopSequences(const Aws::Vector<Aws::String>& value) { SetStopSequences(value); return *this;}

    /**
     * <p>A list of sequences of characters that, if generated, will cause the model to
     * stop generating further tokens. Do not use a minimum length of 1 or a maximum
     * length of 1000. The limit values described here are arbitary values, for actual
     * values consult the limits defined by your specific model.</p>
     */
    inline TextInferenceConfig& WithStopSequences(Aws::Vector<Aws::String>&& value) { SetStopSequences(std::move(value)); return *this;}

    /**
     * <p>A list of sequences of characters that, if generated, will cause the model to
     * stop generating further tokens. Do not use a minimum length of 1 or a maximum
     * length of 1000. The limit values described here are arbitary values, for actual
     * values consult the limits defined by your specific model.</p>
     */
    inline TextInferenceConfig& AddStopSequences(const Aws::String& value) { m_stopSequencesHasBeenSet = true; m_stopSequences.push_back(value); return *this; }

    /**
     * <p>A list of sequences of characters that, if generated, will cause the model to
     * stop generating further tokens. Do not use a minimum length of 1 or a maximum
     * length of 1000. The limit values described here are arbitary values, for actual
     * values consult the limits defined by your specific model.</p>
     */
    inline TextInferenceConfig& AddStopSequences(Aws::String&& value) { m_stopSequencesHasBeenSet = true; m_stopSequences.push_back(std::move(value)); return *this; }

    /**
     * <p>A list of sequences of characters that, if generated, will cause the model to
     * stop generating further tokens. Do not use a minimum length of 1 or a maximum
     * length of 1000. The limit values described here are arbitary values, for actual
     * values consult the limits defined by your specific model.</p>
     */
    inline TextInferenceConfig& AddStopSequences(const char* value) { m_stopSequencesHasBeenSet = true; m_stopSequences.push_back(value); return *this; }


    /**
     * <p> Controls the random-ness of text generated by the language model,
     * influencing how much the model sticks to the most predictable next words versus
     * exploring more surprising options. A lower temperature value (e.g. 0.2 or 0.3)
     * makes model outputs more deterministic or predictable, while a higher
     * temperature (e.g. 0.8 or 0.9) makes the outputs more creative or unpredictable.
     * </p>
     */
    inline double GetTemperature() const{ return m_temperature; }

    /**
     * <p> Controls the random-ness of text generated by the language model,
     * influencing how much the model sticks to the most predictable next words versus
     * exploring more surprising options. A lower temperature value (e.g. 0.2 or 0.3)
     * makes model outputs more deterministic or predictable, while a higher
     * temperature (e.g. 0.8 or 0.9) makes the outputs more creative or unpredictable.
     * </p>
     */
    inline bool TemperatureHasBeenSet() const { return m_temperatureHasBeenSet; }

    /**
     * <p> Controls the random-ness of text generated by the language model,
     * influencing how much the model sticks to the most predictable next words versus
     * exploring more surprising options. A lower temperature value (e.g. 0.2 or 0.3)
     * makes model outputs more deterministic or predictable, while a higher
     * temperature (e.g. 0.8 or 0.9) makes the outputs more creative or unpredictable.
     * </p>
     */
    inline void SetTemperature(double value) { m_temperatureHasBeenSet = true; m_temperature = value; }

    /**
     * <p> Controls the random-ness of text generated by the language model,
     * influencing how much the model sticks to the most predictable next words versus
     * exploring more surprising options. A lower temperature value (e.g. 0.2 or 0.3)
     * makes model outputs more deterministic or predictable, while a higher
     * temperature (e.g. 0.8 or 0.9) makes the outputs more creative or unpredictable.
     * </p>
     */
    inline TextInferenceConfig& WithTemperature(double value) { SetTemperature(value); return *this;}


    /**
     * <p> A probability distribution threshold which controls what the model considers
     * for the set of possible next tokens. The model will only consider the top p% of
     * the probability distribution when generating the next token. </p>
     */
    inline double GetTopP() const{ return m_topP; }

    /**
     * <p> A probability distribution threshold which controls what the model considers
     * for the set of possible next tokens. The model will only consider the top p% of
     * the probability distribution when generating the next token. </p>
     */
    inline bool TopPHasBeenSet() const { return m_topPHasBeenSet; }

    /**
     * <p> A probability distribution threshold which controls what the model considers
     * for the set of possible next tokens. The model will only consider the top p% of
     * the probability distribution when generating the next token. </p>
     */
    inline void SetTopP(double value) { m_topPHasBeenSet = true; m_topP = value; }

    /**
     * <p> A probability distribution threshold which controls what the model considers
     * for the set of possible next tokens. The model will only consider the top p% of
     * the probability distribution when generating the next token. </p>
     */
    inline TextInferenceConfig& WithTopP(double value) { SetTopP(value); return *this;}

  private:

    int m_maxTokens;
    bool m_maxTokensHasBeenSet = false;

    Aws::Vector<Aws::String> m_stopSequences;
    bool m_stopSequencesHasBeenSet = false;

    double m_temperature;
    bool m_temperatureHasBeenSet = false;

    double m_topP;
    bool m_topPHasBeenSet = false;
  };

} // namespace Model
} // namespace BedrockAgentRuntime
} // namespace Aws
