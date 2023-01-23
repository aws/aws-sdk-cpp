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
   * Web Services charges, based on the associated pricing plan of a billing group.
   * </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/billingconductor-2021-07-30/BillingGroupCostReportElement">AWS
   * API Reference</a></p>
   */
  class BillingGroupCostReportElement
  {
  public:
    AWS_BILLINGCONDUCTOR_API BillingGroupCostReportElement();
    AWS_BILLINGCONDUCTOR_API BillingGroupCostReportElement(Aws::Utils::Json::JsonView jsonValue);
    AWS_BILLINGCONDUCTOR_API BillingGroupCostReportElement& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BILLINGCONDUCTOR_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The Amazon Resource Name (ARN) of a billing group. </p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }

    /**
     * <p>The Amazon Resource Name (ARN) of a billing group. </p>
     */
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of a billing group. </p>
     */
    inline void SetArn(const Aws::String& value) { m_arnHasBeenSet = true; m_arn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of a billing group. </p>
     */
    inline void SetArn(Aws::String&& value) { m_arnHasBeenSet = true; m_arn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of a billing group. </p>
     */
    inline void SetArn(const char* value) { m_arnHasBeenSet = true; m_arn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of a billing group. </p>
     */
    inline BillingGroupCostReportElement& WithArn(const Aws::String& value) { SetArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of a billing group. </p>
     */
    inline BillingGroupCostReportElement& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of a billing group. </p>
     */
    inline BillingGroupCostReportElement& WithArn(const char* value) { SetArn(value); return *this;}


    /**
     * <p>The actual Amazon Web Services charges for the billing group. </p>
     */
    inline const Aws::String& GetAWSCost() const{ return m_aWSCost; }

    /**
     * <p>The actual Amazon Web Services charges for the billing group. </p>
     */
    inline bool AWSCostHasBeenSet() const { return m_aWSCostHasBeenSet; }

    /**
     * <p>The actual Amazon Web Services charges for the billing group. </p>
     */
    inline void SetAWSCost(const Aws::String& value) { m_aWSCostHasBeenSet = true; m_aWSCost = value; }

    /**
     * <p>The actual Amazon Web Services charges for the billing group. </p>
     */
    inline void SetAWSCost(Aws::String&& value) { m_aWSCostHasBeenSet = true; m_aWSCost = std::move(value); }

    /**
     * <p>The actual Amazon Web Services charges for the billing group. </p>
     */
    inline void SetAWSCost(const char* value) { m_aWSCostHasBeenSet = true; m_aWSCost.assign(value); }

    /**
     * <p>The actual Amazon Web Services charges for the billing group. </p>
     */
    inline BillingGroupCostReportElement& WithAWSCost(const Aws::String& value) { SetAWSCost(value); return *this;}

    /**
     * <p>The actual Amazon Web Services charges for the billing group. </p>
     */
    inline BillingGroupCostReportElement& WithAWSCost(Aws::String&& value) { SetAWSCost(std::move(value)); return *this;}

    /**
     * <p>The actual Amazon Web Services charges for the billing group. </p>
     */
    inline BillingGroupCostReportElement& WithAWSCost(const char* value) { SetAWSCost(value); return *this;}


    /**
     * <p>The hypothetical Amazon Web Services charges based on the associated pricing
     * plan of a billing group. </p>
     */
    inline const Aws::String& GetProformaCost() const{ return m_proformaCost; }

    /**
     * <p>The hypothetical Amazon Web Services charges based on the associated pricing
     * plan of a billing group. </p>
     */
    inline bool ProformaCostHasBeenSet() const { return m_proformaCostHasBeenSet; }

    /**
     * <p>The hypothetical Amazon Web Services charges based on the associated pricing
     * plan of a billing group. </p>
     */
    inline void SetProformaCost(const Aws::String& value) { m_proformaCostHasBeenSet = true; m_proformaCost = value; }

    /**
     * <p>The hypothetical Amazon Web Services charges based on the associated pricing
     * plan of a billing group. </p>
     */
    inline void SetProformaCost(Aws::String&& value) { m_proformaCostHasBeenSet = true; m_proformaCost = std::move(value); }

    /**
     * <p>The hypothetical Amazon Web Services charges based on the associated pricing
     * plan of a billing group. </p>
     */
    inline void SetProformaCost(const char* value) { m_proformaCostHasBeenSet = true; m_proformaCost.assign(value); }

    /**
     * <p>The hypothetical Amazon Web Services charges based on the associated pricing
     * plan of a billing group. </p>
     */
    inline BillingGroupCostReportElement& WithProformaCost(const Aws::String& value) { SetProformaCost(value); return *this;}

    /**
     * <p>The hypothetical Amazon Web Services charges based on the associated pricing
     * plan of a billing group. </p>
     */
    inline BillingGroupCostReportElement& WithProformaCost(Aws::String&& value) { SetProformaCost(std::move(value)); return *this;}

    /**
     * <p>The hypothetical Amazon Web Services charges based on the associated pricing
     * plan of a billing group. </p>
     */
    inline BillingGroupCostReportElement& WithProformaCost(const char* value) { SetProformaCost(value); return *this;}


    /**
     * <p> The billing group margin. </p>
     */
    inline const Aws::String& GetMargin() const{ return m_margin; }

    /**
     * <p> The billing group margin. </p>
     */
    inline bool MarginHasBeenSet() const { return m_marginHasBeenSet; }

    /**
     * <p> The billing group margin. </p>
     */
    inline void SetMargin(const Aws::String& value) { m_marginHasBeenSet = true; m_margin = value; }

    /**
     * <p> The billing group margin. </p>
     */
    inline void SetMargin(Aws::String&& value) { m_marginHasBeenSet = true; m_margin = std::move(value); }

    /**
     * <p> The billing group margin. </p>
     */
    inline void SetMargin(const char* value) { m_marginHasBeenSet = true; m_margin.assign(value); }

    /**
     * <p> The billing group margin. </p>
     */
    inline BillingGroupCostReportElement& WithMargin(const Aws::String& value) { SetMargin(value); return *this;}

    /**
     * <p> The billing group margin. </p>
     */
    inline BillingGroupCostReportElement& WithMargin(Aws::String&& value) { SetMargin(std::move(value)); return *this;}

    /**
     * <p> The billing group margin. </p>
     */
    inline BillingGroupCostReportElement& WithMargin(const char* value) { SetMargin(value); return *this;}


    /**
     * <p> The percentage of billing group margin. </p>
     */
    inline const Aws::String& GetMarginPercentage() const{ return m_marginPercentage; }

    /**
     * <p> The percentage of billing group margin. </p>
     */
    inline bool MarginPercentageHasBeenSet() const { return m_marginPercentageHasBeenSet; }

    /**
     * <p> The percentage of billing group margin. </p>
     */
    inline void SetMarginPercentage(const Aws::String& value) { m_marginPercentageHasBeenSet = true; m_marginPercentage = value; }

    /**
     * <p> The percentage of billing group margin. </p>
     */
    inline void SetMarginPercentage(Aws::String&& value) { m_marginPercentageHasBeenSet = true; m_marginPercentage = std::move(value); }

    /**
     * <p> The percentage of billing group margin. </p>
     */
    inline void SetMarginPercentage(const char* value) { m_marginPercentageHasBeenSet = true; m_marginPercentage.assign(value); }

    /**
     * <p> The percentage of billing group margin. </p>
     */
    inline BillingGroupCostReportElement& WithMarginPercentage(const Aws::String& value) { SetMarginPercentage(value); return *this;}

    /**
     * <p> The percentage of billing group margin. </p>
     */
    inline BillingGroupCostReportElement& WithMarginPercentage(Aws::String&& value) { SetMarginPercentage(std::move(value)); return *this;}

    /**
     * <p> The percentage of billing group margin. </p>
     */
    inline BillingGroupCostReportElement& WithMarginPercentage(const char* value) { SetMarginPercentage(value); return *this;}


    /**
     * <p>The displayed currency. </p>
     */
    inline const Aws::String& GetCurrency() const{ return m_currency; }

    /**
     * <p>The displayed currency. </p>
     */
    inline bool CurrencyHasBeenSet() const { return m_currencyHasBeenSet; }

    /**
     * <p>The displayed currency. </p>
     */
    inline void SetCurrency(const Aws::String& value) { m_currencyHasBeenSet = true; m_currency = value; }

    /**
     * <p>The displayed currency. </p>
     */
    inline void SetCurrency(Aws::String&& value) { m_currencyHasBeenSet = true; m_currency = std::move(value); }

    /**
     * <p>The displayed currency. </p>
     */
    inline void SetCurrency(const char* value) { m_currencyHasBeenSet = true; m_currency.assign(value); }

    /**
     * <p>The displayed currency. </p>
     */
    inline BillingGroupCostReportElement& WithCurrency(const Aws::String& value) { SetCurrency(value); return *this;}

    /**
     * <p>The displayed currency. </p>
     */
    inline BillingGroupCostReportElement& WithCurrency(Aws::String&& value) { SetCurrency(std::move(value)); return *this;}

    /**
     * <p>The displayed currency. </p>
     */
    inline BillingGroupCostReportElement& WithCurrency(const char* value) { SetCurrency(value); return *this;}

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
