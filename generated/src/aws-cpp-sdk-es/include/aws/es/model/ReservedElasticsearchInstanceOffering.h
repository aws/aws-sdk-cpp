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
    AWS_ELASTICSEARCHSERVICE_API ReservedElasticsearchInstanceOffering();
    AWS_ELASTICSEARCHSERVICE_API ReservedElasticsearchInstanceOffering(Aws::Utils::Json::JsonView jsonValue);
    AWS_ELASTICSEARCHSERVICE_API ReservedElasticsearchInstanceOffering& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_ELASTICSEARCHSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Elasticsearch reserved instance offering identifier.</p>
     */
    inline const Aws::String& GetReservedElasticsearchInstanceOfferingId() const{ return m_reservedElasticsearchInstanceOfferingId; }
    inline bool ReservedElasticsearchInstanceOfferingIdHasBeenSet() const { return m_reservedElasticsearchInstanceOfferingIdHasBeenSet; }
    inline void SetReservedElasticsearchInstanceOfferingId(const Aws::String& value) { m_reservedElasticsearchInstanceOfferingIdHasBeenSet = true; m_reservedElasticsearchInstanceOfferingId = value; }
    inline void SetReservedElasticsearchInstanceOfferingId(Aws::String&& value) { m_reservedElasticsearchInstanceOfferingIdHasBeenSet = true; m_reservedElasticsearchInstanceOfferingId = std::move(value); }
    inline void SetReservedElasticsearchInstanceOfferingId(const char* value) { m_reservedElasticsearchInstanceOfferingIdHasBeenSet = true; m_reservedElasticsearchInstanceOfferingId.assign(value); }
    inline ReservedElasticsearchInstanceOffering& WithReservedElasticsearchInstanceOfferingId(const Aws::String& value) { SetReservedElasticsearchInstanceOfferingId(value); return *this;}
    inline ReservedElasticsearchInstanceOffering& WithReservedElasticsearchInstanceOfferingId(Aws::String&& value) { SetReservedElasticsearchInstanceOfferingId(std::move(value)); return *this;}
    inline ReservedElasticsearchInstanceOffering& WithReservedElasticsearchInstanceOfferingId(const char* value) { SetReservedElasticsearchInstanceOfferingId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Elasticsearch instance type offered by the reserved instance
     * offering.</p>
     */
    inline const ESPartitionInstanceType& GetElasticsearchInstanceType() const{ return m_elasticsearchInstanceType; }
    inline bool ElasticsearchInstanceTypeHasBeenSet() const { return m_elasticsearchInstanceTypeHasBeenSet; }
    inline void SetElasticsearchInstanceType(const ESPartitionInstanceType& value) { m_elasticsearchInstanceTypeHasBeenSet = true; m_elasticsearchInstanceType = value; }
    inline void SetElasticsearchInstanceType(ESPartitionInstanceType&& value) { m_elasticsearchInstanceTypeHasBeenSet = true; m_elasticsearchInstanceType = std::move(value); }
    inline ReservedElasticsearchInstanceOffering& WithElasticsearchInstanceType(const ESPartitionInstanceType& value) { SetElasticsearchInstanceType(value); return *this;}
    inline ReservedElasticsearchInstanceOffering& WithElasticsearchInstanceType(ESPartitionInstanceType&& value) { SetElasticsearchInstanceType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The duration, in seconds, for which the offering will reserve the
     * Elasticsearch instance.</p>
     */
    inline int GetDuration() const{ return m_duration; }
    inline bool DurationHasBeenSet() const { return m_durationHasBeenSet; }
    inline void SetDuration(int value) { m_durationHasBeenSet = true; m_duration = value; }
    inline ReservedElasticsearchInstanceOffering& WithDuration(int value) { SetDuration(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The upfront fixed charge you will pay to purchase the specific reserved
     * Elasticsearch instance offering. </p>
     */
    inline double GetFixedPrice() const{ return m_fixedPrice; }
    inline bool FixedPriceHasBeenSet() const { return m_fixedPriceHasBeenSet; }
    inline void SetFixedPrice(double value) { m_fixedPriceHasBeenSet = true; m_fixedPrice = value; }
    inline ReservedElasticsearchInstanceOffering& WithFixedPrice(double value) { SetFixedPrice(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The rate you are charged for each hour the domain that is using the offering
     * is running.</p>
     */
    inline double GetUsagePrice() const{ return m_usagePrice; }
    inline bool UsagePriceHasBeenSet() const { return m_usagePriceHasBeenSet; }
    inline void SetUsagePrice(double value) { m_usagePriceHasBeenSet = true; m_usagePrice = value; }
    inline ReservedElasticsearchInstanceOffering& WithUsagePrice(double value) { SetUsagePrice(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The currency code for the reserved Elasticsearch instance offering.</p>
     */
    inline const Aws::String& GetCurrencyCode() const{ return m_currencyCode; }
    inline bool CurrencyCodeHasBeenSet() const { return m_currencyCodeHasBeenSet; }
    inline void SetCurrencyCode(const Aws::String& value) { m_currencyCodeHasBeenSet = true; m_currencyCode = value; }
    inline void SetCurrencyCode(Aws::String&& value) { m_currencyCodeHasBeenSet = true; m_currencyCode = std::move(value); }
    inline void SetCurrencyCode(const char* value) { m_currencyCodeHasBeenSet = true; m_currencyCode.assign(value); }
    inline ReservedElasticsearchInstanceOffering& WithCurrencyCode(const Aws::String& value) { SetCurrencyCode(value); return *this;}
    inline ReservedElasticsearchInstanceOffering& WithCurrencyCode(Aws::String&& value) { SetCurrencyCode(std::move(value)); return *this;}
    inline ReservedElasticsearchInstanceOffering& WithCurrencyCode(const char* value) { SetCurrencyCode(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Payment option for the reserved Elasticsearch instance offering</p>
     */
    inline const ReservedElasticsearchInstancePaymentOption& GetPaymentOption() const{ return m_paymentOption; }
    inline bool PaymentOptionHasBeenSet() const { return m_paymentOptionHasBeenSet; }
    inline void SetPaymentOption(const ReservedElasticsearchInstancePaymentOption& value) { m_paymentOptionHasBeenSet = true; m_paymentOption = value; }
    inline void SetPaymentOption(ReservedElasticsearchInstancePaymentOption&& value) { m_paymentOptionHasBeenSet = true; m_paymentOption = std::move(value); }
    inline ReservedElasticsearchInstanceOffering& WithPaymentOption(const ReservedElasticsearchInstancePaymentOption& value) { SetPaymentOption(value); return *this;}
    inline ReservedElasticsearchInstanceOffering& WithPaymentOption(ReservedElasticsearchInstancePaymentOption&& value) { SetPaymentOption(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The charge to your account regardless of whether you are creating any domains
     * using the instance offering.</p>
     */
    inline const Aws::Vector<RecurringCharge>& GetRecurringCharges() const{ return m_recurringCharges; }
    inline bool RecurringChargesHasBeenSet() const { return m_recurringChargesHasBeenSet; }
    inline void SetRecurringCharges(const Aws::Vector<RecurringCharge>& value) { m_recurringChargesHasBeenSet = true; m_recurringCharges = value; }
    inline void SetRecurringCharges(Aws::Vector<RecurringCharge>&& value) { m_recurringChargesHasBeenSet = true; m_recurringCharges = std::move(value); }
    inline ReservedElasticsearchInstanceOffering& WithRecurringCharges(const Aws::Vector<RecurringCharge>& value) { SetRecurringCharges(value); return *this;}
    inline ReservedElasticsearchInstanceOffering& WithRecurringCharges(Aws::Vector<RecurringCharge>&& value) { SetRecurringCharges(std::move(value)); return *this;}
    inline ReservedElasticsearchInstanceOffering& AddRecurringCharges(const RecurringCharge& value) { m_recurringChargesHasBeenSet = true; m_recurringCharges.push_back(value); return *this; }
    inline ReservedElasticsearchInstanceOffering& AddRecurringCharges(RecurringCharge&& value) { m_recurringChargesHasBeenSet = true; m_recurringCharges.push_back(std::move(value)); return *this; }
    ///@}
  private:

    Aws::String m_reservedElasticsearchInstanceOfferingId;
    bool m_reservedElasticsearchInstanceOfferingIdHasBeenSet = false;

    ESPartitionInstanceType m_elasticsearchInstanceType;
    bool m_elasticsearchInstanceTypeHasBeenSet = false;

    int m_duration;
    bool m_durationHasBeenSet = false;

    double m_fixedPrice;
    bool m_fixedPriceHasBeenSet = false;

    double m_usagePrice;
    bool m_usagePriceHasBeenSet = false;

    Aws::String m_currencyCode;
    bool m_currencyCodeHasBeenSet = false;

    ReservedElasticsearchInstancePaymentOption m_paymentOption;
    bool m_paymentOptionHasBeenSet = false;

    Aws::Vector<RecurringCharge> m_recurringCharges;
    bool m_recurringChargesHasBeenSet = false;
  };

} // namespace Model
} // namespace ElasticsearchService
} // namespace Aws
