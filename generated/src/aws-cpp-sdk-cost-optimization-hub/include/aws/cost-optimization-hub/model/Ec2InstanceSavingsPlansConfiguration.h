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
   * <p>The EC2 instance Savings Plans configuration used for
   * recommendations.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cost-optimization-hub-2022-07-26/Ec2InstanceSavingsPlansConfiguration">AWS
   * API Reference</a></p>
   */
  class Ec2InstanceSavingsPlansConfiguration
  {
  public:
    AWS_COSTOPTIMIZATIONHUB_API Ec2InstanceSavingsPlansConfiguration() = default;
    AWS_COSTOPTIMIZATIONHUB_API Ec2InstanceSavingsPlansConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_COSTOPTIMIZATIONHUB_API Ec2InstanceSavingsPlansConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_COSTOPTIMIZATIONHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The account scope for which you want recommendations.</p>
     */
    inline const Aws::String& GetAccountScope() const { return m_accountScope; }
    inline bool AccountScopeHasBeenSet() const { return m_accountScopeHasBeenSet; }
    template<typename AccountScopeT = Aws::String>
    void SetAccountScope(AccountScopeT&& value) { m_accountScopeHasBeenSet = true; m_accountScope = std::forward<AccountScopeT>(value); }
    template<typename AccountScopeT = Aws::String>
    Ec2InstanceSavingsPlansConfiguration& WithAccountScope(AccountScopeT&& value) { SetAccountScope(std::forward<AccountScopeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Savings Plans recommendation term in years.</p>
     */
    inline const Aws::String& GetTerm() const { return m_term; }
    inline bool TermHasBeenSet() const { return m_termHasBeenSet; }
    template<typename TermT = Aws::String>
    void SetTerm(TermT&& value) { m_termHasBeenSet = true; m_term = std::forward<TermT>(value); }
    template<typename TermT = Aws::String>
    Ec2InstanceSavingsPlansConfiguration& WithTerm(TermT&& value) { SetTerm(std::forward<TermT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The payment option for the commitment.</p>
     */
    inline const Aws::String& GetPaymentOption() const { return m_paymentOption; }
    inline bool PaymentOptionHasBeenSet() const { return m_paymentOptionHasBeenSet; }
    template<typename PaymentOptionT = Aws::String>
    void SetPaymentOption(PaymentOptionT&& value) { m_paymentOptionHasBeenSet = true; m_paymentOption = std::forward<PaymentOptionT>(value); }
    template<typename PaymentOptionT = Aws::String>
    Ec2InstanceSavingsPlansConfiguration& WithPaymentOption(PaymentOptionT&& value) { SetPaymentOption(std::forward<PaymentOptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The hourly commitment for the Savings Plans type.</p>
     */
    inline const Aws::String& GetHourlyCommitment() const { return m_hourlyCommitment; }
    inline bool HourlyCommitmentHasBeenSet() const { return m_hourlyCommitmentHasBeenSet; }
    template<typename HourlyCommitmentT = Aws::String>
    void SetHourlyCommitment(HourlyCommitmentT&& value) { m_hourlyCommitmentHasBeenSet = true; m_hourlyCommitment = std::forward<HourlyCommitmentT>(value); }
    template<typename HourlyCommitmentT = Aws::String>
    Ec2InstanceSavingsPlansConfiguration& WithHourlyCommitment(HourlyCommitmentT&& value) { SetHourlyCommitment(std::forward<HourlyCommitmentT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The instance family of the recommended Savings Plan.</p>
     */
    inline const Aws::String& GetInstanceFamily() const { return m_instanceFamily; }
    inline bool InstanceFamilyHasBeenSet() const { return m_instanceFamilyHasBeenSet; }
    template<typename InstanceFamilyT = Aws::String>
    void SetInstanceFamily(InstanceFamilyT&& value) { m_instanceFamilyHasBeenSet = true; m_instanceFamily = std::forward<InstanceFamilyT>(value); }
    template<typename InstanceFamilyT = Aws::String>
    Ec2InstanceSavingsPlansConfiguration& WithInstanceFamily(InstanceFamilyT&& value) { SetInstanceFamily(std::forward<InstanceFamilyT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Web Services Region of the commitment.</p>
     */
    inline const Aws::String& GetSavingsPlansRegion() const { return m_savingsPlansRegion; }
    inline bool SavingsPlansRegionHasBeenSet() const { return m_savingsPlansRegionHasBeenSet; }
    template<typename SavingsPlansRegionT = Aws::String>
    void SetSavingsPlansRegion(SavingsPlansRegionT&& value) { m_savingsPlansRegionHasBeenSet = true; m_savingsPlansRegion = std::forward<SavingsPlansRegionT>(value); }
    template<typename SavingsPlansRegionT = Aws::String>
    Ec2InstanceSavingsPlansConfiguration& WithSavingsPlansRegion(SavingsPlansRegionT&& value) { SetSavingsPlansRegion(std::forward<SavingsPlansRegionT>(value)); return *this;}
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

    Aws::String m_instanceFamily;
    bool m_instanceFamilyHasBeenSet = false;

    Aws::String m_savingsPlansRegion;
    bool m_savingsPlansRegionHasBeenSet = false;
  };

} // namespace Model
} // namespace CostOptimizationHub
} // namespace Aws
