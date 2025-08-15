/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agent/BedrockAgent_EXPORTS.h>
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
namespace BedrockAgent
{
namespace Model
{

  /**
   * <p>Contains inference configurations related to model inference for a prompt.
   * For more information, see <a
   * href="https://docs.aws.amazon.com/bedrock/latest/userguide/inference-parameters.html">Inference
   * parameters</a>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agent-2023-06-05/PromptModelInferenceConfiguration">AWS
   * API Reference</a></p>
   */
  class PromptModelInferenceConfiguration
  {
  public:
    AWS_BEDROCKAGENT_API PromptModelInferenceConfiguration() = default;
    AWS_BEDROCKAGENT_API PromptModelInferenceConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENT_API PromptModelInferenceConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Controls the randomness of the response. Choose a lower value for more
     * predictable outputs and a higher value for more surprising outputs.</p>
     */
    inline double GetTemperature() const { return m_temperature; }
    inline bool TemperatureHasBeenSet() const { return m_temperatureHasBeenSet; }
    inline void SetTemperature(double value) { m_temperatureHasBeenSet = true; m_temperature = value; }
    inline PromptModelInferenceConfiguration& WithTemperature(double value) { SetTemperature(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The percentage of most-likely candidates that the model considers for the
     * next token.</p>
     */
    inline double GetTopP() const { return m_topP; }
    inline bool TopPHasBeenSet() const { return m_topPHasBeenSet; }
    inline void SetTopP(double value) { m_topPHasBeenSet = true; m_topP = value; }
    inline PromptModelInferenceConfiguration& WithTopP(double value) { SetTopP(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum number of tokens to return in the response.</p>
     */
    inline int GetMaxTokens() const { return m_maxTokens; }
    inline bool MaxTokensHasBeenSet() const { return m_maxTokensHasBeenSet; }
    inline void SetMaxTokens(int value) { m_maxTokensHasBeenSet = true; m_maxTokens = value; }
    inline PromptModelInferenceConfiguration& WithMaxTokens(int value) { SetMaxTokens(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of strings that define sequences after which the model will stop
     * generating.</p>
     */
    inline const Aws::Vector<Aws::String>& GetStopSequences() const { return m_stopSequences; }
    inline bool StopSequencesHasBeenSet() const { return m_stopSequencesHasBeenSet; }
    template<typename StopSequencesT = Aws::Vector<Aws::String>>
    void SetStopSequences(StopSequencesT&& value) { m_stopSequencesHasBeenSet = true; m_stopSequences = std::forward<StopSequencesT>(value); }
    template<typename StopSequencesT = Aws::Vector<Aws::String>>
    PromptModelInferenceConfiguration& WithStopSequences(StopSequencesT&& value) { SetStopSequences(std::forward<StopSequencesT>(value)); return *this;}
    template<typename StopSequencesT = Aws::String>
    PromptModelInferenceConfiguration& AddStopSequences(StopSequencesT&& value) { m_stopSequencesHasBeenSet = true; m_stopSequences.emplace_back(std::forward<StopSequencesT>(value)); return *this; }
    ///@}
  private:

    double m_temperature{0.0};
    bool m_temperatureHasBeenSet = false;

    double m_topP{0.0};
    bool m_topPHasBeenSet = false;

    int m_maxTokens{0};
    bool m_maxTokensHasBeenSet = false;

    Aws::Vector<Aws::String> m_stopSequences;
    bool m_stopSequencesHasBeenSet = false;
  };

} // namespace Model
} // namespace BedrockAgent
} // namespace Aws
