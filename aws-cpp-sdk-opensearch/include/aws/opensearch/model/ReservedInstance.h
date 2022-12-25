/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/opensearch/OpenSearchService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/opensearch/model/OpenSearchPartitionInstanceType.h>
#include <aws/core/utils/DateTime.h>
#include <aws/opensearch/model/ReservedInstancePaymentOption.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/opensearch/model/RecurringCharge.h>
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
namespace OpenSearchService
{
namespace Model
{

  /**
   * <p>Details of an OpenSearch Reserved Instance.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/opensearch-2021-01-01/ReservedInstance">AWS
   * API Reference</a></p>
   */
  class ReservedInstance
  {
  public:
    AWS_OPENSEARCHSERVICE_API ReservedInstance();
    AWS_OPENSEARCHSERVICE_API ReservedInstance(Aws::Utils::Json::JsonView jsonValue);
    AWS_OPENSEARCHSERVICE_API ReservedInstance& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_OPENSEARCHSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


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
    inline ReservedInstance& WithReservationName(const Aws::String& value) { SetReservationName(value); return *this;}

    /**
     * <p>The customer-specified identifier to track this reservation.</p>
     */
    inline ReservedInstance& WithReservationName(Aws::String&& value) { SetReservationName(std::move(value)); return *this;}

    /**
     * <p>The customer-specified identifier to track this reservation.</p>
     */
    inline ReservedInstance& WithReservationName(const char* value) { SetReservationName(value); return *this;}


    /**
     * <p>The unique identifier for the reservation.</p>
     */
    inline const Aws::String& GetReservedInstanceId() const{ return m_reservedInstanceId; }

    /**
     * <p>The unique identifier for the reservation.</p>
     */
    inline bool ReservedInstanceIdHasBeenSet() const { return m_reservedInstanceIdHasBeenSet; }

    /**
     * <p>The unique identifier for the reservation.</p>
     */
    inline void SetReservedInstanceId(const Aws::String& value) { m_reservedInstanceIdHasBeenSet = true; m_reservedInstanceId = value; }

    /**
     * <p>The unique identifier for the reservation.</p>
     */
    inline void SetReservedInstanceId(Aws::String&& value) { m_reservedInstanceIdHasBeenSet = true; m_reservedInstanceId = std::move(value); }

    /**
     * <p>The unique identifier for the reservation.</p>
     */
    inline void SetReservedInstanceId(const char* value) { m_reservedInstanceIdHasBeenSet = true; m_reservedInstanceId.assign(value); }

    /**
     * <p>The unique identifier for the reservation.</p>
     */
    inline ReservedInstance& WithReservedInstanceId(const Aws::String& value) { SetReservedInstanceId(value); return *this;}

    /**
     * <p>The unique identifier for the reservation.</p>
     */
    inline ReservedInstance& WithReservedInstanceId(Aws::String&& value) { SetReservedInstanceId(std::move(value)); return *this;}

    /**
     * <p>The unique identifier for the reservation.</p>
     */
    inline ReservedInstance& WithReservedInstanceId(const char* value) { SetReservedInstanceId(value); return *this;}


    /**
     * <p>The unique identifier of the billing subscription.</p>
     */
    inline long long GetBillingSubscriptionId() const{ return m_billingSubscriptionId; }

    /**
     * <p>The unique identifier of the billing subscription.</p>
     */
    inline bool BillingSubscriptionIdHasBeenSet() const { return m_billingSubscriptionIdHasBeenSet; }

    /**
     * <p>The unique identifier of the billing subscription.</p>
     */
    inline void SetBillingSubscriptionId(long long value) { m_billingSubscriptionIdHasBeenSet = true; m_billingSubscriptionId = value; }

    /**
     * <p>The unique identifier of the billing subscription.</p>
     */
    inline ReservedInstance& WithBillingSubscriptionId(long long value) { SetBillingSubscriptionId(value); return *this;}


