/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/apiportal/APIPortal_EXPORTS.h>
#include <aws/apiportal/model/ProductApiPageStatusExceptionType.h>
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
 * <p>Failure detail attached to a ProductApiPage's status: a typed reason plus an
 * optional human-readable message.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/apiportal-2026-04-30/ProductApiPageStatusException">AWS
 * API Reference</a></p>
 */
class ProductApiPageStatusException {
 public:
  AWS_APIPORTAL_API ProductApiPageStatusException() = default;
  AWS_APIPORTAL_API ProductApiPageStatusException(Aws::Utils::Json::JsonView jsonValue);
  AWS_APIPORTAL_API ProductApiPageStatusException& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_APIPORTAL_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{

  inline ProductApiPageStatusExceptionType GetException() const { return m_exception; }
  inline bool ExceptionHasBeenSet() const { return m_exceptionHasBeenSet; }
  inline void SetException(ProductApiPageStatusExceptionType value) {
    m_exceptionHasBeenSet = true;
    m_exception = value;
  }
  inline ProductApiPageStatusException& WithException(ProductApiPageStatusExceptionType value) {
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
  ProductApiPageStatusException& WithMessage(MessageT&& value) {
    SetMessage(std::forward<MessageT>(value));
    return *this;
  }
  ///@}
 private:
  ProductApiPageStatusExceptionType m_exception{ProductApiPageStatusExceptionType::NOT_SET};

  Aws::String m_message;
  bool m_exceptionHasBeenSet = false;
  bool m_messageHasBeenSet = false;
};

}  // namespace Model
}  // namespace APIPortal
}  // namespace Aws
