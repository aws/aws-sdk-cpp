/**
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
    AWS_BEDROCKRUNTIME_API InferenceConfiguration() = default;
    AWS_BEDROCKRUNTIME_API InferenceConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKRUNTIME_API InferenceConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKRUNTIME_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The maximum number of tokens to allow in the generated response. The default
     * value is the maximum allowed value for the model that you are using. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/bedrock/latest/userguide/model-parameters.html">Inference
     * parameters for foundation models</a>. </p>
     */
    inline int GetMaxTokens() const { return m_maxTokens; }
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
    inline double GetTemperature() const { return m_temperature; }
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
    inline double GetTopP() const { return m_topP; }
    inline bool TopPHasBeenSet() const { return m_topPHasBeenSet; }
    inline void SetTopP(double value) { m_topPHasBeenSet = true; m_topP = value; }
    inline InferenceConfiguration& WithTopP(double value) { SetTopP(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of stop sequences. A stop sequence is a sequence of characters that
     * causes the model to stop generating the response. </p>
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

    int m_maxTokens{0};
    bool m_maxTokensHasBeenSet = false;

    double m_temperature{0.0};
    bool m_temperatureHasBeenSet = false;

    double m_topP{0.0};
    bool m_topPHasBeenSet = false;

    Aws::Vector<Aws::String> m_stopSequences;
    bool m_stopSequencesHasBeenSet = false;
  };

} // namespace Model
} // namespace BedrockRuntime
} // namespace Aws
