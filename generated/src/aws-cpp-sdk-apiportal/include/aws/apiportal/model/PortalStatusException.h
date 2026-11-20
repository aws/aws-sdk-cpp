/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/apiportal/APIPortal_EXPORTS.h>
#include <aws/apiportal/model/PortalStatusExceptionType.h>
#include <aws/core/utils/memory/stl/AWSString.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace APIPortal {
namespace Model {

/**
 * <p>Failure detail attached to a Portal's publish/preview status: a typed reason
 * plus an optional human-readable message.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/apiportal-2026-04-30/PortalStatusException">AWS
 * API Reference</a></p>
 */
class PortalStatusException {
 public:
  AWS_APIPORTAL_API PortalStatusException() = default;
  AWS_APIPORTAL_API PortalStatusException(Aws::Utils::Json::JsonView jsonValue);
  AWS_APIPORTAL_API PortalStatusException& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_APIPORTAL_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{

  inline PortalStatusExceptionType GetException() const { return m_exception; }
  inline bool ExceptionHasBeenSet() const { return m_exceptionHasBeenSet; }
  inline void SetException(PortalStatusExceptionType value) {
    m_exceptionHasBeenSet = true;
    m_exception = value;
  }
  inline PortalStatusException& WithException(PortalStatusExceptionType value) {
    SetException(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A description of the failure.</p>
   */
  inline const Aws::String& GetMessage() const { return m_message; }
  inline bool MessageHasBeenSet() const { return m_messageHasBeenSet; }
  template <typename MessageT = Aws::String>
  void SetMessage(MessageT&& value) {
    m_messageHasBeenSet = true;
    m_message = std::forward<MessageT>(value);
  }
  template <typename MessageT = Aws::String>
  PortalStatusException& WithMessage(MessageT&& value) {
    SetMessage(std::forward<MessageT>(value));
    return *this;
  }
  ///@}
 private:
  PortalStatusExceptionType m_exception{PortalStatusExceptionType::NOT_SET};

  Aws::String m_message;
  bool m_exceptionHasBeenSet = false;
  bool m_messageHasBeenSet = false;
};

}  // namespace Model
}  // namespace APIPortal
}  // namespace Aws
