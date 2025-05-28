/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cost-optimization-hub/CostOptimizationHub_EXPORTS.h>
#include <aws/cost-optimization-hub/model/Term.h>
#include <aws/cost-optimization-hub/model/PaymentOption.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace CostOptimizationHub
{
namespace Model
{

  /**
   * <p>The preferred configuration for Reserved Instances and Savings Plans
   * commitment-based discounts, consisting of a payment option and a commitment
   * duration.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cost-optimization-hub-2022-07-26/PreferredCommitment">AWS
   * API Reference</a></p>
   */
  class PreferredCommitment
  {
  public:
    AWS_COSTOPTIMIZATIONHUB_API PreferredCommitment() = default;
    AWS_COSTOPTIMIZATIONHUB_API PreferredCommitment(Aws::Utils::Json::JsonView jsonValue);
    AWS_COSTOPTIMIZATIONHUB_API PreferredCommitment& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_COSTOPTIMIZATIONHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The preferred length of the commitment period. If the value is null, it will
     * default to <code>ThreeYears</code> (highest savings) where applicable.</p>
     */
    inline Term GetTerm() const { return m_term; }
    inline bool TermHasBeenSet() const { return m_termHasBeenSet; }
    inline void SetTerm(Term value) { m_termHasBeenSet = true; m_term = value; }
    inline PreferredCommitment& WithTerm(Term value) { SetTerm(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The preferred upfront payment structure for commitments. If the value is
     * null, it will default to <code>AllUpfront</code> (highest savings) where
     * applicable.</p>
     */
    inline PaymentOption GetPaymentOption() const { return m_paymentOption; }
    inline bool PaymentOptionHasBeenSet() const { return m_paymentOptionHasBeenSet; }
    inline void SetPaymentOption(PaymentOption value) { m_paymentOptionHasBeenSet = true; m_paymentOption = value; }
    inline PreferredCommitment& WithPaymentOption(PaymentOption value) { SetPaymentOption(value); return *this;}
    ///@}
  private:

    Term m_term{Term::NOT_SET};
    bool m_termHasBeenSet = false;

    PaymentOption m_paymentOption{PaymentOption::NOT_SET};
    bool m_paymentOptionHasBeenSet = false;
  };

} // namespace Model
} // namespace CostOptimizationHub
} // namespace Aws