    /**
     * <p>The unique identifier of the Reserved Instance offering.</p>
     */
    inline const Aws::String& GetReservedInstanceOfferingId() const{ return m_reservedInstanceOfferingId; }

    /**
     * <p>The unique identifier of the Reserved Instance offering.</p>
     */
    inline bool ReservedInstanceOfferingIdHasBeenSet() const { return m_reservedInstanceOfferingIdHasBeenSet; }

    /**
     * <p>The unique identifier of the Reserved Instance offering.</p>
     */
    inline void SetReservedInstanceOfferingId(const Aws::String& value) { m_reservedInstanceOfferingIdHasBeenSet = true; m_reservedInstanceOfferingId = value; }

    /**
     * <p>The unique identifier of the Reserved Instance offering.</p>
     */
    inline void SetReservedInstanceOfferingId(Aws::String&& value) { m_reservedInstanceOfferingIdHasBeenSet = true; m_reservedInstanceOfferingId = std::move(value); }

    /**
     * <p>The unique identifier of the Reserved Instance offering.</p>
     */
    inline void SetReservedInstanceOfferingId(const char* value) { m_reservedInstanceOfferingIdHasBeenSet = true; m_reservedInstanceOfferingId.assign(value); }

    /**
     * <p>The unique identifier of the Reserved Instance offering.</p>
     */
    inline ReservedInstance& WithReservedInstanceOfferingId(const Aws::String& value) { SetReservedInstanceOfferingId(value); return *this;}

    /**
     * <p>The unique identifier of the Reserved Instance offering.</p>
     */
    inline ReservedInstance& WithReservedInstanceOfferingId(Aws::String&& value) { SetReservedInstanceOfferingId(std::move(value)); return *this;}

    /**
     * <p>The unique identifier of the Reserved Instance offering.</p>
     */
    inline ReservedInstance& WithReservedInstanceOfferingId(const char* value) { SetReservedInstanceOfferingId(value); return *this;}


    /**
     * <p>The OpenSearch instance type offered by theReserved Instance offering.</p>
     */
    inline const OpenSearchPartitionInstanceType& GetInstanceType() const{ return m_instanceType; }

    /**
     * <p>The OpenSearch instance type offered by theReserved Instance offering.</p>
     */
    inline bool InstanceTypeHasBeenSet() const { return m_instanceTypeHasBeenSet; }

    /**
     * <p>The OpenSearch instance type offered by theReserved Instance offering.</p>
     */
    inline void SetInstanceType(const OpenSearchPartitionInstanceType& value) { m_instanceTypeHasBeenSet = true; m_instanceType = value; }

    /**
     * <p>The OpenSearch instance type offered by theReserved Instance offering.</p>
     */
    inline void SetInstanceType(OpenSearchPartitionInstanceType&& value) { m_instanceTypeHasBeenSet = true; m_instanceType = std::move(value); }

    /**
     * <p>The OpenSearch instance type offered by theReserved Instance offering.</p>
     */
    inline ReservedInstance& WithInstanceType(const OpenSearchPartitionInstanceType& value) { SetInstanceType(value); return *this;}

    /**
     * <p>The OpenSearch instance type offered by theReserved Instance offering.</p>
     */
    inline ReservedInstance& WithInstanceType(OpenSearchPartitionInstanceType&& value) { SetInstanceType(std::move(value)); return *this;}


    /**
     * <p>The date and time when the reservation was purchased.</p>
     */
    inline const Aws::Utils::DateTime& GetStartTime() const{ return m_startTime; }

    /**
     * <p>The date and time when the reservation was purchased.</p>
     */
    inline bool StartTimeHasBeenSet() const { return m_startTimeHasBeenSet; }

    /**
     * <p>The date and time when the reservation was purchased.</p>
     */
    inline void SetStartTime(const Aws::Utils::DateTime& value) { m_startTimeHasBeenSet = true; m_startTime = value; }

