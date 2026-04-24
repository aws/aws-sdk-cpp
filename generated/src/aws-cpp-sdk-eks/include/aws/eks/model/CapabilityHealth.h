/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/eks/EKS_EXPORTS.h>
#include <aws/eks/model/CapabilityIssue.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace EKS {
namespace Model {

/**
 * <p>Health information for a capability, including any issues that may be
 * affecting its operation.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/eks-2017-11-01/CapabilityHealth">AWS
 * API Reference</a></p>
 */
class CapabilityHealth {
 public:
  AWS_EKS_API CapabilityHealth() = default;
  AWS_EKS_API CapabilityHealth(Aws::Utils::Json::JsonView jsonValue);
  AWS_EKS_API CapabilityHealth& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_EKS_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>A list of issues affecting the capability. If this list is empty, the
   * capability is healthy.</p>
   */
  inline const Aws::Vector<CapabilityIssue>& GetIssues() const { return m_issues; }
  inline bool IssuesHasBeenSet() const { return m_issuesHasBeenSet; }
  template <typename IssuesT = Aws::Vector<CapabilityIssue>>
  void SetIssues(IssuesT&& value) {
    m_issuesHasBeenSet = true;
    m_issues = std::forward<IssuesT>(value);
  }
  template <typename IssuesT = Aws::Vector<CapabilityIssue>>
  CapabilityHealth& WithIssues(IssuesT&& value) {
    SetIssues(std::forward<IssuesT>(value));
    return *this;
  }
  template <typename IssuesT = CapabilityIssue>
  CapabilityHealth& AddIssues(IssuesT&& value) {
    m_issuesHasBeenSet = true;
    m_issues.emplace_back(std::forward<IssuesT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::Vector<CapabilityIssue> m_issues;
  bool m_issuesHasBeenSet = false;
};

}  // namespace Model
}  // namespace EKS
}  // namespace Aws
