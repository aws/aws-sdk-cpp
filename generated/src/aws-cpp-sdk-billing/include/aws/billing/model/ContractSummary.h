/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/billing/Billing_EXPORTS.h>
#include <aws/billing/model/AssociationStatus.h>
#include <aws/billing/model/ContractType.h>
#include <aws/billing/model/Interval.h>
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
namespace Billing {
namespace Model {

/**
 * <p>A summary of a private pricing contract visible to your account.
 * <code>ListContracts</code> returns these summaries.</p><p><h3>See Also:</h3>
 * <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/billing-2023-09-07/ContractSummary">AWS
 * API Reference</a></p>
 */
class ContractSummary {
 public:
  AWS_BILLING_API ContractSummary() = default;
  AWS_BILLING_API ContractSummary(Aws::Utils::Json::JsonView jsonValue);
  AWS_BILLING_API ContractSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_BILLING_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) of the contract. Pass this value to operations
   * such as <code>GetContractInformation</code>,
   * <code>ListContractualInvestmentSummaries</code>, and
   * <code>AssociateContract</code>.</p>
   */
  inline const Aws::String& GetContractArn() const { return m_contractArn; }
  inline bool ContractArnHasBeenSet() const { return m_contractArnHasBeenSet; }
  template <typename ContractArnT = Aws::String>
  void SetContractArn(ContractArnT&& value) {
    m_contractArnHasBeenSet = true;
    m_contractArn = std::forward<ContractArnT>(value);
  }
  template <typename ContractArnT = Aws::String>
  ContractSummary& WithContractArn(ContractArnT&& value) {
    SetContractArn(std::forward<ContractArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The contract term period of the contract, expressed as an interval with an
   * inclusive start date and an inclusive end date.</p>
   */
  inline const Interval& GetContractTerm() const { return m_contractTerm; }
  inline bool ContractTermHasBeenSet() const { return m_contractTermHasBeenSet; }
  template <typename ContractTermT = Interval>
  void SetContractTerm(ContractTermT&& value) {
    m_contractTermHasBeenSet = true;
    m_contractTerm = std::forward<ContractTermT>(value);
  }
  template <typename ContractTermT = Interval>
  ContractSummary& WithContractTerm(ContractTermT&& value) {
    SetContractTerm(std::forward<ContractTermT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The classification of the contract. Valid values are
   * <code>Cross-Service</code>, <code>Service-Specific</code>, and
   * <code>Other</code>. <code>Cross-Service</code> applies across multiple Amazon
   * Web Services services. <code>Service-Specific</code> applies to a specific
   * Amazon Web Services service. <code>Other</code> applies to other
   * arrangements.</p>
   */
  inline ContractType GetContractType() const { return m_contractType; }
  inline bool ContractTypeHasBeenSet() const { return m_contractTypeHasBeenSet; }
  inline void SetContractType(ContractType value) {
    m_contractTypeHasBeenSet = true;
    m_contractType = value;
  }
  inline ContractSummary& WithContractType(ContractType value) {
    SetContractType(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Indicates whether the contract is currently associated with your account.
   * Valid values are <code>ASSOCIATED</code> and <code>NOT_ASSOCIATED</code>.
   * <code>ASSOCIATED</code> means the contract is associated with your account.
   * <code>NOT_ASSOCIATED</code> means the contract is not associated with your
   * account.</p>
   */
  inline AssociationStatus GetAssociationStatus() const { return m_associationStatus; }
  inline bool AssociationStatusHasBeenSet() const { return m_associationStatusHasBeenSet; }
  inline void SetAssociationStatus(AssociationStatus value) {
    m_associationStatusHasBeenSet = true;
    m_associationStatus = value;
  }
  inline ContractSummary& WithAssociationStatus(AssociationStatus value) {
    SetAssociationStatus(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The time when the contract was last associated with your account.</p>
   */
  inline const Aws::Utils::DateTime& GetLastUpdatedAt() const { return m_lastUpdatedAt; }
  inline bool LastUpdatedAtHasBeenSet() const { return m_lastUpdatedAtHasBeenSet; }
  template <typename LastUpdatedAtT = Aws::Utils::DateTime>
  void SetLastUpdatedAt(LastUpdatedAtT&& value) {
    m_lastUpdatedAtHasBeenSet = true;
    m_lastUpdatedAt = std::forward<LastUpdatedAtT>(value);
  }
  template <typename LastUpdatedAtT = Aws::Utils::DateTime>
  ContractSummary& WithLastUpdatedAt(LastUpdatedAtT&& value) {
    SetLastUpdatedAt(std::forward<LastUpdatedAtT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_contractArn;

  Interval m_contractTerm;

  ContractType m_contractType{ContractType::NOT_SET};

  AssociationStatus m_associationStatus{AssociationStatus::NOT_SET};

  Aws::Utils::DateTime m_lastUpdatedAt{};
  bool m_contractArnHasBeenSet = false;
  bool m_contractTermHasBeenSet = false;
  bool m_contractTypeHasBeenSet = false;
  bool m_associationStatusHasBeenSet = false;
  bool m_lastUpdatedAtHasBeenSet = false;
};

}  // namespace Model
}  // namespace Billing
}  // namespace Aws
