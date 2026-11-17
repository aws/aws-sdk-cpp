/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/billing/Billing_EXPORTS.h>
#include <aws/core/http/HttpResponse.h>
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
namespace Billing {
namespace Model {
class TransferCreditResult {
 public:
  AWS_BILLING_API TransferCreditResult() = default;
  AWS_BILLING_API TransferCreditResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_BILLING_API TransferCreditResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>The ID of the transferred credit. The credit keeps this ID.</p>
   */
  inline const Aws::String& GetSourceCreditId() const { return m_sourceCreditId; }
  template <typename SourceCreditIdT = Aws::String>
  void SetSourceCreditId(SourceCreditIdT&& value) {
    m_sourceCreditIdHasBeenSet = true;
    m_sourceCreditId = std::forward<SourceCreditIdT>(value);
  }
  template <typename SourceCreditIdT = Aws::String>
  TransferCreditResult& WithSourceCreditId(SourceCreditIdT&& value) {
    SetSourceCreditId(std::forward<SourceCreditIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Always the same as <code>sourceCreditId</code>, because a transfer moves the
   * credit and creates no new one. A dry run omits this field.</p>
   */
  inline const Aws::String& GetNewCreditId() const { return m_newCreditId; }
  template <typename NewCreditIdT = Aws::String>
  void SetNewCreditId(NewCreditIdT&& value) {
    m_newCreditIdHasBeenSet = true;
    m_newCreditId = std::forward<NewCreditIdT>(value);
  }
  template <typename NewCreditIdT = Aws::String>
  TransferCreditResult& WithNewCreditId(NewCreditIdT&& value) {
    SetNewCreditId(std::forward<NewCreditIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Amazon Web Services account ID that owns the credit after the
   * transfer.</p>
   */
  inline const Aws::String& GetDestinationAccountId() const { return m_destinationAccountId; }
  template <typename DestinationAccountIdT = Aws::String>
  void SetDestinationAccountId(DestinationAccountIdT&& value) {
    m_destinationAccountIdHasBeenSet = true;
    m_destinationAccountId = std::forward<DestinationAccountIdT>(value);
  }
  template <typename DestinationAccountIdT = Aws::String>
  TransferCreditResult& WithDestinationAccountId(DestinationAccountIdT&& value) {
    SetDestinationAccountId(std::forward<DestinationAccountIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The available balance of the credit, which is its remaining balance minus any
   * amount reserved for a bill that isn't finalized.</p>
   */
  inline const Aws::String& GetAmount() const { return m_amount; }
  template <typename AmountT = Aws::String>
  void SetAmount(AmountT&& value) {
    m_amountHasBeenSet = true;
    m_amount = std::forward<AmountT>(value);
  }
  template <typename AmountT = Aws::String>
  TransferCreditResult& WithAmount(AmountT&& value) {
    SetAmount(std::forward<AmountT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Specifies whether the request was a dry run. If <code>true</code>, the
   * operation didn't change the credit.</p>
   */
  inline bool GetDryRun() const { return m_dryRun; }
  inline void SetDryRun(bool value) {
    m_dryRunHasBeenSet = true;
    m_dryRun = value;
  }
  inline TransferCreditResult& WithDryRun(bool value) {
    SetDryRun(value);
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
  TransferCreditResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  Aws::String m_sourceCreditId;

  Aws::String m_newCreditId;

  Aws::String m_destinationAccountId;

  Aws::String m_amount;

  bool m_dryRun{false};

  Aws::String m_requestId;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_sourceCreditIdHasBeenSet = false;
  bool m_newCreditIdHasBeenSet = false;
  bool m_destinationAccountIdHasBeenSet = false;
  bool m_amountHasBeenSet = false;
  bool m_dryRunHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace Billing
}  // namespace Aws
