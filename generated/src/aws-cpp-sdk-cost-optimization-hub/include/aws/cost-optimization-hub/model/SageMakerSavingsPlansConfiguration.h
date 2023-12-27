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
   * <p>The SageMaker Savings Plans configuration used for
   * recommendations.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cost-optimization-hub-2022-07-26/SageMakerSavingsPlansConfiguration">AWS
   * API Reference</a></p>
   */
  class SageMakerSavingsPlansConfiguration
  {
  public:
    AWS_COSTOPTIMIZATIONHUB_API SageMakerSavingsPlansConfiguration();
    AWS_COSTOPTIMIZATIONHUB_API SageMakerSavingsPlansConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_COSTOPTIMIZATIONHUB_API SageMakerSavingsPlansConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_COSTOPTIMIZATIONHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The account scope that you want your recommendations for.</p>
     */
    inline const Aws::String& GetAccountScope() const{ return m_accountScope; }

    /**
     * <p>The account scope that you want your recommendations for.</p>
     */
    inline bool AccountScopeHasBeenSet() const { return m_accountScopeHasBeenSet; }

    /**
     * <p>The account scope that you want your recommendations for.</p>
     */
    inline void SetAccountScope(const Aws::String& value) { m_accountScopeHasBeenSet = true; m_accountScope = value; }

    /**
     * <p>The account scope that you want your recommendations for.</p>
     */
    inline void SetAccountScope(Aws::String&& value) { m_accountScopeHasBeenSet = true; m_accountScope = std::move(value); }

    /**
     * <p>The account scope that you want your recommendations for.</p>
     */
    inline void SetAccountScope(const char* value) { m_accountScopeHasBeenSet = true; m_accountScope.assign(value); }

    /**
     * <p>The account scope that you want your recommendations for.</p>
     */
    inline SageMakerSavingsPlansConfiguration& WithAccountScope(const Aws::String& value) { SetAccountScope(value); return *this;}

    /**
     * <p>The account scope that you want your recommendations for.</p>
     */
    inline SageMakerSavingsPlansConfiguration& WithAccountScope(Aws::String&& value) { SetAccountScope(std::move(value)); return *this;}

    /**
     * <p>The account scope that you want your recommendations for.</p>
     */
    inline SageMakerSavingsPlansConfiguration& WithAccountScope(const char* value) { SetAccountScope(value); return *this;}


    /**
     * <p>The hourly commitment for the Savings Plans type.</p>
     */
    inline const Aws::String& GetHourlyCommitment() const{ return m_hourlyCommitment; }

    /**
     * <p>The hourly commitment for the Savings Plans type.</p>
     */
    inline bool HourlyCommitmentHasBeenSet() const { return m_hourlyCommitmentHasBeenSet; }

    /**
     * <p>The hourly commitment for the Savings Plans type.</p>
     */
    inline void SetHourlyCommitment(const Aws::String& value) { m_hourlyCommitmentHasBeenSet = true; m_hourlyCommitment = value; }

    /**
     * <p>The hourly commitment for the Savings Plans type.</p>
     */
    inline void SetHourlyCommitment(Aws::String&& value) { m_hourlyCommitmentHasBeenSet = true; m_hourlyCommitment = std::move(value); }

    /**
     * <p>The hourly commitment for the Savings Plans type.</p>
     */
    inline void SetHourlyCommitment(const char* value) { m_hourlyCommitmentHasBeenSet = true; m_hourlyCommitment.assign(value); }

    /**
     * <p>The hourly commitment for the Savings Plans type.</p>
     */
    inline SageMakerSavingsPlansConfiguration& WithHourlyCommitment(const Aws::String& value) { SetHourlyCommitment(value); return *this;}

    /**
     * <p>The hourly commitment for the Savings Plans type.</p>
     */
    inline SageMakerSavingsPlansConfiguration& WithHourlyCommitment(Aws::String&& value) { SetHourlyCommitment(std::move(value)); return *this;}

    /**
     * <p>The hourly commitment for the Savings Plans type.</p>
     */
    inline SageMakerSavingsPlansConfiguration& WithHourlyCommitment(const char* value) { SetHourlyCommitment(value); return *this;}


    /**
     * <p>The payment option for the commitment.</p>
     */
    inline const Aws::String& GetPaymentOption() const{ return m_paymentOption; }

    /**
     * <p>The payment option for the commitment.</p>
     */
    inline bool PaymentOptionHasBeenSet() const { return m_paymentOptionHasBeenSet; }

    /**
     * <p>The payment option for the commitment.</p>
     */
    inline void SetPaymentOption(const Aws::String& value) { m_paymentOptionHasBeenSet = true; m_paymentOption = value; }

    /**
     * <p>The payment option for the commitment.</p>
     */
    inline void SetPaymentOption(Aws::String&& value) { m_paymentOptionHasBeenSet = true; m_paymentOption = std::move(value); }

    /**
     * <p>The payment option for the commitment.</p>
     */
    inline void SetPaymentOption(const char* value) { m_paymentOptionHasBeenSet = true; m_paymentOption.assign(value); }

    /**
     * <p>The payment option for the commitment.</p>
     */
    inline SageMakerSavingsPlansConfiguration& WithPaymentOption(const Aws::String& value) { SetPaymentOption(value); return *this;}

    /**
     * <p>The payment option for the commitment.</p>
     */
    inline SageMakerSavingsPlansConfiguration& WithPaymentOption(Aws::String&& value) { SetPaymentOption(std::move(value)); return *this;}

    /**
     * <p>The payment option for the commitment.</p>
     */
    inline SageMakerSavingsPlansConfiguration& WithPaymentOption(const char* value) { SetPaymentOption(value); return *this;}


    /**
     * <p>The Savings Plans recommendation term in years.</p>
     */
    inline const Aws::String& GetTerm() const{ return m_term; }

    /**
     * <p>The Savings Plans recommendation term in years.</p>
     */
    inline bool TermHasBeenSet() const { return m_termHasBeenSet; }

    /**
     * <p>The Savings Plans recommendation term in years.</p>
     */
    inline void SetTerm(const Aws::String& value) { m_termHasBeenSet = true; m_term = value; }

    /**
     * <p>The Savings Plans recommendation term in years.</p>
     */
    inline void SetTerm(Aws::String&& value) { m_termHasBeenSet = true; m_term = std::move(value); }

    /**
     * <p>The Savings Plans recommendation term in years.</p>
     */
    inline void SetTerm(const char* value) { m_termHasBeenSet = true; m_term.assign(value); }

    /**
     * <p>The Savings Plans recommendation term in years.</p>
     */
    inline SageMakerSavingsPlansConfiguration& WithTerm(const Aws::String& value) { SetTerm(value); return *this;}

    /**
     * <p>The Savings Plans recommendation term in years.</p>
     */
    inline SageMakerSavingsPlansConfiguration& WithTerm(Aws::String&& value) { SetTerm(std::move(value)); return *this;}

    /**
     * <p>The Savings Plans recommendation term in years.</p>
     */
    inline SageMakerSavingsPlansConfiguration& WithTerm(const char* value) { SetTerm(value); return *this;}

  private:

    Aws::String m_accountScope;
    bool m_accountScopeHasBeenSet = false;

    Aws::String m_hourlyCommitment;
    bool m_hourlyCommitmentHasBeenSet = false;

    Aws::String m_paymentOption;
    bool m_paymentOptionHasBeenSet = false;

    Aws::String m_term;
    bool m_termHasBeenSet = false;
  };

} // namespace Model
} // namespace CostOptimizationHub
} // namespace Aws