    /**
     * <p>The date and time when the reservation was purchased.</p>
     */
    inline void SetStartTime(Aws::Utils::DateTime&& value) { m_startTimeHasBeenSet = true; m_startTime = std::move(value); }

    /**
     * <p>The date and time when the reservation was purchased.</p>
     */
    inline ReservedInstance& WithStartTime(const Aws::Utils::DateTime& value) { SetStartTime(value); return *this;}

    /**
     * <p>The date and time when the reservation was purchased.</p>
     */
    inline ReservedInstance& WithStartTime(Aws::Utils::DateTime&& value) { SetStartTime(std::move(value)); return *this;}


    /**
     * <p>The duration, in seconds, for which the OpenSearch instance is reserved.</p>
     */
    inline int GetDuration() const{ return m_duration; }

    /**
     * <p>The duration, in seconds, for which the OpenSearch instance is reserved.</p>
     */
    inline bool DurationHasBeenSet() const { return m_durationHasBeenSet; }

    /**
     * <p>The duration, in seconds, for which the OpenSearch instance is reserved.</p>
     */
    inline void SetDuration(int value) { m_durationHasBeenSet = true; m_duration = value; }

    /**
     * <p>The duration, in seconds, for which the OpenSearch instance is reserved.</p>
     */
    inline ReservedInstance& WithDuration(int value) { SetDuration(value); return *this;}


    /**
     * <p>The upfront fixed charge you will paid to purchase the specific Reserved
     * Instance offering.</p>
     */
    inline double GetFixedPrice() const{ return m_fixedPrice; }

    /**
     * <p>The upfront fixed charge you will paid to purchase the specific Reserved
     * Instance offering.</p>
     */
    inline bool FixedPriceHasBeenSet() const { return m_fixedPriceHasBeenSet; }

    /**
     * <p>The upfront fixed charge you will paid to purchase the specific Reserved
     * Instance offering.</p>
     */
    inline void SetFixedPrice(double value) { m_fixedPriceHasBeenSet = true; m_fixedPrice = value; }

    /**
     * <p>The upfront fixed charge you will paid to purchase the specific Reserved
     * Instance offering.</p>
     */
    inline ReservedInstance& WithFixedPrice(double value) { SetFixedPrice(value); return *this;}


    /**
     * <p>The hourly rate at which you're charged for the domain using this Reserved
     * Instance.</p>
     */
    inline double GetUsagePrice() const{ return m_usagePrice; }

    /**
     * <p>The hourly rate at which you're charged for the domain using this Reserved
     * Instance.</p>
     */
    inline bool UsagePriceHasBeenSet() const { return m_usagePriceHasBeenSet; }

    /**
     * <p>The hourly rate at which you're charged for the domain using this Reserved
     * Instance.</p>
     */
    inline void SetUsagePrice(double value) { m_usagePriceHasBeenSet = true; m_usagePrice = value; }

    /**
     * <p>The hourly rate at which you're charged for the domain using this Reserved
     * Instance.</p>
     */
    inline ReservedInstance& WithUsagePrice(double value) { SetUsagePrice(value); return *this;}


    /**
     * <p>The currency code for the offering.</p>
     */
    inline const Aws::String& GetCurrencyCode() const{ return m_currencyCode; }

    /**
     * <p>The currency code for the offering.</p>
     */
    inline bool CurrencyCodeHasBeenSet() const { return m_currencyCodeHasBeenSet; }

    /**
     * <p>The currency code for the offering.</p>
     */
    inline void SetCurrencyCode(const Aws::String& value) { m_currencyCodeHasBeenSet = true; m_currencyCode = value; }

    /**
     * <p>The currency code for the offering.</p>
     */
    inline void SetCurrencyCode(Aws::String&& value) { m_currencyCodeHasBeenSet = true; m_currencyCode = std::move(value); }

