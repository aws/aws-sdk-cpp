/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agent-runtime/BedrockAgentRuntime_EXPORTS.h>
#include <aws/bedrock-agent-runtime/model/DocumentAclCondition.h>
#include <aws/bedrock-agent-runtime/model/DocumentAclMemberRelation.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace BedrockAgentRuntime {
namespace Model {

/**
 * <p>The membership entry for a document access control list (ACL), containing
 * conditions and their logical relation.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agent-runtime-2023-07-26/DocumentAclMembership">AWS
 * API Reference</a></p>
 */
class DocumentAclMembership {
 public:
  AWS_BEDROCKAGENTRUNTIME_API DocumentAclMembership() = default;
  AWS_BEDROCKAGENTRUNTIME_API DocumentAclMembership(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTRUNTIME_API DocumentAclMembership& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTRUNTIME_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The list of conditions that determine membership.</p>
   */
  inline const Aws::Vector<DocumentAclCondition>& GetConditions() const { return m_conditions; }
  inline bool ConditionsHasBeenSet() const { return m_conditionsHasBeenSet; }
  template <typename ConditionsT = Aws::Vector<DocumentAclCondition>>
  void SetConditions(ConditionsT&& value) {
    m_conditionsHasBeenSet = true;
    m_conditions = std::forward<ConditionsT>(value);
  }
  template <typename ConditionsT = Aws::Vector<DocumentAclCondition>>
  DocumentAclMembership& WithConditions(ConditionsT&& value) {
    SetConditions(std::forward<ConditionsT>(value));
    return *this;
  }
  template <typename ConditionsT = DocumentAclCondition>
  DocumentAclMembership& AddConditions(ConditionsT&& value) {
    m_conditionsHasBeenSet = true;
    m_conditions.emplace_back(std::forward<ConditionsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The logical relation between conditions. Valid values: <code>AND</code> – All
   * conditions must match. <code>OR</code> – At least one condition must match.</p>
   */
  inline DocumentAclMemberRelation GetMemberRelation() const { return m_memberRelation; }
  inline bool MemberRelationHasBeenSet() const { return m_memberRelationHasBeenSet; }
  inline void SetMemberRelation(DocumentAclMemberRelation value) {
    m_memberRelationHasBeenSet = true;
    m_memberRelation = value;
  }
  inline DocumentAclMembership& WithMemberRelation(DocumentAclMemberRelation value) {
    SetMemberRelation(value);
    return *this;
  }
  ///@}
 private:
  Aws::Vector<DocumentAclCondition> m_conditions;

  DocumentAclMemberRelation m_memberRelation{DocumentAclMemberRelation::NOT_SET};
  bool m_conditionsHasBeenSet = false;
  bool m_memberRelationHasBeenSet = false;
};

}  // namespace Model
}  // namespace BedrockAgentRuntime
}  // namespace Aws
