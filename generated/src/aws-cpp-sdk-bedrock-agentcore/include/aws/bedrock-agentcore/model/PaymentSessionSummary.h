/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agentcore/BedrockAgentCore_EXPORTS.h>
#include <aws/core/utils/DateTime.h>
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
 * <p>Summary information about a payment session.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agentcore-2024-02-28/PaymentSessionSummary">AWS
 * API Reference</a></p>
 */
class PaymentSessionSummary {
 public:
  AWS_BEDROCKAGENTCORE_API PaymentSessionSummary() = default;
  AWS_BEDROCKAGENTCORE_API PaymentSessionSummary(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTCORE_API PaymentSessionSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTCORE_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The unique identifier of the payment session.</p>
   */
  inline const Aws::String& GetPaymentSessionId() const { return m_paymentSessionId; }
  inline bool PaymentSessionIdHasBeenSet() const { return m_paymentSessionIdHasBeenSet; }
  template <typename PaymentSessionIdT = Aws::String>
  void SetPaymentSessionId(PaymentSessionIdT&& value) {
    m_paymentSessionIdHasBeenSet = true;
    m_paymentSessionId = std::forward<PaymentSessionIdT>(value);
  }
  template <typename PaymentSessionIdT = Aws::String>
  PaymentSessionSummary& WithPaymentSessionId(PaymentSessionIdT&& value) {
    SetPaymentSessionId(std::forward<PaymentSessionIdT>(value));
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
  PaymentSessionSummary& WithPaymentManagerArn(PaymentManagerArnT&& value) {
    SetPaymentManagerArn(std::forward<PaymentManagerArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The user ID associated with this session.</p>
   */
  inline const Aws::String& GetUserId() const { return m_userId; }
  inline bool UserIdHasBeenSet() const { return m_userIdHasBeenSet; }
  template <typename UserIdT = Aws::String>
  void SetUserId(UserIdT&& value) {
    m_userIdHasBeenSet = true;
    m_userId = std::forward<UserIdT>(value);
  }
  template <typename UserIdT = Aws::String>
  PaymentSessionSummary& WithUserId(UserIdT&& value) {
    SetUserId(std::forward<UserIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The session expiry time in minutes.</p>
   */
  inline int GetExpiryTimeInMinutes() const { return m_expiryTimeInMinutes; }
  inline bool ExpiryTimeInMinutesHasBeenSet() const { return m_expiryTimeInMinutesHasBeenSet; }
  inline void SetExpiryTimeInMinutes(int value) {
    m_expiryTimeInMinutesHasBeenSet = true;
    m_expiryTimeInMinutes = value;
  }
  inline PaymentSessionSummary& WithExpiryTimeInMinutes(int value) {
    SetExpiryTimeInMinutes(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The timestamp when the session was created.</p>
   */
  inline const Aws::Utils::DateTime& GetCreatedAt() const { return m_createdAt; }
  inline bool CreatedAtHasBeenSet() const { return m_createdAtHasBeenSet; }
  template <typename CreatedAtT = Aws::Utils::DateTime>
  void SetCreatedAt(CreatedAtT&& value) {
    m_createdAtHasBeenSet = true;
    m_createdAt = std::forward<CreatedAtT>(value);
  }
  template <typename CreatedAtT = Aws::Utils::DateTime>
  PaymentSessionSummary& WithCreatedAt(CreatedAtT&& value) {
    SetCreatedAt(std::forward<CreatedAtT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The timestamp when the session was last updated.</p>
   */
  inline const Aws::Utils::DateTime& GetUpdatedAt() const { return m_updatedAt; }
  inline bool UpdatedAtHasBeenSet() const { return m_updatedAtHasBeenSet; }
  template <typename UpdatedAtT = Aws::Utils::DateTime>
  void SetUpdatedAt(UpdatedAtT&& value) {
    m_updatedAtHasBeenSet = true;
    m_updatedAt = std::forward<UpdatedAtT>(value);
  }
  template <typename UpdatedAtT = Aws::Utils::DateTime>
  PaymentSessionSummary& WithUpdatedAt(UpdatedAtT&& value) {
    SetUpdatedAt(std::forward<UpdatedAtT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_paymentSessionId;

  Aws::String m_paymentManagerArn;

  Aws::String m_userId;

  int m_expiryTimeInMinutes{0};

  Aws::Utils::DateTime m_createdAt{};

  Aws::Utils::DateTime m_updatedAt{};
  bool m_paymentSessionIdHasBeenSet = false;
  bool m_paymentManagerArnHasBeenSet = false;
  bool m_userIdHasBeenSet = false;
  bool m_expiryTimeInMinutesHasBeenSet = false;
  bool m_createdAtHasBeenSet = false;
  bool m_updatedAtHasBeenSet = false;
};

}  // namespace Model
}  // namespace BedrockAgentCore
}  // namespace Aws
