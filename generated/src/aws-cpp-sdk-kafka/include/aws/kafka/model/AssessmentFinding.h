/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/kafka/Kafka_EXPORTS.h>
#include <aws/kafka/model/FindingCategory.h>
#include <aws/kafka/model/FindingRemediation.h>
#include <aws/kafka/model/FindingSeverity.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace Kafka {
namespace Model {

/**
 * <p>A single finding from an assessment, describing a specific issue or
 * observation.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/kafka-2018-11-14/AssessmentFinding">AWS
 * API Reference</a></p>
 */
class AssessmentFinding {
 public:
  AWS_KAFKA_API AssessmentFinding() = default;
  AWS_KAFKA_API AssessmentFinding(Aws::Utils::Json::JsonView jsonValue);
  AWS_KAFKA_API AssessmentFinding& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_KAFKA_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The category of this finding.</p>
   */
  inline FindingCategory GetCategory() const { return m_category; }
  inline bool CategoryHasBeenSet() const { return m_categoryHasBeenSet; }
  inline void SetCategory(FindingCategory value) {
    m_categoryHasBeenSet = true;
    m_category = value;
  }
  inline AssessmentFinding& WithCategory(FindingCategory value) {
    SetCategory(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A deterministic content-based identifier for this finding. Generated from
   * hash(category + resource + check_type). The same resource with the same problem
   * always produces the same findingId across assessment runs.</p>
   */
  inline const Aws::String& GetFindingId() const { return m_findingId; }
  inline bool FindingIdHasBeenSet() const { return m_findingIdHasBeenSet; }
  template <typename FindingIdT = Aws::String>
  void SetFindingId(FindingIdT&& value) {
    m_findingIdHasBeenSet = true;
    m_findingId = std::forward<FindingIdT>(value);
  }
  template <typename FindingIdT = Aws::String>
  AssessmentFinding& WithFindingId(FindingIdT&& value) {
    SetFindingId(std::forward<FindingIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Human-readable description of what is wrong, why it matters, and what to
   * do.</p>
   */
  inline const Aws::String& GetMessage() const { return m_message; }
  inline bool MessageHasBeenSet() const { return m_messageHasBeenSet; }
  template <typename MessageT = Aws::String>
  void SetMessage(MessageT&& value) {
    m_messageHasBeenSet = true;
    m_message = std::forward<MessageT>(value);
  }
  template <typename MessageT = Aws::String>
  AssessmentFinding& WithMessage(MessageT&& value) {
    SetMessage(std::forward<MessageT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Guidance for resolving this finding. Absent when no specific remediation
   * applies.</p>
   */
  inline const FindingRemediation& GetRemediation() const { return m_remediation; }
  inline bool RemediationHasBeenSet() const { return m_remediationHasBeenSet; }
  template <typename RemediationT = FindingRemediation>
  void SetRemediation(RemediationT&& value) {
    m_remediationHasBeenSet = true;
    m_remediation = std::forward<RemediationT>(value);
  }
  template <typename RemediationT = FindingRemediation>
  AssessmentFinding& WithRemediation(RemediationT&& value) {
    SetRemediation(std::forward<RemediationT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The specific resource affected (e.g., topic name). Absent for cluster-level
   * findings.</p>
   */
  inline const Aws::String& GetResource() const { return m_resource; }
  inline bool ResourceHasBeenSet() const { return m_resourceHasBeenSet; }
  template <typename ResourceT = Aws::String>
  void SetResource(ResourceT&& value) {
    m_resourceHasBeenSet = true;
    m_resource = std::forward<ResourceT>(value);
  }
  template <typename ResourceT = Aws::String>
  AssessmentFinding& WithResource(ResourceT&& value) {
    SetResource(std::forward<ResourceT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The severity of this finding.</p>
   */
  inline FindingSeverity GetSeverity() const { return m_severity; }
  inline bool SeverityHasBeenSet() const { return m_severityHasBeenSet; }
  inline void SetSeverity(FindingSeverity value) {
    m_severityHasBeenSet = true;
    m_severity = value;
  }
  inline AssessmentFinding& WithSeverity(FindingSeverity value) {
    SetSeverity(value);
    return *this;
  }
  ///@}
 private:
  FindingCategory m_category{FindingCategory::NOT_SET};

  Aws::String m_findingId;

  Aws::String m_message;

  FindingRemediation m_remediation;

  Aws::String m_resource;

  FindingSeverity m_severity{FindingSeverity::NOT_SET};
  bool m_categoryHasBeenSet = false;
  bool m_findingIdHasBeenSet = false;
  bool m_messageHasBeenSet = false;
  bool m_remediationHasBeenSet = false;
  bool m_resourceHasBeenSet = false;
  bool m_severityHasBeenSet = false;
};

}  // namespace Model
}  // namespace Kafka
}  // namespace Aws
