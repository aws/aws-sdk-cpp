/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agentcore/BedrockAgentCoreRequest.h>
#include <aws/bedrock-agentcore/BedrockAgentCore_EXPORTS.h>
#include <aws/bedrock-agentcore/model/SessionLimits.h>
#include <aws/core/utils/UUID.h>
#include <aws/core/utils/memory/stl/AWSString.h>

#include <utility>

namespace Aws {
namespace BedrockAgentCore {
namespace Model {

/**
 * <p>Request structure for creating a payment session</p><p><h3>See Also:</h3>
 * <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agentcore-2024-02-28/CreatePaymentSessionRequest">AWS
 * API Reference</a></p>
 */
class CreatePaymentSessionRequest : public BedrockAgentCoreRequest {
 public:
  AWS_BEDROCKAGENTCORE_API CreatePaymentSessionRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "CreatePaymentSession"; }

  AWS_BEDROCKAGENTCORE_API Aws::String SerializePayload() const override;

  AWS_BEDROCKAGENTCORE_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

  ///@{
  /**
   * <p>The user ID associated with this payment session.</p>
   */
  inline const Aws::String& GetUserId() const { return m_userId; }
  inline bool UserIdHasBeenSet() const { return m_userIdHasBeenSet; }
  template <typename UserIdT = Aws::String>
  void SetUserId(UserIdT&& value) {
    m_userIdHasBeenSet = true;
    m_userId = std::forward<UserIdT>(value);
  }
  template <typename UserIdT = Aws::String>
  CreatePaymentSessionRequest& WithUserId(UserIdT&& value) {
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
  CreatePaymentSessionRequest& WithAgentName(AgentNameT&& value) {
    SetAgentName(std::forward<AgentNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ARN of the payment manager that owns this session.</p>
   */
  inline const Aws::String& GetPaymentManagerArn() const { return m_paymentManagerArn; }
  inline bool PaymentManagerArnHasBeenSet() const { return m_paymentManagerArnHasBeenSet; }
  template <typename PaymentManagerArnT = Aws::String>
  void SetPaymentManagerArn(PaymentManagerArnT&& value) {
    m_paymentManagerArnHasBeenSet = true;
    m_paymentManagerArn = std::forward<PaymentManagerArnT>(value);
  }
  template <typename PaymentManagerArnT = Aws::String>
  CreatePaymentSessionRequest& WithPaymentManagerArn(PaymentManagerArnT&& value) {
    SetPaymentManagerArn(std::forward<PaymentManagerArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The spending limits for this payment session.</p>
   */
  inline const SessionLimits& GetLimits() const { return m_limits; }
  inline bool LimitsHasBeenSet() const { return m_limitsHasBeenSet; }
  template <typename LimitsT = SessionLimits>
  void SetLimits(LimitsT&& value) {
    m_limitsHasBeenSet = true;
    m_limits = std::forward<LimitsT>(value);
  }
  template <typename LimitsT = SessionLimits>
  CreatePaymentSessionRequest& WithLimits(LimitsT&& value) {
    SetLimits(std::forward<LimitsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The session expiry time in minutes. Must be between 15 and 480 minutes.</p>
   */
  inline int GetExpiryTimeInMinutes() const { return m_expiryTimeInMinutes; }
  inline bool ExpiryTimeInMinutesHasBeenSet() const { return m_expiryTimeInMinutesHasBeenSet; }
  inline void SetExpiryTimeInMinutes(int value) {
    m_expiryTimeInMinutesHasBeenSet = true;
    m_expiryTimeInMinutes = value;
  }
  inline CreatePaymentSessionRequest& WithExpiryTimeInMinutes(int value) {
    SetExpiryTimeInMinutes(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Idempotency token to ensure request uniqueness.</p>
   */
  inline const Aws::String& GetClientToken() const { return m_clientToken; }
  inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }
  template <typename ClientTokenT = Aws::String>
  void SetClientToken(ClientTokenT&& value) {
    m_clientTokenHasBeenSet = true;
    m_clientToken = std::forward<ClientTokenT>(value);
  }
  template <typename ClientTokenT = Aws::String>
  CreatePaymentSessionRequest& WithClientToken(ClientTokenT&& value) {
    SetClientToken(std::forward<ClientTokenT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_userId;

  Aws::String m_agentName;

  Aws::String m_paymentManagerArn;

  SessionLimits m_limits;

  int m_expiryTimeInMinutes{0};

  Aws::String m_clientToken{Aws::Utils::UUID::PseudoRandomUUID()};
  bool m_userIdHasBeenSet = false;
  bool m_agentNameHasBeenSet = false;
  bool m_paymentManagerArnHasBeenSet = false;
  bool m_limitsHasBeenSet = false;
  bool m_expiryTimeInMinutesHasBeenSet = false;
  bool m_clientTokenHasBeenSet = true;
};

}  // namespace Model
}  // namespace BedrockAgentCore
}  // namespace Aws
