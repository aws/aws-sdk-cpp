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
 * <p>Request structure for deleting a payment instrument.</p><p><h3>See Also:</h3>
 * <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agentcore-2024-02-28/DeletePaymentInstrumentRequest">AWS
 * API Reference</a></p>
 */
class DeletePaymentInstrumentRequest : public BedrockAgentCoreRequest {
 public:
  AWS_BEDROCKAGENTCORE_API DeletePaymentInstrumentRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "DeletePaymentInstrument"; }

  AWS_BEDROCKAGENTCORE_API Aws::String SerializePayload() const override;

  AWS_BEDROCKAGENTCORE_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

  ///@{
  /**
   * <p>The user ID making the delete request. Must match the instrument's
   * userId.</p>
   */
  inline const Aws::String& GetUserId() const { return m_userId; }
  inline bool UserIdHasBeenSet() const { return m_userIdHasBeenSet; }
  template <typename UserIdT = Aws::String>
  void SetUserId(UserIdT&& value) {
    m_userIdHasBeenSet = true;
    m_userId = std::forward<UserIdT>(value);
  }
  template <typename UserIdT = Aws::String>
  DeletePaymentInstrumentRequest& WithUserId(UserIdT&& value) {
    SetUserId(std::forward<UserIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The payment manager ARN. Must match the instrument's paymentManagerArn.</p>
   */
  inline const Aws::String& GetPaymentManagerArn() const { return m_paymentManagerArn; }
  inline bool PaymentManagerArnHasBeenSet() const { return m_paymentManagerArnHasBeenSet; }
  template <typename PaymentManagerArnT = Aws::String>
  void SetPaymentManagerArn(PaymentManagerArnT&& value) {
    m_paymentManagerArnHasBeenSet = true;
    m_paymentManagerArn = std::forward<PaymentManagerArnT>(value);
  }
  template <typename PaymentManagerArnT = Aws::String>
  DeletePaymentInstrumentRequest& WithPaymentManagerArn(PaymentManagerArnT&& value) {
    SetPaymentManagerArn(std::forward<PaymentManagerArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The payment connector ID. Must match the instrument's paymentConnectorId.</p>
   */
  inline const Aws::String& GetPaymentConnectorId() const { return m_paymentConnectorId; }
  inline bool PaymentConnectorIdHasBeenSet() const { return m_paymentConnectorIdHasBeenSet; }
  template <typename PaymentConnectorIdT = Aws::String>
  void SetPaymentConnectorId(PaymentConnectorIdT&& value) {
    m_paymentConnectorIdHasBeenSet = true;
    m_paymentConnectorId = std::forward<PaymentConnectorIdT>(value);
  }
  template <typename PaymentConnectorIdT = Aws::String>
  DeletePaymentInstrumentRequest& WithPaymentConnectorId(PaymentConnectorIdT&& value) {
    SetPaymentConnectorId(std::forward<PaymentConnectorIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The payment instrument ID to delete.</p>
   */
  inline const Aws::String& GetPaymentInstrumentId() const { return m_paymentInstrumentId; }
  inline bool PaymentInstrumentIdHasBeenSet() const { return m_paymentInstrumentIdHasBeenSet; }
  template <typename PaymentInstrumentIdT = Aws::String>
  void SetPaymentInstrumentId(PaymentInstrumentIdT&& value) {
    m_paymentInstrumentIdHasBeenSet = true;
    m_paymentInstrumentId = std::forward<PaymentInstrumentIdT>(value);
  }
  template <typename PaymentInstrumentIdT = Aws::String>
  DeletePaymentInstrumentRequest& WithPaymentInstrumentId(PaymentInstrumentIdT&& value) {
    SetPaymentInstrumentId(std::forward<PaymentInstrumentIdT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_userId;

  Aws::String m_paymentManagerArn;

  Aws::String m_paymentConnectorId;

  Aws::String m_paymentInstrumentId;
  bool m_userIdHasBeenSet = false;
  bool m_paymentManagerArnHasBeenSet = false;
  bool m_paymentConnectorIdHasBeenSet = false;
  bool m_paymentInstrumentIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace BedrockAgentCore
}  // namespace Aws
