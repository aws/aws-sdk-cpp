/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agentcore/BedrockAgentCore_EXPORTS.h>
#include <aws/bedrock-agentcore/model/PaymentInstrumentDetails.h>
#include <aws/bedrock-agentcore/model/PaymentInstrumentStatus.h>
#include <aws/bedrock-agentcore/model/PaymentInstrumentType.h>
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
 * <p>Represents a payment instrument</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agentcore-2024-02-28/PaymentInstrument">AWS
 * API Reference</a></p>
 */
class PaymentInstrument {
 public:
  AWS_BEDROCKAGENTCORE_API PaymentInstrument() = default;
  AWS_BEDROCKAGENTCORE_API PaymentInstrument(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTCORE_API PaymentInstrument& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTCORE_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The unique identifier for this payment instrument.</p>
   */
  inline const Aws::String& GetPaymentInstrumentId() const { return m_paymentInstrumentId; }
  inline bool PaymentInstrumentIdHasBeenSet() const { return m_paymentInstrumentIdHasBeenSet; }
  template <typename PaymentInstrumentIdT = Aws::String>
  void SetPaymentInstrumentId(PaymentInstrumentIdT&& value) {
    m_paymentInstrumentIdHasBeenSet = true;
    m_paymentInstrumentId = std::forward<PaymentInstrumentIdT>(value);
  }
  template <typename PaymentInstrumentIdT = Aws::String>
  PaymentInstrument& WithPaymentInstrumentId(PaymentInstrumentIdT&& value) {
    SetPaymentInstrumentId(std::forward<PaymentInstrumentIdT>(value));
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
  PaymentInstrument& WithPaymentManagerArn(PaymentManagerArnT&& value) {
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
  PaymentInstrument& WithPaymentConnectorId(PaymentConnectorIdT&& value) {
    SetPaymentConnectorId(std::forward<PaymentConnectorIdT>(value));
    return *this;
  }
  ///@}

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
  PaymentInstrument& WithUserId(UserIdT&& value) {
    SetUserId(std::forward<UserIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The type of payment instrument (e.g., EMBEDDED_CRYPTO_WALLET).</p>
   */
  inline PaymentInstrumentType GetPaymentInstrumentType() const { return m_paymentInstrumentType; }
  inline bool PaymentInstrumentTypeHasBeenSet() const { return m_paymentInstrumentTypeHasBeenSet; }
  inline void SetPaymentInstrumentType(PaymentInstrumentType value) {
    m_paymentInstrumentTypeHasBeenSet = true;
    m_paymentInstrumentType = value;
  }
  inline PaymentInstrument& WithPaymentInstrumentType(PaymentInstrumentType value) {
    SetPaymentInstrumentType(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The details specific to the payment instrument type.</p>
   */
  inline const PaymentInstrumentDetails& GetPaymentInstrumentDetails() const { return m_paymentInstrumentDetails; }
  inline bool PaymentInstrumentDetailsHasBeenSet() const { return m_paymentInstrumentDetailsHasBeenSet; }
  template <typename PaymentInstrumentDetailsT = PaymentInstrumentDetails>
  void SetPaymentInstrumentDetails(PaymentInstrumentDetailsT&& value) {
    m_paymentInstrumentDetailsHasBeenSet = true;
    m_paymentInstrumentDetails = std::forward<PaymentInstrumentDetailsT>(value);
  }
  template <typename PaymentInstrumentDetailsT = PaymentInstrumentDetails>
  PaymentInstrument& WithPaymentInstrumentDetails(PaymentInstrumentDetailsT&& value) {
    SetPaymentInstrumentDetails(std::forward<PaymentInstrumentDetailsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The timestamp when this payment instrument was created.</p>
   */
  inline const Aws::Utils::DateTime& GetCreatedAt() const { return m_createdAt; }
  inline bool CreatedAtHasBeenSet() const { return m_createdAtHasBeenSet; }
  template <typename CreatedAtT = Aws::Utils::DateTime>
  void SetCreatedAt(CreatedAtT&& value) {
    m_createdAtHasBeenSet = true;
    m_createdAt = std::forward<CreatedAtT>(value);
  }
  template <typename CreatedAtT = Aws::Utils::DateTime>
  PaymentInstrument& WithCreatedAt(CreatedAtT&& value) {
    SetCreatedAt(std::forward<CreatedAtT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The current status of this payment instrument.</p>
   */
  inline PaymentInstrumentStatus GetStatus() const { return m_status; }
  inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
  inline void SetStatus(PaymentInstrumentStatus value) {
    m_statusHasBeenSet = true;
    m_status = value;
  }
  inline PaymentInstrument& WithStatus(PaymentInstrumentStatus value) {
    SetStatus(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The timestamp when this payment instrument was last updated.</p>
   */
  inline const Aws::Utils::DateTime& GetUpdatedAt() const { return m_updatedAt; }
  inline bool UpdatedAtHasBeenSet() const { return m_updatedAtHasBeenSet; }
  template <typename UpdatedAtT = Aws::Utils::DateTime>
  void SetUpdatedAt(UpdatedAtT&& value) {
    m_updatedAtHasBeenSet = true;
    m_updatedAt = std::forward<UpdatedAtT>(value);
  }
  template <typename UpdatedAtT = Aws::Utils::DateTime>
  PaymentInstrument& WithUpdatedAt(UpdatedAtT&& value) {
    SetUpdatedAt(std::forward<UpdatedAtT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_paymentInstrumentId;

  Aws::String m_paymentManagerArn;

  Aws::String m_paymentConnectorId;

  Aws::String m_userId;

  PaymentInstrumentType m_paymentInstrumentType{PaymentInstrumentType::NOT_SET};

  PaymentInstrumentDetails m_paymentInstrumentDetails;

  Aws::Utils::DateTime m_createdAt{};

  PaymentInstrumentStatus m_status{PaymentInstrumentStatus::NOT_SET};

  Aws::Utils::DateTime m_updatedAt{};
  bool m_paymentInstrumentIdHasBeenSet = false;
  bool m_paymentManagerArnHasBeenSet = false;
  bool m_paymentConnectorIdHasBeenSet = false;
  bool m_userIdHasBeenSet = false;
  bool m_paymentInstrumentTypeHasBeenSet = false;
  bool m_paymentInstrumentDetailsHasBeenSet = false;
  bool m_createdAtHasBeenSet = false;
  bool m_statusHasBeenSet = false;
  bool m_updatedAtHasBeenSet = false;
};

}  // namespace Model
}  // namespace BedrockAgentCore
}  // namespace Aws
