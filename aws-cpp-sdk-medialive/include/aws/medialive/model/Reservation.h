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
#include <aws/medialive/MediaLive_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/medialive/model/OfferingDurationUnits.h>
#include <aws/medialive/model/OfferingType.h>
#include <aws/medialive/model/ReservationResourceSpecification.h>
#include <aws/medialive/model/ReservationState.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
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
namespace MediaLive
{
namespace Model
{

  /**
   * Reserved resources available to use<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/Reservation">AWS
   * API Reference</a></p>
   */
  class AWS_MEDIALIVE_API Reservation
  {
  public:
    Reservation();
    Reservation(Aws::Utils::Json::JsonView jsonValue);
    Reservation& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * Unique reservation ARN, e.g.
     * 'arn:aws:medialive:us-west-2:123456789012:reservation:1234567'
     */
    inline const Aws::String& GetArn() const{ return m_arn; }

    /**
     * Unique reservation ARN, e.g.
     * 'arn:aws:medialive:us-west-2:123456789012:reservation:1234567'
     */
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }

    /**
     * Unique reservation ARN, e.g.
     * 'arn:aws:medialive:us-west-2:123456789012:reservation:1234567'
     */
    inline void SetArn(const Aws::String& value) { m_arnHasBeenSet = true; m_arn = value; }

    /**
     * Unique reservation ARN, e.g.
     * 'arn:aws:medialive:us-west-2:123456789012:reservation:1234567'
     */
    inline void SetArn(Aws::String&& value) { m_arnHasBeenSet = true; m_arn = std::move(value); }

    /**
     * Unique reservation ARN, e.g.
     * 'arn:aws:medialive:us-west-2:123456789012:reservation:1234567'
     */
    inline void SetArn(const char* value) { m_arnHasBeenSet = true; m_arn.assign(value); }

    /**
     * Unique reservation ARN, e.g.
     * 'arn:aws:medialive:us-west-2:123456789012:reservation:1234567'
     */
    inline Reservation& WithArn(const Aws::String& value) { SetArn(value); return *this;}

    /**
     * Unique reservation ARN, e.g.
     * 'arn:aws:medialive:us-west-2:123456789012:reservation:1234567'
     */
    inline Reservation& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}

    /**
     * Unique reservation ARN, e.g.
     * 'arn:aws:medialive:us-west-2:123456789012:reservation:1234567'
     */
    inline Reservation& WithArn(const char* value) { SetArn(value); return *this;}


    /**
     * Number of reserved resources
     */
    inline int GetCount() const{ return m_count; }

    /**
     * Number of reserved resources
     */
    inline bool CountHasBeenSet() const { return m_countHasBeenSet; }

    /**
     * Number of reserved resources
     */
    inline void SetCount(int value) { m_countHasBeenSet = true; m_count = value; }

    /**
     * Number of reserved resources
     */
    inline Reservation& WithCount(int value) { SetCount(value); return *this;}


    /**
     * Currency code for usagePrice and fixedPrice in ISO-4217 format, e.g. 'USD'
     */
    inline const Aws::String& GetCurrencyCode() const{ return m_currencyCode; }

    /**
     * Currency code for usagePrice and fixedPrice in ISO-4217 format, e.g. 'USD'
     */
    inline bool CurrencyCodeHasBeenSet() const { return m_currencyCodeHasBeenSet; }

    /**
     * Currency code for usagePrice and fixedPrice in ISO-4217 format, e.g. 'USD'
     */
    inline void SetCurrencyCode(const Aws::String& value) { m_currencyCodeHasBeenSet = true; m_currencyCode = value; }

    /**
     * Currency code for usagePrice and fixedPrice in ISO-4217 format, e.g. 'USD'
     */
    inline void SetCurrencyCode(Aws::String&& value) { m_currencyCodeHasBeenSet = true; m_currencyCode = std::move(value); }

    /**
     * Currency code for usagePrice and fixedPrice in ISO-4217 format, e.g. 'USD'
     */
    inline void SetCurrencyCode(const char* value) { m_currencyCodeHasBeenSet = true; m_currencyCode.assign(value); }