    /**
     * <p>The currency code for the offering.</p>
     */
    inline void SetCurrencyCode(const char* value) { m_currencyCodeHasBeenSet = true; m_currencyCode.assign(value); }

    /**
     * <p>The currency code for the offering.</p>
     */
    inline ReservedInstance& WithCurrencyCode(const Aws::String& value) { SetCurrencyCode(value); return *this;}

    /**
     * <p>The currency code for the offering.</p>
     */
    inline ReservedInstance& WithCurrencyCode(Aws::String&& value) { SetCurrencyCode(std::move(value)); return *this;}

    /**
     * <p>The currency code for the offering.</p>
     */
    inline ReservedInstance& WithCurrencyCode(const char* value) { SetCurrencyCode(value); return *this;}


    /**
     * <p>The number of OpenSearch instances that have been reserved.</p>
     */
    inline int GetInstanceCount() const{ return m_instanceCount; }

    /**
     * <p>The number of OpenSearch instances that have been reserved.</p>
     */
    inline bool InstanceCountHasBeenSet() const { return m_instanceCountHasBeenSet; }

    /**
     * <p>The number of OpenSearch instances that have been reserved.</p>
     */
    inline void SetInstanceCount(int value) { m_instanceCountHasBeenSet = true; m_instanceCount = value; }

    /**
     * <p>The number of OpenSearch instances that have been reserved.</p>
     */
    inline ReservedInstance& WithInstanceCount(int value) { SetInstanceCount(value); return *this;}


    /**
     * <p>The state of the Reserved Instance.</p>
     */
    inline const Aws::String& GetState() const{ return m_state; }

    /**
     * <p>The state of the Reserved Instance.</p>
     */
    inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }

    /**
     * <p>The state of the Reserved Instance.</p>
     */
    inline void SetState(const Aws::String& value) { m_stateHasBeenSet = true; m_state = value; }

    /**
     * <p>The state of the Reserved Instance.</p>
     */
    inline void SetState(Aws::String&& value) { m_stateHasBeenSet = true; m_state = std::move(value); }

    /**
     * <p>The state of the Reserved Instance.</p>
     */
    inline void SetState(const char* value) { m_stateHasBeenSet = true; m_state.assign(value); }

    /**
     * <p>The state of the Reserved Instance.</p>
     */
    inline ReservedInstance& WithState(const Aws::String& value) { SetState(value); return *this;}

    /**
     * <p>The state of the Reserved Instance.</p>
     */
    inline ReservedInstance& WithState(Aws::String&& value) { SetState(std::move(value)); return *this;}

    /**
     * <p>The state of the Reserved Instance.</p>
     */
    inline ReservedInstance& WithState(const char* value) { SetState(value); return *this;}


    /**
     * <p>The payment option as defined in the Reserved Instance offering.</p>
     */
    inline const ReservedInstancePaymentOption& GetPaymentOption() const{ return m_paymentOption; }

    /**
     * <p>The payment option as defined in the Reserved Instance offering.</p>
     */
    inline bool PaymentOptionHasBeenSet() const { return m_paymentOptionHasBeenSet; }

    /**
     * <p>The payment option as defined in the Reserved Instance offering.</p>
     */
    inline void SetPaymentOption(const ReservedInstancePaymentOption& value) { m_paymentOptionHasBeenSet = true; m_paymentOption = value; }

    /**
     * <p>The payment option as defined in the Reserved Instance offering.</p>
     */
    inline void SetPaymentOption(ReservedInstancePaymentOption&& value) { m_paymentOptionHasBeenSet = true; m_paymentOption = std::move(value); }

    /**
     * <p>The payment option as defined in the Reserved Instance offering.</p>
     */
    inline ReservedInstance& WithPaymentOption(const ReservedInstancePaymentOption& value) { SetPaymentOption(value); return *this;}

