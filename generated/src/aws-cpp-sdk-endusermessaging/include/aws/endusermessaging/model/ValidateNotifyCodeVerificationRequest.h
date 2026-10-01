/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/endusermessaging/EndUserMessagingRequest.h>
#include <aws/endusermessaging/EndUserMessaging_EXPORTS.h>

#include <utility>

namespace Aws {
namespace EndUserMessaging {
namespace Model {

/**
 */
class ValidateNotifyCodeVerificationRequest : public EndUserMessagingRequest {
 public:
  AWS_ENDUSERMESSAGING_API ValidateNotifyCodeVerificationRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "ValidateNotifyCodeVerification"; }

  AWS_ENDUSERMESSAGING_API Aws::String SerializePayload() const override;

  ///@{
  /**
   * <p>The recipient identifier. For the TEXT and VOICE channels, specify an E.164
   * phone number. For the WhatsApp channel, specify a WhatsApp address.</p>
   */
  inline const Aws::String& GetDestinationIdentity() const { return m_destinationIdentity; }
  inline bool DestinationIdentityHasBeenSet() const { return m_destinationIdentityHasBeenSet; }
  template <typename DestinationIdentityT = Aws::String>
  void SetDestinationIdentity(DestinationIdentityT&& value) {
    m_destinationIdentityHasBeenSet = true;
    m_destinationIdentity = std::forward<DestinationIdentityT>(value);
  }
  template <typename DestinationIdentityT = Aws::String>
  ValidateNotifyCodeVerificationRequest& WithDestinationIdentity(DestinationIdentityT&& value) {
    SetDestinationIdentity(std::forward<DestinationIdentityT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The caller-supplied reference identifier used to locate the verification.
   * This value must match the value that you supplied to the
   * SendNotifyCodeVerification operation.</p>
   */
  inline const Aws::String& GetReferenceId() const { return m_referenceId; }
  inline bool ReferenceIdHasBeenSet() const { return m_referenceIdHasBeenSet; }
  template <typename ReferenceIdT = Aws::String>
  void SetReferenceId(ReferenceIdT&& value) {
    m_referenceIdHasBeenSet = true;
    m_referenceId = std::forward<ReferenceIdT>(value);
  }
  template <typename ReferenceIdT = Aws::String>
  ValidateNotifyCodeVerificationRequest& WithReferenceId(ReferenceIdT&& value) {
    SetReferenceId(std::forward<ReferenceIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The one-time passcode that the recipient submitted for validation.</p>
   */
  inline const Aws::String& GetCode() const { return m_code; }
  inline bool CodeHasBeenSet() const { return m_codeHasBeenSet; }
  template <typename CodeT = Aws::String>
  void SetCode(CodeT&& value) {
    m_codeHasBeenSet = true;
    m_code = std::forward<CodeT>(value);
  }
  template <typename CodeT = Aws::String>
  ValidateNotifyCodeVerificationRequest& WithCode(CodeT&& value) {
    SetCode(std::forward<CodeT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_destinationIdentity;

  Aws::String m_referenceId;

  Aws::String m_code;
  bool m_destinationIdentityHasBeenSet = false;
  bool m_referenceIdHasBeenSet = false;
  bool m_codeHasBeenSet = false;
};

}  // namespace Model
}  // namespace EndUserMessaging
}  // namespace Aws
