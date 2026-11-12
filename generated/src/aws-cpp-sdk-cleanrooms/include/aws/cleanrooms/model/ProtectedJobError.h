/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cleanrooms/CleanRooms_EXPORTS.h>
#include <aws/cleanrooms/model/RetryInfo.h>
#include <aws/core/utils/memory/stl/AWSString.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace CleanRooms {
namespace Model {

/**
 * <p>Details of the error that caused the protected job to fail.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/cleanrooms-2022-02-17/ProtectedJobError">AWS
 * API Reference</a></p>
 */
class ProtectedJobError {
 public:
  AWS_CLEANROOMS_API ProtectedJobError() = default;
  AWS_CLEANROOMS_API ProtectedJobError(Aws::Utils::Json::JsonView jsonValue);
  AWS_CLEANROOMS_API ProtectedJobError& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_CLEANROOMS_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>A description of why the protected job failed.</p>
   */
  inline const Aws::String& GetMessage() const { return m_message; }
  inline bool MessageHasBeenSet() const { return m_messageHasBeenSet; }
  template <typename MessageT = Aws::String>
  void SetMessage(MessageT&& value) {
    m_messageHasBeenSet = true;
    m_message = std::forward<MessageT>(value);
  }
  template <typename MessageT = Aws::String>
  ProtectedJobError& WithMessage(MessageT&& value) {
    SetMessage(std::forward<MessageT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A code that identifies the category of the failure. Valid values are:</p>
   * <ul> <li> <p> <code>MALFORMED_SCRIPT</code> – The job script or its execution
   * environment is not valid (code, imports, entry point, virtual environment, or
   * dependencies).</p> </li> <li> <p> <code>RESOURCE_NOT_FOUND</code> – A referenced
   * resource doesn't exist.</p> </li> <li> <p> <code>INVALID_RESOURCE</code> – A
   * referenced resource exists, but you can't use it because its configuration,
   * state, or data is not valid.</p> </li> <li> <p>
   * <code>RESOURCE_ACCESS_DENIED</code> – A required permission is missing for a
   * data source or resource.</p> </li> <li> <p> <code>INSUFFICIENT_COMPUTE</code> –
   * The job exceeded the available compute (memory, disk, or time).</p> </li> <li>
   * <p> <code>TRANSIENT_ERROR</code> – A temporary condition caused the failure,
   * such as throttling or a network interruption.</p> </li> <li> <p>
   * <code>INTERNAL_ERROR</code> – Clean Rooms encountered an unexpected error. If
   * the error persists, contact AWS Support.</p> </li> <li> <p>
   * <code>UNKNOWN_ERROR</code> – The failure couldn't be classified.</p> </li> </ul>
   * <p>For more information about error codes, see <a
   * href="https://docs.aws.amazon.com/clean-rooms/latest/userguide/error-codes.html">https://docs.aws.amazon.com/clean-rooms/latest/userguide/error-codes.html</a>
   * in the Clean Rooms User Guide.</p>
   */
  inline const Aws::String& GetCode() const { return m_code; }
  inline bool CodeHasBeenSet() const { return m_codeHasBeenSet; }
  template <typename CodeT = Aws::String>
  void SetCode(CodeT&& value) {
    m_codeHasBeenSet = true;
    m_code = std::forward<CodeT>(value);
  }
  template <typename CodeT = Aws::String>
  ProtectedJobError& WithCode(CodeT&& value) {
    SetCode(std::forward<CodeT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Contains information about whether running the same protected job again might
   * succeed.</p>
   */
  inline const RetryInfo& GetRetry() const { return m_retry; }
  inline bool RetryHasBeenSet() const { return m_retryHasBeenSet; }
  template <typename RetryT = RetryInfo>
  void SetRetry(RetryT&& value) {
    m_retryHasBeenSet = true;
    m_retry = std::forward<RetryT>(value);
  }
  template <typename RetryT = RetryInfo>
  ProtectedJobError& WithRetry(RetryT&& value) {
    SetRetry(std::forward<RetryT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_message;

  Aws::String m_code;

  RetryInfo m_retry;
  bool m_messageHasBeenSet = false;
  bool m_codeHasBeenSet = false;
  bool m_retryHasBeenSet = false;
};

}  // namespace Model
}  // namespace CleanRooms
}  // namespace Aws
