/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cost-optimization-hub/CostOptimizationHub_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
   * <p>The Compute Savings Plans configuration used for
   * recommendations.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cost-optimization-hub-2022-07-26/ComputeSavingsPlansConfiguration">AWS
   * API Reference</a></p>
   */
  class ComputeSavingsPlansConfiguration
  {
  public:
    AWS_COSTOPTIMIZATIONHUB_API ComputeSavingsPlansConfiguration();
    AWS_COSTOPTIMIZATIONHUB_API ComputeSavingsPlansConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_COSTOPTIMIZATIONHUB_API ComputeSavingsPlansConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_COSTOPTIMIZATIONHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The account scope that you want your recommendations for. Amazon Web Services
     * calculates recommendations including the management account and member accounts
     * if the value is set to <code>PAYER</code>. If the value is <code>LINKED</code>,
     * recommendations are calculated for individual member accounts only.</p>
     */
    inline const Aws::String& GetAccountScope() const{ return m_accountScope; }
    inline bool AccountScopeHasBeenSet() const { return m_accountScopeHasBeenSet; }
    inline void SetAccountScope(const Aws::String& value) { m_accountScopeHasBeenSet = true; m_accountScope = value; }
    inline void SetAccountScope(Aws::String&& value) { m_accountScopeHasBeenSet = true; m_accountScope = std::move(value); }
    inline void SetAccountScope(const char* value) { m_accountScopeHasBeenSet = true; m_accountScope.assign(value); }
    inline ComputeSavingsPlansConfiguration& WithAccountScope(const Aws::String& value) { SetAccountScope(value); return *this;}
    inline ComputeSavingsPlansConfiguration& WithAccountScope(Aws::String&& value) { SetAccountScope(std::move(value)); return *this;}
    inline ComputeSavingsPlansConfiguration& WithAccountScope(const char* value) { SetAccountScope(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Savings Plans recommendation term in years.</p>
     */
    inline const Aws::String& GetTerm() const{ return m_term; }
    inline bool TermHasBeenSet() const { return m_termHasBeenSet; }
    inline void SetTerm(const Aws::String& value) { m_termHasBeenSet = true; m_term = value; }
    inline void SetTerm(Aws::String&& value) { m_termHasBeenSet = true; m_term = std::move(value); }
    inline void SetTerm(const char* value) { m_termHasBeenSet = true; m_term.assign(value); }
    inline ComputeSavingsPlansConfiguration& WithTerm(const Aws::String& value) { SetTerm(value); return *this;}
    inline ComputeSavingsPlansConfiguration& WithTerm(Aws::String&& value) { SetTerm(std::move(value)); return *this;}
    inline ComputeSavingsPlansConfiguration& WithTerm(const char* value) { SetTerm(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The payment option for the commitment.</p>
     */
    inline const Aws::String& GetPaymentOption() const{ return m_paymentOption; }
    inline bool PaymentOptionHasBeenSet() const { return m_paymentOptionHasBeenSet; }
    inline void SetPaymentOption(const Aws::String& value) { m_paymentOptionHasBeenSet = true; m_paymentOption = value; }
    inline void SetPaymentOption(Aws::String&& value) { m_paymentOptionHasBeenSet = true; m_paymentOption = std::move(value); }
    inline void SetPaymentOption(const char* value) { m_paymentOptionHasBeenSet = true; m_paymentOption.assign(value); }
    inline ComputeSavingsPlansConfiguration& WithPaymentOption(const Aws::String& value) { SetPaymentOption(value); return *this;}
    inline ComputeSavingsPlansConfiguration& WithPaymentOption(Aws::String&& value) { SetPaymentOption(std::move(value)); return *this;}
    inline ComputeSavingsPlansConfiguration& WithPaymentOption(const char* value) { SetPaymentOption(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The hourly commitment for the Savings Plans type.</p>
     */
    inline const Aws::String& GetHourlyCommitment() const{ return m_hourlyCommitment; }
    inline bool HourlyCommitmentHasBeenSet() const { return m_hourlyCommitmentHasBeenSet; }
    inline void SetHourlyCommitment(const Aws::String& value) { m_hourlyCommitmentHasBeenSet = true; m_hourlyCommitment = value; }
    inline void SetHourlyCommitment(Aws::String&& value) { m_hourlyCommitmentHasBeenSet = true; m_hourlyCommitment = std::move(value); }
    inline void SetHourlyCommitment(const char* value) { m_hourlyCommitmentHasBeenSet = true; m_hourlyCommitment.assign(value); }
    inline ComputeSavingsPlansConfiguration& WithHourlyCommitment(const Aws::String& value) { SetHourlyCommitment(value); return *this;}
    inline ComputeSavingsPlansConfiguration& WithHourlyCommitment(Aws::String&& value) { SetHourlyCommitment(std::move(value)); return *this;}
    inline ComputeSavingsPlansConfiguration& WithHourlyCommitment(const char* value) { SetHourlyCommitment(value); return *this;}
    ///@}
  private:

    Aws::String m_accountScope;
    bool m_accountScopeHasBeenSet = false;

    Aws::String m_term;
    bool m_termHasBeenSet = false;

    Aws::String m_paymentOption;
    bool m_paymentOptionHasBeenSet = false;

    Aws::String m_hourlyCommitment;
    bool m_hourlyCommitmentHasBeenSet = false;
  };

} // namespace Model
} // namespace CostOptimizationHub
} // namespace Aws
