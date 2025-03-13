/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/billingconductor/BillingConductor_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/billingconductor/model/Attribute.h>
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
   * <p>A paginated call to retrieve a list of summary reports of actual Amazon Web
   * Services charges and the calculated Amazon Web Services charges, broken down by
   * attributes.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/billingconductor-2021-07-30/BillingGroupCostReportResultElement">AWS
   * API Reference</a></p>
   */
  class BillingGroupCostReportResultElement
  {
  public:
    AWS_BILLINGCONDUCTOR_API BillingGroupCostReportResultElement() = default;
    AWS_BILLINGCONDUCTOR_API BillingGroupCostReportResultElement(Aws::Utils::Json::JsonView jsonValue);
    AWS_BILLINGCONDUCTOR_API BillingGroupCostReportResultElement& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BILLINGCONDUCTOR_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Amazon Resource Number (ARN) that uniquely identifies the billing
     * group.</p>
     */
    inline const Aws::String& GetArn() const { return m_arn; }
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }
    template<typename ArnT = Aws::String>
    void SetArn(ArnT&& value) { m_arnHasBeenSet = true; m_arn = std::forward<ArnT>(value); }
    template<typename ArnT = Aws::String>
    BillingGroupCostReportResultElement& WithArn(ArnT&& value) { SetArn(std::forward<ArnT>(value)); return *this;}
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
    BillingGroupCostReportResultElement& WithAWSCost(AWSCostT&& value) { SetAWSCost(std::forward<AWSCostT>(value)); return *this;}
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
    BillingGroupCostReportResultElement& WithProformaCost(ProformaCostT&& value) { SetProformaCost(std::forward<ProformaCostT>(value)); return *this;}
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
    BillingGroupCostReportResultElement& WithMargin(MarginT&& value) { SetMargin(std::forward<MarginT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The percentage of the billing group margin.</p>
     */
    inline const Aws::String& GetMarginPercentage() const { return m_marginPercentage; }
    inline bool MarginPercentageHasBeenSet() const { return m_marginPercentageHasBeenSet; }
    template<typename MarginPercentageT = Aws::String>
    void SetMarginPercentage(MarginPercentageT&& value) { m_marginPercentageHasBeenSet = true; m_marginPercentage = std::forward<MarginPercentageT>(value); }
    template<typename MarginPercentageT = Aws::String>
    BillingGroupCostReportResultElement& WithMarginPercentage(MarginPercentageT&& value) { SetMarginPercentage(std::forward<MarginPercentageT>(value)); return *this;}
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
    BillingGroupCostReportResultElement& WithCurrency(CurrencyT&& value) { SetCurrency(std::forward<CurrencyT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The list of key-value pairs that represent the attributes by which the
     * <code>BillingGroupCostReportResults</code> are grouped. For example, if you want
     * the Amazon S3 service-level breakdown of a billing group for November 2023, the
     * attributes list will contain a key-value pair of <code>"PRODUCT_NAME"</code> and
     * <code>"S3"</code> and a key-value pair of <code>"BILLING_PERIOD"</code> and
     * <code>"Nov 2023"</code>.</p>
     */
    inline const Aws::Vector<Attribute>& GetAttributes() const { return m_attributes; }
    inline bool AttributesHasBeenSet() const { return m_attributesHasBeenSet; }
    template<typename AttributesT = Aws::Vector<Attribute>>
    void SetAttributes(AttributesT&& value) { m_attributesHasBeenSet = true; m_attributes = std::forward<AttributesT>(value); }
    template<typename AttributesT = Aws::Vector<Attribute>>
    BillingGroupCostReportResultElement& WithAttributes(AttributesT&& value) { SetAttributes(std::forward<AttributesT>(value)); return *this;}
    template<typename AttributesT = Attribute>
    BillingGroupCostReportResultElement& AddAttributes(AttributesT&& value) { m_attributesHasBeenSet = true; m_attributes.emplace_back(std::forward<AttributesT>(value)); return *this; }
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

    Aws::Vector<Attribute> m_attributes;
    bool m_attributesHasBeenSet = false;
  };

} // namespace Model
} // namespace BillingConductor
} // namespace Aws
