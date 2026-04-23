/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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
  class AWS_ELASTICSEARCHSERVICE_API ReservedElasticsearchInstanceOffering
  {
  public:
    ReservedElasticsearchInstanceOffering();
    ReservedElasticsearchInstanceOffering(Aws::Utils::Json::JsonView jsonValue);
    ReservedElasticsearchInstanceOffering& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The Elasticsearch reserved instance offering identifier.</p>
     */
    inline const Aws::String& GetReservedElasticsearchInstanceOfferingId() const{ return m_reservedElasticsearchInstanceOfferingId; }

    /**
     * <p>The Elasticsearch reserved instance offering identifier.</p>
     */
    inline bool ReservedElasticsearchInstanceOfferingIdHasBeenSet() const { return m_reservedElasticsearchInstanceOfferingIdHasBeenSet; }

    /**
     * <p>The Elasticsearch reserved instance offering identifier.</p>
     */
    inline void SetReservedElasticsearchInstanceOfferingId(const Aws::String& value) { m_reservedElasticsearchInstanceOfferingIdHasBeenSet = true; m_reservedElasticsearchInstanceOfferingId = value; }

    /**
     * <p>The Elasticsearch reserved instance offering identifier.</p>
     */
    inline void SetReservedElasticsearchInstanceOfferingId(Aws::String&& value) { m_reservedElasticsearchInstanceOfferingIdHasBeenSet = true; m_reservedElasticsearchInstanceOfferingId = std::move(value); }

    /**
     * <p>The Elasticsearch reserved instance offering identifier.</p>
     */
    inline void SetReservedElasticsearchInstanceOfferingId(const char* value) { m_reservedElasticsearchInstanceOfferingIdHasBeenSet = true; m_reservedElasticsearchInstanceOfferingId.assign(value); }

    /**
     * <p>The Elasticsearch reserved instance offering identifier.</p>
     */
    inline ReservedElasticsearchInstanceOffering& WithReservedElasticsearchInstanceOfferingId(const Aws::String& value) { SetReservedElasticsearchInstanceOfferingId(value); return *this;}

    /**
     * <p>The Elasticsearch reserved instance offering identifier.</p>
     */
    inline ReservedElasticsearchInstanceOffering& WithReservedElasticsearchInstanceOfferingId(Aws::String&& value) { SetReservedElasticsearchInstanceOfferingId(std::move(value)); return *this;}

    /**
     * <p>The Elasticsearch reserved instance offering identifier.</p>
     */
    inline ReservedElasticsearchInstanceOffering& WithReservedElasticsearchInstanceOfferingId(const char* value) { SetReservedElasticsearchInstanceOfferingId(value); return *this;}


    /**
     * <p>The Elasticsearch instance type offered by the reserved instance
     * offering.</p>
     */
    inline const ESPartitionInstanceType& GetElasticsearchInstanceType() const{ return m_elasticsearchInstanceType; }

    /**
     * <p>The Elasticsearch instance type offered by the reserved instance
     * offering.</p>
     */
    inline bool ElasticsearchInstanceTypeHasBeenSet() const { return m_elasticsearchInstanceTypeHasBeenSet; }

    /**
     * <p>The Elasticsearch instance type offered by the reserved instance
     * offering.</p>
     */
    inline void SetElasticsearchInstanceType(const ESPartitionInstanceType& value) { m_elasticsearchInstanceTypeHasBeenSet = true; m_elasticsearchInstanceType = value; }

    /**
     * <p>The Elasticsearch instance type offered by the reserved instance
     * offering.</p>
     */
    inline void SetElasticsearchInstanceType(ESPartitionInstanceType&& value) { m_elasticsearchInstanceTypeHasBeenSet = true; m_elasticsearchInstanceType = std::move(value); }

    /**
     * <p>The Elasticsearch instance type offered by the reserved instance
     * offering.</p>
     */
    inline ReservedElasticsearchInstanceOffering& WithElasticsearchInstanceType(const ESPartitionInstanceType& value) { SetElasticsearchInstanceType(value); return *this;}

    /**
     * <p>The Elasticsearch instance type offered by the reserved instance
     * offering.</p>
     */
    inline ReservedElasticsearchInstanceOffering& WithElasticsearchInstanceType(ESPartitionInstanceType&& value) { SetElasticsearchInstanceType(std::move(value)); return *this;}


    /**
     * <p>The duration, in seconds, for which the offering will reserve the
     * Elasticsearch instance.</p>
     */
    inline int GetDuration() const{ return m_duration; }

    /**
     * <p>The duration, in seconds, for which the offering will reserve the
     * Elasticsearch instance.</p>
     */
    inline bool DurationHasBeenSet() const { return m_durationHasBeenSet; }

    /**
     * <p>The duration, in seconds, for which the offering will reserve the
     * Elasticsearch instance.</p>
     */
    inline void SetDuration(int value) { m_durationHasBeenSet = true; m_duration = value; }

    /**
     * <p>The duration, in seconds, for which the offering will reserve the
     * Elasticsearch instance.</p>
     */
    inline ReservedElasticsearchInstanceOffering& WithDuration(int value) { SetDuration(value); return *this;}


    /**
     * <p>The upfront fixed charge you will pay to purchase the specific reserved
     * Elasticsearch instance offering. </p>
     */
    inline double GetFixedPrice() const{ return m_fixedPrice; }

    /**
     * <p>The upfront fixed charge you will pay to purchase the specific reserved
     * Elasticsearch instance offering. </p>
     */
    inline bool FixedPriceHasBeenSet() const { return m_fixedPriceHasBeenSet; }

    /**
     * <p>The upfront fixed charge you will pay to purchase the specific reserved
     * Elasticsearch instance offering. </p>
     */
    inline void SetFixedPrice(double value) { m_fixedPriceHasBeenSet = true; m_fixedPrice = value; }

    /**
     * <p>The upfront fixed charge you will pay to purchase the specific reserved
     * Elasticsearch instance offering. </p>
     */
    inline ReservedElasticsearchInstanceOffering& WithFixedPrice(double value) { SetFixedPrice(value); return *this;}


    /**
     * <p>The rate you are charged for each hour the domain that is using the offering
     * is running.</p>
     */
    inline double GetUsagePrice() const{ return m_usagePrice; }

    /**
     * <p>The rate you are charged for each hour the domain that is using the offering
     * is running.</p>
     */
    inline bool UsagePriceHasBeenSet() const { return m_usagePriceHasBeenSet; }

    /**
     * <p>The rate you are charged for each hour the domain that is using the offering
     * is running.</p>
     */
    inline void SetUsagePrice(double value) { m_usagePriceHasBeenSet = true; m_usagePrice = value; }

    /**
     * <p>The rate you are charged for each hour the domain that is using the offering
     * is running.</p>
     */
    inline ReservedElasticsearchInstanceOffering& WithUsagePrice(double value) { SetUsagePrice(value); return *this;}


    /**
     * <p>The currency code for the reserved Elasticsearch instance offering.</p>
     */
    inline const Aws::String& GetCurrencyCode() const{ return m_currencyCode; }

    /**
     * <p>The currency code for the reserved Elasticsearch instance offering.</p>
     */
    inline bool CurrencyCodeHasBeenSet() const { return m_currencyCodeHasBeenSet; }

    /**
     * <p>The currency code for the reserved Elasticsearch instance offering.</p>
     */
    inline void SetCurrencyCode(const Aws::String& value) { m_currencyCodeHasBeenSet = true; m_currencyCode = value; }

    /**
     * <p>The currency code for the reserved Elasticsearch instance offering.</p>
     */
    inline void SetCurrencyCode(Aws::String&& value) { m_currencyCodeHasBeenSet = true; m_currencyCode = std::move(value); }

    /**
     * <p>The currency code for the reserved Elasticsearch instance offering.</p>
     */
    inline void SetCurrencyCode(const char* value) { m_currencyCodeHasBeenSet = true; m_currencyCode.assign(value); }

    /**
     * <p>The currency code for the reserved Elasticsearch instance offering.</p>
     */
    inline ReservedElasticsearchInstanceOffering& WithCurrencyCode(const Aws::String& value) { SetCurrencyCode(value); return *this;}

    /**
     * <p>The currency code for the reserved Elasticsearch instance offering.</p>
     */
    inline ReservedElasticsearchInstanceOffering& WithCurrencyCode(Aws::String&& value) { SetCurrencyCode(std::move(value)); return *this;}

    /**
     * <p>The currency code for the reserved Elasticsearch instance offering.</p>
     */
    inline ReservedElasticsearchInstanceOffering& WithCurrencyCode(const char* value) { SetCurrencyCode(value); return *this;}


    /**
     * <p>Payment option for the reserved Elasticsearch instance offering</p>
     */
    inline const ReservedElasticsearchInstancePaymentOption& GetPaymentOption() const{ return m_paymentOption; }

    /**
     * <p>Payment option for the reserved Elasticsearch instance offering</p>
     */
    inline bool PaymentOptionHasBeenSet() const { return m_paymentOptionHasBeenSet; }

    /**
     * <p>Payment option for the reserved Elasticsearch instance offering</p>
     */
    inline void SetPaymentOption(const ReservedElasticsearchInstancePaymentOption& value) { m_paymentOptionHasBeenSet = true; m_paymentOption = value; }

    /**
     * <p>Payment option for the reserved Elasticsearch instance offering</p>
     */
    inline void SetPaymentOption(ReservedElasticsearchInstancePaymentOption&& value) { m_paymentOptionHasBeenSet = true; m_paymentOption = std::move(value); }

    /**
     * <p>Payment option for the reserved Elasticsearch instance offering</p>
     */
    inline ReservedElasticsearchInstanceOffering& WithPaymentOption(const ReservedElasticsearchInstancePaymentOption& value) { SetPaymentOption(value); return *this;}

    /**
     * <p>Payment option for the reserved Elasticsearch instance offering</p>
     */
    inline ReservedElasticsearchInstanceOffering& WithPaymentOption(ReservedElasticsearchInstancePaymentOption&& value) { SetPaymentOption(std::move(value)); return *this;}


    /**
     * <p>The charge to your account regardless of whether you are creating any domains
     * using the instance offering.</p>
     */
    inline const Aws::Vector<RecurringCharge>& GetRecurringCharges() const{ return m_recurringCharges; }

    /**
     * <p>The charge to your account regardless of whether you are creating any domains
     * using the instance offering.</p>
     */
    inline bool RecurringChargesHasBeenSet() const { return m_recurringChargesHasBeenSet; }

    /**
     * <p>The charge to your account regardless of whether you are creating any domains
     * using the instance offering.</p>
     */
    inline void SetRecurringCharges(const Aws::Vector<RecurringCharge>& value) { m_recurringChargesHasBeenSet = true; m_recurringCharges = value; }

    /**
     * <p>The charge to your account regardless of whether you are creating any domains
     * using the instance offering.</p>
     */
    inline void SetRecurringCharges(Aws::Vector<RecurringCharge>&& value) { m_recurringChargesHasBeenSet = true; m_recurringCharges = std::move(value); }

    /**
     * <p>The charge to your account regardless of whether you are creating any domains
     * using the instance offering.</p>
     */
    inline ReservedElasticsearchInstanceOffering& WithRecurringCharges(const Aws::Vector<RecurringCharge>& value) { SetRecurringCharges(value); return *this;}

    /**
     * <p>The charge to your account regardless of whether you are creating any domains
     * using the instance offering.</p>
     */
    inline ReservedElasticsearchInstanceOffering& WithRecurringCharges(Aws::Vector<RecurringCharge>&& value) { SetRecurringCharges(std::move(value)); return *this;}

    /**
     * <p>The charge to your account regardless of whether you are creating any domains
     * using the instance offering.</p>
     */
    inline ReservedElasticsearchInstanceOffering& AddRecurringCharges(const RecurringCharge& value) { m_recurringChargesHasBeenSet = true; m_recurringCharges.push_back(value); return *this; }

    /**
     * <p>The charge to your account regardless of whether you are creating any domains
     * using the instance offering.</p>
     */
    inline ReservedElasticsearchInstanceOffering& AddRecurringCharges(RecurringCharge&& value) { m_recurringChargesHasBeenSet = true; m_recurringCharges.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_reservedElasticsearchInstanceOfferingId;
    bool m_reservedElasticsearchInstanceOfferingIdHasBeenSet;

    ESPartitionInstanceType m_elasticsearchInstanceType;
    bool m_elasticsearchInstanceTypeHasBeenSet;

    int m_duration;
    bool m_durationHasBeenSet;

    double m_fixedPrice;
    bool m_fixedPriceHasBeenSet;

    double m_usagePrice;
    bool m_usagePriceHasBeenSet;

    Aws::String m_currencyCode;
    bool m_currencyCodeHasBeenSet;

    ReservedElasticsearchInstancePaymentOption m_paymentOption;
    bool m_paymentOptionHasBeenSet;

    Aws::Vector<RecurringCharge> m_recurringCharges;
    bool m_recurringChargesHasBeenSet;
  };

} // namespace Model
} // namespace ElasticsearchService
} // namespace Aws