    /**
     * <p>The payment option as defined in the Reserved Instance offering.</p>
     */
    inline ReservedInstance& WithPaymentOption(ReservedInstancePaymentOption&& value) { SetPaymentOption(std::move(value)); return *this;}


    /**
     * <p>The recurring charge to your account, regardless of whether you create any
     * domains using the Reserved Instance offering.</p>
     */
    inline const Aws::Vector<RecurringCharge>& GetRecurringCharges() const{ return m_recurringCharges; }

    /**
     * <p>The recurring charge to your account, regardless of whether you create any
     * domains using the Reserved Instance offering.</p>
     */
    inline bool RecurringChargesHasBeenSet() const { return m_recurringChargesHasBeenSet; }

    /**
     * <p>The recurring charge to your account, regardless of whether you create any
     * domains using the Reserved Instance offering.</p>
     */
    inline void SetRecurringCharges(const Aws::Vector<RecurringCharge>& value) { m_recurringChargesHasBeenSet = true; m_recurringCharges = value; }

    /**
     * <p>The recurring charge to your account, regardless of whether you create any
     * domains using the Reserved Instance offering.</p>
     */
    inline void SetRecurringCharges(Aws::Vector<RecurringCharge>&& value) { m_recurringChargesHasBeenSet = true; m_recurringCharges = std::move(value); }

    /**
     * <p>The recurring charge to your account, regardless of whether you create any
     * domains using the Reserved Instance offering.</p>
     */
    inline ReservedInstance& WithRecurringCharges(const Aws::Vector<RecurringCharge>& value) { SetRecurringCharges(value); return *this;}

    /**
     * <p>The recurring charge to your account, regardless of whether you create any
     * domains using the Reserved Instance offering.</p>
     */
    inline ReservedInstance& WithRecurringCharges(Aws::Vector<RecurringCharge>&& value) { SetRecurringCharges(std::move(value)); return *this;}

    /**
     * <p>The recurring charge to your account, regardless of whether you create any
     * domains using the Reserved Instance offering.</p>
     */
    inline ReservedInstance& AddRecurringCharges(const RecurringCharge& value) { m_recurringChargesHasBeenSet = true; m_recurringCharges.push_back(value); return *this; }

    /**
     * <p>The recurring charge to your account, regardless of whether you create any
     * domains using the Reserved Instance offering.</p>
     */
    inline ReservedInstance& AddRecurringCharges(RecurringCharge&& value) { m_recurringChargesHasBeenSet = true; m_recurringCharges.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_reservationName;
    bool m_reservationNameHasBeenSet = false;

    Aws::String m_reservedInstanceId;
    bool m_reservedInstanceIdHasBeenSet = false;

    long long m_billingSubscriptionId;
    bool m_billingSubscriptionIdHasBeenSet = false;

    Aws::String m_reservedInstanceOfferingId;
    bool m_reservedInstanceOfferingIdHasBeenSet = false;

    OpenSearchPartitionInstanceType m_instanceType;
    bool m_instanceTypeHasBeenSet = false;

    Aws::Utils::DateTime m_startTime;
    bool m_startTimeHasBeenSet = false;

    int m_duration;
    bool m_durationHasBeenSet = false;

    double m_fixedPrice;
    bool m_fixedPriceHasBeenSet = false;

    double m_usagePrice;
    bool m_usagePriceHasBeenSet = false;

    Aws::String m_currencyCode;
    bool m_currencyCodeHasBeenSet = false;

    int m_instanceCount;
    bool m_instanceCountHasBeenSet = false;

    Aws::String m_state;
    bool m_stateHasBeenSet = false;

    ReservedInstancePaymentOption m_paymentOption;
    bool m_paymentOptionHasBeenSet = false;

    Aws::Vector<RecurringCharge> m_recurringCharges;
    bool m_recurringChargesHasBeenSet = false;
  };

} // namespace Model
} // namespace OpenSearchService
} // namespace Aws
