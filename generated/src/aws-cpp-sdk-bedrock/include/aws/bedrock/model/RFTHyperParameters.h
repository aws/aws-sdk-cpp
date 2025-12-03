/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock/Bedrock_EXPORTS.h>
#include <aws/bedrock/model/ReasoningEffort.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace Bedrock {
namespace Model {

/**
 * <p> Hyperparameters for controlling the reinforcement fine-tuning training
 * process, including learning settings and evaluation intervals. </p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-2023-04-20/RFTHyperParameters">AWS
 * API Reference</a></p>
 */
class RFTHyperParameters {
 public:
  AWS_BEDROCK_API RFTHyperParameters() = default;
  AWS_BEDROCK_API RFTHyperParameters(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCK_API RFTHyperParameters& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCK_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p> Number of training epochs to run during reinforcement fine-tuning. Higher
   * values may improve performance but increase training time. </p>
   */
  inline int GetEpochCount() const { return m_epochCount; }
  inline bool EpochCountHasBeenSet() const { return m_epochCountHasBeenSet; }
  inline void SetEpochCount(int value) {
    m_epochCountHasBeenSet = true;
    m_epochCount = value;
  }
  inline RFTHyperParameters& WithEpochCount(int value) {
    SetEpochCount(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p> Number of training samples processed in each batch during reinforcement
   * fine-tuning (RFT) training. Larger batches may improve training stability. </p>
   */
  inline int GetBatchSize() const { return m_batchSize; }
  inline bool BatchSizeHasBeenSet() const { return m_batchSizeHasBeenSet; }
  inline void SetBatchSize(int value) {
    m_batchSizeHasBeenSet = true;
    m_batchSize = value;
  }
  inline RFTHyperParameters& WithBatchSize(int value) {
    SetBatchSize(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p> Learning rate for the reinforcement fine-tuning. Controls how quickly the
   * model adapts to reward signals. </p>
   */
  inline double GetLearningRate() const { return m_learningRate; }
  inline bool LearningRateHasBeenSet() const { return m_learningRateHasBeenSet; }
  inline void SetLearningRate(double value) {
    m_learningRateHasBeenSet = true;
    m_learningRate = value;
  }
  inline RFTHyperParameters& WithLearningRate(double value) {
    SetLearningRate(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p> Maximum length of input prompts during RFT training, measured in tokens.
   * Longer prompts allow more context but increase memory usage and training-time.
   * </p>
   */
  inline int GetMaxPromptLength() const { return m_maxPromptLength; }
  inline bool MaxPromptLengthHasBeenSet() const { return m_maxPromptLengthHasBeenSet; }
  inline void SetMaxPromptLength(int value) {
    m_maxPromptLengthHasBeenSet = true;
    m_maxPromptLength = value;
  }
  inline RFTHyperParameters& WithMaxPromptLength(int value) {
    SetMaxPromptLength(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p> Number of response samples generated per prompt during RFT training. More
   * samples provide better reward signal estimation. </p>
   */
  inline int GetTrainingSamplePerPrompt() const { return m_trainingSamplePerPrompt; }
  inline bool TrainingSamplePerPromptHasBeenSet() const { return m_trainingSamplePerPromptHasBeenSet; }
  inline void SetTrainingSamplePerPrompt(int value) {
    m_trainingSamplePerPromptHasBeenSet = true;
    m_trainingSamplePerPrompt = value;
  }
  inline RFTHyperParameters& WithTrainingSamplePerPrompt(int value) {
    SetTrainingSamplePerPrompt(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p> Maximum number of tokens the model can generate in response to each prompt
   * during RFT training. </p>
   */
  inline int GetInferenceMaxTokens() const { return m_inferenceMaxTokens; }
  inline bool InferenceMaxTokensHasBeenSet() const { return m_inferenceMaxTokensHasBeenSet; }
  inline void SetInferenceMaxTokens(int value) {
    m_inferenceMaxTokensHasBeenSet = true;
    m_inferenceMaxTokens = value;
  }
  inline RFTHyperParameters& WithInferenceMaxTokens(int value) {
    SetInferenceMaxTokens(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p> Level of reasoning effort applied during RFT training. Higher values may
   * improve response quality but increase training time. </p>
   */
  inline ReasoningEffort GetReasoningEffort() const { return m_reasoningEffort; }
  inline bool ReasoningEffortHasBeenSet() const { return m_reasoningEffortHasBeenSet; }
  inline void SetReasoningEffort(ReasoningEffort value) {
    m_reasoningEffortHasBeenSet = true;
    m_reasoningEffort = value;
  }
  inline RFTHyperParameters& WithReasoningEffort(ReasoningEffort value) {
    SetReasoningEffort(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p> Interval between evaluation runs during RFT training, measured in training
   * steps. More frequent evaluation provides better monitoring. </p>
   */
  inline int GetEvalInterval() const { return m_evalInterval; }
  inline bool EvalIntervalHasBeenSet() const { return m_evalIntervalHasBeenSet; }
  inline void SetEvalInterval(int value) {
    m_evalIntervalHasBeenSet = true;
    m_evalInterval = value;
  }
  inline RFTHyperParameters& WithEvalInterval(int value) {
    SetEvalInterval(value);
    return *this;
  }
  ///@}
 private:
  int m_epochCount{0};
  bool m_epochCountHasBeenSet = false;

  int m_batchSize{0};
  bool m_batchSizeHasBeenSet = false;

  double m_learningRate{0.0};
  bool m_learningRateHasBeenSet = false;

  int m_maxPromptLength{0};
  bool m_maxPromptLengthHasBeenSet = false;

  int m_trainingSamplePerPrompt{0};
  bool m_trainingSamplePerPromptHasBeenSet = false;

  int m_inferenceMaxTokens{0};
  bool m_inferenceMaxTokensHasBeenSet = false;

  ReasoningEffort m_reasoningEffort{ReasoningEffort::NOT_SET};
  bool m_reasoningEffortHasBeenSet = false;

  int m_evalInterval{0};
  bool m_evalIntervalHasBeenSet = false;
};

}  // namespace Model
}  // namespace Bedrock
}  // namespace Aws
