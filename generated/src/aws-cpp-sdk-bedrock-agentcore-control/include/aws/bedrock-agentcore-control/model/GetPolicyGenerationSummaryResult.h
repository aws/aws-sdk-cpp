/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agentcore-control/BedrockAgentCoreControl_EXPORTS.h>
#include <aws/bedrock-agentcore-control/model/PolicyGenerationStatus.h>
#include <aws/bedrock-agentcore-control/model/Resource.h>
#include <aws/core/http/HttpResponse.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>

#include <utility>

namespace Aws {
template <typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils {
namespace Json {
class JsonValue;
}  // namespace Json
}  // namespace Utils
namespace BedrockAgentCoreControl {
namespace Model {
class GetPolicyGenerationSummaryResult {
 public:
  AWS_BEDROCKAGENTCORECONTROL_API GetPolicyGenerationSummaryResult() = default;
  AWS_BEDROCKAGENTCORECONTROL_API GetPolicyGenerationSummaryResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_BEDROCKAGENTCORECONTROL_API GetPolicyGenerationSummaryResult& operator=(
      const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>The identifier of the policy engine associated with this policy
   * generation.</p>
   */
  inline const Aws::String& GetPolicyEngineId() const { return m_policyEngineId; }
  template <typename PolicyEngineIdT = Aws::String>
  void SetPolicyEngineId(PolicyEngineIdT&& value) {
    m_policyEngineIdHasBeenSet = true;
    m_policyEngineId = std::forward<PolicyEngineIdT>(value);
  }
  template <typename PolicyEngineIdT = Aws::String>
  GetPolicyGenerationSummaryResult& WithPolicyEngineId(PolicyEngineIdT&& value) {
    SetPolicyEngineId(std::forward<PolicyEngineIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The unique identifier of the policy generation request.</p>
   */
  inline const Aws::String& GetPolicyGenerationId() const { return m_policyGenerationId; }
  template <typename PolicyGenerationIdT = Aws::String>
  void SetPolicyGenerationId(PolicyGenerationIdT&& value) {
    m_policyGenerationIdHasBeenSet = true;
    m_policyGenerationId = std::forward<PolicyGenerationIdT>(value);
  }
  template <typename PolicyGenerationIdT = Aws::String>
  GetPolicyGenerationSummaryResult& WithPolicyGenerationId(PolicyGenerationIdT&& value) {
    SetPolicyGenerationId(std::forward<PolicyGenerationIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The customer-assigned name for the policy generation request.</p>
   */
  inline const Aws::String& GetName() const { return m_name; }
  template <typename NameT = Aws::String>
  void SetName(NameT&& value) {
    m_nameHasBeenSet = true;
    m_name = std::forward<NameT>(value);
  }
  template <typename NameT = Aws::String>
  GetPolicyGenerationSummaryResult& WithName(NameT&& value) {
    SetName(std::forward<NameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) of the policy generation request.</p>
   */
  inline const Aws::String& GetPolicyGenerationArn() const { return m_policyGenerationArn; }
  template <typename PolicyGenerationArnT = Aws::String>
  void SetPolicyGenerationArn(PolicyGenerationArnT&& value) {
    m_policyGenerationArnHasBeenSet = true;
    m_policyGenerationArn = std::forward<PolicyGenerationArnT>(value);
  }
  template <typename PolicyGenerationArnT = Aws::String>
  GetPolicyGenerationSummaryResult& WithPolicyGenerationArn(PolicyGenerationArnT&& value) {
    SetPolicyGenerationArn(std::forward<PolicyGenerationArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The resource information associated with the policy generation.</p>
   */
  inline const Resource& GetResource() const { return m_resource; }
  template <typename ResourceT = Resource>
  void SetResource(ResourceT&& value) {
    m_resourceHasBeenSet = true;
    m_resource = std::forward<ResourceT>(value);
  }
  template <typename ResourceT = Resource>
  GetPolicyGenerationSummaryResult& WithResource(ResourceT&& value) {
    SetResource(std::forward<ResourceT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The timestamp when the policy generation request was created.</p>
   */
  inline const Aws::Utils::DateTime& GetCreatedAt() const { return m_createdAt; }
  template <typename CreatedAtT = Aws::Utils::DateTime>
  void SetCreatedAt(CreatedAtT&& value) {
    m_createdAtHasBeenSet = true;
    m_createdAt = std::forward<CreatedAtT>(value);
  }
  template <typename CreatedAtT = Aws::Utils::DateTime>
  GetPolicyGenerationSummaryResult& WithCreatedAt(CreatedAtT&& value) {
    SetCreatedAt(std::forward<CreatedAtT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The timestamp when the policy generation was last updated.</p>
   */
  inline const Aws::Utils::DateTime& GetUpdatedAt() const { return m_updatedAt; }
  template <typename UpdatedAtT = Aws::Utils::DateTime>
  void SetUpdatedAt(UpdatedAtT&& value) {
    m_updatedAtHasBeenSet = true;
    m_updatedAt = std::forward<UpdatedAtT>(value);
  }
  template <typename UpdatedAtT = Aws::Utils::DateTime>
  GetPolicyGenerationSummaryResult& WithUpdatedAt(UpdatedAtT&& value) {
    SetUpdatedAt(std::forward<UpdatedAtT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The current status of the policy generation request.</p>
   */
  inline PolicyGenerationStatus GetStatus() const { return m_status; }
  inline void SetStatus(PolicyGenerationStatus value) {
    m_statusHasBeenSet = true;
    m_status = value;
  }
  inline GetPolicyGenerationSummaryResult& WithStatus(PolicyGenerationStatus value) {
    SetStatus(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The findings from the policy generation process, if available.</p>
   */
  inline const Aws::String& GetFindings() const { return m_findings; }
  template <typename FindingsT = Aws::String>
  void SetFindings(FindingsT&& value) {
    m_findingsHasBeenSet = true;
    m_findings = std::forward<FindingsT>(value);
  }
  template <typename FindingsT = Aws::String>
  GetPolicyGenerationSummaryResult& WithFindings(FindingsT&& value) {
    SetFindings(std::forward<FindingsT>(value));
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
  GetPolicyGenerationSummaryResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  Aws::String m_policyEngineId;

  Aws::String m_policyGenerationId;

  Aws::String m_name;

  Aws::String m_policyGenerationArn;

  Resource m_resource;

  Aws::Utils::DateTime m_createdAt{};

  Aws::Utils::DateTime m_updatedAt{};

  PolicyGenerationStatus m_status{PolicyGenerationStatus::NOT_SET};

  Aws::String m_findings;

  Aws::String m_requestId;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_policyEngineIdHasBeenSet = false;
  bool m_policyGenerationIdHasBeenSet = false;
  bool m_nameHasBeenSet = false;
  bool m_policyGenerationArnHasBeenSet = false;
  bool m_resourceHasBeenSet = false;
  bool m_createdAtHasBeenSet = false;
  bool m_updatedAtHasBeenSet = false;
  bool m_statusHasBeenSet = false;
  bool m_findingsHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace BedrockAgentCoreControl
}  // namespace Aws
