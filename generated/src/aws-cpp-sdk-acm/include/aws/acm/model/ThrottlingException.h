/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/acm/ACM_EXPORTS.h>
#include <aws/acm/model/ThrottlingReason.h>
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
namespace ACM {
namespace Model {

/**
 * <p>The request was denied because it exceeded a quota.</p><p><h3>See Also:</h3>
 * <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/acm-2015-12-08/ThrottlingException">AWS
 * API Reference</a></p>
 */
class ThrottlingException {
 public:
  AWS_ACM_API ThrottlingException() = default;
  AWS_ACM_API ThrottlingException(Aws::Utils::Json::JsonView jsonValue);
  AWS_ACM_API ThrottlingException& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_ACM_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{

  inline const Aws::String& GetMessage() const { return m_message; }
  inline bool MessageHasBeenSet() const { return m_messageHasBeenSet; }
  template <typename MessageT = Aws::String>
  void SetMessage(MessageT&& value) {
    m_messageHasBeenSet = true;
    m_message = std::forward<MessageT>(value);
  }
  template <typename MessageT = Aws::String>
  ThrottlingException& WithMessage(MessageT&& value) {
    SetMessage(std::forward<MessageT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>One or more reasons why the request was throttled.</p>
   */
  inline const Aws::Vector<ThrottlingReason>& GetThrottlingReasons() const { return m_throttlingReasons; }
  inline bool ThrottlingReasonsHasBeenSet() const { return m_throttlingReasonsHasBeenSet; }
  template <typename ThrottlingReasonsT = Aws::Vector<ThrottlingReason>>
  void SetThrottlingReasons(ThrottlingReasonsT&& value) {
    m_throttlingReasonsHasBeenSet = true;
    m_throttlingReasons = std::forward<ThrottlingReasonsT>(value);
  }
  template <typename ThrottlingReasonsT = Aws::Vector<ThrottlingReason>>
  ThrottlingException& WithThrottlingReasons(ThrottlingReasonsT&& value) {
    SetThrottlingReasons(std::forward<ThrottlingReasonsT>(value));
    return *this;
  }
  template <typename ThrottlingReasonsT = ThrottlingReason>
  ThrottlingException& AddThrottlingReasons(ThrottlingReasonsT&& value) {
    m_throttlingReasonsHasBeenSet = true;
    m_throttlingReasons.emplace_back(std::forward<ThrottlingReasonsT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_message;

  Aws::Vector<ThrottlingReason> m_throttlingReasons;
  bool m_messageHasBeenSet = false;
  bool m_throttlingReasonsHasBeenSet = false;
};

}  // namespace Model
}  // namespace ACM
}  // namespace Aws
