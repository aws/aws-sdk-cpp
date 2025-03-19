/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
  class ReservedElasticsearchInstance
  {
  public:
    AWS_ELASTICSEARCHSERVICE_API ReservedElasticsearchInstance() = default;
    AWS_ELASTICSEARCHSERVICE_API ReservedElasticsearchInstance(Aws::Utils::Json::JsonView jsonValue);
    AWS_ELASTICSEARCHSERVICE_API ReservedElasticsearchInstance& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_ELASTICSEARCHSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The customer-specified identifier to track this reservation.</p>
     */
    inline const Aws::String& GetReservationName() const { return m_reservationName; }
    inline bool ReservationNameHasBeenSet() const { return m_reservationNameHasBeenSet; }
    template<typename ReservationNameT = Aws::String>
    void SetReservationName(ReservationNameT&& value) { m_reservationNameHasBeenSet = true; m_reservationName = std::forward<ReservationNameT>(value); }
    template<typename ReservationNameT = Aws::String>
    ReservedElasticsearchInstance& WithReservationName(ReservationNameT&& value) { SetReservationName(std::forward<ReservationNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique identifier for the reservation.</p>
     */
    inline const Aws::String& GetReservedElasticsearchInstanceId() const { return m_reservedElasticsearchInstanceId; }
    inline bool ReservedElasticsearchInstanceIdHasBeenSet() const { return m_reservedElasticsearchInstanceIdHasBeenSet; }
    template<typename ReservedElasticsearchInstanceIdT = Aws::String>
    void SetReservedElasticsearchInstanceId(ReservedElasticsearchInstanceIdT&& value) { m_reservedElasticsearchInstanceIdHasBeenSet = true; m_reservedElasticsearchInstanceId = std::forward<ReservedElasticsearchInstanceIdT>(value); }
    template<typename ReservedElasticsearchInstanceIdT = Aws::String>
    ReservedElasticsearchInstance& WithReservedElasticsearchInstanceId(ReservedElasticsearchInstanceIdT&& value) { SetReservedElasticsearchInstanceId(std::forward<ReservedElasticsearchInstanceIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The offering identifier.</p>
     */
    inline const Aws::String& GetReservedElasticsearchInstanceOfferingId() const { return m_reservedElasticsearchInstanceOfferingId; }
    inline bool ReservedElasticsearchInstanceOfferingIdHasBeenSet() const { return m_reservedElasticsearchInstanceOfferingIdHasBeenSet; }
    template<typename ReservedElasticsearchInstanceOfferingIdT = Aws::String>
    void SetReservedElasticsearchInstanceOfferingId(ReservedElasticsearchInstanceOfferingIdT&& value) { m_reservedElasticsearchInstanceOfferingIdHasBeenSet = true; m_reservedElasticsearchInstanceOfferingId = std::forward<ReservedElasticsearchInstanceOfferingIdT>(value); }
    template<typename ReservedElasticsearchInstanceOfferingIdT = Aws::String>
    ReservedElasticsearchInstance& WithReservedElasticsearchInstanceOfferingId(ReservedElasticsearchInstanceOfferingIdT&& value) { SetReservedElasticsearchInstanceOfferingId(std::forward<ReservedElasticsearchInstanceOfferingIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Elasticsearch instance type offered by the reserved instance
     * offering.</p>
     */
    inline ESPartitionInstanceType GetElasticsearchInstanceType() const { return m_elasticsearchInstanceType; }
    inline bool ElasticsearchInstanceTypeHasBeenSet() const { return m_elasticsearchInstanceTypeHasBeenSet; }
    inline void SetElasticsearchInstanceType(ESPartitionInstanceType value) { m_elasticsearchInstanceTypeHasBeenSet = true; m_elasticsearchInstanceType = value; }
    inline ReservedElasticsearchInstance& WithElasticsearchInstanceType(ESPartitionInstanceType value) { SetElasticsearchInstanceType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time the reservation started.</p>
     */
    inline const Aws::Utils::DateTime& GetStartTime() const { return m_startTime; }
    inline bool StartTimeHasBeenSet() const { return m_startTimeHasBeenSet; }
    template<typename StartTimeT = Aws::Utils::DateTime>
    void SetStartTime(StartTimeT&& value) { m_startTimeHasBeenSet = true; m_startTime = std::forward<StartTimeT>(value); }
    template<typename StartTimeT = Aws::Utils::DateTime>
    ReservedElasticsearchInstance& WithStartTime(StartTimeT&& value) { SetStartTime(std::forward<StartTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The duration, in seconds, for which the Elasticsearch instance is
     * reserved.</p>
     */
    inline int GetDuration() const { return m_duration; }
    inline bool DurationHasBeenSet() const { return m_durationHasBeenSet; }
    inline void SetDuration(int value) { m_durationHasBeenSet = true; m_duration = value; }
    inline ReservedElasticsearchInstance& WithDuration(int value) { SetDuration(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The upfront fixed charge you will paid to purchase the specific reserved
     * Elasticsearch instance offering. </p>
     */
    inline double GetFixedPrice() const { return m_fixedPrice; }
    inline bool FixedPriceHasBeenSet() const { return m_fixedPriceHasBeenSet; }
    inline void SetFixedPrice(double value) { m_fixedPriceHasBeenSet = true; m_fixedPrice = value; }
    inline ReservedElasticsearchInstance& WithFixedPrice(double value) { SetFixedPrice(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The rate you are charged for each hour for the domain that is using this
     * reserved instance.</p>
     */
    inline double GetUsagePrice() const { return m_usagePrice; }
    inline bool UsagePriceHasBeenSet() const { return m_usagePriceHasBeenSet; }
    inline void SetUsagePrice(double value) { m_usagePriceHasBeenSet = true; m_usagePrice = value; }
    inline ReservedElasticsearchInstance& WithUsagePrice(double value) { SetUsagePrice(value); return *this;}
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
    ReservedElasticsearchInstance& WithCurrencyCode(CurrencyCodeT&& value) { SetCurrencyCode(std::forward<CurrencyCodeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of Elasticsearch instances that have been reserved.</p>
     */
    inline int GetElasticsearchInstanceCount() const { return m_elasticsearchInstanceCount; }
    inline bool ElasticsearchInstanceCountHasBeenSet() const { return m_elasticsearchInstanceCountHasBeenSet; }
    inline void SetElasticsearchInstanceCount(int value) { m_elasticsearchInstanceCountHasBeenSet = true; m_elasticsearchInstanceCount = value; }
    inline ReservedElasticsearchInstance& WithElasticsearchInstanceCount(int value) { SetElasticsearchInstanceCount(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The state of the reserved Elasticsearch instance.</p>
     */
    inline const Aws::String& GetState() const { return m_state; }
    inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }
    template<typename StateT = Aws::String>
    void SetState(StateT&& value) { m_stateHasBeenSet = true; m_state = std::forward<StateT>(value); }
    template<typename StateT = Aws::String>
    ReservedElasticsearchInstance& WithState(StateT&& value) { SetState(std::forward<StateT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The payment option as defined in the reserved Elasticsearch instance
     * offering.</p>
     */
    inline ReservedElasticsearchInstancePaymentOption GetPaymentOption() const { return m_paymentOption; }
    inline bool PaymentOptionHasBeenSet() const { return m_paymentOptionHasBeenSet; }
    inline void SetPaymentOption(ReservedElasticsearchInstancePaymentOption value) { m_paymentOptionHasBeenSet = true; m_paymentOption = value; }
    inline ReservedElasticsearchInstance& WithPaymentOption(ReservedElasticsearchInstancePaymentOption value) { SetPaymentOption(value); return *this;}
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
    ReservedElasticsearchInstance& WithRecurringCharges(RecurringChargesT&& value) { SetRecurringCharges(std::forward<RecurringChargesT>(value)); return *this;}
    template<typename RecurringChargesT = RecurringCharge>
    ReservedElasticsearchInstance& AddRecurringCharges(RecurringChargesT&& value) { m_recurringChargesHasBeenSet = true; m_recurringCharges.emplace_back(std::forward<RecurringChargesT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_reservationName;
    bool m_reservationNameHasBeenSet = false;

    Aws::String m_reservedElasticsearchInstanceId;
    bool m_reservedElasticsearchInstanceIdHasBeenSet = false;

    Aws::String m_reservedElasticsearchInstanceOfferingId;
    bool m_reservedElasticsearchInstanceOfferingIdHasBeenSet = false;

    ESPartitionInstanceType m_elasticsearchInstanceType{ESPartitionInstanceType::NOT_SET};
    bool m_elasticsearchInstanceTypeHasBeenSet = false;

    Aws::Utils::DateTime m_startTime{};
    bool m_startTimeHasBeenSet = false;

    int m_duration{0};
    bool m_durationHasBeenSet = false;

    double m_fixedPrice{0.0};
    bool m_fixedPriceHasBeenSet = false;

    double m_usagePrice{0.0};
    bool m_usagePriceHasBeenSet = false;

    Aws::String m_currencyCode;
    bool m_currencyCodeHasBeenSet = false;

    int m_elasticsearchInstanceCount{0};
    bool m_elasticsearchInstanceCountHasBeenSet = false;

    Aws::String m_state;
    bool m_stateHasBeenSet = false;

    ReservedElasticsearchInstancePaymentOption m_paymentOption{ReservedElasticsearchInstancePaymentOption::NOT_SET};
    bool m_paymentOptionHasBeenSet = false;

    Aws::Vector<RecurringCharge> m_recurringCharges;
    bool m_recurringChargesHasBeenSet = false;
  };

} // namespace Model
} // namespace ElasticsearchService
} // namespace Aws
