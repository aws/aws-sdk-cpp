/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agentcore-control/BedrockAgentCoreControl_EXPORTS.h>
#include <aws/bedrock-agentcore-control/model/PolicyEngineStatus.h>
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
namespace BedrockAgentCoreControl {
namespace Model {
class UpdatePolicyEngineResult {
 public:
  AWS_BEDROCKAGENTCORECONTROL_API UpdatePolicyEngineResult() = default;
  AWS_BEDROCKAGENTCORECONTROL_API UpdatePolicyEngineResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_BEDROCKAGENTCORECONTROL_API UpdatePolicyEngineResult& operator=(
      const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>The unique identifier of the updated policy engine.</p>
   */
  inline const Aws::String& GetPolicyEngineId() const { return m_policyEngineId; }
  template <typename PolicyEngineIdT = Aws::String>
  void SetPolicyEngineId(PolicyEngineIdT&& value) {
    m_policyEngineIdHasBeenSet = true;
    m_policyEngineId = std::forward<PolicyEngineIdT>(value);
  }
  template <typename PolicyEngineIdT = Aws::String>
  UpdatePolicyEngineResult& WithPolicyEngineId(PolicyEngineIdT&& value) {
    SetPolicyEngineId(std::forward<PolicyEngineIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The name of the updated policy engine.</p>
   */
  inline const Aws::String& GetName() const { return m_name; }
  template <typename NameT = Aws::String>
  void SetName(NameT&& value) {
    m_nameHasBeenSet = true;
    m_name = std::forward<NameT>(value);
  }
  template <typename NameT = Aws::String>
  UpdatePolicyEngineResult& WithName(NameT&& value) {
    SetName(std::forward<NameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The updated description of the policy engine.</p>
   */
  inline const Aws::String& GetDescription() const { return m_description; }
  template <typename DescriptionT = Aws::String>
  void SetDescription(DescriptionT&& value) {
    m_descriptionHasBeenSet = true;
    m_description = std::forward<DescriptionT>(value);
  }
  template <typename DescriptionT = Aws::String>
  UpdatePolicyEngineResult& WithDescription(DescriptionT&& value) {
    SetDescription(std::forward<DescriptionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The original creation timestamp of the policy engine.</p>
   */
  inline const Aws::Utils::DateTime& GetCreatedAt() const { return m_createdAt; }
  template <typename CreatedAtT = Aws::Utils::DateTime>
  void SetCreatedAt(CreatedAtT&& value) {
    m_createdAtHasBeenSet = true;
    m_createdAt = std::forward<CreatedAtT>(value);
  }
  template <typename CreatedAtT = Aws::Utils::DateTime>
  UpdatePolicyEngineResult& WithCreatedAt(CreatedAtT&& value) {
    SetCreatedAt(std::forward<CreatedAtT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The timestamp when the policy engine was last updated.</p>
   */
  inline const Aws::Utils::DateTime& GetUpdatedAt() const { return m_updatedAt; }
  template <typename UpdatedAtT = Aws::Utils::DateTime>
  void SetUpdatedAt(UpdatedAtT&& value) {
    m_updatedAtHasBeenSet = true;
    m_updatedAt = std::forward<UpdatedAtT>(value);
  }
  template <typename UpdatedAtT = Aws::Utils::DateTime>
  UpdatePolicyEngineResult& WithUpdatedAt(UpdatedAtT&& value) {
    SetUpdatedAt(std::forward<UpdatedAtT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ARN of the updated policy engine.</p>
   */
  inline const Aws::String& GetPolicyEngineArn() const { return m_policyEngineArn; }
  template <typename PolicyEngineArnT = Aws::String>
  void SetPolicyEngineArn(PolicyEngineArnT&& value) {
    m_policyEngineArnHasBeenSet = true;
    m_policyEngineArn = std::forward<PolicyEngineArnT>(value);
  }
  template <typename PolicyEngineArnT = Aws::String>
  UpdatePolicyEngineResult& WithPolicyEngineArn(PolicyEngineArnT&& value) {
    SetPolicyEngineArn(std::forward<PolicyEngineArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The current status of the updated policy engine.</p>
   */
  inline PolicyEngineStatus GetStatus() const { return m_status; }
  inline void SetStatus(PolicyEngineStatus value) {
    m_statusHasBeenSet = true;
    m_status = value;
  }
  inline UpdatePolicyEngineResult& WithStatus(PolicyEngineStatus value) {
    SetStatus(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Additional information about the update status.</p>
   */
  inline const Aws::Vector<Aws::String>& GetStatusReasons() const { return m_statusReasons; }
  template <typename StatusReasonsT = Aws::Vector<Aws::String>>
  void SetStatusReasons(StatusReasonsT&& value) {
    m_statusReasonsHasBeenSet = true;
    m_statusReasons = std::forward<StatusReasonsT>(value);
  }
  template <typename StatusReasonsT = Aws::Vector<Aws::String>>
  UpdatePolicyEngineResult& WithStatusReasons(StatusReasonsT&& value) {
    SetStatusReasons(std::forward<StatusReasonsT>(value));
    return *this;
  }
  template <typename StatusReasonsT = Aws::String>
  UpdatePolicyEngineResult& AddStatusReasons(StatusReasonsT&& value) {
    m_statusReasonsHasBeenSet = true;
    m_statusReasons.emplace_back(std::forward<StatusReasonsT>(value));
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
  UpdatePolicyEngineResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_policyEngineId;

  Aws::String m_name;

  Aws::String m_description;

  Aws::Utils::DateTime m_createdAt{};

  Aws::Utils::DateTime m_updatedAt{};

  Aws::String m_policyEngineArn;

  PolicyEngineStatus m_status{PolicyEngineStatus::NOT_SET};

  Aws::Vector<Aws::String> m_statusReasons;

  Aws::String m_requestId;
  bool m_policyEngineIdHasBeenSet = false;
  bool m_nameHasBeenSet = false;
  bool m_descriptionHasBeenSet = false;
  bool m_createdAtHasBeenSet = false;
  bool m_updatedAtHasBeenSet = false;
  bool m_policyEngineArnHasBeenSet = false;
  bool m_statusHasBeenSet = false;
  bool m_statusReasonsHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace BedrockAgentCoreControl
}  // namespace Aws
