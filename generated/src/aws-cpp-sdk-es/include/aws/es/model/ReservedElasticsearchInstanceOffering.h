/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/es/ElasticsearchService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/es/model/ESPartitionInstanceType.h>
#include <aws/es/model/ReservedElasticsearchInstancePaymentOption.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/es/model/RecurringCharge.h>
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
namespace ElasticsearchService
{
namespace Model
{

  /**
   * <p>Details of a reserved Elasticsearch instance offering.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/es-2015-01-01/ReservedElasticsearchInstanceOffering">AWS
   * API Reference</a></p>
   */
  class ReservedElasticsearchInstanceOffering
  {
  public:
    AWS_ELASTICSEARCHSERVICE_API ReservedElasticsearchInstanceOffering() = default;
    AWS_ELASTICSEARCHSERVICE_API ReservedElasticsearchInstanceOffering(Aws::Utils::Json::JsonView jsonValue);
    AWS_ELASTICSEARCHSERVICE_API ReservedElasticsearchInstanceOffering& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_ELASTICSEARCHSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Elasticsearch reserved instance offering identifier.</p>
     */
    inline const Aws::String& GetReservedElasticsearchInstanceOfferingId() const { return m_reservedElasticsearchInstanceOfferingId; }
    inline bool ReservedElasticsearchInstanceOfferingIdHasBeenSet() const { return m_reservedElasticsearchInstanceOfferingIdHasBeenSet; }
    template<typename ReservedElasticsearchInstanceOfferingIdT = Aws::String>
    void SetReservedElasticsearchInstanceOfferingId(ReservedElasticsearchInstanceOfferingIdT&& value) { m_reservedElasticsearchInstanceOfferingIdHasBeenSet = true; m_reservedElasticsearchInstanceOfferingId = std::forward<ReservedElasticsearchInstanceOfferingIdT>(value); }
    template<typename ReservedElasticsearchInstanceOfferingIdT = Aws::String>
    ReservedElasticsearchInstanceOffering& WithReservedElasticsearchInstanceOfferingId(ReservedElasticsearchInstanceOfferingIdT&& value) { SetReservedElasticsearchInstanceOfferingId(std::forward<ReservedElasticsearchInstanceOfferingIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Elasticsearch instance type offered by the reserved instance
     * offering.</p>
     */
    inline ESPartitionInstanceType GetElasticsearchInstanceType() const { return m_elasticsearchInstanceType; }
    inline bool ElasticsearchInstanceTypeHasBeenSet() const { return m_elasticsearchInstanceTypeHasBeenSet; }
    inline void SetElasticsearchInstanceType(ESPartitionInstanceType value) { m_elasticsearchInstanceTypeHasBeenSet = true; m_elasticsearchInstanceType = value; }
    inline ReservedElasticsearchInstanceOffering& WithElasticsearchInstanceType(ESPartitionInstanceType value) { SetElasticsearchInstanceType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The duration, in seconds, for which the offering will reserve the
     * Elasticsearch instance.</p>
     */
    inline int GetDuration() const { return m_duration; }
    inline bool DurationHasBeenSet() const { return m_durationHasBeenSet; }
    inline void SetDuration(int value) { m_durationHasBeenSet = true; m_duration = value; }
    inline ReservedElasticsearchInstanceOffering& WithDuration(int value) { SetDuration(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The upfront fixed charge you will pay to purchase the specific reserved
     * Elasticsearch instance offering. </p>
     */
    inline double GetFixedPrice() const { return m_fixedPrice; }
    inline bool FixedPriceHasBeenSet() const { return m_fixedPriceHasBeenSet; }
    inline void SetFixedPrice(double value) { m_fixedPriceHasBeenSet = true; m_fixedPrice = value; }
    inline ReservedElasticsearchInstanceOffering& WithFixedPrice(double value) { SetFixedPrice(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The rate you are charged for each hour the domain that is using the offering
     * is running.</p>
     */
    inline double GetUsagePrice() const { return m_usagePrice; }
    inline bool UsagePriceHasBeenSet() const { return m_usagePriceHasBeenSet; }
    inline void SetUsagePrice(double value) { m_usagePriceHasBeenSet = true; m_usagePrice = value; }
    inline ReservedElasticsearchInstanceOffering& WithUsagePrice(double value) { SetUsagePrice(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The currency code for the reserved Elasticsearch instance offering.</p>
     */
    inline const Aws::String& GetCurrencyCode() const { return m_currencyCode; }
    inline bool CurrencyCodeHasBeenSet() const { return m_currencyCodeHasBeenSet; }
    template<typename CurrencyCodeT = Aws::String>
    void SetCurrencyCode(CurrencyCodeT&& value) { m_currencyCodeHasBeenSet = true; m_currencyCode = std::forward<CurrencyCodeT>(value); }
    template<typename CurrencyCodeT = Aws::String>
    ReservedElasticsearchInstanceOffering& WithCurrencyCode(CurrencyCodeT&& value) { SetCurrencyCode(std::forward<CurrencyCodeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Payment option for the reserved Elasticsearch instance offering</p>
     */
    inline ReservedElasticsearchInstancePaymentOption GetPaymentOption() const { return m_paymentOption; }
    inline bool PaymentOptionHasBeenSet() const { return m_paymentOptionHasBeenSet; }
    inline void SetPaymentOption(ReservedElasticsearchInstancePaymentOption value) { m_paymentOptionHasBeenSet = true; m_paymentOption = value; }
    inline ReservedElasticsearchInstanceOffering& WithPaymentOption(ReservedElasticsearchInstancePaymentOption value) { SetPaymentOption(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The charge to your account regardless of whether you are creating any domains
     * using the instance offering.</p>
     */
    inline const Aws::Vector<RecurringCharge>& GetRecurringCharges() const { return m_recurringCharges; }
    inline bool RecurringChargesHasBeenSet() const { return m_recurringChargesHasBeenSet; }
    template<typename RecurringChargesT = Aws::Vector<RecurringCharge>>
    void SetRecurringCharges(RecurringChargesT&& value) { m_recurringChargesHasBeenSet = true; m_recurringCharges = std::forward<RecurringChargesT>(value); }
    template<typename RecurringChargesT = Aws::Vector<RecurringCharge>>
    ReservedElasticsearchInstanceOffering& WithRecurringCharges(RecurringChargesT&& value) { SetRecurringCharges(std::forward<RecurringChargesT>(value)); return *this;}
    template<typename RecurringChargesT = RecurringCharge>
    ReservedElasticsearchInstanceOffering& AddRecurringCharges(RecurringChargesT&& value) { m_recurringChargesHasBeenSet = true; m_recurringCharges.emplace_back(std::forward<RecurringChargesT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_reservedElasticsearchInstanceOfferingId;
    bool m_reservedElasticsearchInstanceOfferingIdHasBeenSet = false;

    ESPartitionInstanceType m_elasticsearchInstanceType{ESPartitionInstanceType::NOT_SET};
    bool m_elasticsearchInstanceTypeHasBeenSet = false;

    int m_duration{0};
    bool m_durationHasBeenSet = false;

    double m_fixedPrice{0.0};
    bool m_fixedPriceHasBeenSet = false;

    double m_usagePrice{0.0};
    bool m_usagePriceHasBeenSet = false;

    Aws::String m_currencyCode;
    bool m_currencyCodeHasBeenSet = false;

    ReservedElasticsearchInstancePaymentOption m_paymentOption{ReservedElasticsearchInstancePaymentOption::NOT_SET};
    bool m_paymentOptionHasBeenSet = false;

    Aws::Vector<RecurringCharge> m_recurringCharges;
    bool m_recurringChargesHasBeenSet = false;
  };

} // namespace Model
} // namespace ElasticsearchService
} // namespace Aws
