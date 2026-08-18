/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agentcore/BedrockAgentCore_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace BedrockAgentCore {
namespace Model {

/**
 * <p>Contains the payment credential, ready to retry the request.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agentcore-2024-02-28/MppPaymentOutput">AWS
 * API Reference</a></p>
 */
class MppPaymentOutput {
 public:
  AWS_BEDROCKAGENTCORE_API MppPaymentOutput() = default;
  AWS_BEDROCKAGENTCORE_API MppPaymentOutput(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTCORE_API MppPaymentOutput& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTCORE_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The MPP protocol version, for example "1" or "2".</p>
   */
  inline const Aws::String& GetVersion() const { return m_version; }
  inline bool VersionHasBeenSet() const { return m_versionHasBeenSet; }
  template <typename VersionT = Aws::String>
  void SetVersion(VersionT&& value) {
    m_versionHasBeenSet = true;
    m_version = std::forward<VersionT>(value);
  }
  template <typename VersionT = Aws::String>
  MppPaymentOutput& WithVersion(VersionT&& value) {
    SetVersion(std::forward<VersionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The id of the challenge that was paid, echoed from the input challenge so you
   * can correlate the result without decoding the credential.</p>
   */
  inline const Aws::String& GetSelectedPaymentId() const { return m_selectedPaymentId; }
  inline bool SelectedPaymentIdHasBeenSet() const { return m_selectedPaymentIdHasBeenSet; }
  template <typename SelectedPaymentIdT = Aws::String>
  void SetSelectedPaymentId(SelectedPaymentIdT&& value) {
    m_selectedPaymentIdHasBeenSet = true;
    m_selectedPaymentId = std::forward<SelectedPaymentIdT>(value);
  }
  template <typename SelectedPaymentIdT = Aws::String>
  MppPaymentOutput& WithSelectedPaymentId(SelectedPaymentIdT&& value) {
    SetSelectedPaymentId(std::forward<SelectedPaymentIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Ready-to-send value for the <code>Authorization</code> header, in the form
   * "Payment &lt;base64url-token&gt;". Attach this header and retry the original
   * request. To inspect the full credential, base64url-decode the token.</p>
   */
  inline const Aws::String& GetPaymentCredential() const { return m_paymentCredential; }
  inline bool PaymentCredentialHasBeenSet() const { return m_paymentCredentialHasBeenSet; }
  template <typename PaymentCredentialT = Aws::String>
  void SetPaymentCredential(PaymentCredentialT&& value) {
    m_paymentCredentialHasBeenSet = true;
    m_paymentCredential = std::forward<PaymentCredentialT>(value);
  }
  template <typename PaymentCredentialT = Aws::String>
  MppPaymentOutput& WithPaymentCredential(PaymentCredentialT&& value) {
    SetPaymentCredential(std::forward<PaymentCredentialT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_version;

  Aws::String m_selectedPaymentId;

  Aws::String m_paymentCredential;
  bool m_versionHasBeenSet = false;
  bool m_selectedPaymentIdHasBeenSet = false;
  bool m_paymentCredentialHasBeenSet = false;
};

}  // namespace Model
}  // namespace BedrockAgentCore
}  // namespace Aws
