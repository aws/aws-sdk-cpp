/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agent-runtime/BedrockAgentRuntime_EXPORTS.h>
#include <aws/bedrock-agent-runtime/model/DocumentAclGroup.h>
#include <aws/bedrock-agent-runtime/model/DocumentAclMemberRelation.h>
#include <aws/bedrock-agent-runtime/model/DocumentAclUser.h>
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
 * <p>A condition within a document access control list (ACL) membership,
 * specifying users and groups that are evaluated together.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agent-runtime-2023-07-26/DocumentAclCondition">AWS
 * API Reference</a></p>
 */
class DocumentAclCondition {
 public:
  AWS_BEDROCKAGENTRUNTIME_API DocumentAclCondition() = default;
  AWS_BEDROCKAGENTRUNTIME_API DocumentAclCondition(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTRUNTIME_API DocumentAclCondition& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTRUNTIME_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The logical operator for combining users and groups within this condition.
   * Valid values: <code>AND</code> – Both a user match and a group match are
   * required. <code>OR</code> – Either a user match or a group match is
   * sufficient.</p>
   */
  inline DocumentAclMemberRelation GetConditionOperator() const { return m_conditionOperator; }
  inline bool ConditionOperatorHasBeenSet() const { return m_conditionOperatorHasBeenSet; }
  inline void SetConditionOperator(DocumentAclMemberRelation value) {
    m_conditionOperatorHasBeenSet = true;
    m_conditionOperator = value;
  }
  inline DocumentAclCondition& WithConditionOperator(DocumentAclMemberRelation value) {
    SetConditionOperator(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The list of group entries in this condition.</p>
   */
  inline const Aws::Vector<DocumentAclGroup>& GetGroups() const { return m_groups; }
  inline bool GroupsHasBeenSet() const { return m_groupsHasBeenSet; }
  template <typename GroupsT = Aws::Vector<DocumentAclGroup>>
  void SetGroups(GroupsT&& value) {
    m_groupsHasBeenSet = true;
    m_groups = std::forward<GroupsT>(value);
  }
  template <typename GroupsT = Aws::Vector<DocumentAclGroup>>
  DocumentAclCondition& WithGroups(GroupsT&& value) {
    SetGroups(std::forward<GroupsT>(value));
    return *this;
  }
  template <typename GroupsT = DocumentAclGroup>
  DocumentAclCondition& AddGroups(GroupsT&& value) {
    m_groupsHasBeenSet = true;
    m_groups.emplace_back(std::forward<GroupsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The list of user entries in this condition.</p>
   */
  inline const Aws::Vector<DocumentAclUser>& GetUsers() const { return m_users; }
  inline bool UsersHasBeenSet() const { return m_usersHasBeenSet; }
  template <typename UsersT = Aws::Vector<DocumentAclUser>>
  void SetUsers(UsersT&& value) {
    m_usersHasBeenSet = true;
    m_users = std::forward<UsersT>(value);
  }
  template <typename UsersT = Aws::Vector<DocumentAclUser>>
  DocumentAclCondition& WithUsers(UsersT&& value) {
    SetUsers(std::forward<UsersT>(value));
    return *this;
  }
  template <typename UsersT = DocumentAclUser>
  DocumentAclCondition& AddUsers(UsersT&& value) {
    m_usersHasBeenSet = true;
    m_users.emplace_back(std::forward<UsersT>(value));
    return *this;
  }
  ///@}
 private:
  DocumentAclMemberRelation m_conditionOperator{DocumentAclMemberRelation::NOT_SET};

  Aws::Vector<DocumentAclGroup> m_groups;

  Aws::Vector<DocumentAclUser> m_users;
  bool m_conditionOperatorHasBeenSet = false;
  bool m_groupsHasBeenSet = false;
  bool m_usersHasBeenSet = false;
};

}  // namespace Model
}  // namespace BedrockAgentRuntime
}  // namespace Aws
