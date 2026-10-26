/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/billing/BillingRequest.h>
#include <aws/billing/Billing_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

#include <utility>

namespace Aws {
namespace Billing {
namespace Model {

/**
 */
class CancelContractualInvestmentAttestationRequest : public BillingRequest {
 public:
  AWS_BILLING_API CancelContractualInvestmentAttestationRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "CancelContractualInvestmentAttestation"; }

  AWS_BILLING_API Aws::String SerializePayload() const override;

  AWS_BILLING_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

  ///@{
  /**
   * <p>The identifier of the investment attestation to cancel.</p>
   */
  inline const Aws::String& GetAttestationId() const { return m_attestationId; }
  inline bool AttestationIdHasBeenSet() const { return m_attestationIdHasBeenSet; }
  template <typename AttestationIdT = Aws::String>
  void SetAttestationId(AttestationIdT&& value) {
    m_attestationIdHasBeenSet = true;
    m_attestationId = std::forward<AttestationIdT>(value);
  }
  template <typename AttestationIdT = Aws::String>
  CancelContractualInvestmentAttestationRequest& WithAttestationId(AttestationIdT&& value) {
    SetAttestationId(std::forward<AttestationIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) of the contract that contains the attested
   * investment.</p>
   */
  inline const Aws::String& GetContractArn() const { return m_contractArn; }
  inline bool ContractArnHasBeenSet() const { return m_contractArnHasBeenSet; }
  template <typename ContractArnT = Aws::String>
  void SetContractArn(ContractArnT&& value) {
    m_contractArnHasBeenSet = true;
    m_contractArn = std::forward<ContractArnT>(value);
  }
  template <typename ContractArnT = Aws::String>
  CancelContractualInvestmentAttestationRequest& WithContractArn(ContractArnT&& value) {
    SetContractArn(std::forward<ContractArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The reason for the cancellation. This value can be 1 to 80 characters.</p>
   */
  inline const Aws::String& GetReason() const { return m_reason; }
  inline bool ReasonHasBeenSet() const { return m_reasonHasBeenSet; }
  template <typename ReasonT = Aws::String>
  void SetReason(ReasonT&& value) {
    m_reasonHasBeenSet = true;
    m_reason = std::forward<ReasonT>(value);
  }
  template <typename ReasonT = Aws::String>
  CancelContractualInvestmentAttestationRequest& WithReason(ReasonT&& value) {
    SetReason(std::forward<ReasonT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_attestationId;

  Aws::String m_contractArn;

  Aws::String m_reason;
  bool m_attestationIdHasBeenSet = false;
  bool m_contractArnHasBeenSet = false;
  bool m_reasonHasBeenSet = false;
};

}  // namespace Model
}  // namespace Billing
}  // namespace Aws
