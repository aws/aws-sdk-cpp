/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/billingconductor/BillingConductor_EXPORTS.h>
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
namespace BillingConductor
{
namespace Model
{

  /**
   * <p>A summary report of actual Amazon Web Services charges and calculated Amazon
   * Web Services charges, based on the associated pricing plan of a billing
   * group.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/billingconductor-2021-07-30/BillingGroupCostReportElement">AWS
   * API Reference</a></p>
   */
  class BillingGroupCostReportElement
  {
  public:
    AWS_BILLINGCONDUCTOR_API BillingGroupCostReportElement() = default;
    AWS_BILLINGCONDUCTOR_API BillingGroupCostReportElement(Aws::Utils::Json::JsonView jsonValue);
    AWS_BILLINGCONDUCTOR_API BillingGroupCostReportElement& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BILLINGCONDUCTOR_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of a billing group.</p>
     */
    inline const Aws::String& GetArn() const { return m_arn; }
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }
    template<typename ArnT = Aws::String>
    void SetArn(ArnT&& value) { m_arnHasBeenSet = true; m_arn = std::forward<ArnT>(value); }
    template<typename ArnT = Aws::String>
    BillingGroupCostReportElement& WithArn(ArnT&& value) { SetArn(std::forward<ArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The actual Amazon Web Services charges for the billing group.</p>
     */
    inline const Aws::String& GetAWSCost() const { return m_aWSCost; }
    inline bool AWSCostHasBeenSet() const { return m_aWSCostHasBeenSet; }
    template<typename AWSCostT = Aws::String>
    void SetAWSCost(AWSCostT&& value) { m_aWSCostHasBeenSet = true; m_aWSCost = std::forward<AWSCostT>(value); }
    template<typename AWSCostT = Aws::String>
    BillingGroupCostReportElement& WithAWSCost(AWSCostT&& value) { SetAWSCost(std::forward<AWSCostT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The hypothetical Amazon Web Services charges based on the associated pricing
     * plan of a billing group.</p>
     */
    inline const Aws::String& GetProformaCost() const { return m_proformaCost; }
    inline bool ProformaCostHasBeenSet() const { return m_proformaCostHasBeenSet; }
    template<typename ProformaCostT = Aws::String>
    void SetProformaCost(ProformaCostT&& value) { m_proformaCostHasBeenSet = true; m_proformaCost = std::forward<ProformaCostT>(value); }
    template<typename ProformaCostT = Aws::String>
    BillingGroupCostReportElement& WithProformaCost(ProformaCostT&& value) { SetProformaCost(std::forward<ProformaCostT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The billing group margin.</p>
     */
    inline const Aws::String& GetMargin() const { return m_margin; }
    inline bool MarginHasBeenSet() const { return m_marginHasBeenSet; }
    template<typename MarginT = Aws::String>
    void SetMargin(MarginT&& value) { m_marginHasBeenSet = true; m_margin = std::forward<MarginT>(value); }
    template<typename MarginT = Aws::String>
    BillingGroupCostReportElement& WithMargin(MarginT&& value) { SetMargin(std::forward<MarginT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The percentage of billing group margin.</p>
     */
    inline const Aws::String& GetMarginPercentage() const { return m_marginPercentage; }
    inline bool MarginPercentageHasBeenSet() const { return m_marginPercentageHasBeenSet; }
    template<typename MarginPercentageT = Aws::String>
    void SetMarginPercentage(MarginPercentageT&& value) { m_marginPercentageHasBeenSet = true; m_marginPercentage = std::forward<MarginPercentageT>(value); }
    template<typename MarginPercentageT = Aws::String>
    BillingGroupCostReportElement& WithMarginPercentage(MarginPercentageT&& value) { SetMarginPercentage(std::forward<MarginPercentageT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The displayed currency.</p>
     */
    inline const Aws::String& GetCurrency() const { return m_currency; }
    inline bool CurrencyHasBeenSet() const { return m_currencyHasBeenSet; }
    template<typename CurrencyT = Aws::String>
    void SetCurrency(CurrencyT&& value) { m_currencyHasBeenSet = true; m_currency = std::forward<CurrencyT>(value); }
    template<typename CurrencyT = Aws::String>
    BillingGroupCostReportElement& WithCurrency(CurrencyT&& value) { SetCurrency(std::forward<CurrencyT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    Aws::String m_aWSCost;
    bool m_aWSCostHasBeenSet = false;

    Aws::String m_proformaCost;
    bool m_proformaCostHasBeenSet = false;

    Aws::String m_margin;
    bool m_marginHasBeenSet = false;

    Aws::String m_marginPercentage;
    bool m_marginPercentageHasBeenSet = false;

    Aws::String m_currency;
    bool m_currencyHasBeenSet = false;
  };

} // namespace Model
} // namespace BillingConductor
} // namespace Aws
