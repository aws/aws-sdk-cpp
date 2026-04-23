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
#include <aws/core/utils/DateTime.h>
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
   * <p>Details of a reserved Elasticsearch instance.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/es-2015-01-01/ReservedElasticsearchInstance">AWS
   * API Reference</a></p>
   */
  class AWS_ELASTICSEARCHSERVICE_API ReservedElasticsearchInstance
  {
  public:
    ReservedElasticsearchInstance();
    ReservedElasticsearchInstance(Aws::Utils::Json::JsonView jsonValue);
    ReservedElasticsearchInstance& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The customer-specified identifier to track this reservation.</p>
     */
    inline const Aws::String& GetReservationName() const{ return m_reservationName; }

    /**
     * <p>The customer-specified identifier to track this reservation.</p>
     */
    inline bool ReservationNameHasBeenSet() const { return m_reservationNameHasBeenSet; }

    /**
     * <p>The customer-specified identifier to track this reservation.</p>
     */
    inline void SetReservationName(const Aws::String& value) { m_reservationNameHasBeenSet = true; m_reservationName = value; }

    /**
     * <p>The customer-specified identifier to track this reservation.</p>
     */
    inline void SetReservationName(Aws::String&& value) { m_reservationNameHasBeenSet = true; m_reservationName = std::move(value); }

    /**
     * <p>The customer-specified identifier to track this reservation.</p>
     */
    inline void SetReservationName(const char* value) { m_reservationNameHasBeenSet = true; m_reservationName.assign(value); }

    /**
     * <p>The customer-specified identifier to track this reservation.</p>
     */
    inline ReservedElasticsearchInstance& WithReservationName(const Aws::String& value) { SetReservationName(value); return *this;}

    /**
     * <p>The customer-specified identifier to track this reservation.</p>
     */
    inline ReservedElasticsearchInstance& WithReservationName(Aws::String&& value) { SetReservationName(std::move(value)); return *this;}

    /**
     * <p>The customer-specified identifier to track this reservation.</p>
     */
    inline ReservedElasticsearchInstance& WithReservationName(const char* value) { SetReservationName(value); return *this;}


    /**
     * <p>The unique identifier for the reservation.</p>
     */
    inline const Aws::String& GetReservedElasticsearchInstanceId() const{ return m_reservedElasticsearchInstanceId; }

    /**
     * <p>The unique identifier for the reservation.</p>
     */
    inline bool ReservedElasticsearchInstanceIdHasBeenSet() const { return m_reservedElasticsearchInstanceIdHasBeenSet; }

    /**
     * <p>The unique identifier for the reservation.</p>
     */
    inline void SetReservedElasticsearchInstanceId(const Aws::String& value) { m_reservedElasticsearchInstanceIdHasBeenSet = true; m_reservedElasticsearchInstanceId = value; }

    /**
     * <p>The unique identifier for the reservation.</p>
     */
    inline void SetReservedElasticsearchInstanceId(Aws::String&& value) { m_reservedElasticsearchInstanceIdHasBeenSet = true; m_reservedElasticsearchInstanceId = std::move(value); }

    /**
     * <p>The unique identifier for the reservation.</p>
     */
    inline void SetReservedElasticsearchInstanceId(const char* value) { m_reservedElasticsearchInstanceIdHasBeenSet = true; m_reservedElasticsearchInstanceId.assign(value); }

    /**
     * <p>The unique identifier for the reservation.</p>
     */
    inline ReservedElasticsearchInstance& WithReservedElasticsearchInstanceId(const Aws::String& value) { SetReservedElasticsearchInstanceId(value); return *this;}

    /**
     * <p>The unique identifier for the reservation.</p>
     */
    inline ReservedElasticsearchInstance& WithReservedElasticsearchInstanceId(Aws::String&& value) { SetReservedElasticsearchInstanceId(std::move(value)); return *this;}

    /**
     * <p>The unique identifier for the reservation.</p>
     */
    inline ReservedElasticsearchInstance& WithReservedElasticsearchInstanceId(const char* value) { SetReservedElasticsearchInstanceId(value); return *this;}


    /**
     * <p>The offering identifier.</p>
     */
    inline const Aws::String& GetReservedElasticsearchInstanceOfferingId() const{ return m_reservedElasticsearchInstanceOfferingId; }

    /**
     * <p>The offering identifier.</p>
     */
    inline bool ReservedElasticsearchInstanceOfferingIdHasBeenSet() const { return m_reservedElasticsearchInstanceOfferingIdHasBeenSet; }

    /**
     * <p>The offering identifier.</p>
     */
    inline void SetReservedElasticsearchInstanceOfferingId(const Aws::String& value) { m_reservedElasticsearchInstanceOfferingIdHasBeenSet = true; m_reservedElasticsearchInstanceOfferingId = value; }

    /**
     * <p>The offering identifier.</p>
     */
    inline void SetReservedElasticsearchInstanceOfferingId(Aws::String&& value) { m_reservedElasticsearchInstanceOfferingIdHasBeenSet = true; m_reservedElasticsearchInstanceOfferingId = std::move(value); }

    /**
     * <p>The offering identifier.</p>
     */
    inline void SetReservedElasticsearchInstanceOfferingId(const char* value) { m_reservedElasticsearchInstanceOfferingIdHasBeenSet = true; m_reservedElasticsearchInstanceOfferingId.assign(value); }

    /**
     * <p>The offering identifier.</p>
     */
    inline ReservedElasticsearchInstance& WithReservedElasticsearchInstanceOfferingId(const Aws::String& value) { SetReservedElasticsearchInstanceOfferingId(value); return *this;}

    /**
     * <p>The offering identifier.</p>
     */
    inline ReservedElasticsearchInstance& WithReservedElasticsearchInstanceOfferingId(Aws::String&& value) { SetReservedElasticsearchInstanceOfferingId(std::move(value)); return *this;}

    /**
     * <p>The offering identifier.</p>
     */
    inline ReservedElasticsearchInstance& WithReservedElasticsearchInstanceOfferingId(const char* value) { SetReservedElasticsearchInstanceOfferingId(value); return *this;}


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
    inline ReservedElasticsearchInstance& WithElasticsearchInstanceType(const ESPartitionInstanceType& value) { SetElasticsearchInstanceType(value); return *this;}

    /**
     * <p>The Elasticsearch instance type offered by the reserved instance
     * offering.</p>
     */
    inline ReservedElasticsearchInstance& WithElasticsearchInstanceType(ESPartitionInstanceType&& value) { SetElasticsearchInstanceType(std::move(value)); return *this;}


    /**
     * <p>The time the reservation started.</p>
     */
    inline const Aws::Utils::DateTime& GetStartTime() const{ return m_startTime; }

    /**
     * <p>The time the reservation started.</p>
     */
    inline bool StartTimeHasBeenSet() const { return m_startTimeHasBeenSet; }

    /**
     * <p>The time the reservation started.</p>
     */
    inline void SetStartTime(const Aws::Utils::DateTime& value) { m_startTimeHasBeenSet = true; m_startTime = value; }

    /**
     * <p>The time the reservation started.</p>
     */
    inline void SetStartTime(Aws::Utils::DateTime&& value) { m_startTimeHasBeenSet = true; m_startTime = std::move(value); }

    /**
     * <p>The time the reservation started.</p>
     */
    inline ReservedElasticsearchInstance& WithStartTime(const Aws::Utils::DateTime& value) { SetStartTime(value); return *this;}

    /**
     * <p>The time the reservation started.</p>
     */
    inline ReservedElasticsearchInstance& WithStartTime(Aws::Utils::DateTime&& value) { SetStartTime(std::move(value)); return *this;}


    /**
     * <p>The duration, in seconds, for which the Elasticsearch instance is
     * reserved.</p>
     */
    inline int GetDuration() const{ return m_duration; }

    /**
     * <p>The duration, in seconds, for which the Elasticsearch instance is
     * reserved.</p>
     */
    inline bool DurationHasBeenSet() const { return m_durationHasBeenSet; }

    /**
     * <p>The duration, in seconds, for which the Elasticsearch instance is
     * reserved.</p>
     */
    inline void SetDuration(int value) { m_durationHasBeenSet = true; m_duration = value; }

    /**
     * <p>The duration, in seconds, for which the Elasticsearch instance is
     * reserved.</p>
     */
    inline ReservedElasticsearchInstance& WithDuration(int value) { SetDuration(value); return *this;}


    /**
     * <p>The upfront fixed charge you will paid to purchase the specific reserved
     * Elasticsearch instance offering. </p>
     */
    inline double GetFixedPrice() const{ return m_fixedPrice; }

    /**
     * <p>The upfront fixed charge you will paid to purchase the specific reserved
     * Elasticsearch instance offering. </p>
     */
    inline bool FixedPriceHasBeenSet() const { return m_fixedPriceHasBeenSet; }

    /**
     * <p>The upfront fixed charge you will paid to purchase the specific reserved
     * Elasticsearch instance offering. </p>
     */
    inline void SetFixedPrice(double value) { m_fixedPriceHasBeenSet = true; m_fixedPrice = value; }

    /**
     * <p>The upfront fixed charge you will paid to purchase the specific reserved
     * Elasticsearch instance offering. </p>
     */
    inline ReservedElasticsearchInstance& WithFixedPrice(double value) { SetFixedPrice(value); return *this;}


    /**
     * <p>The rate you are charged for each hour for the domain that is using this
     * reserved instance.</p>
     */
    inline double GetUsagePrice() const{ return m_usagePrice; }

    /**
     * <p>The rate you are charged for each hour for the domain that is using this
     * reserved instance.</p>
     */
    inline bool UsagePriceHasBeenSet() const { return m_usagePriceHasBeenSet; }

    /**
     * <p>The rate you are charged for each hour for the domain that is using this
     * reserved instance.</p>
     */
    inline void SetUsagePrice(double value) { m_usagePriceHasBeenSet = true; m_usagePrice = value; }

    /**
     * <p>The rate you are charged for each hour for the domain that is using this
     * reserved instance.</p>
     */
    inline ReservedElasticsearchInstance& WithUsagePrice(double value) { SetUsagePrice(value); return *this;}


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
    inline ReservedElasticsearchInstance& WithCurrencyCode(const Aws::String& value) { SetCurrencyCode(value); return *this;}

    /**
     * <p>The currency code for the reserved Elasticsearch instance offering.</p>
     */
    inline ReservedElasticsearchInstance& WithCurrencyCode(Aws::String&& value) { SetCurrencyCode(std::move(value)); return *this;}

    /**
     * <p>The currency code for the reserved Elasticsearch instance offering.</p>
     */
    inline ReservedElasticsearchInstance& WithCurrencyCode(const char* value) { SetCurrencyCode(value); return *this;}


    /**
     * <p>The number of Elasticsearch instances that have been reserved.</p>
     */
    inline int GetElasticsearchInstanceCount() const{ return m_elasticsearchInstanceCount; }

    /**
     * <p>The number of Elasticsearch instances that have been reserved.</p>
     */
    inline bool ElasticsearchInstanceCountHasBeenSet() const { return m_elasticsearchInstanceCountHasBeenSet; }

    /**
     * <p>The number of Elasticsearch instances that have been reserved.</p>
     */
    inline void SetElasticsearchInstanceCount(int value) { m_elasticsearchInstanceCountHasBeenSet = true; m_elasticsearchInstanceCount = value; }

    /**
     * <p>The number of Elasticsearch instances that have been reserved.</p>
     */
    inline ReservedElasticsearchInstance& WithElasticsearchInstanceCount(int value) { SetElasticsearchInstanceCount(value); return *this;}


    /**
     * <p>The state of the reserved Elasticsearch instance.</p>
     */
    inline const Aws::String& GetState() const{ return m_state; }

    /**
     * <p>The state of the reserved Elasticsearch instance.</p>
     */
    inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }

    /**
     * <p>The state of the reserved Elasticsearch instance.</p>
     */
    inline void SetState(const Aws::String& value) { m_stateHasBeenSet = true; m_state = value; }

    /**
     * <p>The state of the reserved Elasticsearch instance.</p>
     */
    inline void SetState(Aws::String&& value) { m_stateHasBeenSet = true; m_state = std::move(value); }

    /**
     * <p>The state of the reserved Elasticsearch instance.</p>
     */
    inline void SetState(const char* value) { m_stateHasBeenSet = true; m_state.assign(value); }

    /**
     * <p>The state of the reserved Elasticsearch instance.</p>
     */
    inline ReservedElasticsearchInstance& WithState(const Aws::String& value) { SetState(value); return *this;}

    /**
     * <p>The state of the reserved Elasticsearch instance.</p>
     */
    inline ReservedElasticsearchInstance& WithState(Aws::String&& value) { SetState(std::move(value)); return *this;}

    /**
     * <p>The state of the reserved Elasticsearch instance.</p>
     */
    inline ReservedElasticsearchInstance& WithState(const char* value) { SetState(value); return *this;}


    /**
     * <p>The payment option as defined in the reserved Elasticsearch instance
     * offering.</p>
     */
    inline const ReservedElasticsearchInstancePaymentOption& GetPaymentOption() const{ return m_paymentOption; }

    /**
     * <p>The payment option as defined in the reserved Elasticsearch instance
     * offering.</p>
     */
    inline bool PaymentOptionHasBeenSet() const { return m_paymentOptionHasBeenSet; }

    /**
     * <p>The payment option as defined in the reserved Elasticsearch instance
     * offering.</p>
     */
    inline void SetPaymentOption(const ReservedElasticsearchInstancePaymentOption& value) { m_paymentOptionHasBeenSet = true; m_paymentOption = value; }

    /**
     * <p>The payment option as defined in the reserved Elasticsearch instance
     * offering.</p>
     */
    inline void SetPaymentOption(ReservedElasticsearchInstancePaymentOption&& value) { m_paymentOptionHasBeenSet = true; m_paymentOption = std::move(value); }

    /**
     * <p>The payment option as defined in the reserved Elasticsearch instance
     * offering.</p>
     */
    inline ReservedElasticsearchInstance& WithPaymentOption(const ReservedElasticsearchInstancePaymentOption& value) { SetPaymentOption(value); return *this;}

    /**
     * <p>The payment option as defined in the reserved Elasticsearch instance
     * offering.</p>
     */
    inline ReservedElasticsearchInstance& WithPaymentOption(ReservedElasticsearchInstancePaymentOption&& value) { SetPaymentOption(std::move(value)); return *this;}


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
    inline ReservedElasticsearchInstance& WithRecurringCharges(const Aws::Vector<RecurringCharge>& value) { SetRecurringCharges(value); return *this;}

    /**
     * <p>The charge to your account regardless of whether you are creating any domains
     * using the instance offering.</p>
     */
    inline ReservedElasticsearchInstance& WithRecurringCharges(Aws::Vector<RecurringCharge>&& value) { SetRecurringCharges(std::move(value)); return *this;}

    /**
     * <p>The charge to your account regardless of whether you are creating any domains
     * using the instance offering.</p>
     */
    inline ReservedElasticsearchInstance& AddRecurringCharges(const RecurringCharge& value) { m_recurringChargesHasBeenSet = true; m_recurringCharges.push_back(value); return *this; }

    /**
     * <p>The charge to your account regardless of whether you are creating any domains
     * using the instance offering.</p>
     */
    inline ReservedElasticsearchInstance& AddRecurringCharges(RecurringCharge&& value) { m_recurringChargesHasBeenSet = true; m_recurringCharges.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_reservationName;
    bool m_reservationNameHasBeenSet;

    Aws::String m_reservedElasticsearchInstanceId;
    bool m_reservedElasticsearchInstanceIdHasBeenSet;

    Aws::String m_reservedElasticsearchInstanceOfferingId;
    bool m_reservedElasticsearchInstanceOfferingIdHasBeenSet;

    ESPartitionInstanceType m_elasticsearchInstanceType;
    bool m_elasticsearchInstanceTypeHasBeenSet;

    Aws::Utils::DateTime m_startTime;
    bool m_startTimeHasBeenSet;

    int m_duration;
    bool m_durationHasBeenSet;

    double m_fixedPrice;
    bool m_fixedPriceHasBeenSet;

    double m_usagePrice;
    bool m_usagePriceHasBeenSet;

    Aws::String m_currencyCode;
    bool m_currencyCodeHasBeenSet;

    int m_elasticsearchInstanceCount;
    bool m_elasticsearchInstanceCountHasBeenSet;

    Aws::String m_state;
    bool m_stateHasBeenSet;

    ReservedElasticsearchInstancePaymentOption m_paymentOption;
    bool m_paymentOptionHasBeenSet;

    Aws::Vector<RecurringCharge> m_recurringCharges;
    bool m_recurringChargesHasBeenSet;
  };

} // namespace Model
} // namespace ElasticsearchService
} // namespace Aws
