/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/abuse-signal/AbuseSignal_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

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
 * <p>Describes one specific submission requirement that a well-formed report did
 * not meet. The service returns this structure in the
 * <code>unmetRequirements</code> list of a
 * <code>SubmissionRequirementException</code> (HTTP 422).</p><p><h3>See Also:</h3>
 * <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/abuse-signal-2026-01-12/SubmissionRequirement">AWS
 * API Reference</a></p>
 */
class SubmissionRequirement {
 public:
  AWS_ABUSESIGNAL_API SubmissionRequirement() = default;
  AWS_ABUSESIGNAL_API SubmissionRequirement(Aws::Utils::Json::JsonView jsonValue);
  AWS_ABUSESIGNAL_API SubmissionRequirement& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_ABUSESIGNAL_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>A stable, dot-namespaced identifier for the submission requirement that the
   * report did not meet (for example, <code>rule.timestamp.too_old</code>). The set
   * of codes is append-only, so treat an unrecognized value as opaque. This value is
   * absent when the requirement that the report did not meet does not publish an
   * identifier.</p> <p>The service checks the following submission requirements:</p>
   * <ul> <li> <p> <code>rule.source_identifier.too_long</code>
   * (<code>source_identifier</code>) – The value exceeds the maximum accepted length
   * of 253 characters (the DNS hostname limit).</p> </li> <li> <p>
   * <code>rule.source_identifier.forbidden_characters</code>
   * (<code>source_identifier</code>) – The value contains characters that are never
   * valid in an address (<code>{</code>, <code>}</code>, <code>*</code>, or
   * <code>`</code>). These are common template-injection and command-injection
   * markers.</p> </li> <li> <p> <code>rule.source_identifier.malformed</code>
   * (<code>source_identifier</code>) – The value is not a valid IPv4 address, IPv6
   * address, URL, or domain name.</p> </li> <li> <p>
   * <code>rule.timestamp.unparseable</code> (<code>timestamp</code>) – The value
   * could not be parsed as an RFC 3339 date-time.</p> </li> <li> <p>
   * <code>rule.timestamp.in_future</code> (<code>timestamp</code>) – The value is
   * dated further into the future than the accepted clock-skew tolerance (a default
   * of 1 hour).</p> </li> <li> <p> <code>rule.timestamp.too_old</code>
   * (<code>timestamp</code>) – The value predates the submission lookback window (a
   * default of 90 days). For content that is still accessible, set
   * <code>timestamp</code> to the time you most recently observed it.</p> </li> <li>
   * <p> <code>rule.evidence.content_type_mismatch</code> (<code>evidence</code>) –
   * The decoded payload of an evidence item does not match its declared
   * <code>content_type</code>. The <code>path</code> identifies the item, for
   * example <code>/evidence/0</code>.</p> </li> </ul> <p>Submission requirement
   * thresholds are configuration-driven and can change over time. The set of codes
   * is append-only, so treat an unrecognized code as opaque.</p>
   */
  inline const Aws::String& GetCode() const { return m_code; }
  inline bool CodeHasBeenSet() const { return m_codeHasBeenSet; }
  template <typename CodeT = Aws::String>
  void SetCode(CodeT&& value) {
    m_codeHasBeenSet = true;
    m_code = std::forward<CodeT>(value);
  }
  template <typename CodeT = Aws::String>
  SubmissionRequirement& WithCode(CodeT&& value) {
    SetCode(std::forward<CodeT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A JSON Pointer expression to the report member that did not meet the
   * requirement. An empty string refers to the report as a whole.</p>
   */
  inline const Aws::String& GetPath() const { return m_path; }
  inline bool PathHasBeenSet() const { return m_pathHasBeenSet; }
  template <typename PathT = Aws::String>
  void SetPath(PathT&& value) {
    m_pathHasBeenSet = true;
    m_path = std::forward<PathT>(value);
  }
  template <typename PathT = Aws::String>
  SubmissionRequirement& WithPath(PathT&& value) {
    SetPath(std::forward<PathT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A detailed, human-readable description of the unmet submission
   * requirement.</p>
   */
  inline const Aws::String& GetMessage() const { return m_message; }
  inline bool MessageHasBeenSet() const { return m_messageHasBeenSet; }
  template <typename MessageT = Aws::String>
  void SetMessage(MessageT&& value) {
    m_messageHasBeenSet = true;
    m_message = std::forward<MessageT>(value);
  }
  template <typename MessageT = Aws::String>
  SubmissionRequirement& WithMessage(MessageT&& value) {
    SetMessage(std::forward<MessageT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_code;

  Aws::String m_path;

  Aws::String m_message;
  bool m_codeHasBeenSet = false;
  bool m_pathHasBeenSet = false;
  bool m_messageHasBeenSet = false;
};

}  // namespace Model
}  // namespace AbuseSignal
}  // namespace Aws
