/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agentcore/BedrockAgentCore_EXPORTS.h>
#include <aws/bedrock-agentcore/model/ABTestEvaluationConfig.h>
#include <aws/bedrock-agentcore/model/ABTestExecutionStatus.h>
#include <aws/bedrock-agentcore/model/ABTestResults.h>
#include <aws/bedrock-agentcore/model/ABTestStatus.h>
#include <aws/bedrock-agentcore/model/GatewayFilter.h>
#include <aws/bedrock-agentcore/model/Variant.h>
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
class GetABTestResult {
 public:
  AWS_BEDROCKAGENTCORE_API GetABTestResult() = default;
  AWS_BEDROCKAGENTCORE_API GetABTestResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_BEDROCKAGENTCORE_API GetABTestResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>The unique identifier of the A/B test.</p>
   */
  inline const Aws::String& GetAbTestId() const { return m_abTestId; }
  template <typename AbTestIdT = Aws::String>
  void SetAbTestId(AbTestIdT&& value) {
    m_abTestIdHasBeenSet = true;
    m_abTestId = std::forward<AbTestIdT>(value);
  }
  template <typename AbTestIdT = Aws::String>
  GetABTestResult& WithAbTestId(AbTestIdT&& value) {
    SetAbTestId(std::forward<AbTestIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) of the A/B test.</p>
   */
  inline const Aws::String& GetAbTestArn() const { return m_abTestArn; }
  template <typename AbTestArnT = Aws::String>
  void SetAbTestArn(AbTestArnT&& value) {
    m_abTestArnHasBeenSet = true;
    m_abTestArn = std::forward<AbTestArnT>(value);
  }
  template <typename AbTestArnT = Aws::String>
  GetABTestResult& WithAbTestArn(AbTestArnT&& value) {
    SetAbTestArn(std::forward<AbTestArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The name of the A/B test.</p>
   */
  inline const Aws::String& GetName() const { return m_name; }
  template <typename NameT = Aws::String>
  void SetName(NameT&& value) {
    m_nameHasBeenSet = true;
    m_name = std::forward<NameT>(value);
  }
  template <typename NameT = Aws::String>
  GetABTestResult& WithName(NameT&& value) {
    SetName(std::forward<NameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The description of the A/B test.</p>
   */
  inline const Aws::String& GetDescription() const { return m_description; }
  template <typename DescriptionT = Aws::String>
  void SetDescription(DescriptionT&& value) {
    m_descriptionHasBeenSet = true;
    m_description = std::forward<DescriptionT>(value);
  }
  template <typename DescriptionT = Aws::String>
  GetABTestResult& WithDescription(DescriptionT&& value) {
    SetDescription(std::forward<DescriptionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The current status of the A/B test.</p>
   */
  inline ABTestStatus GetStatus() const { return m_status; }
  inline void SetStatus(ABTestStatus value) {
    m_statusHasBeenSet = true;
    m_status = value;
  }
  inline GetABTestResult& WithStatus(ABTestStatus value) {
    SetStatus(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The execution status indicating whether the A/B test is currently
   * running.</p>
   */
  inline ABTestExecutionStatus GetExecutionStatus() const { return m_executionStatus; }
  inline void SetExecutionStatus(ABTestExecutionStatus value) {
    m_executionStatusHasBeenSet = true;
    m_executionStatus = value;
  }
  inline GetABTestResult& WithExecutionStatus(ABTestExecutionStatus value) {
    SetExecutionStatus(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) of the gateway used for traffic splitting.</p>
   */
  inline const Aws::String& GetGatewayArn() const { return m_gatewayArn; }
  template <typename GatewayArnT = Aws::String>
  void SetGatewayArn(GatewayArnT&& value) {
    m_gatewayArnHasBeenSet = true;
    m_gatewayArn = std::forward<GatewayArnT>(value);
  }
  template <typename GatewayArnT = Aws::String>
  GetABTestResult& WithGatewayArn(GatewayArnT&& value) {
    SetGatewayArn(std::forward<GatewayArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The list of variants in the A/B test.</p>
   */
  inline const Aws::Vector<Variant>& GetVariants() const { return m_variants; }
  template <typename VariantsT = Aws::Vector<Variant>>
  void SetVariants(VariantsT&& value) {
    m_variantsHasBeenSet = true;
    m_variants = std::forward<VariantsT>(value);
  }
  template <typename VariantsT = Aws::Vector<Variant>>
  GetABTestResult& WithVariants(VariantsT&& value) {
    SetVariants(std::forward<VariantsT>(value));
    return *this;
  }
  template <typename VariantsT = Variant>
  GetABTestResult& AddVariants(VariantsT&& value) {
    m_variantsHasBeenSet = true;
    m_variants.emplace_back(std::forward<VariantsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The gateway filter restricting which target paths are included.</p>
   */
  inline const GatewayFilter& GetGatewayFilter() const { return m_gatewayFilter; }
  template <typename GatewayFilterT = GatewayFilter>
  void SetGatewayFilter(GatewayFilterT&& value) {
    m_gatewayFilterHasBeenSet = true;
    m_gatewayFilter = std::forward<GatewayFilterT>(value);
  }
  template <typename GatewayFilterT = GatewayFilter>
  GetABTestResult& WithGatewayFilter(GatewayFilterT&& value) {
    SetGatewayFilter(std::forward<GatewayFilterT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The evaluation configuration for measuring variant performance.</p>
   */
  inline const ABTestEvaluationConfig& GetEvaluationConfig() const { return m_evaluationConfig; }
  template <typename EvaluationConfigT = ABTestEvaluationConfig>
  void SetEvaluationConfig(EvaluationConfigT&& value) {
    m_evaluationConfigHasBeenSet = true;
    m_evaluationConfig = std::forward<EvaluationConfigT>(value);
  }
  template <typename EvaluationConfigT = ABTestEvaluationConfig>
  GetABTestResult& WithEvaluationConfig(EvaluationConfigT&& value) {
    SetEvaluationConfig(std::forward<EvaluationConfigT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The IAM role ARN used by the A/B test.</p>
   */
  inline const Aws::String& GetRoleArn() const { return m_roleArn; }
  template <typename RoleArnT = Aws::String>
  void SetRoleArn(RoleArnT&& value) {
    m_roleArnHasBeenSet = true;
    m_roleArn = std::forward<RoleArnT>(value);
  }
  template <typename RoleArnT = Aws::String>
  GetABTestResult& WithRoleArn(RoleArnT&& value) {
    SetRoleArn(std::forward<RoleArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The identifier of the current run of the A/B test.</p>
   */
  inline const Aws::String& GetCurrentRunId() const { return m_currentRunId; }
  template <typename CurrentRunIdT = Aws::String>
  void SetCurrentRunId(CurrentRunIdT&& value) {
    m_currentRunIdHasBeenSet = true;
    m_currentRunId = std::forward<CurrentRunIdT>(value);
  }
  template <typename CurrentRunIdT = Aws::String>
  GetABTestResult& WithCurrentRunId(CurrentRunIdT&& value) {
    SetCurrentRunId(std::forward<CurrentRunIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The error details if the A/B test encountered failures.</p>
   */
  inline const Aws::Vector<Aws::String>& GetErrorDetails() const { return m_errorDetails; }
  template <typename ErrorDetailsT = Aws::Vector<Aws::String>>
  void SetErrorDetails(ErrorDetailsT&& value) {
    m_errorDetailsHasBeenSet = true;
    m_errorDetails = std::forward<ErrorDetailsT>(value);
  }
  template <typename ErrorDetailsT = Aws::Vector<Aws::String>>
  GetABTestResult& WithErrorDetails(ErrorDetailsT&& value) {
    SetErrorDetails(std::forward<ErrorDetailsT>(value));
    return *this;
  }
  template <typename ErrorDetailsT = Aws::String>
  GetABTestResult& AddErrorDetails(ErrorDetailsT&& value) {
    m_errorDetailsHasBeenSet = true;
    m_errorDetails.emplace_back(std::forward<ErrorDetailsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The timestamp when the A/B test was started.</p>
   */
  inline const Aws::Utils::DateTime& GetStartedAt() const { return m_startedAt; }
  template <typename StartedAtT = Aws::Utils::DateTime>
  void SetStartedAt(StartedAtT&& value) {
    m_startedAtHasBeenSet = true;
    m_startedAt = std::forward<StartedAtT>(value);
  }
  template <typename StartedAtT = Aws::Utils::DateTime>
  GetABTestResult& WithStartedAt(StartedAtT&& value) {
    SetStartedAt(std::forward<StartedAtT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The timestamp when the A/B test was stopped.</p>
   */
  inline const Aws::Utils::DateTime& GetStoppedAt() const { return m_stoppedAt; }
  template <typename StoppedAtT = Aws::Utils::DateTime>
  void SetStoppedAt(StoppedAtT&& value) {
    m_stoppedAtHasBeenSet = true;
    m_stoppedAt = std::forward<StoppedAtT>(value);
  }
  template <typename StoppedAtT = Aws::Utils::DateTime>
  GetABTestResult& WithStoppedAt(StoppedAtT&& value) {
    SetStoppedAt(std::forward<StoppedAtT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The timestamp when the A/B test will automatically expire.</p>
   */
  inline const Aws::Utils::DateTime& GetMaxDurationExpiresAt() const { return m_maxDurationExpiresAt; }
  template <typename MaxDurationExpiresAtT = Aws::Utils::DateTime>
  void SetMaxDurationExpiresAt(MaxDurationExpiresAtT&& value) {
    m_maxDurationExpiresAtHasBeenSet = true;
    m_maxDurationExpiresAt = std::forward<MaxDurationExpiresAtT>(value);
  }
  template <typename MaxDurationExpiresAtT = Aws::Utils::DateTime>
  GetABTestResult& WithMaxDurationExpiresAt(MaxDurationExpiresAtT&& value) {
    SetMaxDurationExpiresAt(std::forward<MaxDurationExpiresAtT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The timestamp when the A/B test was created.</p>
   */
  inline const Aws::Utils::DateTime& GetCreatedAt() const { return m_createdAt; }
  template <typename CreatedAtT = Aws::Utils::DateTime>
  void SetCreatedAt(CreatedAtT&& value) {
    m_createdAtHasBeenSet = true;
    m_createdAt = std::forward<CreatedAtT>(value);
  }
  template <typename CreatedAtT = Aws::Utils::DateTime>
  GetABTestResult& WithCreatedAt(CreatedAtT&& value) {
    SetCreatedAt(std::forward<CreatedAtT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The timestamp when the A/B test was last updated.</p>
   */
  inline const Aws::Utils::DateTime& GetUpdatedAt() const { return m_updatedAt; }
  template <typename UpdatedAtT = Aws::Utils::DateTime>
  void SetUpdatedAt(UpdatedAtT&& value) {
    m_updatedAtHasBeenSet = true;
    m_updatedAt = std::forward<UpdatedAtT>(value);
  }
  template <typename UpdatedAtT = Aws::Utils::DateTime>
  GetABTestResult& WithUpdatedAt(UpdatedAtT&& value) {
    SetUpdatedAt(std::forward<UpdatedAtT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The statistical results of the A/B test, including per-evaluator metrics and
   * significance analysis.</p>
   */
  inline const ABTestResults& GetResults() const { return m_results; }
  template <typename ResultsT = ABTestResults>
  void SetResults(ResultsT&& value) {
    m_resultsHasBeenSet = true;
    m_results = std::forward<ResultsT>(value);
  }
  template <typename ResultsT = ABTestResults>
  GetABTestResult& WithResults(ResultsT&& value) {
    SetResults(std::forward<ResultsT>(value));
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
  GetABTestResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  Aws::String m_abTestId;

  Aws::String m_abTestArn;

  Aws::String m_name;

  Aws::String m_description;

  ABTestStatus m_status{ABTestStatus::NOT_SET};

  ABTestExecutionStatus m_executionStatus{ABTestExecutionStatus::NOT_SET};

  Aws::String m_gatewayArn;

  Aws::Vector<Variant> m_variants;

  GatewayFilter m_gatewayFilter;

  ABTestEvaluationConfig m_evaluationConfig;

  Aws::String m_roleArn;

  Aws::String m_currentRunId;

  Aws::Vector<Aws::String> m_errorDetails;

  Aws::Utils::DateTime m_startedAt{};

  Aws::Utils::DateTime m_stoppedAt{};

  Aws::Utils::DateTime m_maxDurationExpiresAt{};

  Aws::Utils::DateTime m_createdAt{};

  Aws::Utils::DateTime m_updatedAt{};

  ABTestResults m_results;

  Aws::String m_requestId;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_abTestIdHasBeenSet = false;
  bool m_abTestArnHasBeenSet = false;
  bool m_nameHasBeenSet = false;
  bool m_descriptionHasBeenSet = false;
  bool m_statusHasBeenSet = false;
  bool m_executionStatusHasBeenSet = false;
  bool m_gatewayArnHasBeenSet = false;
  bool m_variantsHasBeenSet = false;
  bool m_gatewayFilterHasBeenSet = false;
  bool m_evaluationConfigHasBeenSet = false;
  bool m_roleArnHasBeenSet = false;
  bool m_currentRunIdHasBeenSet = false;
  bool m_errorDetailsHasBeenSet = false;
  bool m_startedAtHasBeenSet = false;
  bool m_stoppedAtHasBeenSet = false;
  bool m_maxDurationExpiresAtHasBeenSet = false;
  bool m_createdAtHasBeenSet = false;
  bool m_updatedAtHasBeenSet = false;
  bool m_resultsHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace BedrockAgentCore
}  // namespace Aws
