/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agentcore-control/BedrockAgentCoreControl_EXPORTS.h>
#include <aws/bedrock-agentcore-control/model/PaymentConnectorStatus.h>
#include <aws/bedrock-agentcore-control/model/PaymentConnectorType.h>
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
namespace BedrockAgentCoreControl {
namespace Model {

/**
 * <p>Contains summary information about a payment connector.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agentcore-control-2023-06-05/PaymentConnectorSummary">AWS
 * API Reference</a></p>
 */
class PaymentConnectorSummary {
 public:
  AWS_BEDROCKAGENTCORECONTROL_API PaymentConnectorSummary() = default;
  AWS_BEDROCKAGENTCORECONTROL_API PaymentConnectorSummary(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTCORECONTROL_API PaymentConnectorSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTCORECONTROL_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The unique identifier of the payment connector.</p>
   */
  inline const Aws::String& GetPaymentConnectorId() const { return m_paymentConnectorId; }
  inline bool PaymentConnectorIdHasBeenSet() const { return m_paymentConnectorIdHasBeenSet; }
  template <typename PaymentConnectorIdT = Aws::String>
  void SetPaymentConnectorId(PaymentConnectorIdT&& value) {
    m_paymentConnectorIdHasBeenSet = true;
    m_paymentConnectorId = std::forward<PaymentConnectorIdT>(value);
  }
  template <typename PaymentConnectorIdT = Aws::String>
  PaymentConnectorSummary& WithPaymentConnectorId(PaymentConnectorIdT&& value) {
    SetPaymentConnectorId(std::forward<PaymentConnectorIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The name of the payment connector.</p>
   */
  inline const Aws::String& GetName() const { return m_name; }
  inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
  template <typename NameT = Aws::String>
  void SetName(NameT&& value) {
    m_nameHasBeenSet = true;
    m_name = std::forward<NameT>(value);
  }
  template <typename NameT = Aws::String>
  PaymentConnectorSummary& WithName(NameT&& value) {
    SetName(std::forward<NameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The type of the payment connector, which determines the payment provider
   * integration.</p>
   */
  inline PaymentConnectorType GetType() const { return m_type; }
  inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
  inline void SetType(PaymentConnectorType value) {
    m_typeHasBeenSet = true;
    m_type = value;
  }
  inline PaymentConnectorSummary& WithType(PaymentConnectorType value) {
    SetType(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The current status of the payment connector. Possible values include
   * <code>CREATING</code>, <code>READY</code>, <code>UPDATING</code>,
   * <code>DELETING</code>, <code>CREATE_FAILED</code>, <code>UPDATE_FAILED</code>,
   * and <code>DELETE_FAILED</code>.</p>
   */
  inline PaymentConnectorStatus GetStatus() const { return m_status; }
  inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
  inline void SetStatus(PaymentConnectorStatus value) {
    m_statusHasBeenSet = true;
    m_status = value;
  }
  inline PaymentConnectorSummary& WithStatus(PaymentConnectorStatus value) {
    SetStatus(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The timestamp when the payment connector was last updated.</p>
   */
  inline const Aws::Utils::DateTime& GetLastUpdatedAt() const { return m_lastUpdatedAt; }
  inline bool LastUpdatedAtHasBeenSet() const { return m_lastUpdatedAtHasBeenSet; }
  template <typename LastUpdatedAtT = Aws::Utils::DateTime>
  void SetLastUpdatedAt(LastUpdatedAtT&& value) {
    m_lastUpdatedAtHasBeenSet = true;
    m_lastUpdatedAt = std::forward<LastUpdatedAtT>(value);
  }
  template <typename LastUpdatedAtT = Aws::Utils::DateTime>
  PaymentConnectorSummary& WithLastUpdatedAt(LastUpdatedAtT&& value) {
    SetLastUpdatedAt(std::forward<LastUpdatedAtT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_paymentConnectorId;

  Aws::String m_name;

  PaymentConnectorType m_type{PaymentConnectorType::NOT_SET};

  PaymentConnectorStatus m_status{PaymentConnectorStatus::NOT_SET};

  Aws::Utils::DateTime m_lastUpdatedAt{};
  bool m_paymentConnectorIdHasBeenSet = false;
  bool m_nameHasBeenSet = false;
  bool m_typeHasBeenSet = false;
  bool m_statusHasBeenSet = false;
  bool m_lastUpdatedAtHasBeenSet = false;
};

}  // namespace Model
}  // namespace BedrockAgentCoreControl
}  // namespace Aws