    /**
     * Currency code for usagePrice and fixedPrice in ISO-4217 format, e.g. 'USD'
     */
    inline Reservation& WithCurrencyCode(const Aws::String& value) { SetCurrencyCode(value); return *this;}

    /**
     * Currency code for usagePrice and fixedPrice in ISO-4217 format, e.g. 'USD'
     */
    inline Reservation& WithCurrencyCode(Aws::String&& value) { SetCurrencyCode(std::move(value)); return *this;}

    /**
     * Currency code for usagePrice and fixedPrice in ISO-4217 format, e.g. 'USD'
     */
    inline Reservation& WithCurrencyCode(const char* value) { SetCurrencyCode(value); return *this;}


    /**
     * Lease duration, e.g. '12'
     */
    inline int GetDuration() const{ return m_duration; }

    /**
     * Lease duration, e.g. '12'
     */
    inline bool DurationHasBeenSet() const { return m_durationHasBeenSet; }

    /**
     * Lease duration, e.g. '12'
     */
    inline void SetDuration(int value) { m_durationHasBeenSet = true; m_duration = value; }

    /**
     * Lease duration, e.g. '12'
     */
    inline Reservation& WithDuration(int value) { SetDuration(value); return *this;}


    /**
     * Units for duration, e.g. 'MONTHS'
     */
    inline const OfferingDurationUnits& GetDurationUnits() const{ return m_durationUnits; }

    /**
     * Units for duration, e.g. 'MONTHS'
     */
    inline bool DurationUnitsHasBeenSet() const { return m_durationUnitsHasBeenSet; }

    /**
     * Units for duration, e.g. 'MONTHS'
     */
    inline void SetDurationUnits(const OfferingDurationUnits& value) { m_durationUnitsHasBeenSet = true; m_durationUnits = value; }

    /**
     * Units for duration, e.g. 'MONTHS'
     */
    inline void SetDurationUnits(OfferingDurationUnits&& value) { m_durationUnitsHasBeenSet = true; m_durationUnits = std::move(value); }

    /**
     * Units for duration, e.g. 'MONTHS'
     */
    inline Reservation& WithDurationUnits(const OfferingDurationUnits& value) { SetDurationUnits(value); return *this;}

    /**
     * Units for duration, e.g. 'MONTHS'
     */
    inline Reservation& WithDurationUnits(OfferingDurationUnits&& value) { SetDurationUnits(std::move(value)); return *this;}


    /**
     * Reservation UTC end date and time in ISO-8601 format, e.g. '2019-03-01T00:00:00'
     */
    inline const Aws::String& GetEnd() const{ return m_end; }

    /**
     * Reservation UTC end date and time in ISO-8601 format, e.g. '2019-03-01T00:00:00'
     */
    inline bool EndHasBeenSet() const { return m_endHasBeenSet; }

    /**
     * Reservation UTC end date and time in ISO-8601 format, e.g. '2019-03-01T00:00:00'
     */
    inline void SetEnd(const Aws::String& value) { m_endHasBeenSet = true; m_end = value; }

    /**
     * Reservation UTC end date and time in ISO-8601 format, e.g. '2019-03-01T00:00:00'
     */
    inline void SetEnd(Aws::String&& value) { m_endHasBeenSet = true; m_end = std::move(value); }

    /**
     * Reservation UTC end date and time in ISO-8601 format, e.g. '2019-03-01T00:00:00'
     */
    inline void SetEnd(const char* value) { m_endHasBeenSet = true; m_end.assign(value); }

    /**
     * Reservation UTC end date and time in ISO-8601 format, e.g. '2019-03-01T00:00:00'
     */
    inline Reservation& WithEnd(const Aws::String& value) { SetEnd(value); return *this;}

    /**
     * Reservation UTC end date and time in ISO-8601 format, e.g. '2019-03-01T00:00:00'
     */
    inline Reservation& WithEnd(Aws::String&& value) { SetEnd(std::move(value)); return *this;}

