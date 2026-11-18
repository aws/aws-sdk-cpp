/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/abuse-signal/AbuseSignal_EXPORTS.h>
#include <aws/abuse-signal/model/SubmissionRequirement.h>
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
namespace AbuseSignal {
namespace Model {

/**
 * <p>The report is well-formed and satisfies the XARF schema, but it does not meet
 * one or more submission requirements (for example, the submission lookback window
 * or <code>source_identifier</code> restrictions). This error is distinct from
 * <code>ValidationException</code> (HTTP 400), which indicates that the report is
 * not well-formed. Retrying the same report will not succeed; the report content
 * must change.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/abuse-signal-2026-01-12/SubmissionRequirementException">AWS
 * API Reference</a></p>
 */
class SubmissionRequirementException {
 public:
  AWS_ABUSESIGNAL_API SubmissionRequirementException() = default;
  AWS_ABUSESIGNAL_API SubmissionRequirementException(Aws::Utils::Json::JsonView jsonValue);
  AWS_ABUSESIGNAL_API SubmissionRequirementException& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_ABUSESIGNAL_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>A summary of the unmet submission requirements.</p>
   */
  inline const Aws::String& GetMessage() const { return m_message; }
  inline bool MessageHasBeenSet() const { return m_messageHasBeenSet; }
  template <typename MessageT = Aws::String>
  void SetMessage(MessageT&& value) {
    m_messageHasBeenSet = true;
    m_message = std::forward<MessageT>(value);
  }
  template <typename MessageT = Aws::String>
  SubmissionRequirementException& WithMessage(MessageT&& value) {
    SetMessage(std::forward<MessageT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A list of the specific submission requirements that the report did not
   * meet.</p>
   */
  inline const Aws::Vector<SubmissionRequirement>& GetUnmetRequirements() const { return m_unmetRequirements; }
  inline bool UnmetRequirementsHasBeenSet() const { return m_unmetRequirementsHasBeenSet; }
  template <typename UnmetRequirementsT = Aws::Vector<SubmissionRequirement>>
  void SetUnmetRequirements(UnmetRequirementsT&& value) {
    m_unmetRequirementsHasBeenSet = true;
    m_unmetRequirements = std::forward<UnmetRequirementsT>(value);
  }
  template <typename UnmetRequirementsT = Aws::Vector<SubmissionRequirement>>
  SubmissionRequirementException& WithUnmetRequirements(UnmetRequirementsT&& value) {
    SetUnmetRequirements(std::forward<UnmetRequirementsT>(value));
    return *this;
  }
  template <typename UnmetRequirementsT = SubmissionRequirement>
  SubmissionRequirementException& AddUnmetRequirements(UnmetRequirementsT&& value) {
    m_unmetRequirementsHasBeenSet = true;
    m_unmetRequirements.emplace_back(std::forward<UnmetRequirementsT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_message;

  Aws::Vector<SubmissionRequirement> m_unmetRequirements;
  bool m_messageHasBeenSet = false;
  bool m_unmetRequirementsHasBeenSet = false;
};

}  // namespace Model
}  // namespace AbuseSignal
}  // namespace Aws
