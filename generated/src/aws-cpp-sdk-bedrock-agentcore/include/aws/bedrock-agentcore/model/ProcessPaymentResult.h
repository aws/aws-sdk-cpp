/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agentcore/BedrockAgentCore_EXPORTS.h>
#include <aws/bedrock-agentcore/model/PaymentOutput.h>
#include <aws/bedrock-agentcore/model/PaymentStatus.h>
#include <aws/bedrock-agentcore/model/PaymentType.h>
#include <aws/core/http/HttpResponse.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>

#include <utility>

namespace Aws {
template <typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils {
namespace Json {
class JsonValue;
}  // namespace Json
}  // namespace Utils
namespace BedrockAgentCore {
namespace Model {
/**
 * <p>Response structure for processing a payment.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agentcore-2024-02-28/ProcessPaymentResponse">AWS
 * API Reference</a></p>
 */
class ProcessPaymentResult {
 public:
  AWS_BEDROCKAGENTCORE_API ProcessPaymentResult() = default;
  AWS_BEDROCKAGENTCORE_API ProcessPaymentResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_BEDROCKAGENTCORE_API ProcessPaymentResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>The unique identifier of the processed payment.</p>
   */
  inline const Aws::String& GetProcessPaymentId() const { return m_processPaymentId; }
  template <typename ProcessPaymentIdT = Aws::String>
  void SetProcessPaymentId(ProcessPaymentIdT&& value) {
    m_processPaymentIdHasBeenSet = true;
    m_processPaymentId = std::forward<ProcessPaymentIdT>(value);
  }
  template <typename ProcessPaymentIdT = Aws::String>
  ProcessPaymentResult& WithProcessPaymentId(ProcessPaymentIdT&& value) {
    SetProcessPaymentId(std::forward<ProcessPaymentIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ARN of the payment manager.</p>
   */
  inline const Aws::String& GetPaymentManagerArn() const { return m_paymentManagerArn; }
  template <typename PaymentManagerArnT = Aws::String>
  void SetPaymentManagerArn(PaymentManagerArnT&& value) {
    m_paymentManagerArnHasBeenSet = true;
    m_paymentManagerArn = std::forward<PaymentManagerArnT>(value);
  }
  template <typename PaymentManagerArnT = Aws::String>
  ProcessPaymentResult& WithPaymentManagerArn(PaymentManagerArnT&& value) {
    SetPaymentManagerArn(std::forward<PaymentManagerArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ID of the payment session used.</p>
   */
  inline const Aws::String& GetPaymentSessionId() const { return m_paymentSessionId; }
  template <typename PaymentSessionIdT = Aws::String>
  void SetPaymentSessionId(PaymentSessionIdT&& value) {
    m_paymentSessionIdHasBeenSet = true;
    m_paymentSessionId = std::forward<PaymentSessionIdT>(value);
  }
  template <typename PaymentSessionIdT = Aws::String>
  ProcessPaymentResult& WithPaymentSessionId(PaymentSessionIdT&& value) {
    SetPaymentSessionId(std::forward<PaymentSessionIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ID of the payment instrument used.</p>
   */
  inline const Aws::String& GetPaymentInstrumentId() const { return m_paymentInstrumentId; }
  template <typename PaymentInstrumentIdT = Aws::String>
  void SetPaymentInstrumentId(PaymentInstrumentIdT&& value) {
    m_paymentInstrumentIdHasBeenSet = true;
    m_paymentInstrumentId = std::forward<PaymentInstrumentIdT>(value);
  }
  template <typename PaymentInstrumentIdT = Aws::String>
  ProcessPaymentResult& WithPaymentInstrumentId(PaymentInstrumentIdT&& value) {
    SetPaymentInstrumentId(std::forward<PaymentInstrumentIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The type of payment processed.</p>
   */
  inline PaymentType GetPaymentType() const { return m_paymentType; }
  inline void SetPaymentType(PaymentType value) {
    m_paymentTypeHasBeenSet = true;
    m_paymentType = value;
  }
  inline ProcessPaymentResult& WithPaymentType(PaymentType value) {
    SetPaymentType(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The status of the payment.</p>
   */
  inline PaymentStatus GetStatus() const { return m_status; }
  inline void SetStatus(PaymentStatus value) {
    m_statusHasBeenSet = true;
    m_status = value;
  }
  inline ProcessPaymentResult& WithStatus(PaymentStatus value) {
    SetStatus(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The payment output details specific to the payment type.</p>
   */
  inline const PaymentOutput& GetPaymentOutput() const { return m_paymentOutput; }
  template <typename PaymentOutputT = PaymentOutput>
  void SetPaymentOutput(PaymentOutputT&& value) {
    m_paymentOutputHasBeenSet = true;
    m_paymentOutput = std::forward<PaymentOutputT>(value);
  }
  template <typename PaymentOutputT = PaymentOutput>
  ProcessPaymentResult& WithPaymentOutput(PaymentOutputT&& value) {
    SetPaymentOutput(std::forward<PaymentOutputT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The timestamp when the payment was created.</p>
   */
  inline const Aws::Utils::DateTime& GetCreatedAt() const { return m_createdAt; }
  template <typename CreatedAtT = Aws::Utils::DateTime>
  void SetCreatedAt(CreatedAtT&& value) {
    m_createdAtHasBeenSet = true;
    m_createdAt = std::forward<CreatedAtT>(value);
  }
  template <typename CreatedAtT = Aws::Utils::DateTime>
  ProcessPaymentResult& WithCreatedAt(CreatedAtT&& value) {
    SetCreatedAt(std::forward<CreatedAtT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The timestamp when the payment was last updated.</p>
   */
  inline const Aws::Utils::DateTime& GetUpdatedAt() const { return m_updatedAt; }
  template <typename UpdatedAtT = Aws::Utils::DateTime>
  void SetUpdatedAt(UpdatedAtT&& value) {
    m_updatedAtHasBeenSet = true;
    m_updatedAt = std::forward<UpdatedAtT>(value);
  }
  template <typename UpdatedAtT = Aws::Utils::DateTime>
  ProcessPaymentResult& WithUpdatedAt(UpdatedAtT&& value) {
    SetUpdatedAt(std::forward<UpdatedAtT>(value));
    return *this;
  }
  ///@}

  ///@{

  inline const Aws::String& GetRequestId() const { return m_requestId; }
  template <typename RequestIdT = Aws::String>
  void SetRequestId(RequestIdT&& value) {
    m_requestIdHasBeenSet = true;
    m_requestId = std::forward<RequestIdT>(value);
  }
  template <typename RequestIdT = Aws::String>
  ProcessPaymentResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  Aws::String m_processPaymentId;

  Aws::String m_paymentManagerArn;

  Aws::String m_paymentSessionId;

  Aws::String m_paymentInstrumentId;

  PaymentType m_paymentType{PaymentType::NOT_SET};

  PaymentStatus m_status{PaymentStatus::NOT_SET};

  PaymentOutput m_paymentOutput;

  Aws::Utils::DateTime m_createdAt{};

  Aws::Utils::DateTime m_updatedAt{};

  Aws::String m_requestId;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_processPaymentIdHasBeenSet = false;
  bool m_paymentManagerArnHasBeenSet = false;
  bool m_paymentSessionIdHasBeenSet = false;
  bool m_paymentInstrumentIdHasBeenSet = false;
  bool m_paymentTypeHasBeenSet = false;
  bool m_statusHasBeenSet = false;
  bool m_paymentOutputHasBeenSet = false;
  bool m_createdAtHasBeenSet = false;
  bool m_updatedAtHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace BedrockAgentCore
}  // namespace Aws
