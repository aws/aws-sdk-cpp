/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/acm/ACM_EXPORTS.h>
#include <aws/acm/model/AcmeDomainValidationFailureReason.h>
#include <aws/core/utils/memory/stl/AWSString.h>

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
 * <p>Contains details about a failure.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/acm-2015-12-08/FailureDetails">AWS
 * API Reference</a></p>
 */
class FailureDetails {
 public:
  AWS_ACM_API FailureDetails() = default;
  AWS_ACM_API FailureDetails(Aws::Utils::Json::JsonView jsonValue);
  AWS_ACM_API FailureDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_ACM_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The reason for the failure.</p>
   */
  inline AcmeDomainValidationFailureReason GetReason() const { return m_reason; }
  inline bool ReasonHasBeenSet() const { return m_reasonHasBeenSet; }
  inline void SetReason(AcmeDomainValidationFailureReason value) {
    m_reasonHasBeenSet = true;
    m_reason = value;
  }
  inline FailureDetails& WithReason(AcmeDomainValidationFailureReason value) {
    SetReason(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A message describing the failure.</p>
   */
  inline const Aws::String& GetMessage() const { return m_message; }
  inline bool MessageHasBeenSet() const { return m_messageHasBeenSet; }
  template <typename MessageT = Aws::String>
  void SetMessage(MessageT&& value) {
    m_messageHasBeenSet = true;
    m_message = std::forward<MessageT>(value);
  }
  template <typename MessageT = Aws::String>
  FailureDetails& WithMessage(MessageT&& value) {
    SetMessage(std::forward<MessageT>(value));
    return *this;
  }
  ///@}
 private:
  AcmeDomainValidationFailureReason m_reason{AcmeDomainValidationFailureReason::NOT_SET};

  Aws::String m_message;
  bool m_reasonHasBeenSet = false;
  bool m_messageHasBeenSet = false;
};

}  // namespace Model
}  // namespace ACM
}  // namespace Aws
