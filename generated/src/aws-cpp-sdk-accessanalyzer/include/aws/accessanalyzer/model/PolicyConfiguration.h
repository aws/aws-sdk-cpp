/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/accessanalyzer/AccessAnalyzer_EXPORTS.h>
#include <aws/accessanalyzer/model/ImpactAnalysisJobType.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace AccessAnalyzer {
namespace Model {

/**
 * <p>Specifies the configuration for a policy preview analysis, including the type
 * of analysis, the target resource, and the policy documents to
 * evaluate.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/accessanalyzer-2019-11-01/PolicyConfiguration">AWS
 * API Reference</a></p>
 */
class PolicyConfiguration {
 public:
  AWS_ACCESSANALYZER_API PolicyConfiguration() = default;
  AWS_ACCESSANALYZER_API PolicyConfiguration(Aws::Utils::Json::JsonView jsonValue);
  AWS_ACCESSANALYZER_API PolicyConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_ACCESSANALYZER_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The type of impact analysis job. Currently only <code>SCP</code> (Service
   * Control Policy) is supported.</p>
   */
  inline ImpactAnalysisJobType GetJobType() const { return m_jobType; }
  inline bool JobTypeHasBeenSet() const { return m_jobTypeHasBeenSet; }
  inline void SetJobType(ImpactAnalysisJobType value) {
    m_jobTypeHasBeenSet = true;
    m_jobType = value;
  }
  inline PolicyConfiguration& WithJobType(ImpactAnalysisJobType value) {
    SetJobType(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The identifier of the target resource for the policy analysis. This can be an
   * Amazon Web Services account ID (12-digit number), an organization root ID
   * (format: <code>r-[0-9a-z]{4,32}</code>), or an organizational unit ID (format:
   * <code>ou-[0-9a-z]{4,32}-[a-z0-9]{8,32}</code>).</p>
   */
  inline const Aws::String& GetTargetId() const { return m_targetId; }
  inline bool TargetIdHasBeenSet() const { return m_targetIdHasBeenSet; }
  template <typename TargetIdT = Aws::String>
  void SetTargetId(TargetIdT&& value) {
    m_targetIdHasBeenSet = true;
    m_targetId = std::forward<TargetIdT>(value);
  }
  template <typename TargetIdT = Aws::String>
  PolicyConfiguration& WithTargetId(TargetIdT&& value) {
    SetTargetId(std::forward<TargetIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A list of SCP policy documents to test. Each policy document is a JSON string
   * with a maximum length of 5,120 characters. The analysis evaluates how these
   * policies would affect access to resources.</p>
   */
  inline const Aws::Vector<Aws::String>& GetPolicyDocumentsList() const { return m_policyDocumentsList; }
  inline bool PolicyDocumentsListHasBeenSet() const { return m_policyDocumentsListHasBeenSet; }
  template <typename PolicyDocumentsListT = Aws::Vector<Aws::String>>
  void SetPolicyDocumentsList(PolicyDocumentsListT&& value) {
    m_policyDocumentsListHasBeenSet = true;
    m_policyDocumentsList = std::forward<PolicyDocumentsListT>(value);
  }
  template <typename PolicyDocumentsListT = Aws::Vector<Aws::String>>
  PolicyConfiguration& WithPolicyDocumentsList(PolicyDocumentsListT&& value) {
    SetPolicyDocumentsList(std::forward<PolicyDocumentsListT>(value));
    return *this;
  }
  template <typename PolicyDocumentsListT = Aws::String>
  PolicyConfiguration& AddPolicyDocumentsList(PolicyDocumentsListT&& value) {
    m_policyDocumentsListHasBeenSet = true;
    m_policyDocumentsList.emplace_back(std::forward<PolicyDocumentsListT>(value));
    return *this;
  }
  ///@}
 private:
  ImpactAnalysisJobType m_jobType{ImpactAnalysisJobType::NOT_SET};

  Aws::String m_targetId;

  Aws::Vector<Aws::String> m_policyDocumentsList;
  bool m_jobTypeHasBeenSet = false;
  bool m_targetIdHasBeenSet = false;
  bool m_policyDocumentsListHasBeenSet = false;
};

}  // namespace Model
}  // namespace AccessAnalyzer
}  // namespace Aws