    /**
     * Reservation UTC end date and time in ISO-8601 format, e.g. '2019-03-01T00:00:00'
     */
    inline Reservation& WithEnd(const char* value) { SetEnd(value); return *this;}


    /**
     * One-time charge for each reserved resource, e.g. '0.0' for a NO_UPFRONT offering
     */
    inline double GetFixedPrice() const{ return m_fixedPrice; }

    /**
     * One-time charge for each reserved resource, e.g. '0.0' for a NO_UPFRONT offering
     */
    inline bool FixedPriceHasBeenSet() const { return m_fixedPriceHasBeenSet; }

    /**
     * One-time charge for each reserved resource, e.g. '0.0' for a NO_UPFRONT offering
     */
    inline void SetFixedPrice(double value) { m_fixedPriceHasBeenSet = true; m_fixedPrice = value; }

    /**
     * One-time charge for each reserved resource, e.g. '0.0' for a NO_UPFRONT offering
     */
    inline Reservation& WithFixedPrice(double value) { SetFixedPrice(value); return *this;}


    /**
     * User specified reservation name
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * User specified reservation name
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * User specified reservation name
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * User specified reservation name
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * User specified reservation name
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * User specified reservation name
     */
    inline Reservation& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * User specified reservation name
     */
    inline Reservation& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * User specified reservation name
     */
    inline Reservation& WithName(const char* value) { SetName(value); return *this;}


    /**
     * Offering description, e.g. 'HD AVC output at 10-20 Mbps, 30 fps, and standard VQ
     * in US West (Oregon)'
     */
    inline const Aws::String& GetOfferingDescription() const{ return m_offeringDescription; }

    /**
     * Offering description, e.g. 'HD AVC output at 10-20 Mbps, 30 fps, and standard VQ
     * in US West (Oregon)'
     */
    inline bool OfferingDescriptionHasBeenSet() const { return m_offeringDescriptionHasBeenSet; }

    /**
     * Offering description, e.g. 'HD AVC output at 10-20 Mbps, 30 fps, and standard VQ
     * in US West (Oregon)'
     */
    inline void SetOfferingDescription(const Aws::String& value) { m_offeringDescriptionHasBeenSet = true; m_offeringDescription = value; }

    /**
     * Offering description, e.g. 'HD AVC output at 10-20 Mbps, 30 fps, and standard VQ
     * in US West (Oregon)'
     */
    inline void SetOfferingDescription(Aws::String&& value) { m_offeringDescriptionHasBeenSet = true; m_offeringDescription = std::move(value); }

    /**
     * Offering description, e.g. 'HD AVC output at 10-20 Mbps, 30 fps, and standard VQ
     * in US West (Oregon)'
     */
    inline void SetOfferingDescription(const char* value) { m_offeringDescriptionHasBeenSet = true; m_offeringDescription.assign(value); }

    /**
     * Offering description, e.g. 'HD AVC output at 10-20 Mbps, 30 fps, and standard VQ
     * in US West (Oregon)'
     */
    inline Reservation& WithOfferingDescription(const Aws::String& value) { SetOfferingDescription(value); return *this;}

    /**
     * Offering description, e.g. 'HD AVC output at 10-20 Mbps, 30 fps, and standard VQ
     * in US West (Oregon)'
     */
    inline Reservation& WithOfferingDescription(Aws::String&& value) { SetOfferingDescription(std::move(value)); return *this;}

    /**
     * Offering description, e.g. 'HD AVC output at 10-20 Mbps, 30 fps, and standard VQ
     * in US West (Oregon)'
     */
    inline Reservation& WithOfferingDescription(const char* value) { SetOfferingDescription(value); return *this;}


    /**
     * Unique offering ID, e.g. '87654321'
     */
    inline const Aws::String& GetOfferingId() const{ return m_offeringId; }

    /**
     * Unique offering ID, e.g. '87654321'
     */
    inline bool OfferingIdHasBeenSet() const { return m_offeringIdHasBeenSet; }

