/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agentcore/BedrockAgentCoreRequest.h>
#include <aws/bedrock-agentcore/BedrockAgentCore_EXPORTS.h>
#include <aws/bedrock-agentcore/model/PaymentInput.h>
#include <aws/bedrock-agentcore/model/PaymentType.h>
#include <aws/core/utils/UUID.h>
#include <aws/core/utils/memory/stl/AWSString.h>

#include <utility>

namespace Aws {
namespace BedrockAgentCore {
namespace Model {

/**
 * <p>Request structure for processing a payment.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agentcore-2024-02-28/ProcessPaymentRequest">AWS
 * API Reference</a></p>
 */
class ProcessPaymentRequest : public BedrockAgentCoreRequest {
 public:
  AWS_BEDROCKAGENTCORE_API ProcessPaymentRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "ProcessPayment"; }

  AWS_BEDROCKAGENTCORE_API Aws::String SerializePayload() const override;

  AWS_BEDROCKAGENTCORE_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

  ///@{
  /**
   * <p>The user ID associated with this payment.</p>
   */
  inline const Aws::String& GetUserId() const { return m_userId; }
  inline bool UserIdHasBeenSet() const { return m_userIdHasBeenSet; }
  template <typename UserIdT = Aws::String>
  void SetUserId(UserIdT&& value) {
    m_userIdHasBeenSet = true;
    m_userId = std::forward<UserIdT>(value);
  }
  template <typename UserIdT = Aws::String>
  ProcessPaymentRequest& WithUserId(UserIdT&& value) {
    SetUserId(std::forward<UserIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The agent name associated with this request, used for observability.</p>
   */
  inline const Aws::String& GetAgentName() const { return m_agentName; }
  inline bool AgentNameHasBeenSet() const { return m_agentNameHasBeenSet; }
  template <typename AgentNameT = Aws::String>
  void SetAgentName(AgentNameT&& value) {
    m_agentNameHasBeenSet = true;
    m_agentName = std::forward<AgentNameT>(value);
  }
  template <typename AgentNameT = Aws::String>
  ProcessPaymentRequest& WithAgentName(AgentNameT&& value) {
    SetAgentName(std::forward<AgentNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ARN of the payment manager.</p>
   */
  inline const Aws::String& GetPaymentManagerArn() const { return m_paymentManagerArn; }
  inline bool PaymentManagerArnHasBeenSet() const { return m_paymentManagerArnHasBeenSet; }
  template <typename PaymentManagerArnT = Aws::String>
  void SetPaymentManagerArn(PaymentManagerArnT&& value) {
    m_paymentManagerArnHasBeenSet = true;
    m_paymentManagerArn = std::forward<PaymentManagerArnT>(value);
  }
  template <typename PaymentManagerArnT = Aws::String>
  ProcessPaymentRequest& WithPaymentManagerArn(PaymentManagerArnT&& value) {
    SetPaymentManagerArn(std::forward<PaymentManagerArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ID of the payment session.</p>
   */
  inline const Aws::String& GetPaymentSessionId() const { return m_paymentSessionId; }
  inline bool PaymentSessionIdHasBeenSet() const { return m_paymentSessionIdHasBeenSet; }
  template <typename PaymentSessionIdT = Aws::String>
  void SetPaymentSessionId(PaymentSessionIdT&& value) {
    m_paymentSessionIdHasBeenSet = true;
    m_paymentSessionId = std::forward<PaymentSessionIdT>(value);
  }
  template <typename PaymentSessionIdT = Aws::String>
  ProcessPaymentRequest& WithPaymentSessionId(PaymentSessionIdT&& value) {
    SetPaymentSessionId(std::forward<PaymentSessionIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ID of the payment instrument to use.</p>
   */
  inline const Aws::String& GetPaymentInstrumentId() const { return m_paymentInstrumentId; }
  inline bool PaymentInstrumentIdHasBeenSet() const { return m_paymentInstrumentIdHasBeenSet; }
  template <typename PaymentInstrumentIdT = Aws::String>
  void SetPaymentInstrumentId(PaymentInstrumentIdT&& value) {
    m_paymentInstrumentIdHasBeenSet = true;
    m_paymentInstrumentId = std::forward<PaymentInstrumentIdT>(value);
  }
  template <typename PaymentInstrumentIdT = Aws::String>
  ProcessPaymentRequest& WithPaymentInstrumentId(PaymentInstrumentIdT&& value) {
    SetPaymentInstrumentId(std::forward<PaymentInstrumentIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The type of payment to process.</p>
   */
  inline PaymentType GetPaymentType() const { return m_paymentType; }
  inline bool PaymentTypeHasBeenSet() const { return m_paymentTypeHasBeenSet; }
  inline void SetPaymentType(PaymentType value) {
    m_paymentTypeHasBeenSet = true;
    m_paymentType = value;
  }
  inline ProcessPaymentRequest& WithPaymentType(PaymentType value) {
    SetPaymentType(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The payment input details specific to the payment type.</p>
   */
  inline const PaymentInput& GetPaymentInput() const { return m_paymentInput; }
  inline bool PaymentInputHasBeenSet() const { return m_paymentInputHasBeenSet; }
  template <typename PaymentInputT = PaymentInput>
  void SetPaymentInput(PaymentInputT&& value) {
    m_paymentInputHasBeenSet = true;
    m_paymentInput = std::forward<PaymentInputT>(value);
  }
  template <typename PaymentInputT = PaymentInput>
  ProcessPaymentRequest& WithPaymentInput(PaymentInputT&& value) {
    SetPaymentInput(std::forward<PaymentInputT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A unique, case-sensitive identifier that you provide to ensure the
   * idempotency of the request.</p>
   */
  inline const Aws::String& GetClientToken() const { return m_clientToken; }
  inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }
  template <typename ClientTokenT = Aws::String>
  void SetClientToken(ClientTokenT&& value) {
    m_clientTokenHasBeenSet = true;
    m_clientToken = std::forward<ClientTokenT>(value);
  }
  template <typename ClientTokenT = Aws::String>
  ProcessPaymentRequest& WithClientToken(ClientTokenT&& value) {
    SetClientToken(std::forward<ClientTokenT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_userId;

  Aws::String m_agentName;

  Aws::String m_paymentManagerArn;

  Aws::String m_paymentSessionId;

  Aws::String m_paymentInstrumentId;

  PaymentType m_paymentType{PaymentType::NOT_SET};

  PaymentInput m_paymentInput;

  Aws::String m_clientToken{Aws::Utils::UUID::PseudoRandomUUID()};
  bool m_userIdHasBeenSet = false;
  bool m_agentNameHasBeenSet = false;
  bool m_paymentManagerArnHasBeenSet = false;
  bool m_paymentSessionIdHasBeenSet = false;
  bool m_paymentInstrumentIdHasBeenSet = false;
  bool m_paymentTypeHasBeenSet = false;
  bool m_paymentInputHasBeenSet = false;
  bool m_clientTokenHasBeenSet = true;
};

}  // namespace Model
}  // namespace BedrockAgentCore
}  // namespace Aws
