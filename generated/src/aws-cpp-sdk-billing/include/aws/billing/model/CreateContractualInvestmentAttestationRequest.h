/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/billing/BillingRequest.h>
#include <aws/billing/Billing_EXPORTS.h>
#include <aws/billing/model/AdditionalRecipient.h>
#include <aws/billing/model/ApproverDetails.h>
#include <aws/billing/model/AttestationDetails.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/UUID.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

#include <utility>

namespace Aws {
namespace Billing {
namespace Model {

/**
 */
class CreateContractualInvestmentAttestationRequest : public BillingRequest {
 public:
  AWS_BILLING_API CreateContractualInvestmentAttestationRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "CreateContractualInvestmentAttestation"; }

  AWS_BILLING_API Aws::String SerializePayload() const override;

  AWS_BILLING_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) of the contract that contains the investment
   * being attested.</p>
   */
  inline const Aws::String& GetContractArn() const { return m_contractArn; }
  inline bool ContractArnHasBeenSet() const { return m_contractArnHasBeenSet; }
  template <typename ContractArnT = Aws::String>
  void SetContractArn(ContractArnT&& value) {
    m_contractArnHasBeenSet = true;
    m_contractArn = std::forward<ContractArnT>(value);
  }
  template <typename ContractArnT = Aws::String>
  CreateContractualInvestmentAttestationRequest& WithContractArn(ContractArnT&& value) {
    SetContractArn(std::forward<ContractArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The identifier of the investment summary being attested. This is the parent
   * to the investmentId.</p>
   */
  inline const Aws::String& GetInvestmentSummaryId() const { return m_investmentSummaryId; }
  inline bool InvestmentSummaryIdHasBeenSet() const { return m_investmentSummaryIdHasBeenSet; }
  template <typename InvestmentSummaryIdT = Aws::String>
  void SetInvestmentSummaryId(InvestmentSummaryIdT&& value) {
    m_investmentSummaryIdHasBeenSet = true;
    m_investmentSummaryId = std::forward<InvestmentSummaryIdT>(value);
  }
  template <typename InvestmentSummaryIdT = Aws::String>
  CreateContractualInvestmentAttestationRequest& WithInvestmentSummaryId(InvestmentSummaryIdT&& value) {
    SetInvestmentSummaryId(std::forward<InvestmentSummaryIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The identifier of the investment (outcome) being attested.</p>
   */
  inline const Aws::String& GetInvestmentId() const { return m_investmentId; }
  inline bool InvestmentIdHasBeenSet() const { return m_investmentIdHasBeenSet; }
  template <typename InvestmentIdT = Aws::String>
  void SetInvestmentId(InvestmentIdT&& value) {
    m_investmentIdHasBeenSet = true;
    m_investmentId = std::forward<InvestmentIdT>(value);
  }
  template <typename InvestmentIdT = Aws::String>
  CreateContractualInvestmentAttestationRequest& WithInvestmentId(InvestmentIdT&& value) {
    SetInvestmentId(std::forward<InvestmentIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The contract ID from the contract document, located in the top-right corner
   * of the private pricing contract pages. This value confirms that you have access
   * to the contract.</p>
   */
  inline const Aws::String& GetContractDocumentId() const { return m_contractDocumentId; }
  inline bool ContractDocumentIdHasBeenSet() const { return m_contractDocumentIdHasBeenSet; }
  template <typename ContractDocumentIdT = Aws::String>
  void SetContractDocumentId(ContractDocumentIdT&& value) {
    m_contractDocumentIdHasBeenSet = true;
    m_contractDocumentId = std::forward<ContractDocumentIdT>(value);
  }
  template <typename ContractDocumentIdT = Aws::String>
  CreateContractualInvestmentAttestationRequest& WithContractDocumentId(ContractDocumentIdT&& value) {
    SetContractDocumentId(std::forward<ContractDocumentIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The details of the executive who authorized the attestation, under the terms
   * of the private pricing contract. The executive receives a click-to-accept email
   * to confirm the attestation.</p>
   */
  inline const ApproverDetails& GetApproverDetails() const { return m_approverDetails; }
  inline bool ApproverDetailsHasBeenSet() const { return m_approverDetailsHasBeenSet; }
  template <typename ApproverDetailsT = ApproverDetails>
  void SetApproverDetails(ApproverDetailsT&& value) {
    m_approverDetailsHasBeenSet = true;
    m_approverDetails = std::forward<ApproverDetailsT>(value);
  }
  template <typename ApproverDetailsT = ApproverDetails>
  CreateContractualInvestmentAttestationRequest& WithApproverDetails(ApproverDetailsT&& value) {
    SetApproverDetails(std::forward<ApproverDetailsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The date on which the investment is disbursed to the investment accounts. The
   * disbursement date is subject to review timelines.</p>
   */
  inline const Aws::Utils::DateTime& GetInvestmentDisbursedAt() const { return m_investmentDisbursedAt; }
  inline bool InvestmentDisbursedAtHasBeenSet() const { return m_investmentDisbursedAtHasBeenSet; }
  template <typename InvestmentDisbursedAtT = Aws::Utils::DateTime>
  void SetInvestmentDisbursedAt(InvestmentDisbursedAtT&& value) {
    m_investmentDisbursedAtHasBeenSet = true;
    m_investmentDisbursedAt = std::forward<InvestmentDisbursedAtT>(value);
  }
  template <typename InvestmentDisbursedAtT = Aws::Utils::DateTime>
  CreateContractualInvestmentAttestationRequest& WithInvestmentDisbursedAt(InvestmentDisbursedAtT&& value) {
    SetInvestmentDisbursedAt(std::forward<InvestmentDisbursedAtT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The details of the attestation, including the value being claimed and how the
   * resulting investment is distributed across investment accounts.</p>
   */
  inline const AttestationDetails& GetAttestationDetails() const { return m_attestationDetails; }
  inline bool AttestationDetailsHasBeenSet() const { return m_attestationDetailsHasBeenSet; }
  template <typename AttestationDetailsT = AttestationDetails>
  void SetAttestationDetails(AttestationDetailsT&& value) {
    m_attestationDetailsHasBeenSet = true;
    m_attestationDetails = std::forward<AttestationDetailsT>(value);
  }
  template <typename AttestationDetailsT = AttestationDetails>
  CreateContractualInvestmentAttestationRequest& WithAttestationDetails(AttestationDetailsT&& value) {
    SetAttestationDetails(std::forward<AttestationDetailsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The email addresses to copy as viewers on the executive approval request.</p>
   */
  inline const Aws::Vector<AdditionalRecipient>& GetAdditionalRecipients() const { return m_additionalRecipients; }
  inline bool AdditionalRecipientsHasBeenSet() const { return m_additionalRecipientsHasBeenSet; }
  template <typename AdditionalRecipientsT = Aws::Vector<AdditionalRecipient>>
  void SetAdditionalRecipients(AdditionalRecipientsT&& value) {
    m_additionalRecipientsHasBeenSet = true;
    m_additionalRecipients = std::forward<AdditionalRecipientsT>(value);
  }
  template <typename AdditionalRecipientsT = Aws::Vector<AdditionalRecipient>>
  CreateContractualInvestmentAttestationRequest& WithAdditionalRecipients(AdditionalRecipientsT&& value) {
    SetAdditionalRecipients(std::forward<AdditionalRecipientsT>(value));
    return *this;
  }
  template <typename AdditionalRecipientsT = AdditionalRecipient>
  CreateContractualInvestmentAttestationRequest& AddAdditionalRecipients(AdditionalRecipientsT&& value) {
    m_additionalRecipientsHasBeenSet = true;
    m_additionalRecipients.emplace_back(std::forward<AdditionalRecipientsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A unique, case-sensitive identifier that you provide to ensure the
   * idempotency of the request. If you retry a request that completed successfully
   * using the same client token and parameters, the retry completes without
   * performing any further actions.</p>
   */
  inline const Aws::String& GetClientToken() const { return m_clientToken; }
  inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }
  template <typename ClientTokenT = Aws::String>
  void SetClientToken(ClientTokenT&& value) {
    m_clientTokenHasBeenSet = true;
    m_clientToken = std::forward<ClientTokenT>(value);
  }
  template <typename ClientTokenT = Aws::String>
  CreateContractualInvestmentAttestationRequest& WithClientToken(ClientTokenT&& value) {
    SetClientToken(std::forward<ClientTokenT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_contractArn;

  Aws::String m_investmentSummaryId;

  Aws::String m_investmentId;

  Aws::String m_contractDocumentId;

  ApproverDetails m_approverDetails;

  Aws::Utils::DateTime m_investmentDisbursedAt{};

  AttestationDetails m_attestationDetails;

  Aws::Vector<AdditionalRecipient> m_additionalRecipients;

  Aws::String m_clientToken{Aws::Utils::UUID::PseudoRandomUUID()};
  bool m_contractArnHasBeenSet = false;
  bool m_investmentSummaryIdHasBeenSet = false;
  bool m_investmentIdHasBeenSet = false;
  bool m_contractDocumentIdHasBeenSet = false;
  bool m_approverDetailsHasBeenSet = false;
  bool m_investmentDisbursedAtHasBeenSet = false;
  bool m_attestationDetailsHasBeenSet = false;
  bool m_additionalRecipientsHasBeenSet = false;
  bool m_clientTokenHasBeenSet = true;
};

}  // namespace Model
}  // namespace Billing
}  // namespace Aws