    /**
     * Unique offering ID, e.g. '87654321'
     */
    inline void SetOfferingId(const Aws::String& value) { m_offeringIdHasBeenSet = true; m_offeringId = value; }

    /**
     * Unique offering ID, e.g. '87654321'
     */
    inline void SetOfferingId(Aws::String&& value) { m_offeringIdHasBeenSet = true; m_offeringId = std::move(value); }

    /**
     * Unique offering ID, e.g. '87654321'
     */
    inline void SetOfferingId(const char* value) { m_offeringIdHasBeenSet = true; m_offeringId.assign(value); }

    /**
     * Unique offering ID, e.g. '87654321'
     */
    inline Reservation& WithOfferingId(const Aws::String& value) { SetOfferingId(value); return *this;}

    /**
     * Unique offering ID, e.g. '87654321'
     */
    inline Reservation& WithOfferingId(Aws::String&& value) { SetOfferingId(std::move(value)); return *this;}

    /**
     * Unique offering ID, e.g. '87654321'
     */
    inline Reservation& WithOfferingId(const char* value) { SetOfferingId(value); return *this;}


    /**
     * Offering type, e.g. 'NO_UPFRONT'
     */
    inline const OfferingType& GetOfferingType() const{ return m_offeringType; }

    /**
     * Offering type, e.g. 'NO_UPFRONT'
     */
    inline bool OfferingTypeHasBeenSet() const { return m_offeringTypeHasBeenSet; }

    /**
     * Offering type, e.g. 'NO_UPFRONT'
     */
    inline void SetOfferingType(const OfferingType& value) { m_offeringTypeHasBeenSet = true; m_offeringType = value; }

    /**
     * Offering type, e.g. 'NO_UPFRONT'
     */
    inline void SetOfferingType(OfferingType&& value) { m_offeringTypeHasBeenSet = true; m_offeringType = std::move(value); }

    /**
     * Offering type, e.g. 'NO_UPFRONT'
     */
    inline Reservation& WithOfferingType(const OfferingType& value) { SetOfferingType(value); return *this;}

    /**
     * Offering type, e.g. 'NO_UPFRONT'
     */
    inline Reservation& WithOfferingType(OfferingType&& value) { SetOfferingType(std::move(value)); return *this;}


    /**
     * AWS region, e.g. 'us-west-2'
     */
    inline const Aws::String& GetRegion() const{ return m_region; }

    /**
     * AWS region, e.g. 'us-west-2'
     */
    inline bool RegionHasBeenSet() const { return m_regionHasBeenSet; }

    /**
     * AWS region, e.g. 'us-west-2'
     */
    inline void SetRegion(const Aws::String& value) { m_regionHasBeenSet = true; m_region = value; }

    /**
     * AWS region, e.g. 'us-west-2'
     */
    inline void SetRegion(Aws::String&& value) { m_regionHasBeenSet = true; m_region = std::move(value); }

    /**
     * AWS region, e.g. 'us-west-2'
     */
    inline void SetRegion(const char* value) { m_regionHasBeenSet = true; m_region.assign(value); }

    /**
     * AWS region, e.g. 'us-west-2'
     */
    inline Reservation& WithRegion(const Aws::String& value) { SetRegion(value); return *this;}

    /**
     * AWS region, e.g. 'us-west-2'
     */
    inline Reservation& WithRegion(Aws::String&& value) { SetRegion(std::move(value)); return *this;}

    /**
     * AWS region, e.g. 'us-west-2'
     */
    inline Reservation& WithRegion(const char* value) { SetRegion(value); return *this;}


    /**
     * Unique reservation ID, e.g. '1234567'
     */
    inline const Aws::String& GetReservationId() const{ return m_reservationId; }

    /**
     * Unique reservation ID, e.g. '1234567'
     */
    inline bool ReservationIdHasBeenSet() const { return m_reservationIdHasBeenSet; }

