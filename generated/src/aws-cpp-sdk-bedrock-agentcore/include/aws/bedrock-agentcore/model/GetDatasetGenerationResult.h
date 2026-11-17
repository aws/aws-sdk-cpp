/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agentcore/BedrockAgentCore_EXPORTS.h>
#include <aws/bedrock-agentcore/model/DatasetGenerationStatus.h>
#include <aws/bedrock-agentcore/model/GenerationErrorDetail.h>
#include <aws/bedrock-agentcore/model/GenerationResults.h>
#include <aws/bedrock-agentcore/model/GenerationSourceRecord.h>
#include <aws/bedrock-agentcore/model/RedactionSummary.h>
#include <aws/bedrock-agentcore/model/ScenarioType.h>
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
class GetDatasetGenerationResult {
 public:
  AWS_BEDROCKAGENTCORE_API GetDatasetGenerationResult() = default;
  AWS_BEDROCKAGENTCORE_API GetDatasetGenerationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_BEDROCKAGENTCORE_API GetDatasetGenerationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>The unique identifier of the dataset generation.</p>
   */
  inline const Aws::String& GetGenerationId() const { return m_generationId; }
  template <typename GenerationIdT = Aws::String>
  void SetGenerationId(GenerationIdT&& value) {
    m_generationIdHasBeenSet = true;
    m_generationId = std::forward<GenerationIdT>(value);
  }
  template <typename GenerationIdT = Aws::String>
  GetDatasetGenerationResult& WithGenerationId(GenerationIdT&& value) {
    SetGenerationId(std::forward<GenerationIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The name of the dataset generation.</p>
   */
  inline const Aws::String& GetName() const { return m_name; }
  template <typename NameT = Aws::String>
  void SetName(NameT&& value) {
    m_nameHasBeenSet = true;
    m_name = std::forward<NameT>(value);
  }
  template <typename NameT = Aws::String>
  GetDatasetGenerationResult& WithName(NameT&& value) {
    SetName(std::forward<NameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The description of the dataset generation.</p>
   */
  inline const Aws::String& GetDescription() const { return m_description; }
  template <typename DescriptionT = Aws::String>
  void SetDescription(DescriptionT&& value) {
    m_descriptionHasBeenSet = true;
    m_description = std::forward<DescriptionT>(value);
  }
  template <typename DescriptionT = Aws::String>
  GetDatasetGenerationResult& WithDescription(DescriptionT&& value) {
    SetDescription(std::forward<DescriptionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The unique identifier of the dataset.</p>
   */
  inline const Aws::String& GetDatasetId() const { return m_datasetId; }
  template <typename DatasetIdT = Aws::String>
  void SetDatasetId(DatasetIdT&& value) {
    m_datasetIdHasBeenSet = true;
    m_datasetId = std::forward<DatasetIdT>(value);
  }
  template <typename DatasetIdT = Aws::String>
  GetDatasetGenerationResult& WithDatasetId(DatasetIdT&& value) {
    SetDatasetId(std::forward<DatasetIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The type of scenario the generation produces. This is the value from the
   * request, or <code>DYNAMIC</code> if the request didn't specify one.</p>
   */
  inline ScenarioType GetScenarioType() const { return m_scenarioType; }
  inline void SetScenarioType(ScenarioType value) {
    m_scenarioTypeHasBeenSet = true;
    m_scenarioType = value;
  }
  inline GetDatasetGenerationResult& WithScenarioType(ScenarioType value) {
    SetScenarioType(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The status of the dataset generation.</p>
   */
  inline DatasetGenerationStatus GetStatus() const { return m_status; }
  inline void SetStatus(DatasetGenerationStatus value) {
    m_statusHasBeenSet = true;
    m_status = value;
  }
  inline GetDatasetGenerationResult& WithStatus(DatasetGenerationStatus value) {
    SetStatus(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The reason the dataset generation failed. Present only when the status is
   * <code>FAILED</code>.</p>
   */
  inline const Aws::String& GetFailureReason() const { return m_failureReason; }
  template <typename FailureReasonT = Aws::String>
  void SetFailureReason(FailureReasonT&& value) {
    m_failureReasonHasBeenSet = true;
    m_failureReason = std::forward<FailureReasonT>(value);
  }
  template <typename FailureReasonT = Aws::String>
  GetDatasetGenerationResult& WithFailureReason(FailureReasonT&& value) {
    SetFailureReason(std::forward<FailureReasonT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The time at which the dataset generation started.</p>
   */
  inline const Aws::Utils::DateTime& GetCreatedAt() const { return m_createdAt; }
  template <typename CreatedAtT = Aws::Utils::DateTime>
  void SetCreatedAt(CreatedAtT&& value) {
    m_createdAtHasBeenSet = true;
    m_createdAt = std::forward<CreatedAtT>(value);
  }
  template <typename CreatedAtT = Aws::Utils::DateTime>
  GetDatasetGenerationResult& WithCreatedAt(CreatedAtT&& value) {
    SetCreatedAt(std::forward<CreatedAtT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The time at which the dataset generation last changed status.</p>
   */
  inline const Aws::Utils::DateTime& GetUpdatedAt() const { return m_updatedAt; }
  template <typename UpdatedAtT = Aws::Utils::DateTime>
  void SetUpdatedAt(UpdatedAtT&& value) {
    m_updatedAtHasBeenSet = true;
    m_updatedAt = std::forward<UpdatedAtT>(value);
  }
  template <typename UpdatedAtT = Aws::Utils::DateTime>
  GetDatasetGenerationResult& WithUpdatedAt(UpdatedAtT&& value) {
    SetUpdatedAt(std::forward<UpdatedAtT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The time at which the dataset generation finished. Present only when the
   * generation has finished.</p>
   */
  inline const Aws::Utils::DateTime& GetCompletedAt() const { return m_completedAt; }
  template <typename CompletedAtT = Aws::Utils::DateTime>
  void SetCompletedAt(CompletedAtT&& value) {
    m_completedAtHasBeenSet = true;
    m_completedAt = std::forward<CompletedAtT>(value);
  }
  template <typename CompletedAtT = Aws::Utils::DateTime>
  GetDatasetGenerationResult& WithCompletedAt(CompletedAtT&& value) {
    SetCompletedAt(std::forward<CompletedAtT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The source the generation was started with, including the resolved time
   * window. If you selected sessions and traces by ID, the response gives the number
   * of IDs instead of the IDs.</p>
   */
  inline const GenerationSourceRecord& GetSource() const { return m_source; }
  template <typename SourceT = GenerationSourceRecord>
  void SetSource(SourceT&& value) {
    m_sourceHasBeenSet = true;
    m_source = std::forward<SourceT>(value);
  }
  template <typename SourceT = GenerationSourceRecord>
  GetDatasetGenerationResult& WithSource(SourceT&& value) {
    SetSource(std::forward<SourceT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Counts of the sessions, scenarios and examples the generation has
   * processed.</p>
   */
  inline const GenerationResults& GetGenerationResults() const { return m_generationResults; }
  template <typename GenerationResultsT = GenerationResults>
  void SetGenerationResults(GenerationResultsT&& value) {
    m_generationResultsHasBeenSet = true;
    m_generationResults = std::forward<GenerationResultsT>(value);
  }
  template <typename GenerationResultsT = GenerationResults>
  GetDatasetGenerationResult& WithGenerationResults(GenerationResultsT&& value) {
    SetGenerationResults(std::forward<GenerationResultsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A summary of what redaction found. Present only when the generation was
   * started with redaction.</p>
   */
  inline const RedactionSummary& GetRedactionSummary() const { return m_redactionSummary; }
  template <typename RedactionSummaryT = RedactionSummary>
  void SetRedactionSummary(RedactionSummaryT&& value) {
    m_redactionSummaryHasBeenSet = true;
    m_redactionSummary = std::forward<RedactionSummaryT>(value);
  }
  template <typename RedactionSummaryT = RedactionSummary>
  GetDatasetGenerationResult& WithRedactionSummary(RedactionSummaryT&& value) {
    SetRedactionSummary(std::forward<RedactionSummaryT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The errors the generation hit, grouped by error code. The list holds the 10
   * most frequent error codes, most frequent first.</p>
   */
  inline const Aws::Vector<GenerationErrorDetail>& GetErrorDetails() const { return m_errorDetails; }
  template <typename ErrorDetailsT = Aws::Vector<GenerationErrorDetail>>
  void SetErrorDetails(ErrorDetailsT&& value) {
    m_errorDetailsHasBeenSet = true;
    m_errorDetails = std::forward<ErrorDetailsT>(value);
  }
  template <typename ErrorDetailsT = Aws::Vector<GenerationErrorDetail>>
  GetDatasetGenerationResult& WithErrorDetails(ErrorDetailsT&& value) {
    SetErrorDetails(std::forward<ErrorDetailsT>(value));
    return *this;
  }
  template <typename ErrorDetailsT = GenerationErrorDetail>
  GetDatasetGenerationResult& AddErrorDetails(ErrorDetailsT&& value) {
    m_errorDetailsHasBeenSet = true;
    m_errorDetails.emplace_back(std::forward<ErrorDetailsT>(value));
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
  GetDatasetGenerationResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  Aws::String m_generationId;

  Aws::String m_name;

  Aws::String m_description;

  Aws::String m_datasetId;

  ScenarioType m_scenarioType{ScenarioType::NOT_SET};

  DatasetGenerationStatus m_status{DatasetGenerationStatus::NOT_SET};

  Aws::String m_failureReason;

  Aws::Utils::DateTime m_createdAt{};

  Aws::Utils::DateTime m_updatedAt{};

  Aws::Utils::DateTime m_completedAt{};

  GenerationSourceRecord m_source;

  GenerationResults m_generationResults;

  RedactionSummary m_redactionSummary;

  Aws::Vector<GenerationErrorDetail> m_errorDetails;

  Aws::String m_requestId;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_generationIdHasBeenSet = false;
  bool m_nameHasBeenSet = false;
  bool m_descriptionHasBeenSet = false;
  bool m_datasetIdHasBeenSet = false;
  bool m_scenarioTypeHasBeenSet = false;
  bool m_statusHasBeenSet = false;
  bool m_failureReasonHasBeenSet = false;
  bool m_createdAtHasBeenSet = false;
  bool m_updatedAtHasBeenSet = false;
  bool m_completedAtHasBeenSet = false;
  bool m_sourceHasBeenSet = false;
  bool m_generationResultsHasBeenSet = false;
  bool m_redactionSummaryHasBeenSet = false;
  bool m_errorDetailsHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace BedrockAgentCore
}  // namespace Aws
