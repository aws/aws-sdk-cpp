/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agentcore/BedrockAgentCoreRequest.h>
#include <aws/bedrock-agentcore/BedrockAgentCore_EXPORTS.h>
#include <aws/bedrock-agentcore/model/BlockchainChainId.h>
#include <aws/bedrock-agentcore/model/InstrumentBalanceToken.h>
#include <aws/core/utils/memory/stl/AWSString.h>

#include <utility>

namespace Aws {
namespace BedrockAgentCore {
namespace Model {

/**
 * <p>Request structure for getting payment instrument balance.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agentcore-2024-02-28/GetPaymentInstrumentBalanceRequest">AWS
 * API Reference</a></p>
 */
class GetPaymentInstrumentBalanceRequest : public BedrockAgentCoreRequest {
 public:
  AWS_BEDROCKAGENTCORE_API GetPaymentInstrumentBalanceRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "GetPaymentInstrumentBalance"; }

  AWS_BEDROCKAGENTCORE_API Aws::String SerializePayload() const override;

  AWS_BEDROCKAGENTCORE_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

  ///@{
  /**
   * <p>The user ID associated with this payment instrument.</p>
   */
  inline const Aws::String& GetUserId() const { return m_userId; }
  inline bool UserIdHasBeenSet() const { return m_userIdHasBeenSet; }
  template <typename UserIdT = Aws::String>
  void SetUserId(UserIdT&& value) {
    m_userIdHasBeenSet = true;
    m_userId = std::forward<UserIdT>(value);
  }
  template <typename UserIdT = Aws::String>
  GetPaymentInstrumentBalanceRequest& WithUserId(UserIdT&& value) {
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
  GetPaymentInstrumentBalanceRequest& WithAgentName(AgentNameT&& value) {
    SetAgentName(std::forward<AgentNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ARN of the payment manager that owns this payment instrument.</p>
   */
  inline const Aws::String& GetPaymentManagerArn() const { return m_paymentManagerArn; }
  inline bool PaymentManagerArnHasBeenSet() const { return m_paymentManagerArnHasBeenSet; }
  template <typename PaymentManagerArnT = Aws::String>
  void SetPaymentManagerArn(PaymentManagerArnT&& value) {
    m_paymentManagerArnHasBeenSet = true;
    m_paymentManagerArn = std::forward<PaymentManagerArnT>(value);
  }
  template <typename PaymentManagerArnT = Aws::String>
  GetPaymentInstrumentBalanceRequest& WithPaymentManagerArn(PaymentManagerArnT&& value) {
    SetPaymentManagerArn(std::forward<PaymentManagerArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ID of the payment connector associated with this instrument.</p>
   */
  inline const Aws::String& GetPaymentConnectorId() const { return m_paymentConnectorId; }
  inline bool PaymentConnectorIdHasBeenSet() const { return m_paymentConnectorIdHasBeenSet; }
  template <typename PaymentConnectorIdT = Aws::String>
  void SetPaymentConnectorId(PaymentConnectorIdT&& value) {
    m_paymentConnectorIdHasBeenSet = true;
    m_paymentConnectorId = std::forward<PaymentConnectorIdT>(value);
  }
  template <typename PaymentConnectorIdT = Aws::String>
  GetPaymentInstrumentBalanceRequest& WithPaymentConnectorId(PaymentConnectorIdT&& value) {
    SetPaymentConnectorId(std::forward<PaymentConnectorIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ID of the payment instrument to query balance for.</p>
   */
  inline const Aws::String& GetPaymentInstrumentId() const { return m_paymentInstrumentId; }
  inline bool PaymentInstrumentIdHasBeenSet() const { return m_paymentInstrumentIdHasBeenSet; }
  template <typename PaymentInstrumentIdT = Aws::String>
  void SetPaymentInstrumentId(PaymentInstrumentIdT&& value) {
    m_paymentInstrumentIdHasBeenSet = true;
    m_paymentInstrumentId = std::forward<PaymentInstrumentIdT>(value);
  }
  template <typename PaymentInstrumentIdT = Aws::String>
  GetPaymentInstrumentBalanceRequest& WithPaymentInstrumentId(PaymentInstrumentIdT&& value) {
    SetPaymentInstrumentId(std::forward<PaymentInstrumentIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The specific blockchain chain to query balance on. Required because balances
   * are chain-specific.</p>
   */
  inline BlockchainChainId GetChain() const { return m_chain; }
  inline bool ChainHasBeenSet() const { return m_chainHasBeenSet; }
  inline void SetChain(BlockchainChainId value) {
    m_chainHasBeenSet = true;
    m_chain = value;
  }
  inline GetPaymentInstrumentBalanceRequest& WithChain(BlockchainChainId value) {
    SetChain(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The token to query balance for. Only tokens supported for X402 payments are
   * returned.</p>
   */
  inline InstrumentBalanceToken GetToken() const { return m_token; }
  inline bool TokenHasBeenSet() const { return m_tokenHasBeenSet; }
  inline void SetToken(InstrumentBalanceToken value) {
    m_tokenHasBeenSet = true;
    m_token = value;
  }
  inline GetPaymentInstrumentBalanceRequest& WithToken(InstrumentBalanceToken value) {
    SetToken(value);
    return *this;
  }
  ///@}
 private:
  Aws::String m_userId;

  Aws::String m_agentName;

  Aws::String m_paymentManagerArn;

  Aws::String m_paymentConnectorId;

  Aws::String m_paymentInstrumentId;

  BlockchainChainId m_chain{BlockchainChainId::NOT_SET};

  InstrumentBalanceToken m_token{InstrumentBalanceToken::NOT_SET};
  bool m_userIdHasBeenSet = false;
  bool m_agentNameHasBeenSet = false;
  bool m_paymentManagerArnHasBeenSet = false;
  bool m_paymentConnectorIdHasBeenSet = false;
  bool m_paymentInstrumentIdHasBeenSet = false;
  bool m_chainHasBeenSet = false;
  bool m_tokenHasBeenSet = false;
};

}  // namespace Model
}  // namespace BedrockAgentCore
}  // namespace Aws
