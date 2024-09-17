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
    AWS_COSTOPTIMIZATIONHUB_API Ec2InstanceSavingsPlansConfiguration();
    AWS_COSTOPTIMIZATIONHUB_API Ec2InstanceSavingsPlansConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_COSTOPTIMIZATIONHUB_API Ec2InstanceSavingsPlansConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_COSTOPTIMIZATIONHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The account scope that you want your recommendations for.</p>
     */
    inline const Aws::String& GetAccountScope() const{ return m_accountScope; }
    inline bool AccountScopeHasBeenSet() const { return m_accountScopeHasBeenSet; }
    inline void SetAccountScope(const Aws::String& value) { m_accountScopeHasBeenSet = true; m_accountScope = value; }
    inline void SetAccountScope(Aws::String&& value) { m_accountScopeHasBeenSet = true; m_accountScope = std::move(value); }
    inline void SetAccountScope(const char* value) { m_accountScopeHasBeenSet = true; m_accountScope.assign(value); }
    inline Ec2InstanceSavingsPlansConfiguration& WithAccountScope(const Aws::String& value) { SetAccountScope(value); return *this;}
    inline Ec2InstanceSavingsPlansConfiguration& WithAccountScope(Aws::String&& value) { SetAccountScope(std::move(value)); return *this;}
    inline Ec2InstanceSavingsPlansConfiguration& WithAccountScope(const char* value) { SetAccountScope(value); return *this;}
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
    inline Ec2InstanceSavingsPlansConfiguration& WithTerm(const Aws::String& value) { SetTerm(value); return *this;}
    inline Ec2InstanceSavingsPlansConfiguration& WithTerm(Aws::String&& value) { SetTerm(std::move(value)); return *this;}
    inline Ec2InstanceSavingsPlansConfiguration& WithTerm(const char* value) { SetTerm(value); return *this;}
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
    inline Ec2InstanceSavingsPlansConfiguration& WithPaymentOption(const Aws::String& value) { SetPaymentOption(value); return *this;}
    inline Ec2InstanceSavingsPlansConfiguration& WithPaymentOption(Aws::String&& value) { SetPaymentOption(std::move(value)); return *this;}
    inline Ec2InstanceSavingsPlansConfiguration& WithPaymentOption(const char* value) { SetPaymentOption(value); return *this;}
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
    inline Ec2InstanceSavingsPlansConfiguration& WithHourlyCommitment(const Aws::String& value) { SetHourlyCommitment(value); return *this;}
    inline Ec2InstanceSavingsPlansConfiguration& WithHourlyCommitment(Aws::String&& value) { SetHourlyCommitment(std::move(value)); return *this;}
    inline Ec2InstanceSavingsPlansConfiguration& WithHourlyCommitment(const char* value) { SetHourlyCommitment(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The instance family of the recommended Savings Plan.</p>
     */
    inline const Aws::String& GetInstanceFamily() const{ return m_instanceFamily; }
    inline bool InstanceFamilyHasBeenSet() const { return m_instanceFamilyHasBeenSet; }
    inline void SetInstanceFamily(const Aws::String& value) { m_instanceFamilyHasBeenSet = true; m_instanceFamily = value; }
    inline void SetInstanceFamily(Aws::String&& value) { m_instanceFamilyHasBeenSet = true; m_instanceFamily = std::move(value); }
    inline void SetInstanceFamily(const char* value) { m_instanceFamilyHasBeenSet = true; m_instanceFamily.assign(value); }
    inline Ec2InstanceSavingsPlansConfiguration& WithInstanceFamily(const Aws::String& value) { SetInstanceFamily(value); return *this;}
    inline Ec2InstanceSavingsPlansConfiguration& WithInstanceFamily(Aws::String&& value) { SetInstanceFamily(std::move(value)); return *this;}
    inline Ec2InstanceSavingsPlansConfiguration& WithInstanceFamily(const char* value) { SetInstanceFamily(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Web Services Region of the commitment.</p>
     */
    inline const Aws::String& GetSavingsPlansRegion() const{ return m_savingsPlansRegion; }
    inline bool SavingsPlansRegionHasBeenSet() const { return m_savingsPlansRegionHasBeenSet; }
    inline void SetSavingsPlansRegion(const Aws::String& value) { m_savingsPlansRegionHasBeenSet = true; m_savingsPlansRegion = value; }
    inline void SetSavingsPlansRegion(Aws::String&& value) { m_savingsPlansRegionHasBeenSet = true; m_savingsPlansRegion = std::move(value); }
    inline void SetSavingsPlansRegion(const char* value) { m_savingsPlansRegionHasBeenSet = true; m_savingsPlansRegion.assign(value); }
    inline Ec2InstanceSavingsPlansConfiguration& WithSavingsPlansRegion(const Aws::String& value) { SetSavingsPlansRegion(value); return *this;}
    inline Ec2InstanceSavingsPlansConfiguration& WithSavingsPlansRegion(Aws::String&& value) { SetSavingsPlansRegion(std::move(value)); return *this;}
    inline Ec2InstanceSavingsPlansConfiguration& WithSavingsPlansRegion(const char* value) { SetSavingsPlansRegion(value); return *this;}
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
