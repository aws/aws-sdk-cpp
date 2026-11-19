/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agentcore/BedrockAgentCore_EXPORTS.h>
#include <aws/bedrock-agentcore/model/AwsBillingPaymentOptions.h>
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
 * <p>The input for an AWS Billing x402 payment. The payment pays an AWS
 * Marketplace seller's x402 (HTTP 402) payment requirement and is billed to the
 * AWS account that owns the payment manager, through the payment manager's AWS
 * Billing payment connector.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agentcore-2024-02-28/AwsBillingX402PaymentInput">AWS
 * API Reference</a></p>
 */
class AwsBillingX402PaymentInput {
 public:
  AWS_BEDROCKAGENTCORE_API AwsBillingX402PaymentInput() = default;
  AWS_BEDROCKAGENTCORE_API AwsBillingX402PaymentInput(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTCORE_API AwsBillingX402PaymentInput& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTCORE_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The x402 protocol version of the seller's HTTP 402 response, from its
   * <code>x402Version</code> field. For example, <code>2</code>.</p>
   */
  inline const Aws::String& GetVersion() const { return m_version; }
  inline bool VersionHasBeenSet() const { return m_versionHasBeenSet; }
  template <typename VersionT = Aws::String>
  void SetVersion(VersionT&& value) {
    m_versionHasBeenSet = true;
    m_version = std::forward<VersionT>(value);
  }
  template <typename VersionT = Aws::String>
  AwsBillingX402PaymentInput& WithVersion(VersionT&& value) {
    SetVersion(std::forward<VersionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The seller's x402 payment requirement for AWS Billing, passed unchanged as a
   * JSON object. The service reads the seller-signed quote token from
   * <code>extra.quoteToken</code> and returns a <code>ValidationException</code> if
   * it is missing or invalid. Any change to the quote token invalidates its
   * signature.</p>
   */
  inline Aws::Utils::DocumentView GetPayload() const { return m_payload; }
  inline bool PayloadHasBeenSet() const { return m_payloadHasBeenSet; }
  template <typename PayloadT = Aws::Utils::Document>
  void SetPayload(PayloadT&& value) {
    m_payloadHasBeenSet = true;
    m_payload = std::forward<PayloadT>(value);
  }
  template <typename PayloadT = Aws::Utils::Document>
  AwsBillingX402PaymentInput& WithPayload(PayloadT&& value) {
    SetPayload(std::forward<PayloadT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Optional settings for the AWS Billing payment.</p>
   */
  inline const AwsBillingPaymentOptions& GetOptions() const { return m_options; }
  inline bool OptionsHasBeenSet() const { return m_optionsHasBeenSet; }
  template <typename OptionsT = AwsBillingPaymentOptions>
  void SetOptions(OptionsT&& value) {
    m_optionsHasBeenSet = true;
    m_options = std::forward<OptionsT>(value);
  }
  template <typename OptionsT = AwsBillingPaymentOptions>
  AwsBillingX402PaymentInput& WithOptions(OptionsT&& value) {
    SetOptions(std::forward<OptionsT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_version;

  Aws::Utils::Document m_payload;

  AwsBillingPaymentOptions m_options;
  bool m_versionHasBeenSet = false;
  bool m_payloadHasBeenSet = false;
  bool m_optionsHasBeenSet = false;
};

}  // namespace Model
}  // namespace BedrockAgentCore
}  // namespace Aws
