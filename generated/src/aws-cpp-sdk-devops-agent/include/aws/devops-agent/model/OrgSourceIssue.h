/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/devops-agent/DevOpsAgent_EXPORTS.h>
#include <aws/devops-agent/model/OrgSourceAccountReasonCode.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace DevOpsAgent {
namespace Model {

/**
 * <p>Describes an issue encountered while deploying or evaluating an Amazon Web
 * Services Organization source configuration.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/devops-agent-2026-01-01/OrgSourceIssue">AWS
 * API Reference</a></p>
 */
class OrgSourceIssue {
 public:
  AWS_DEVOPSAGENT_API OrgSourceIssue() = default;
  AWS_DEVOPSAGENT_API OrgSourceIssue(Aws::Utils::Json::JsonView jsonValue);
  AWS_DEVOPSAGENT_API OrgSourceIssue& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_DEVOPSAGENT_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>A code that identifies the reason for the issue.</p>
   */
  inline OrgSourceAccountReasonCode GetReasonCode() const { return m_reasonCode; }
  inline bool ReasonCodeHasBeenSet() const { return m_reasonCodeHasBeenSet; }
  inline void SetReasonCode(OrgSourceAccountReasonCode value) {
    m_reasonCodeHasBeenSet = true;
    m_reasonCode = value;
  }
  inline OrgSourceIssue& WithReasonCode(OrgSourceAccountReasonCode value) {
    SetReasonCode(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The number of accounts affected by this issue.</p>
   */
  inline int GetAccountCount() const { return m_accountCount; }
  inline bool AccountCountHasBeenSet() const { return m_accountCountHasBeenSet; }
  inline void SetAccountCount(int value) {
    m_accountCountHasBeenSet = true;
    m_accountCount = value;
  }
  inline OrgSourceIssue& WithAccountCount(int value) {
    SetAccountCount(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Amazon Web Services account IDs affected by this issue.</p>
   */
  inline const Aws::Vector<Aws::String>& GetAccountIds() const { return m_accountIds; }
  inline bool AccountIdsHasBeenSet() const { return m_accountIdsHasBeenSet; }
  template <typename AccountIdsT = Aws::Vector<Aws::String>>
  void SetAccountIds(AccountIdsT&& value) {
    m_accountIdsHasBeenSet = true;
    m_accountIds = std::forward<AccountIdsT>(value);
  }
  template <typename AccountIdsT = Aws::Vector<Aws::String>>
  OrgSourceIssue& WithAccountIds(AccountIdsT&& value) {
    SetAccountIds(std::forward<AccountIdsT>(value));
    return *this;
  }
  template <typename AccountIdsT = Aws::String>
  OrgSourceIssue& AddAccountIds(AccountIdsT&& value) {
    m_accountIdsHasBeenSet = true;
    m_accountIds.emplace_back(std::forward<AccountIdsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A description of the issue.</p>
   */
  inline const Aws::String& GetMessage() const { return m_message; }
  inline bool MessageHasBeenSet() const { return m_messageHasBeenSet; }
  template <typename MessageT = Aws::String>
  void SetMessage(MessageT&& value) {
    m_messageHasBeenSet = true;
    m_message = std::forward<MessageT>(value);
  }
  template <typename MessageT = Aws::String>
  OrgSourceIssue& WithMessage(MessageT&& value) {
    SetMessage(std::forward<MessageT>(value));
    return *this;
  }
  ///@}
 private:
  OrgSourceAccountReasonCode m_reasonCode{OrgSourceAccountReasonCode::NOT_SET};

  int m_accountCount{0};

  Aws::Vector<Aws::String> m_accountIds;

  Aws::String m_message;
  bool m_reasonCodeHasBeenSet = false;
  bool m_accountCountHasBeenSet = false;
  bool m_accountIdsHasBeenSet = false;
  bool m_messageHasBeenSet = false;
};

}  // namespace Model
}  // namespace DevOpsAgent
}  // namespace Aws
