/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/grafana/ManagedGrafana_EXPORTS.h>
#include <aws/grafana/model/UpdateInstruction.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace ManagedGrafana {
namespace Model {

/**
 * <p>A structure containing information about one error encountered while
 * performing an <a
 * href="https://docs.aws.amazon.com/grafana/latest/APIReference/API_UpdatePermissions.html">UpdatePermissions</a>
 * operation.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/grafana-2020-08-18/UpdateError">AWS
 * API Reference</a></p>
 */
class UpdateError {
 public:
  AWS_MANAGEDGRAFANA_API UpdateError() = default;
  AWS_MANAGEDGRAFANA_API UpdateError(Aws::Utils::Json::JsonView jsonValue);
  AWS_MANAGEDGRAFANA_API UpdateError& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_MANAGEDGRAFANA_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The error code.</p>
   */
  inline int GetCode() const { return m_code; }
  inline bool CodeHasBeenSet() const { return m_codeHasBeenSet; }
  inline void SetCode(int value) {
    m_codeHasBeenSet = true;
    m_code = value;
  }
  inline UpdateError& WithCode(int value) {
    SetCode(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The message for this error.</p>
   */
  inline const Aws::String& GetMessage() const { return m_message; }
  inline bool MessageHasBeenSet() const { return m_messageHasBeenSet; }
  template <typename MessageT = Aws::String>
  void SetMessage(MessageT&& value) {
    m_messageHasBeenSet = true;
    m_message = std::forward<MessageT>(value);
  }
  template <typename MessageT = Aws::String>
  UpdateError& WithMessage(MessageT&& value) {
    SetMessage(std::forward<MessageT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Specifies which permission update caused the error.</p>
   */
  inline const UpdateInstruction& GetCausedBy() const { return m_causedBy; }
  inline bool CausedByHasBeenSet() const { return m_causedByHasBeenSet; }
  template <typename CausedByT = UpdateInstruction>
  void SetCausedBy(CausedByT&& value) {
    m_causedByHasBeenSet = true;
    m_causedBy = std::forward<CausedByT>(value);
  }
  template <typename CausedByT = UpdateInstruction>
  UpdateError& WithCausedBy(CausedByT&& value) {
    SetCausedBy(std::forward<CausedByT>(value));
    return *this;
  }
  ///@}
 private:
  int m_code{0};

  Aws::String m_message;

  UpdateInstruction m_causedBy;
  bool m_codeHasBeenSet = false;
  bool m_messageHasBeenSet = false;
  bool m_causedByHasBeenSet = false;
};

}  // namespace Model
}  // namespace ManagedGrafana
}  // namespace Aws
