/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mediaconnect/MediaConnect_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/mediaconnect/model/DurationUnits.h>
#include <aws/mediaconnect/model/PriceUnits.h>
#include <aws/mediaconnect/model/ReservationState.h>
#include <aws/mediaconnect/model/ResourceSpecification.h>
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
namespace MediaConnect
{
namespace Model
{

  /**
   * A pricing agreement for a discounted rate for a specific outbound bandwidth that
   * your MediaConnect account will use each month over a specific time period. The
   * discounted rate in the reservation applies to outbound bandwidth for all flows
   * from your account until your account reaches the amount of bandwidth in your
   * reservation. If you use more outbound bandwidth than the agreed upon amount in a
   * single month, the overage is charged at the on-demand rate.<p><h3>See Also:</h3>
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconnect-2018-11-14/Reservation">AWS
   * API Reference</a></p>
   */
  class Reservation
  {
  public:
    AWS_MEDIACONNECT_API Reservation();
    AWS_MEDIACONNECT_API Reservation(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIACONNECT_API Reservation& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIACONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * The type of currency that is used for billing. The currencyCode used for your
     * reservation is US dollars.
     */
    inline const Aws::String& GetCurrencyCode() const{ return m_currencyCode; }

    /**
     * The type of currency that is used for billing. The currencyCode used for your
     * reservation is US dollars.
     */
    inline bool CurrencyCodeHasBeenSet() const { return m_currencyCodeHasBeenSet; }

    /**
     * The type of currency that is used for billing. The currencyCode used for your
     * reservation is US dollars.
     */
    inline void SetCurrencyCode(const Aws::String& value) { m_currencyCodeHasBeenSet = true; m_currencyCode = value; }

    /**
     * The type of currency that is used for billing. The currencyCode used for your
     * reservation is US dollars.
     */
    inline void SetCurrencyCode(Aws::String&& value) { m_currencyCodeHasBeenSet = true; m_currencyCode = std::move(value); }

    /**
     * The type of currency that is used for billing. The currencyCode used for your
     * reservation is US dollars.
     */
    inline void SetCurrencyCode(const char* value) { m_currencyCodeHasBeenSet = true; m_currencyCode.assign(value); }

    /**
     * The type of currency that is used for billing. The currencyCode used for your
     * reservation is US dollars.
     */
    inline Reservation& WithCurrencyCode(const Aws::String& value) { SetCurrencyCode(value); return *this;}

    /**
     * The type of currency that is used for billing. The currencyCode used for your
     * reservation is US dollars.
     */
    inline Reservation& WithCurrencyCode(Aws::String&& value) { SetCurrencyCode(std::move(value)); return *this;}

    /**
     * The type of currency that is used for billing. The currencyCode used for your
     * reservation is US dollars.
     */
    inline Reservation& WithCurrencyCode(const char* value) { SetCurrencyCode(value); return *this;}


    /**
     * The length of time that this reservation is active. MediaConnect defines this
     * value in the offering.
     */
    inline int GetDuration() const{ return m_duration; }

    /**
     * The length of time that this reservation is active. MediaConnect defines this
     * value in the offering.
     */
    inline bool DurationHasBeenSet() const { return m_durationHasBeenSet; }

    /**
     * The length of time that this reservation is active. MediaConnect defines this
     * value in the offering.
     */
    inline void SetDuration(int value) { m_durationHasBeenSet = true; m_duration = value; }

    /**
     * The length of time that this reservation is active. MediaConnect defines this
     * value in the offering.
     */
    inline Reservation& WithDuration(int value) { SetDuration(value); return *this;}


    /**
     * The unit of measurement for the duration of the reservation. MediaConnect
     * defines this value in the offering.
     */
    inline const DurationUnits& GetDurationUnits() const{ return m_durationUnits; }

    /**
     * The unit of measurement for the duration of the reservation. MediaConnect
     * defines this value in the offering.
     */
    inline bool DurationUnitsHasBeenSet() const { return m_durationUnitsHasBeenSet; }

    /**
     * The unit of measurement for the duration of the reservation. MediaConnect
     * defines this value in the offering.
     */
    inline void SetDurationUnits(const DurationUnits& value) { m_durationUnitsHasBeenSet = true; m_durationUnits = value; }

    /**
     * The unit of measurement for the duration of the reservation. MediaConnect
     * defines this value in the offering.
     */
    inline void SetDurationUnits(DurationUnits&& value) { m_durationUnitsHasBeenSet = true; m_durationUnits = std::move(value); }

    /**
     * The unit of measurement for the duration of the reservation. MediaConnect
     * defines this value in the offering.
     */
    inline Reservation& WithDurationUnits(const DurationUnits& value) { SetDurationUnits(value); return *this;}

    /**
     * The unit of measurement for the duration of the reservation. MediaConnect
     * defines this value in the offering.
     */
    inline Reservation& WithDurationUnits(DurationUnits&& value) { SetDurationUnits(std::move(value)); return *this;}


    /**
     * The day and time that this reservation expires. This value is calculated based
     * on the start date and time that you set and the offering's duration.
     */
    inline const Aws::String& GetEnd() const{ return m_end; }

    /**
     * The day and time that this reservation expires. This value is calculated based
     * on the start date and time that you set and the offering's duration.
     */
    inline bool EndHasBeenSet() const { return m_endHasBeenSet; }

    /**
     * The day and time that this reservation expires. This value is calculated based
     * on the start date and time that you set and the offering's duration.
     */
    inline void SetEnd(const Aws::String& value) { m_endHasBeenSet = true; m_end = value; }

    /**
     * The day and time that this reservation expires. This value is calculated based
     * on the start date and time that you set and the offering's duration.
     */
    inline void SetEnd(Aws::String&& value) { m_endHasBeenSet = true; m_end = std::move(value); }

    /**
     * The day and time that this reservation expires. This value is calculated based
     * on the start date and time that you set and the offering's duration.
     */
    inline void SetEnd(const char* value) { m_endHasBeenSet = true; m_end.assign(value); }

    /**
     * The day and time that this reservation expires. This value is calculated based
     * on the start date and time that you set and the offering's duration.
     */
    inline Reservation& WithEnd(const Aws::String& value) { SetEnd(value); return *this;}

    /**
     * The day and time that this reservation expires. This value is calculated based
     * on the start date and time that you set and the offering's duration.
     */
    inline Reservation& WithEnd(Aws::String&& value) { SetEnd(std::move(value)); return *this;}

    /**
     * The day and time that this reservation expires. This value is calculated based
     * on the start date and time that you set and the offering's duration.
     */
    inline Reservation& WithEnd(const char* value) { SetEnd(value); return *this;}


    /**
     * The Amazon Resource Name (ARN) that MediaConnect assigns to the offering.
     */
    inline const Aws::String& GetOfferingArn() const{ return m_offeringArn; }

    /**
     * The Amazon Resource Name (ARN) that MediaConnect assigns to the offering.
     */
    inline bool OfferingArnHasBeenSet() const { return m_offeringArnHasBeenSet; }

    /**
     * The Amazon Resource Name (ARN) that MediaConnect assigns to the offering.
     */
    inline void SetOfferingArn(const Aws::String& value) { m_offeringArnHasBeenSet = true; m_offeringArn = value; }

    /**
     * The Amazon Resource Name (ARN) that MediaConnect assigns to the offering.
     */
    inline void SetOfferingArn(Aws::String&& value) { m_offeringArnHasBeenSet = true; m_offeringArn = std::move(value); }

    /**
     * The Amazon Resource Name (ARN) that MediaConnect assigns to the offering.
     */
    inline void SetOfferingArn(const char* value) { m_offeringArnHasBeenSet = true; m_offeringArn.assign(value); }

    /**
     * The Amazon Resource Name (ARN) that MediaConnect assigns to the offering.
     */
    inline Reservation& WithOfferingArn(const Aws::String& value) { SetOfferingArn(value); return *this;}

    /**
     * The Amazon Resource Name (ARN) that MediaConnect assigns to the offering.
     */
    inline Reservation& WithOfferingArn(Aws::String&& value) { SetOfferingArn(std::move(value)); return *this;}

    /**
     * The Amazon Resource Name (ARN) that MediaConnect assigns to the offering.
     */
    inline Reservation& WithOfferingArn(const char* value) { SetOfferingArn(value); return *this;}


    /**
     * A description of the offering. MediaConnect defines this value in the offering.
     */
    inline const Aws::String& GetOfferingDescription() const{ return m_offeringDescription; }

    /**
     * A description of the offering. MediaConnect defines this value in the offering.
     */
    inline bool OfferingDescriptionHasBeenSet() const { return m_offeringDescriptionHasBeenSet; }

    /**
     * A description of the offering. MediaConnect defines this value in the offering.
     */
    inline void SetOfferingDescription(const Aws::String& value) { m_offeringDescriptionHasBeenSet = true; m_offeringDescription = value; }

    /**
     * A description of the offering. MediaConnect defines this value in the offering.
     */
    inline void SetOfferingDescription(Aws::String&& value) { m_offeringDescriptionHasBeenSet = true; m_offeringDescription = std::move(value); }

    /**
     * A description of the offering. MediaConnect defines this value in the offering.
     */
    inline void SetOfferingDescription(const char* value) { m_offeringDescriptionHasBeenSet = true; m_offeringDescription.assign(value); }

    /**
     * A description of the offering. MediaConnect defines this value in the offering.
     */
    inline Reservation& WithOfferingDescription(const Aws::String& value) { SetOfferingDescription(value); return *this;}

    /**
     * A description of the offering. MediaConnect defines this value in the offering.
     */
    inline Reservation& WithOfferingDescription(Aws::String&& value) { SetOfferingDescription(std::move(value)); return *this;}

    /**
     * A description of the offering. MediaConnect defines this value in the offering.
     */
    inline Reservation& WithOfferingDescription(const char* value) { SetOfferingDescription(value); return *this;}


    /**
     * The cost of a single unit. This value, in combination with priceUnits, makes up
     * the rate. MediaConnect defines this value in the offering.
     */
    inline const Aws::String& GetPricePerUnit() const{ return m_pricePerUnit; }

    /**
     * The cost of a single unit. This value, in combination with priceUnits, makes up
     * the rate. MediaConnect defines this value in the offering.
     */
    inline bool PricePerUnitHasBeenSet() const { return m_pricePerUnitHasBeenSet; }

    /**
     * The cost of a single unit. This value, in combination with priceUnits, makes up
     * the rate. MediaConnect defines this value in the offering.
     */
    inline void SetPricePerUnit(const Aws::String& value) { m_pricePerUnitHasBeenSet = true; m_pricePerUnit = value; }

    /**
     * The cost of a single unit. This value, in combination with priceUnits, makes up
     * the rate. MediaConnect defines this value in the offering.
     */
    inline void SetPricePerUnit(Aws::String&& value) { m_pricePerUnitHasBeenSet = true; m_pricePerUnit = std::move(value); }

    /**
     * The cost of a single unit. This value, in combination with priceUnits, makes up
     * the rate. MediaConnect defines this value in the offering.
     */
    inline void SetPricePerUnit(const char* value) { m_pricePerUnitHasBeenSet = true; m_pricePerUnit.assign(value); }

    /**
     * The cost of a single unit. This value, in combination with priceUnits, makes up
     * the rate. MediaConnect defines this value in the offering.
     */
    inline Reservation& WithPricePerUnit(const Aws::String& value) { SetPricePerUnit(value); return *this;}

    /**
     * The cost of a single unit. This value, in combination with priceUnits, makes up
     * the rate. MediaConnect defines this value in the offering.
     */
    inline Reservation& WithPricePerUnit(Aws::String&& value) { SetPricePerUnit(std::move(value)); return *this;}

    /**
     * The cost of a single unit. This value, in combination with priceUnits, makes up
     * the rate. MediaConnect defines this value in the offering.
     */
    inline Reservation& WithPricePerUnit(const char* value) { SetPricePerUnit(value); return *this;}


    /**
     * The unit of measurement that is used for billing. This value, in combination
     * with pricePerUnit, makes up the rate. MediaConnect defines this value in the
     * offering.
     */
    inline const PriceUnits& GetPriceUnits() const{ return m_priceUnits; }

    /**
     * The unit of measurement that is used for billing. This value, in combination
     * with pricePerUnit, makes up the rate. MediaConnect defines this value in the
     * offering.
     */
    inline bool PriceUnitsHasBeenSet() const { return m_priceUnitsHasBeenSet; }

    /**
     * The unit of measurement that is used for billing. This value, in combination
     * with pricePerUnit, makes up the rate. MediaConnect defines this value in the
     * offering.
     */
    inline void SetPriceUnits(const PriceUnits& value) { m_priceUnitsHasBeenSet = true; m_priceUnits = value; }

    /**
     * The unit of measurement that is used for billing. This value, in combination
     * with pricePerUnit, makes up the rate. MediaConnect defines this value in the
     * offering.
     */
    inline void SetPriceUnits(PriceUnits&& value) { m_priceUnitsHasBeenSet = true; m_priceUnits = std::move(value); }

    /**
     * The unit of measurement that is used for billing. This value, in combination
     * with pricePerUnit, makes up the rate. MediaConnect defines this value in the
     * offering.
     */
    inline Reservation& WithPriceUnits(const PriceUnits& value) { SetPriceUnits(value); return *this;}

    /**
     * The unit of measurement that is used for billing. This value, in combination
     * with pricePerUnit, makes up the rate. MediaConnect defines this value in the
     * offering.
     */
    inline Reservation& WithPriceUnits(PriceUnits&& value) { SetPriceUnits(std::move(value)); return *this;}


    /**
     * The Amazon Resource Name (ARN) that MediaConnect assigns to the reservation when
     * you purchase an offering.
     */
    inline const Aws::String& GetReservationArn() const{ return m_reservationArn; }

    /**
     * The Amazon Resource Name (ARN) that MediaConnect assigns to the reservation when
     * you purchase an offering.
     */
    inline bool ReservationArnHasBeenSet() const { return m_reservationArnHasBeenSet; }

    /**
     * The Amazon Resource Name (ARN) that MediaConnect assigns to the reservation when
     * you purchase an offering.
     */
    inline void SetReservationArn(const Aws::String& value) { m_reservationArnHasBeenSet = true; m_reservationArn = value; }

    /**
     * The Amazon Resource Name (ARN) that MediaConnect assigns to the reservation when
     * you purchase an offering.
     */
    inline void SetReservationArn(Aws::String&& value) { m_reservationArnHasBeenSet = true; m_reservationArn = std::move(value); }

    /**
     * The Amazon Resource Name (ARN) that MediaConnect assigns to the reservation when
     * you purchase an offering.
     */
    inline void SetReservationArn(const char* value) { m_reservationArnHasBeenSet = true; m_reservationArn.assign(value); }

    /**
     * The Amazon Resource Name (ARN) that MediaConnect assigns to the reservation when
     * you purchase an offering.
     */
    inline Reservation& WithReservationArn(const Aws::String& value) { SetReservationArn(value); return *this;}

    /**
     * The Amazon Resource Name (ARN) that MediaConnect assigns to the reservation when
     * you purchase an offering.
     */
    inline Reservation& WithReservationArn(Aws::String&& value) { SetReservationArn(std::move(value)); return *this;}

    /**
     * The Amazon Resource Name (ARN) that MediaConnect assigns to the reservation when
     * you purchase an offering.
     */
    inline Reservation& WithReservationArn(const char* value) { SetReservationArn(value); return *this;}


    /**
     * The name that you assigned to the reservation when you purchased the offering.
     */
    inline const Aws::String& GetReservationName() const{ return m_reservationName; }

    /**
     * The name that you assigned to the reservation when you purchased the offering.
     */
    inline bool ReservationNameHasBeenSet() const { return m_reservationNameHasBeenSet; }

    /**
     * The name that you assigned to the reservation when you purchased the offering.
     */
    inline void SetReservationName(const Aws::String& value) { m_reservationNameHasBeenSet = true; m_reservationName = value; }

    /**
     * The name that you assigned to the reservation when you purchased the offering.
     */
    inline void SetReservationName(Aws::String&& value) { m_reservationNameHasBeenSet = true; m_reservationName = std::move(value); }

    /**
     * The name that you assigned to the reservation when you purchased the offering.
     */
    inline void SetReservationName(const char* value) { m_reservationNameHasBeenSet = true; m_reservationName.assign(value); }

    /**
     * The name that you assigned to the reservation when you purchased the offering.
     */
    inline Reservation& WithReservationName(const Aws::String& value) { SetReservationName(value); return *this;}

    /**
     * The name that you assigned to the reservation when you purchased the offering.
     */
    inline Reservation& WithReservationName(Aws::String&& value) { SetReservationName(std::move(value)); return *this;}

    /**
     * The name that you assigned to the reservation when you purchased the offering.
     */
    inline Reservation& WithReservationName(const char* value) { SetReservationName(value); return *this;}


    /**
     * The status of your reservation.
     */
    inline const ReservationState& GetReservationState() const{ return m_reservationState; }

    /**
     * The status of your reservation.
     */
    inline bool ReservationStateHasBeenSet() const { return m_reservationStateHasBeenSet; }

    /**
     * The status of your reservation.
     */
    inline void SetReservationState(const ReservationState& value) { m_reservationStateHasBeenSet = true; m_reservationState = value; }

    /**
     * The status of your reservation.
     */
    inline void SetReservationState(ReservationState&& value) { m_reservationStateHasBeenSet = true; m_reservationState = std::move(value); }

    /**
     * The status of your reservation.
     */
    inline Reservation& WithReservationState(const ReservationState& value) { SetReservationState(value); return *this;}

    /**
     * The status of your reservation.
     */
    inline Reservation& WithReservationState(ReservationState&& value) { SetReservationState(std::move(value)); return *this;}


    /**
     * A definition of the amount of outbound bandwidth that you would be reserving if
     * you purchase the offering. MediaConnect defines the values that make up the
     * resourceSpecification in the offering.
     */
    inline const ResourceSpecification& GetResourceSpecification() const{ return m_resourceSpecification; }

    /**
     * A definition of the amount of outbound bandwidth that you would be reserving if
     * you purchase the offering. MediaConnect defines the values that make up the
     * resourceSpecification in the offering.
     */
    inline bool ResourceSpecificationHasBeenSet() const { return m_resourceSpecificationHasBeenSet; }

    /**
     * A definition of the amount of outbound bandwidth that you would be reserving if
     * you purchase the offering. MediaConnect defines the values that make up the
     * resourceSpecification in the offering.
     */
    inline void SetResourceSpecification(const ResourceSpecification& value) { m_resourceSpecificationHasBeenSet = true; m_resourceSpecification = value; }

    /**
     * A definition of the amount of outbound bandwidth that you would be reserving if
     * you purchase the offering. MediaConnect defines the values that make up the
     * resourceSpecification in the offering.
     */
    inline void SetResourceSpecification(ResourceSpecification&& value) { m_resourceSpecificationHasBeenSet = true; m_resourceSpecification = std::move(value); }

    /**
     * A definition of the amount of outbound bandwidth that you would be reserving if
     * you purchase the offering. MediaConnect defines the values that make up the
     * resourceSpecification in the offering.
     */
    inline Reservation& WithResourceSpecification(const ResourceSpecification& value) { SetResourceSpecification(value); return *this;}

    /**
     * A definition of the amount of outbound bandwidth that you would be reserving if
     * you purchase the offering. MediaConnect defines the values that make up the
     * resourceSpecification in the offering.
     */
    inline Reservation& WithResourceSpecification(ResourceSpecification&& value) { SetResourceSpecification(std::move(value)); return *this;}


    /**
     * The day and time that the reservation becomes active. You set this value when
     * you purchase the offering.
     */
    inline const Aws::String& GetStart() const{ return m_start; }

    /**
     * The day and time that the reservation becomes active. You set this value when
     * you purchase the offering.
     */
    inline bool StartHasBeenSet() const { return m_startHasBeenSet; }

    /**
     * The day and time that the reservation becomes active. You set this value when
     * you purchase the offering.
     */
    inline void SetStart(const Aws::String& value) { m_startHasBeenSet = true; m_start = value; }

    /**
     * The day and time that the reservation becomes active. You set this value when
     * you purchase the offering.
     */
    inline void SetStart(Aws::String&& value) { m_startHasBeenSet = true; m_start = std::move(value); }

    /**
     * The day and time that the reservation becomes active. You set this value when
     * you purchase the offering.
     */
    inline void SetStart(const char* value) { m_startHasBeenSet = true; m_start.assign(value); }

    /**
     * The day and time that the reservation becomes active. You set this value when
     * you purchase the offering.
     */
    inline Reservation& WithStart(const Aws::String& value) { SetStart(value); return *this;}

    /**
     * The day and time that the reservation becomes active. You set this value when
     * you purchase the offering.
     */
    inline Reservation& WithStart(Aws::String&& value) { SetStart(std::move(value)); return *this;}

    /**
     * The day and time that the reservation becomes active. You set this value when
     * you purchase the offering.
     */
    inline Reservation& WithStart(const char* value) { SetStart(value); return *this;}

  private:

    Aws::String m_currencyCode;
    bool m_currencyCodeHasBeenSet = false;

    int m_duration;
    bool m_durationHasBeenSet = false;

    DurationUnits m_durationUnits;
    bool m_durationUnitsHasBeenSet = false;

    Aws::String m_end;
    bool m_endHasBeenSet = false;

    Aws::String m_offeringArn;
    bool m_offeringArnHasBeenSet = false;

    Aws::String m_offeringDescription;
    bool m_offeringDescriptionHasBeenSet = false;

    Aws::String m_pricePerUnit;
    bool m_pricePerUnitHasBeenSet = false;

    PriceUnits m_priceUnits;
    bool m_priceUnitsHasBeenSet = false;

    Aws::String m_reservationArn;
    bool m_reservationArnHasBeenSet = false;

    Aws::String m_reservationName;
    bool m_reservationNameHasBeenSet = false;

    ReservationState m_reservationState;
    bool m_reservationStateHasBeenSet = false;

    ResourceSpecification m_resourceSpecification;
    bool m_resourceSpecificationHasBeenSet = false;

    Aws::String m_start;
    bool m_startHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaConnect
} // namespace Aws
