/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agentcore/BedrockAgentCoreRequest.h>
#include <aws/bedrock-agentcore/BedrockAgentCore_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

#include <utility>

namespace Aws {
namespace BedrockAgentCore {
namespace Model {

/**
 * <p>Request structure for getting a payment instrument</p><p><h3>See Also:</h3>
 * <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agentcore-2024-02-28/GetPaymentInstrumentRequest">AWS
 * API Reference</a></p>
 */
class GetPaymentInstrumentRequest : public BedrockAgentCoreRequest {
 public:
  AWS_BEDROCKAGENTCORE_API GetPaymentInstrumentRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "GetPaymentInstrument"; }

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
  GetPaymentInstrumentRequest& WithUserId(UserIdT&& value) {
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
  GetPaymentInstrumentRequest& WithAgentName(AgentNameT&& value) {
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
  GetPaymentInstrumentRequest& WithPaymentManagerArn(PaymentManagerArnT&& value) {
    SetPaymentManagerArn(std::forward<PaymentManagerArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ID of the payment connector.</p>
   */
  inline const Aws::String& GetPaymentConnectorId() const { return m_paymentConnectorId; }
  inline bool PaymentConnectorIdHasBeenSet() const { return m_paymentConnectorIdHasBeenSet; }
  template <typename PaymentConnectorIdT = Aws::String>
  void SetPaymentConnectorId(PaymentConnectorIdT&& value) {
    m_paymentConnectorIdHasBeenSet = true;
    m_paymentConnectorId = std::forward<PaymentConnectorIdT>(value);
  }
  template <typename PaymentConnectorIdT = Aws::String>
  GetPaymentInstrumentRequest& WithPaymentConnectorId(PaymentConnectorIdT&& value) {
    SetPaymentConnectorId(std::forward<PaymentConnectorIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ID of the payment instrument to retrieve.</p>
   */
  inline const Aws::String& GetPaymentInstrumentId() const { return m_paymentInstrumentId; }
  inline bool PaymentInstrumentIdHasBeenSet() const { return m_paymentInstrumentIdHasBeenSet; }
  template <typename PaymentInstrumentIdT = Aws::String>
  void SetPaymentInstrumentId(PaymentInstrumentIdT&& value) {
    m_paymentInstrumentIdHasBeenSet = true;
    m_paymentInstrumentId = std::forward<PaymentInstrumentIdT>(value);
  }
  template <typename PaymentInstrumentIdT = Aws::String>
  GetPaymentInstrumentRequest& WithPaymentInstrumentId(PaymentInstrumentIdT&& value) {
    SetPaymentInstrumentId(std::forward<PaymentInstrumentIdT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_userId;

  Aws::String m_agentName;

  Aws::String m_paymentManagerArn;

  Aws::String m_paymentConnectorId;

  Aws::String m_paymentInstrumentId;
  bool m_userIdHasBeenSet = false;
  bool m_agentNameHasBeenSet = false;
  bool m_paymentManagerArnHasBeenSet = false;
  bool m_paymentConnectorIdHasBeenSet = false;
  bool m_paymentInstrumentIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace BedrockAgentCore
}  // namespace Aws
