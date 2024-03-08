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
   * <p>Specifications about the inference parameters that were provided alongside
   * the prompt. These are specified in the <a
   * href="https://docs.aws.amazon.com/bedrock/latest/APIReference/API_agent_PromptOverrideConfiguration.html">PromptOverrideConfiguration</a>
   * object that was set when the agent was created or updated. For more information,
   * see <a
   * href="https://docs.aws.amazon.com/bedrock/latest/userguide/model-parameters.html">Inference
   * parameters for foundation models</a>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agent-runtime-2023-07-26/InferenceConfiguration">AWS
   * API Reference</a></p>
   */
  class InferenceConfiguration
  {
  public:
    AWS_BEDROCKAGENTRUNTIME_API InferenceConfiguration();
    AWS_BEDROCKAGENTRUNTIME_API InferenceConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENTRUNTIME_API InferenceConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENTRUNTIME_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The maximum number of tokens allowed in the generated response.</p>
     */
    inline int GetMaximumLength() const{ return m_maximumLength; }

    /**
     * <p>The maximum number of tokens allowed in the generated response.</p>
     */
    inline bool MaximumLengthHasBeenSet() const { return m_maximumLengthHasBeenSet; }

    /**
     * <p>The maximum number of tokens allowed in the generated response.</p>
     */
    inline void SetMaximumLength(int value) { m_maximumLengthHasBeenSet = true; m_maximumLength = value; }

    /**
     * <p>The maximum number of tokens allowed in the generated response.</p>
     */
    inline InferenceConfiguration& WithMaximumLength(int value) { SetMaximumLength(value); return *this;}


    /**
     * <p>A list of stop sequences. A stop sequence is a sequence of characters that
     * causes the model to stop generating the response.</p>
     */
    inline const Aws::Vector<Aws::String>& GetStopSequences() const{ return m_stopSequences; }

    /**
     * <p>A list of stop sequences. A stop sequence is a sequence of characters that
     * causes the model to stop generating the response.</p>
     */
    inline bool StopSequencesHasBeenSet() const { return m_stopSequencesHasBeenSet; }

    /**
     * <p>A list of stop sequences. A stop sequence is a sequence of characters that
     * causes the model to stop generating the response.</p>
     */
    inline void SetStopSequences(const Aws::Vector<Aws::String>& value) { m_stopSequencesHasBeenSet = true; m_stopSequences = value; }

    /**
     * <p>A list of stop sequences. A stop sequence is a sequence of characters that
     * causes the model to stop generating the response.</p>
     */
    inline void SetStopSequences(Aws::Vector<Aws::String>&& value) { m_stopSequencesHasBeenSet = true; m_stopSequences = std::move(value); }

    /**
     * <p>A list of stop sequences. A stop sequence is a sequence of characters that
     * causes the model to stop generating the response.</p>
     */
    inline InferenceConfiguration& WithStopSequences(const Aws::Vector<Aws::String>& value) { SetStopSequences(value); return *this;}

    /**
     * <p>A list of stop sequences. A stop sequence is a sequence of characters that
     * causes the model to stop generating the response.</p>
     */
    inline InferenceConfiguration& WithStopSequences(Aws::Vector<Aws::String>&& value) { SetStopSequences(std::move(value)); return *this;}

    /**
     * <p>A list of stop sequences. A stop sequence is a sequence of characters that
     * causes the model to stop generating the response.</p>
     */
    inline InferenceConfiguration& AddStopSequences(const Aws::String& value) { m_stopSequencesHasBeenSet = true; m_stopSequences.push_back(value); return *this; }

    /**
     * <p>A list of stop sequences. A stop sequence is a sequence of characters that
     * causes the model to stop generating the response.</p>
     */
    inline InferenceConfiguration& AddStopSequences(Aws::String&& value) { m_stopSequencesHasBeenSet = true; m_stopSequences.push_back(std::move(value)); return *this; }

    /**
     * <p>A list of stop sequences. A stop sequence is a sequence of characters that
     * causes the model to stop generating the response.</p>
     */
    inline InferenceConfiguration& AddStopSequences(const char* value) { m_stopSequencesHasBeenSet = true; m_stopSequences.push_back(value); return *this; }


    /**
     * <p>The likelihood of the model selecting higher-probability options while
     * generating a response. A lower value makes the model more likely to choose
     * higher-probability options, while a higher value makes the model more likely to
     * choose lower-probability options.</p>
     */
    inline double GetTemperature() const{ return m_temperature; }

    /**
     * <p>The likelihood of the model selecting higher-probability options while
     * generating a response. A lower value makes the model more likely to choose
     * higher-probability options, while a higher value makes the model more likely to
     * choose lower-probability options.</p>
     */
    inline bool TemperatureHasBeenSet() const { return m_temperatureHasBeenSet; }

    /**
     * <p>The likelihood of the model selecting higher-probability options while
     * generating a response. A lower value makes the model more likely to choose
     * higher-probability options, while a higher value makes the model more likely to
     * choose lower-probability options.</p>
     */
    inline void SetTemperature(double value) { m_temperatureHasBeenSet = true; m_temperature = value; }

    /**
     * <p>The likelihood of the model selecting higher-probability options while
     * generating a response. A lower value makes the model more likely to choose
     * higher-probability options, while a higher value makes the model more likely to
     * choose lower-probability options.</p>
     */
    inline InferenceConfiguration& WithTemperature(double value) { SetTemperature(value); return *this;}


    /**
     * <p>While generating a response, the model determines the probability of the
     * following token at each point of generation. The value that you set for
     * <code>topK</code> is the number of most-likely candidates from which the model
     * chooses the next token in the sequence. For example, if you set
     * <code>topK</code> to 50, the model selects the next token from among the top 50
     * most likely choices.</p>
     */
    inline int GetTopK() const{ return m_topK; }

    /**
     * <p>While generating a response, the model determines the probability of the
     * following token at each point of generation. The value that you set for
     * <code>topK</code> is the number of most-likely candidates from which the model
     * chooses the next token in the sequence. For example, if you set
     * <code>topK</code> to 50, the model selects the next token from among the top 50
     * most likely choices.</p>
     */
    inline bool TopKHasBeenSet() const { return m_topKHasBeenSet; }

    /**
     * <p>While generating a response, the model determines the probability of the
     * following token at each point of generation. The value that you set for
     * <code>topK</code> is the number of most-likely candidates from which the model
     * chooses the next token in the sequence. For example, if you set
     * <code>topK</code> to 50, the model selects the next token from among the top 50
     * most likely choices.</p>
     */
    inline void SetTopK(int value) { m_topKHasBeenSet = true; m_topK = value; }

    /**
     * <p>While generating a response, the model determines the probability of the
     * following token at each point of generation. The value that you set for
     * <code>topK</code> is the number of most-likely candidates from which the model
     * chooses the next token in the sequence. For example, if you set
     * <code>topK</code> to 50, the model selects the next token from among the top 50
     * most likely choices.</p>
     */
    inline InferenceConfiguration& WithTopK(int value) { SetTopK(value); return *this;}


    /**
     * <p>While generating a response, the model determines the probability of the
     * following token at each point of generation. The value that you set for
     * <code>Top P</code> determines the number of most-likely candidates from which
     * the model chooses the next token in the sequence. For example, if you set
     * <code>topP</code> to 80, the model only selects the next token from the top 80%
     * of the probability distribution of next tokens.</p>
     */
    inline double GetTopP() const{ return m_topP; }

    /**
     * <p>While generating a response, the model determines the probability of the
     * following token at each point of generation. The value that you set for
     * <code>Top P</code> determines the number of most-likely candidates from which
     * the model chooses the next token in the sequence. For example, if you set
     * <code>topP</code> to 80, the model only selects the next token from the top 80%
     * of the probability distribution of next tokens.</p>
     */
    inline bool TopPHasBeenSet() const { return m_topPHasBeenSet; }

    /**
     * <p>While generating a response, the model determines the probability of the
     * following token at each point of generation. The value that you set for
     * <code>Top P</code> determines the number of most-likely candidates from which
     * the model chooses the next token in the sequence. For example, if you set
     * <code>topP</code> to 80, the model only selects the next token from the top 80%
     * of the probability distribution of next tokens.</p>
     */
    inline void SetTopP(double value) { m_topPHasBeenSet = true; m_topP = value; }

    /**
     * <p>While generating a response, the model determines the probability of the
     * following token at each point of generation. The value that you set for
     * <code>Top P</code> determines the number of most-likely candidates from which
     * the model chooses the next token in the sequence. For example, if you set
     * <code>topP</code> to 80, the model only selects the next token from the top 80%
     * of the probability distribution of next tokens.</p>
     */
    inline InferenceConfiguration& WithTopP(double value) { SetTopP(value); return *this;}

  private:

    int m_maximumLength;
    bool m_maximumLengthHasBeenSet = false;

    Aws::Vector<Aws::String> m_stopSequences;
    bool m_stopSequencesHasBeenSet = false;

    double m_temperature;
    bool m_temperatureHasBeenSet = false;

    int m_topK;
    bool m_topKHasBeenSet = false;

    double m_topP;
    bool m_topPHasBeenSet = false;
  };

} // namespace Model
} // namespace BedrockAgentRuntime
} // namespace Aws
