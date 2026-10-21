/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/healthlake/HealthLake_EXPORTS.h>
#include <aws/healthlake/model/AgentErrorType.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace HealthLake {
namespace Model {

/**
 * <p>The type of an event that returns an exception encountered while serving the
 * request.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/healthlake-2017-07-01/ErrorEvent">AWS
 * API Reference</a></p>
 */
class ErrorEvent {
 public:
  AWS_HEALTHLAKE_API ErrorEvent() = default;
  AWS_HEALTHLAKE_API ErrorEvent(Aws::Utils::Json::JsonView jsonValue);
  AWS_HEALTHLAKE_API ErrorEvent& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_HEALTHLAKE_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The type of the exception.</p>
   */
  inline AgentErrorType GetError() const { return m_error; }
  inline bool ErrorHasBeenSet() const { return m_errorHasBeenSet; }
  inline void SetError(AgentErrorType value) {
    m_errorHasBeenSet = true;
    m_error = value;
  }
  inline ErrorEvent& WithError(AgentErrorType value) {
    SetError(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The exception message.</p>
   */
  inline const Aws::String& GetMessage() const { return m_message; }
  inline bool MessageHasBeenSet() const { return m_messageHasBeenSet; }
  template <typename MessageT = Aws::String>
  void SetMessage(MessageT&& value) {
    m_messageHasBeenSet = true;
    m_message = std::forward<MessageT>(value);
  }
  template <typename MessageT = Aws::String>
  ErrorEvent& WithMessage(MessageT&& value) {
    SetMessage(std::forward<MessageT>(value));
    return *this;
  }
  ///@}
 private:
  AgentErrorType m_error{AgentErrorType::NOT_SET};

  Aws::String m_message;
  bool m_errorHasBeenSet = false;
  bool m_messageHasBeenSet = false;
};

}  // namespace Model
}  // namespace HealthLake
}  // namespace Aws
