/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/devops-agent/DevOpsAgent_EXPORTS.h>
#include <aws/devops-agent/model/OrgSourceIssue.h>

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
 * <p>Describes the current rollout state of an Amazon Web Services Organization
 * source configuration, including the number of accounts that have been deployed
 * to and any issues encountered during deployment.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/devops-agent-2026-01-01/OrgSourceDeploymentState">AWS
 * API Reference</a></p>
 */
class OrgSourceDeploymentState {
 public:
  AWS_DEVOPSAGENT_API OrgSourceDeploymentState() = default;
  AWS_DEVOPSAGENT_API OrgSourceDeploymentState(Aws::Utils::Json::JsonView jsonValue);
  AWS_DEVOPSAGENT_API OrgSourceDeploymentState& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_DEVOPSAGENT_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The number of accounts in the targeted Amazon Web Services Organization or
   * organizational unit that have successfully been deployed to.</p>
   */
  inline int GetDeployedAccountCount() const { return m_deployedAccountCount; }
  inline bool DeployedAccountCountHasBeenSet() const { return m_deployedAccountCountHasBeenSet; }
  inline void SetDeployedAccountCount(int value) {
    m_deployedAccountCountHasBeenSet = true;
    m_deployedAccountCount = value;
  }
  inline OrgSourceDeploymentState& WithDeployedAccountCount(int value) {
    SetDeployedAccountCount(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The issues encountered while deploying the source configuration across the
   * accounts in the Amazon Web Services Organization.</p>
   */
  inline const Aws::Vector<OrgSourceIssue>& GetIssues() const { return m_issues; }
  inline bool IssuesHasBeenSet() const { return m_issuesHasBeenSet; }
  template <typename IssuesT = Aws::Vector<OrgSourceIssue>>
  void SetIssues(IssuesT&& value) {
    m_issuesHasBeenSet = true;
    m_issues = std::forward<IssuesT>(value);
  }
  template <typename IssuesT = Aws::Vector<OrgSourceIssue>>
  OrgSourceDeploymentState& WithIssues(IssuesT&& value) {
    SetIssues(std::forward<IssuesT>(value));
    return *this;
  }
  template <typename IssuesT = OrgSourceIssue>
  OrgSourceDeploymentState& AddIssues(IssuesT&& value) {
    m_issuesHasBeenSet = true;
    m_issues.emplace_back(std::forward<IssuesT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The timestamp of the most recent evaluation of the organization-wide
   * deployment state.</p>
   */
  inline const Aws::Utils::DateTime& GetLastEvaluatedAt() const { return m_lastEvaluatedAt; }
  inline bool LastEvaluatedAtHasBeenSet() const { return m_lastEvaluatedAtHasBeenSet; }
  template <typename LastEvaluatedAtT = Aws::Utils::DateTime>
  void SetLastEvaluatedAt(LastEvaluatedAtT&& value) {
    m_lastEvaluatedAtHasBeenSet = true;
    m_lastEvaluatedAt = std::forward<LastEvaluatedAtT>(value);
  }
  template <typename LastEvaluatedAtT = Aws::Utils::DateTime>
  OrgSourceDeploymentState& WithLastEvaluatedAt(LastEvaluatedAtT&& value) {
    SetLastEvaluatedAt(std::forward<LastEvaluatedAtT>(value));
    return *this;
  }
  ///@}
 private:
  int m_deployedAccountCount{0};

  Aws::Vector<OrgSourceIssue> m_issues;

  Aws::Utils::DateTime m_lastEvaluatedAt{};
  bool m_deployedAccountCountHasBeenSet = false;
  bool m_issuesHasBeenSet = false;
  bool m_lastEvaluatedAtHasBeenSet = false;
};

}  // namespace Model
}  // namespace DevOpsAgent
}  // namespace Aws
