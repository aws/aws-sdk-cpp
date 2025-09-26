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
    AWS_BEDROCKAGENTRUNTIME_API InferenceConfiguration() = default;
    AWS_BEDROCKAGENTRUNTIME_API InferenceConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENTRUNTIME_API InferenceConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENTRUNTIME_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The likelihood of the model selecting higher-probability options while
     * generating a response. A lower value makes the model more likely to choose
     * higher-probability options, while a higher value makes the model more likely to
     * choose lower-probability options.</p>
     */
    inline double GetTemperature() const { return m_temperature; }
    inline bool TemperatureHasBeenSet() const { return m_temperatureHasBeenSet; }
    inline void SetTemperature(double value) { m_temperatureHasBeenSet = true; m_temperature = value; }
    inline InferenceConfiguration& WithTemperature(double value) { SetTemperature(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>While generating a response, the model determines the probability of the
     * following token at each point of generation. The value that you set for
     * <code>Top P</code> determines the number of most-likely candidates from which
     * the model chooses the next token in the sequence. For example, if you set
     * <code>topP</code> to 0.8, the model only selects the next token from the top 80%
     * of the probability distribution of next tokens.</p>
     */
    inline double GetTopP() const { return m_topP; }
    inline bool TopPHasBeenSet() const { return m_topPHasBeenSet; }
    inline void SetTopP(double value) { m_topPHasBeenSet = true; m_topP = value; }
    inline InferenceConfiguration& WithTopP(double value) { SetTopP(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>While generating a response, the model determines the probability of the
     * following token at each point of generation. The value that you set for
     * <code>topK</code> is the number of most-likely candidates from which the model
     * chooses the next token in the sequence. For example, if you set
     * <code>topK</code> to 50, the model selects the next token from among the top 50
     * most likely choices.</p>
     */
    inline int GetTopK() const { return m_topK; }
    inline bool TopKHasBeenSet() const { return m_topKHasBeenSet; }
    inline void SetTopK(int value) { m_topKHasBeenSet = true; m_topK = value; }
    inline InferenceConfiguration& WithTopK(int value) { SetTopK(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum number of tokens allowed in the generated response.</p>
     */
    inline int GetMaximumLength() const { return m_maximumLength; }
    inline bool MaximumLengthHasBeenSet() const { return m_maximumLengthHasBeenSet; }
    inline void SetMaximumLength(int value) { m_maximumLengthHasBeenSet = true; m_maximumLength = value; }
    inline InferenceConfiguration& WithMaximumLength(int value) { SetMaximumLength(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of stop sequences. A stop sequence is a sequence of characters that
     * causes the model to stop generating the response.</p>
     */
    inline const Aws::Vector<Aws::String>& GetStopSequences() const { return m_stopSequences; }
    inline bool StopSequencesHasBeenSet() const { return m_stopSequencesHasBeenSet; }
    template<typename StopSequencesT = Aws::Vector<Aws::String>>
    void SetStopSequences(StopSequencesT&& value) { m_stopSequencesHasBeenSet = true; m_stopSequences = std::forward<StopSequencesT>(value); }
    template<typename StopSequencesT = Aws::Vector<Aws::String>>
    InferenceConfiguration& WithStopSequences(StopSequencesT&& value) { SetStopSequences(std::forward<StopSequencesT>(value)); return *this;}
    template<typename StopSequencesT = Aws::String>
    InferenceConfiguration& AddStopSequences(StopSequencesT&& value) { m_stopSequencesHasBeenSet = true; m_stopSequences.emplace_back(std::forward<StopSequencesT>(value)); return *this; }
    ///@}
  private:

    double m_temperature{0.0};
    bool m_temperatureHasBeenSet = false;

    double m_topP{0.0};
    bool m_topPHasBeenSet = false;

    int m_topK{0};
    bool m_topKHasBeenSet = false;

    int m_maximumLength{0};
    bool m_maximumLengthHasBeenSet = false;

    Aws::Vector<Aws::String> m_stopSequences;
    bool m_stopSequencesHasBeenSet = false;
  };

} // namespace Model
} // namespace BedrockAgentRuntime
} // namespace Aws
