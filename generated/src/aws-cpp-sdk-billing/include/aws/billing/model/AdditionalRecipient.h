/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/billing/Billing_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace Billing {
namespace Model {

/**
 * <p>A recipient copied as a viewer on the executive approval request, in addition
 * to the approver.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/billing-2023-09-07/AdditionalRecipient">AWS
 * API Reference</a></p>
 */
class AdditionalRecipient {
 public:
  AWS_BILLING_API AdditionalRecipient() = default;
  AWS_BILLING_API AdditionalRecipient(Aws::Utils::Json::JsonView jsonValue);
  AWS_BILLING_API AdditionalRecipient& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_BILLING_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The email address of the recipient. This value is 3–256 characters and must
   * be a valid email address.</p>
   */
  inline const Aws::String& GetEmail() const { return m_email; }
  inline bool EmailHasBeenSet() const { return m_emailHasBeenSet; }
  template <typename EmailT = Aws::String>
  void SetEmail(EmailT&& value) {
    m_emailHasBeenSet = true;
    m_email = std::forward<EmailT>(value);
  }
  template <typename EmailT = Aws::String>
  AdditionalRecipient& WithEmail(EmailT&& value) {
    SetEmail(std::forward<EmailT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_email;
  bool m_emailHasBeenSet = false;
};

}  // namespace Model
}  // namespace Billing
}  // namespace Aws