    /**
     * Unique reservation ID, e.g. '1234567'
     */
    inline void SetReservationId(const Aws::String& value) { m_reservationIdHasBeenSet = true; m_reservationId = value; }

    /**
     * Unique reservation ID, e.g. '1234567'
     */
    inline void SetReservationId(Aws::String&& value) { m_reservationIdHasBeenSet = true; m_reservationId = std::move(value); }

    /**
     * Unique reservation ID, e.g. '1234567'
     */
    inline void SetReservationId(const char* value) { m_reservationIdHasBeenSet = true; m_reservationId.assign(value); }

    /**
     * Unique reservation ID, e.g. '1234567'
     */
    inline Reservation& WithReservationId(const Aws::String& value) { SetReservationId(value); return *this;}

    /**
     * Unique reservation ID, e.g. '1234567'
     */
    inline Reservation& WithReservationId(Aws::String&& value) { SetReservationId(std::move(value)); return *this;}

    /**
     * Unique reservation ID, e.g. '1234567'
     */
    inline Reservation& WithReservationId(const char* value) { SetReservationId(value); return *this;}


    /**
     * Resource configuration details
     */
    inline const ReservationResourceSpecification& GetResourceSpecification() const{ return m_resourceSpecification; }

    /**
     * Resource configuration details
     */
    inline bool ResourceSpecificationHasBeenSet() const { return m_resourceSpecificationHasBeenSet; }

    /**
     * Resource configuration details
     */
    inline void SetResourceSpecification(const ReservationResourceSpecification& value) { m_resourceSpecificationHasBeenSet = true; m_resourceSpecification = value; }

    /**
     * Resource configuration details
     */
    inline void SetResourceSpecification(ReservationResourceSpecification&& value) { m_resourceSpecificationHasBeenSet = true; m_resourceSpecification = std::move(value); }

    /**
     * Resource configuration details
     */
    inline Reservation& WithResourceSpecification(const ReservationResourceSpecification& value) { SetResourceSpecification(value); return *this;}

    /**
     * Resource configuration details
     */
    inline Reservation& WithResourceSpecification(ReservationResourceSpecification&& value) { SetResourceSpecification(std::move(value)); return *this;}


    /**
     * Reservation UTC start date and time in ISO-8601 format, e.g.
     * '2018-03-01T00:00:00'
     */
    inline const Aws::String& GetStart() const{ return m_start; }

    /**
     * Reservation UTC start date and time in ISO-8601 format, e.g.
     * '2018-03-01T00:00:00'
     */
    inline bool StartHasBeenSet() const { return m_startHasBeenSet; }

    /**
     * Reservation UTC start date and time in ISO-8601 format, e.g.
     * '2018-03-01T00:00:00'
     */
    inline void SetStart(const Aws::String& value) { m_startHasBeenSet = true; m_start = value; }

    /**
     * Reservation UTC start date and time in ISO-8601 format, e.g.
     * '2018-03-01T00:00:00'
     */
    inline void SetStart(Aws::String&& value) { m_startHasBeenSet = true; m_start = std::move(value); }

    /**
     * Reservation UTC start date and time in ISO-8601 format, e.g.
     * '2018-03-01T00:00:00'
     */
    inline void SetStart(const char* value) { m_startHasBeenSet = true; m_start.assign(value); }

    /**
     * Reservation UTC start date and time in ISO-8601 format, e.g.
     * '2018-03-01T00:00:00'
     */
    inline Reservation& WithStart(const Aws::String& value) { SetStart(value); return *this;}

    /**
     * Reservation UTC start date and time in ISO-8601 format, e.g.
     * '2018-03-01T00:00:00'
     */
    inline Reservation& WithStart(Aws::String&& value) { SetStart(std::move(value)); return *this;}

    /**
     * Reservation UTC start date and time in ISO-8601 format, e.g.
     * '2018-03-01T00:00:00'
     */
    inline Reservation& WithStart(const char* value) { SetStart(value); return *this;}


    /**
     * Current state of reservation, e.g. 'ACTIVE'
     */
    inline const ReservationState& GetState() const{ return m_state; }

