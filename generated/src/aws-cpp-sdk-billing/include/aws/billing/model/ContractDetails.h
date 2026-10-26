/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/billing/Billing_EXPORTS.h>
#include <aws/billing/model/PrivatePricingAddendum.h>

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
 * <p>The details of a contract returned by <code>GetContractInformation</code>.
 * This is a union in which exactly one member is set, corresponding to the
 * contract type. For a private pricing addendum, the
 * <code>privatePricingAddendum</code> member is set. Check which member is present
 * to determine the contract type.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/billing-2023-09-07/ContractDetails">AWS
 * API Reference</a></p>
 */
class ContractDetails {
 public:
  AWS_BILLING_API ContractDetails() = default;
  AWS_BILLING_API ContractDetails(Aws::Utils::Json::JsonView jsonValue);
  AWS_BILLING_API ContractDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_BILLING_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The details of a private pricing addendum contract. This member is set when
   * the contract is a private pricing addendum.</p>
   */
  inline const PrivatePricingAddendum& GetPrivatePricingAddendum() const { return m_privatePricingAddendum; }
  inline bool PrivatePricingAddendumHasBeenSet() const { return m_privatePricingAddendumHasBeenSet; }
  template <typename PrivatePricingAddendumT = PrivatePricingAddendum>
  void SetPrivatePricingAddendum(PrivatePricingAddendumT&& value) {
    m_privatePricingAddendumHasBeenSet = true;
    m_privatePricingAddendum = std::forward<PrivatePricingAddendumT>(value);
  }
  template <typename PrivatePricingAddendumT = PrivatePricingAddendum>
  ContractDetails& WithPrivatePricingAddendum(PrivatePricingAddendumT&& value) {
    SetPrivatePricingAddendum(std::forward<PrivatePricingAddendumT>(value));
    return *this;
  }
  ///@}
 private:
  PrivatePricingAddendum m_privatePricingAddendum;
  bool m_privatePricingAddendumHasBeenSet = false;
};

}  // namespace Model
}  // namespace Billing
}  // namespace Aws
