/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agentcore-control/BedrockAgentCoreControlRequest.h>
#include <aws/bedrock-agentcore-control/BedrockAgentCoreControl_EXPORTS.h>
#include <aws/core/utils/UUID.h>
#include <aws/core/utils/memory/stl/AWSString.h>

#include <utility>

namespace Aws {
namespace Http {
class URI;
}  // namespace Http
namespace BedrockAgentCoreControl {
namespace Model {

/**
 */
class DeletePaymentConnectorRequest : public BedrockAgentCoreControlRequest {
 public:
  AWS_BEDROCKAGENTCORECONTROL_API DeletePaymentConnectorRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "DeletePaymentConnector"; }

  AWS_BEDROCKAGENTCORECONTROL_API Aws::String SerializePayload() const override;

  AWS_BEDROCKAGENTCORECONTROL_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;

  ///@{
  /**
   * <p>The unique identifier of the parent payment manager.</p>
   */
  inline const Aws::String& GetPaymentManagerId() const { return m_paymentManagerId; }
  inline bool PaymentManagerIdHasBeenSet() const { return m_paymentManagerIdHasBeenSet; }
  template <typename PaymentManagerIdT = Aws::String>
  void SetPaymentManagerId(PaymentManagerIdT&& value) {
    m_paymentManagerIdHasBeenSet = true;
    m_paymentManagerId = std::forward<PaymentManagerIdT>(value);
  }
  template <typename PaymentManagerIdT = Aws::String>
  DeletePaymentConnectorRequest& WithPaymentManagerId(PaymentManagerIdT&& value) {
    SetPaymentManagerId(std::forward<PaymentManagerIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The unique identifier of the payment connector to delete.</p>
   */
  inline const Aws::String& GetPaymentConnectorId() const { return m_paymentConnectorId; }
  inline bool PaymentConnectorIdHasBeenSet() const { return m_paymentConnectorIdHasBeenSet; }
  template <typename PaymentConnectorIdT = Aws::String>
  void SetPaymentConnectorId(PaymentConnectorIdT&& value) {
    m_paymentConnectorIdHasBeenSet = true;
    m_paymentConnectorId = std::forward<PaymentConnectorIdT>(value);
  }
  template <typename PaymentConnectorIdT = Aws::String>
  DeletePaymentConnectorRequest& WithPaymentConnectorId(PaymentConnectorIdT&& value) {
    SetPaymentConnectorId(std::forward<PaymentConnectorIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A unique, case-sensitive identifier to ensure that the API request completes
   * no more than one time. If you don't specify this field, a value is randomly
   * generated for you. If this token matches a previous request, the service ignores
   * the request, but doesn't return an error. For more information, see <a
   * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/Run_Instance_Idempotency.html">Ensuring
   * idempotency</a>.</p>
   */
  inline const Aws::String& GetClientToken() const { return m_clientToken; }
  inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }
  template <typename ClientTokenT = Aws::String>
  void SetClientToken(ClientTokenT&& value) {
    m_clientTokenHasBeenSet = true;
    m_clientToken = std::forward<ClientTokenT>(value);
  }
  template <typename ClientTokenT = Aws::String>
  DeletePaymentConnectorRequest& WithClientToken(ClientTokenT&& value) {
    SetClientToken(std::forward<ClientTokenT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_paymentManagerId;

  Aws::String m_paymentConnectorId;

  Aws::String m_clientToken{Aws::Utils::UUID::PseudoRandomUUID()};
  bool m_paymentManagerIdHasBeenSet = false;
  bool m_paymentConnectorIdHasBeenSet = false;
  bool m_clientTokenHasBeenSet = true;
};

}  // namespace Model
}  // namespace BedrockAgentCoreControl
}  // namespace Aws