    /**
     * Current state of reservation, e.g. 'ACTIVE'
     */
    inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }

    /**
     * Current state of reservation, e.g. 'ACTIVE'
     */
    inline void SetState(const ReservationState& value) { m_stateHasBeenSet = true; m_state = value; }

    /**
     * Current state of reservation, e.g. 'ACTIVE'
     */
    inline void SetState(ReservationState&& value) { m_stateHasBeenSet = true; m_state = std::move(value); }

    /**
     * Current state of reservation, e.g. 'ACTIVE'
     */
    inline Reservation& WithState(const ReservationState& value) { SetState(value); return *this;}

    /**
     * Current state of reservation, e.g. 'ACTIVE'
     */
    inline Reservation& WithState(ReservationState&& value) { SetState(std::move(value)); return *this;}


    /**
     * A collection of key-value pairs
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }

    /**
     * A collection of key-value pairs
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * A collection of key-value pairs
     */
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * A collection of key-value pairs
     */
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * A collection of key-value pairs
     */
    inline Reservation& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}

    /**
     * A collection of key-value pairs
     */
    inline Reservation& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * A collection of key-value pairs
     */
    inline Reservation& AddTags(const Aws::String& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }

    /**
     * A collection of key-value pairs
     */
    inline Reservation& AddTags(Aws::String&& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    /**
     * A collection of key-value pairs
     */
    inline Reservation& AddTags(const Aws::String& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * A collection of key-value pairs
     */
    inline Reservation& AddTags(Aws::String&& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * A collection of key-value pairs
     */
    inline Reservation& AddTags(const char* key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * A collection of key-value pairs
     */
    inline Reservation& AddTags(Aws::String&& key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    /**
     * A collection of key-value pairs
     */
    inline Reservation& AddTags(const char* key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }


    /**
     * Recurring usage charge for each reserved resource, e.g. '157.0'
     */
    inline double GetUsagePrice() const{ return m_usagePrice; }

    /**
     * Recurring usage charge for each reserved resource, e.g. '157.0'
     */
    inline bool UsagePriceHasBeenSet() const { return m_usagePriceHasBeenSet; }

    /**
     * Recurring usage charge for each reserved resource, e.g. '157.0'
     */
    inline void SetUsagePrice(double value) { m_usagePriceHasBeenSet = true; m_usagePrice = value; }

    /**
     * Recurring usage charge for each reserved resource, e.g. '157.0'
     */
    inline Reservation& WithUsagePrice(double value) { SetUsagePrice(value); return *this;}

  private:

    Aws::String m_arn;
    bool m_arnHasBeenSet;

    int m_count;
    bool m_countHasBeenSet;

    Aws::String m_currencyCode;
    bool m_currencyCodeHasBeenSet;

    int m_duration;
    bool m_durationHasBeenSet;

    OfferingDurationUnits m_durationUnits;
    bool m_durationUnitsHasBeenSet;

    Aws::String m_end;
    bool m_endHasBeenSet;

    double m_fixedPrice;
    bool m_fixedPriceHasBeenSet;

    Aws::String m_name;
    bool m_nameHasBeenSet;

    Aws::String m_offeringDescription;
    bool m_offeringDescriptionHasBeenSet;

    Aws::String m_offeringId;
    bool m_offeringIdHasBeenSet;

    OfferingType m_offeringType;
    bool m_offeringTypeHasBeenSet;

    Aws::String m_region;
    bool m_regionHasBeenSet;

    Aws::String m_reservationId;
    bool m_reservationIdHasBeenSet;

    ReservationResourceSpecification m_resourceSpecification;
    bool m_resourceSpecificationHasBeenSet;

    Aws::String m_start;
    bool m_startHasBeenSet;

    ReservationState m_state;
    bool m_stateHasBeenSet;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet;

    double m_usagePrice;
    bool m_usagePriceHasBeenSet;
  };

} // namespace Model
} // namespace MediaLive
} // namespace Aws
