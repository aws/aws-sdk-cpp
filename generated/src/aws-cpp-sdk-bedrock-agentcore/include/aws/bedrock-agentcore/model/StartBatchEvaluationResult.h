/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agentcore/BedrockAgentCore_EXPORTS.h>
#include <aws/bedrock-agentcore/model/BatchEvaluationStatus.h>
#include <aws/bedrock-agentcore/model/Evaluator.h>
#include <aws/bedrock-agentcore/model/OutputConfig.h>
#include <aws/core/http/HttpResponse.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

#include <utility>

namespace Aws {
template <typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils {
namespace Json {
class JsonValue;
}  // namespace Json
}  // namespace Utils
namespace BedrockAgentCore {
namespace Model {
class StartBatchEvaluationResult {
 public:
  AWS_BEDROCKAGENTCORE_API StartBatchEvaluationResult() = default;
  AWS_BEDROCKAGENTCORE_API StartBatchEvaluationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_BEDROCKAGENTCORE_API StartBatchEvaluationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>The unique identifier of the created batch evaluation.</p>
   */
  inline const Aws::String& GetBatchEvaluationId() const { return m_batchEvaluationId; }
  template <typename BatchEvaluationIdT = Aws::String>
  void SetBatchEvaluationId(BatchEvaluationIdT&& value) {
    m_batchEvaluationIdHasBeenSet = true;
    m_batchEvaluationId = std::forward<BatchEvaluationIdT>(value);
  }
  template <typename BatchEvaluationIdT = Aws::String>
  StartBatchEvaluationResult& WithBatchEvaluationId(BatchEvaluationIdT&& value) {
    SetBatchEvaluationId(std::forward<BatchEvaluationIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) of the created batch evaluation.</p>
   */
  inline const Aws::String& GetBatchEvaluationArn() const { return m_batchEvaluationArn; }
  template <typename BatchEvaluationArnT = Aws::String>
  void SetBatchEvaluationArn(BatchEvaluationArnT&& value) {
    m_batchEvaluationArnHasBeenSet = true;
    m_batchEvaluationArn = std::forward<BatchEvaluationArnT>(value);
  }
  template <typename BatchEvaluationArnT = Aws::String>
  StartBatchEvaluationResult& WithBatchEvaluationArn(BatchEvaluationArnT&& value) {
    SetBatchEvaluationArn(std::forward<BatchEvaluationArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The name of the batch evaluation.</p>
   */
  inline const Aws::String& GetBatchEvaluationName() const { return m_batchEvaluationName; }
  template <typename BatchEvaluationNameT = Aws::String>
  void SetBatchEvaluationName(BatchEvaluationNameT&& value) {
    m_batchEvaluationNameHasBeenSet = true;
    m_batchEvaluationName = std::forward<BatchEvaluationNameT>(value);
  }
  template <typename BatchEvaluationNameT = Aws::String>
  StartBatchEvaluationResult& WithBatchEvaluationName(BatchEvaluationNameT&& value) {
    SetBatchEvaluationName(std::forward<BatchEvaluationNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The list of evaluators applied during the batch evaluation.</p>
   */
  inline const Aws::Vector<Evaluator>& GetEvaluators() const { return m_evaluators; }
  template <typename EvaluatorsT = Aws::Vector<Evaluator>>
  void SetEvaluators(EvaluatorsT&& value) {
    m_evaluatorsHasBeenSet = true;
    m_evaluators = std::forward<EvaluatorsT>(value);
  }
  template <typename EvaluatorsT = Aws::Vector<Evaluator>>
  StartBatchEvaluationResult& WithEvaluators(EvaluatorsT&& value) {
    SetEvaluators(std::forward<EvaluatorsT>(value));
    return *this;
  }
  template <typename EvaluatorsT = Evaluator>
  StartBatchEvaluationResult& AddEvaluators(EvaluatorsT&& value) {
    m_evaluatorsHasBeenSet = true;
    m_evaluators.emplace_back(std::forward<EvaluatorsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The status of the batch evaluation.</p>
   */
  inline BatchEvaluationStatus GetStatus() const { return m_status; }
  inline void SetStatus(BatchEvaluationStatus value) {
    m_statusHasBeenSet = true;
    m_status = value;
  }
  inline StartBatchEvaluationResult& WithStatus(BatchEvaluationStatus value) {
    SetStatus(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The timestamp when the batch evaluation was created.</p>
   */
  inline const Aws::Utils::DateTime& GetCreatedAt() const { return m_createdAt; }
  template <typename CreatedAtT = Aws::Utils::DateTime>
  void SetCreatedAt(CreatedAtT&& value) {
    m_createdAtHasBeenSet = true;
    m_createdAt = std::forward<CreatedAtT>(value);
  }
  template <typename CreatedAtT = Aws::Utils::DateTime>
  StartBatchEvaluationResult& WithCreatedAt(CreatedAtT&& value) {
    SetCreatedAt(std::forward<CreatedAtT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The output configuration specifying where evaluation results are written.</p>
   */
  inline const OutputConfig& GetOutputConfig() const { return m_outputConfig; }
  template <typename OutputConfigT = OutputConfig>
  void SetOutputConfig(OutputConfigT&& value) {
    m_outputConfigHasBeenSet = true;
    m_outputConfig = std::forward<OutputConfigT>(value);
  }
  template <typename OutputConfigT = OutputConfig>
  StartBatchEvaluationResult& WithOutputConfig(OutputConfigT&& value) {
    SetOutputConfig(std::forward<OutputConfigT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The description of the batch evaluation.</p>
   */
  inline const Aws::String& GetDescription() const { return m_description; }
  template <typename DescriptionT = Aws::String>
  void SetDescription(DescriptionT&& value) {
    m_descriptionHasBeenSet = true;
    m_description = std::forward<DescriptionT>(value);
  }
  template <typename DescriptionT = Aws::String>
  StartBatchEvaluationResult& WithDescription(DescriptionT&& value) {
    SetDescription(std::forward<DescriptionT>(value));
    return *this;
  }
  ///@}

  ///@{

  inline const Aws::String& GetRequestId() const { return m_requestId; }
  template <typename RequestIdT = Aws::String>
  void SetRequestId(RequestIdT&& value) {
    m_requestIdHasBeenSet = true;
    m_requestId = std::forward<RequestIdT>(value);
  }
  template <typename RequestIdT = Aws::String>
  StartBatchEvaluationResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  Aws::String m_batchEvaluationId;

  Aws::String m_batchEvaluationArn;

  Aws::String m_batchEvaluationName;

  Aws::Vector<Evaluator> m_evaluators;

  BatchEvaluationStatus m_status{BatchEvaluationStatus::NOT_SET};

  Aws::Utils::DateTime m_createdAt{};

  OutputConfig m_outputConfig;

  Aws::String m_description;

  Aws::String m_requestId;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_batchEvaluationIdHasBeenSet = false;
  bool m_batchEvaluationArnHasBeenSet = false;
  bool m_batchEvaluationNameHasBeenSet = false;
  bool m_evaluatorsHasBeenSet = false;
  bool m_statusHasBeenSet = false;
  bool m_createdAtHasBeenSet = false;
  bool m_outputConfigHasBeenSet = false;
  bool m_descriptionHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace BedrockAgentCore
}  // namespace Aws
