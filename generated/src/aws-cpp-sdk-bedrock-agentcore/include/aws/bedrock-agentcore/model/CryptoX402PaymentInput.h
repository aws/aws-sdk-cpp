/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agentcore/BedrockAgentCore_EXPORTS.h>
#include <aws/core/utils/Document.h>
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
 * <p>The input for a crypto X402 payment.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agentcore-2024-02-28/CryptoX402PaymentInput">AWS
 * API Reference</a></p>
 */
class CryptoX402PaymentInput {
 public:
  AWS_BEDROCKAGENTCORE_API CryptoX402PaymentInput() = default;
  AWS_BEDROCKAGENTCORE_API CryptoX402PaymentInput(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTCORE_API CryptoX402PaymentInput& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTCORE_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The version of the X402 protocol.</p>
   */
  inline const Aws::String& GetVersion() const { return m_version; }
  inline bool VersionHasBeenSet() const { return m_versionHasBeenSet; }
  template <typename VersionT = Aws::String>
  void SetVersion(VersionT&& value) {
    m_versionHasBeenSet = true;
    m_version = std::forward<VersionT>(value);
  }
  template <typename VersionT = Aws::String>
  CryptoX402PaymentInput& WithVersion(VersionT&& value) {
    SetVersion(std::forward<VersionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The X402 payment payload.</p>
   */
  inline Aws::Utils::DocumentView GetPayload() const { return m_payload; }
  inline bool PayloadHasBeenSet() const { return m_payloadHasBeenSet; }
  template <typename PayloadT = Aws::Utils::Document>
  void SetPayload(PayloadT&& value) {
    m_payloadHasBeenSet = true;
    m_payload = std::forward<PayloadT>(value);
  }
  template <typename PayloadT = Aws::Utils::Document>
  CryptoX402PaymentInput& WithPayload(PayloadT&& value) {
    SetPayload(std::forward<PayloadT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The maximum on-chain Permit2 allowance to grant before signing the payment
   * authorization, in the asset's smallest denomination. This field is valid only
   * for the <code>upto</code> (metered) scheme; supplying it for the
   * <code>exact</code> scheme returns a validation error.</p> <p>When set, the
   * service approves an ERC-20 allowance for this amount before processing the
   * payment. The approval sets, rather than adds to, the wallet's allowance. Set
   * this field only when the wallet needs approving, for example on its first
   * <code>upto</code> payment, to avoid a redundant on-chain transaction. Omit the
   * field to skip allowance handling. This is the default, and the only behavior for
   * the <code>exact</code> scheme.</p>
   */
  inline const Aws::String& GetPermit2AllowanceLimit() const { return m_permit2AllowanceLimit; }
  inline bool Permit2AllowanceLimitHasBeenSet() const { return m_permit2AllowanceLimitHasBeenSet; }
  template <typename Permit2AllowanceLimitT = Aws::String>
  void SetPermit2AllowanceLimit(Permit2AllowanceLimitT&& value) {
    m_permit2AllowanceLimitHasBeenSet = true;
    m_permit2AllowanceLimit = std::forward<Permit2AllowanceLimitT>(value);
  }
  template <typename Permit2AllowanceLimitT = Aws::String>
  CryptoX402PaymentInput& WithPermit2AllowanceLimit(Permit2AllowanceLimitT&& value) {
    SetPermit2AllowanceLimit(std::forward<Permit2AllowanceLimitT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_version;

  Aws::Utils::Document m_payload;

  Aws::String m_permit2AllowanceLimit;
  bool m_versionHasBeenSet = false;
  bool m_payloadHasBeenSet = false;
  bool m_permit2AllowanceLimitHasBeenSet = false;
};

}  // namespace Model
}  // namespace BedrockAgentCore
}  // namespace Aws
