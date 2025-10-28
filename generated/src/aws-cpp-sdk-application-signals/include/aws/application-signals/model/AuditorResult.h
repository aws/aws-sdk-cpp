/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/application-signals/ApplicationSignals_EXPORTS.h>
#include <aws/application-signals/model/Severity.h>
#include <aws/core/utils/memory/stl/AWSString.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace ApplicationSignals {
namespace Model {

/**
 * <p>Represents the result of an audit performed by a specific auditor on a
 * resource.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/application-signals-2024-04-15/AuditorResult">AWS
 * API Reference</a></p>
 */
class AuditorResult {
 public:
  AWS_APPLICATIONSIGNALS_API AuditorResult() = default;
  AWS_APPLICATIONSIGNALS_API AuditorResult(Aws::Utils::Json::JsonView jsonValue);
  AWS_APPLICATIONSIGNALS_API AuditorResult& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_APPLICATIONSIGNALS_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The name or identifier of the auditor that performed the examination and
   * generated this result.</p>
   */
  inline const Aws::String& GetAuditor() const { return m_auditor; }
  inline bool AuditorHasBeenSet() const { return m_auditorHasBeenSet; }
  template <typename AuditorT = Aws::String>
  void SetAuditor(AuditorT&& value) {
    m_auditorHasBeenSet = true;
    m_auditor = std::forward<AuditorT>(value);
  }
  template <typename AuditorT = Aws::String>
  AuditorResult& WithAuditor(AuditorT&& value) {
    SetAuditor(std::forward<AuditorT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A detailed description of what the auditor found, including any
   * recommendations for remediation or further investigation.</p>
   */
  inline const Aws::String& GetDescription() const { return m_description; }
  inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
  template <typename DescriptionT = Aws::String>
  void SetDescription(DescriptionT&& value) {
    m_descriptionHasBeenSet = true;
    m_description = std::forward<DescriptionT>(value);
  }
  template <typename DescriptionT = Aws::String>
  AuditorResult& WithDescription(DescriptionT&& value) {
    SetDescription(std::forward<DescriptionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The severity level of the finding, such as "Critical", "High", "Medium", or
   * "Low". This helps prioritize remediation efforts.</p>
   */
  inline Severity GetSeverity() const { return m_severity; }
  inline bool SeverityHasBeenSet() const { return m_severityHasBeenSet; }
  inline void SetSeverity(Severity value) {
    m_severityHasBeenSet = true;
    m_severity = value;
  }
  inline AuditorResult& WithSeverity(Severity value) {
    SetSeverity(value);
    return *this;
  }
  ///@}
 private:
  Aws::String m_auditor;
  bool m_auditorHasBeenSet = false;

  Aws::String m_description;
  bool m_descriptionHasBeenSet = false;

  Severity m_severity{Severity::NOT_SET};
  bool m_severityHasBeenSet = false;
};

}  // namespace Model
}  // namespace ApplicationSignals
}  // namespace Aws
