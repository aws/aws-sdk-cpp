/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace Connect {
namespace Model {

/**
 * <p>The current processing state of conversational analytics for a contact,
 * including the analysis status and, when applicable, the reason for that
 * status.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/ContactAnalysisReferenceState">AWS
 * API Reference</a></p>
 */
class ContactAnalysisReferenceState {
 public:
  AWS_CONNECT_API ContactAnalysisReferenceState() = default;
  AWS_CONNECT_API ContactAnalysisReferenceState(Aws::Utils::Json::JsonView jsonValue);
  AWS_CONNECT_API ContactAnalysisReferenceState& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_CONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The status of conversational analytics processing for the contact. Valid
   * values:</p> <ul> <li> <p> <code>REQUESTED</code> – Analysis has been requested
   * for the contact and has not finished.</p> </li> <li> <p> <code>COMPLETED</code>
   * – Analysis finished successfully.</p> </li> <li> <p> <code>FAILED</code> –
   * Analysis did not finish successfully. See <code>StatusReason</code> for the
   * cause.</p> </li> </ul>
   */
  inline const Aws::String& GetStatus() const { return m_status; }
  inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
  template <typename StatusT = Aws::String>
  void SetStatus(StatusT&& value) {
    m_statusHasBeenSet = true;
    m_status = std::forward<StatusT>(value);
  }
  template <typename StatusT = Aws::String>
  ContactAnalysisReferenceState& WithStatus(StatusT&& value) {
    SetStatus(std::forward<StatusT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The reason for the current analysis status. This value is populated only when
   * the status is <code>FAILED</code>.</p>
   */
  inline const Aws::String& GetStatusReason() const { return m_statusReason; }
  inline bool StatusReasonHasBeenSet() const { return m_statusReasonHasBeenSet; }
  template <typename StatusReasonT = Aws::String>
  void SetStatusReason(StatusReasonT&& value) {
    m_statusReasonHasBeenSet = true;
    m_statusReason = std::forward<StatusReasonT>(value);
  }
  template <typename StatusReasonT = Aws::String>
  ContactAnalysisReferenceState& WithStatusReason(StatusReasonT&& value) {
    SetStatusReason(std::forward<StatusReasonT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_status;

  Aws::String m_statusReason;
  bool m_statusHasBeenSet = false;
  bool m_statusReasonHasBeenSet = false;
};

}  // namespace Model
}  // namespace Connect
}  // namespace Aws
