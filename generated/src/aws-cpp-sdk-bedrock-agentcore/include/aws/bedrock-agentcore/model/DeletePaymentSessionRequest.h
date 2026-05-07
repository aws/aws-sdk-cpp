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
 * <p>Request structure for deleting a payment session</p> <p>All fields are
 * required and must match the session owner's identifiers for authorization to
 * succeed.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agentcore-2024-02-28/DeletePaymentSessionRequest">AWS
 * API Reference</a></p>
 */
class DeletePaymentSessionRequest : public BedrockAgentCoreRequest {
 public:
  AWS_BEDROCKAGENTCORE_API DeletePaymentSessionRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "DeletePaymentSession"; }

  AWS_BEDROCKAGENTCORE_API Aws::String SerializePayload() const override;

  AWS_BEDROCKAGENTCORE_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

  ///@{
  /**
   * <p>The user ID making the delete request. Must match the session's userId.</p>
   */
  inline const Aws::String& GetUserId() const { return m_userId; }
  inline bool UserIdHasBeenSet() const { return m_userIdHasBeenSet; }
  template <typename UserIdT = Aws::String>
  void SetUserId(UserIdT&& value) {
    m_userIdHasBeenSet = true;
    m_userId = std::forward<UserIdT>(value);
  }
  template <typename UserIdT = Aws::String>
  DeletePaymentSessionRequest& WithUserId(UserIdT&& value) {
    SetUserId(std::forward<UserIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The payment manager ARN. Must match the session's paymentManagerArn.</p>
   */
  inline const Aws::String& GetPaymentManagerArn() const { return m_paymentManagerArn; }
  inline bool PaymentManagerArnHasBeenSet() const { return m_paymentManagerArnHasBeenSet; }
  template <typename PaymentManagerArnT = Aws::String>
  void SetPaymentManagerArn(PaymentManagerArnT&& value) {
    m_paymentManagerArnHasBeenSet = true;
    m_paymentManagerArn = std::forward<PaymentManagerArnT>(value);
  }
  template <typename PaymentManagerArnT = Aws::String>
  DeletePaymentSessionRequest& WithPaymentManagerArn(PaymentManagerArnT&& value) {
    SetPaymentManagerArn(std::forward<PaymentManagerArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The payment session ID to delete.</p>
   */
  inline const Aws::String& GetPaymentSessionId() const { return m_paymentSessionId; }
  inline bool PaymentSessionIdHasBeenSet() const { return m_paymentSessionIdHasBeenSet; }
  template <typename PaymentSessionIdT = Aws::String>
  void SetPaymentSessionId(PaymentSessionIdT&& value) {
    m_paymentSessionIdHasBeenSet = true;
    m_paymentSessionId = std::forward<PaymentSessionIdT>(value);
  }
  template <typename PaymentSessionIdT = Aws::String>
  DeletePaymentSessionRequest& WithPaymentSessionId(PaymentSessionIdT&& value) {
    SetPaymentSessionId(std::forward<PaymentSessionIdT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_userId;

  Aws::String m_paymentManagerArn;

  Aws::String m_paymentSessionId;
  bool m_userIdHasBeenSet = false;
  bool m_paymentManagerArnHasBeenSet = false;
  bool m_paymentSessionIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace BedrockAgentCore
}  // namespace Aws
