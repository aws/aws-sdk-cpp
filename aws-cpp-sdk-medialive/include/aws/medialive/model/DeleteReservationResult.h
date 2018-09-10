﻿/*
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
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace MediaLive
{
namespace Model
{
  /**
   * Placeholder documentation for DeleteReservationResponse<p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/DeleteReservationResponse">AWS
   * API Reference</a></p>
   */
  class AWS_MEDIALIVE_API DeleteReservationResult
  {
  public:
    DeleteReservationResult();
    DeleteReservationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    DeleteReservationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * Unique reservation ARN, e.g.
     * 'arn:aws:medialive:us-west-2:123456789012:reservation:1234567'
     */
    inline const Aws::String& GetArn() const{ return m_arn; }

    /**
     * Unique reservation ARN, e.g.
     * 'arn:aws:medialive:us-west-2:123456789012:reservation:1234567'
     */
    inline void SetArn(const Aws::String& value) { m_arn = value; }

    /**
     * Unique reservation ARN, e.g.
     * 'arn:aws:medialive:us-west-2:123456789012:reservation:1234567'
     */
    inline void SetArn(Aws::String&& value) { m_arn = std::move(value); }

    /**
     * Unique reservation ARN, e.g.
     * 'arn:aws:medialive:us-west-2:123456789012:reservation:1234567'
     */
    inline void SetArn(const char* value) { m_arn.assign(value); }

    /**
     * Unique reservation ARN, e.g.
     * 'arn:aws:medialive:us-west-2:123456789012:reservation:1234567'
     */
    inline DeleteReservationResult& WithArn(const Aws::String& value) { SetArn(value); return *this;}

    /**
     * Unique reservation ARN, e.g.
     * 'arn:aws:medialive:us-west-2:123456789012:reservation:1234567'
     */
    inline DeleteReservationResult& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}

    /**
     * Unique reservation ARN, e.g.
     * 'arn:aws:medialive:us-west-2:123456789012:reservation:1234567'
     */
    inline DeleteReservationResult& WithArn(const char* value) { SetArn(value); return *this;}


    /**
     * Number of reserved resources
     */
    inline int GetCount() const{ return m_count; }

    /**
     * Number of reserved resources
     */
    inline void SetCount(int value) { m_count = value; }

    /**
     * Number of reserved resources
     */
    inline DeleteReservationResult& WithCount(int value) { SetCount(value); return *this;}


    /**
     * Currency code for usagePrice and fixedPrice in ISO-4217 format, e.g. 'USD'
     */
    inline const Aws::String& GetCurrencyCode() const{ return m_currencyCode; }

    /**
     * Currency code for usagePrice and fixedPrice in ISO-4217 format, e.g. 'USD'
     */
    inline void SetCurrencyCode(const Aws::String& value) { m_currencyCode = value; }

    /**
     * Currency code for usagePrice and fixedPrice in ISO-4217 format, e.g. 'USD'
     */
    inline void SetCurrencyCode(Aws::String&& value) { m_currencyCode = std::move(value); }

    /**
     * Currency code for usagePrice and fixedPrice in ISO-4217 format, e.g. 'USD'
     */
    inline void SetCurrencyCode(const char* value) { m_currencyCode.assign(value); }

    /**
     * Currency code for usagePrice and fixedPrice in ISO-4217 format, e.g. 'USD'
     */
    inline DeleteReservationResult& WithCurrencyCode(const Aws::String& value) { SetCurrencyCode(value); return *this;}

    /**
     * Currency code for usagePrice and fixedPrice in ISO-4217 format, e.g. 'USD'
     */
    inline DeleteReservationResult& WithCurrencyCode(Aws::String&& value) { SetCurrencyCode(std::move(value)); return *this;}

    /**
     * Currency code for usagePrice and fixedPrice in ISO-4217 format, e.g. 'USD'
     */
    inline DeleteReservationResult& WithCurrencyCode(const char* value) { SetCurrencyCode(value); return *this;}


    /**
     * Lease duration, e.g. '12'
     */
    inline int GetDuration() const{ return m_duration; }

    /**
     * Lease duration, e.g. '12'
     */
    inline void SetDuration(int value) { m_duration = value; }

    /**
     * Lease duration, e.g. '12'
     */
    inline DeleteReservationResult& WithDuration(int value) { SetDuration(value); return *this;}


    /**
     * Units for duration, e.g. 'MONTHS'
     */
    inline const OfferingDurationUnits& GetDurationUnits() const{ return m_durationUnits; }

    /**
     * Units for duration, e.g. 'MONTHS'
     */
    inline void SetDurationUnits(const OfferingDurationUnits& value) { m_durationUnits = value; }

    /**
     * Units for duration, e.g. 'MONTHS'
     */
    inline void SetDurationUnits(OfferingDurationUnits&& value) { m_durationUnits = std::move(value); }

    /**
     * Units for duration, e.g. 'MONTHS'
     */
    inline DeleteReservationResult& WithDurationUnits(const OfferingDurationUnits& value) { SetDurationUnits(value); return *this;}

    /**
     * Units for duration, e.g. 'MONTHS'
     */
    inline DeleteReservationResult& WithDurationUnits(OfferingDurationUnits&& value) { SetDurationUnits(std::move(value)); return *this;}


    /**
     * Reservation UTC end date and time in ISO-8601 format, e.g. '2019-03-01T00:00:00'
     */
    inline const Aws::String& GetEnd() const{ return m_end; }

    /**
     * Reservation UTC end date and time in ISO-8601 format, e.g. '2019-03-01T00:00:00'
     */
    inline void SetEnd(const Aws::String& value) { m_end = value; }

    /**
     * Reservation UTC end date and time in ISO-8601 format, e.g. '2019-03-01T00:00:00'
     */
    inline void SetEnd(Aws::String&& value) { m_end = std::move(value); }

    /**
     * Reservation UTC end date and time in ISO-8601 format, e.g. '2019-03-01T00:00:00'
     */
    inline void SetEnd(const char* value) { m_end.assign(value); }

    /**
     * Reservation UTC end date and time in ISO-8601 format, e.g. '2019-03-01T00:00:00'
     */
    inline DeleteReservationResult& WithEnd(const Aws::String& value) { SetEnd(value); return *this;}

    /**
     * Reservation UTC end date and time in ISO-8601 format, e.g. '2019-03-01T00:00:00'
     */
    inline DeleteReservationResult& WithEnd(Aws::String&& value) { SetEnd(std::move(value)); return *this;}

    /**
     * Reservation UTC end date and time in ISO-8601 format, e.g. '2019-03-01T00:00:00'
     */
    inline DeleteReservationResult& WithEnd(const char* value) { SetEnd(value); return *this;}


    /**
     * One-time charge for each reserved resource, e.g. '0.0' for a NO_UPFRONT offering
     */
    inline double GetFixedPrice() const{ return m_fixedPrice; }

    /**
     * One-time charge for each reserved resource, e.g. '0.0' for a NO_UPFRONT offering
     */
    inline void SetFixedPrice(double value) { m_fixedPrice = value; }

    /**
     * One-time charge for each reserved resource, e.g. '0.0' for a NO_UPFRONT offering
     */
    inline DeleteReservationResult& WithFixedPrice(double value) { SetFixedPrice(value); return *this;}


    /**
     * User specified reservation name
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * User specified reservation name
     */
    inline void SetName(const Aws::String& value) { m_name = value; }

    /**
     * User specified reservation name
     */
    inline void SetName(Aws::String&& value) { m_name = std::move(value); }

    /**
     * User specified reservation name
     */
    inline void SetName(const char* value) { m_name.assign(value); }

    /**
     * User specified reservation name
     */
    inline DeleteReservationResult& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * User specified reservation name
     */
    inline DeleteReservationResult& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * User specified reservation name
     */
    inline DeleteReservationResult& WithName(const char* value) { SetName(value); return *this;}


    /**
     * Offering description, e.g. 'HD AVC output at 10-20 Mbps, 30 fps, and standard VQ
     * in US West (Oregon)'
     */
    inline const Aws::String& GetOfferingDescription() const{ return m_offeringDescription; }

    /**
     * Offering description, e.g. 'HD AVC output at 10-20 Mbps, 30 fps, and standard VQ
     * in US West (Oregon)'
     */
    inline void SetOfferingDescription(const Aws::String& value) { m_offeringDescription = value; }

    /**
     * Offering description, e.g. 'HD AVC output at 10-20 Mbps, 30 fps, and standard VQ
     * in US West (Oregon)'
     */
    inline void SetOfferingDescription(Aws::String&& value) { m_offeringDescription = std::move(value); }

    /**
     * Offering description, e.g. 'HD AVC output at 10-20 Mbps, 30 fps, and standard VQ
     * in US West (Oregon)'
     */
    inline void SetOfferingDescription(const char* value) { m_offeringDescription.assign(value); }

    /**
     * Offering description, e.g. 'HD AVC output at 10-20 Mbps, 30 fps, and standard VQ
     * in US West (Oregon)'
     */
    inline DeleteReservationResult& WithOfferingDescription(const Aws::String& value) { SetOfferingDescription(value); return *this;}

    /**
     * Offering description, e.g. 'HD AVC output at 10-20 Mbps, 30 fps, and standard VQ
     * in US West (Oregon)'
     */
    inline DeleteReservationResult& WithOfferingDescription(Aws::String&& value) { SetOfferingDescription(std::move(value)); return *this;}

    /**
     * Offering description, e.g. 'HD AVC output at 10-20 Mbps, 30 fps, and standard VQ
     * in US West (Oregon)'
     */
    inline DeleteReservationResult& WithOfferingDescription(const char* value) { SetOfferingDescription(value); return *this;}


    /**
     * Unique offering ID, e.g. '87654321'
     */
    inline const Aws::String& GetOfferingId() const{ return m_offeringId; }

    /**
     * Unique offering ID, e.g. '87654321'
     */
    inline void SetOfferingId(const Aws::String& value) { m_offeringId = value; }

    /**
     * Unique offering ID, e.g. '87654321'
     */
    inline void SetOfferingId(Aws::String&& value) { m_offeringId = std::move(value); }

    /**
     * Unique offering ID, e.g. '87654321'
     */
    inline void SetOfferingId(const char* value) { m_offeringId.assign(value); }

    /**
     * Unique offering ID, e.g. '87654321'
     */
    inline DeleteReservationResult& WithOfferingId(const Aws::String& value) { SetOfferingId(value); return *this;}

    /**
     * Unique offering ID, e.g. '87654321'
     */
    inline DeleteReservationResult& WithOfferingId(Aws::String&& value) { SetOfferingId(std::move(value)); return *this;}

    /**
     * Unique offering ID, e.g. '87654321'
     */
    inline DeleteReservationResult& WithOfferingId(const char* value) { SetOfferingId(value); return *this;}


    /**
     * Offering type, e.g. 'NO_UPFRONT'
     */
    inline const OfferingType& GetOfferingType() const{ return m_offeringType; }

    /**
     * Offering type, e.g. 'NO_UPFRONT'
     */
    inline void SetOfferingType(const OfferingType& value) { m_offeringType = value; }

    /**
     * Offering type, e.g. 'NO_UPFRONT'
     */
    inline void SetOfferingType(OfferingType&& value) { m_offeringType = std::move(value); }

    /**
     * Offering type, e.g. 'NO_UPFRONT'
     */
    inline DeleteReservationResult& WithOfferingType(const OfferingType& value) { SetOfferingType(value); return *this;}

    /**
     * Offering type, e.g. 'NO_UPFRONT'
     */
    inline DeleteReservationResult& WithOfferingType(OfferingType&& value) { SetOfferingType(std::move(value)); return *this;}


    /**
     * AWS region, e.g. 'us-west-2'
     */
    inline const Aws::String& GetRegion() const{ return m_region; }

    /**
     * AWS region, e.g. 'us-west-2'
     */
    inline void SetRegion(const Aws::String& value) { m_region = value; }

    /**
     * AWS region, e.g. 'us-west-2'
     */
    inline void SetRegion(Aws::String&& value) { m_region = std::move(value); }

    /**
     * AWS region, e.g. 'us-west-2'
     */
    inline void SetRegion(const char* value) { m_region.assign(value); }

    /**
     * AWS region, e.g. 'us-west-2'
     */
    inline DeleteReservationResult& WithRegion(const Aws::String& value) { SetRegion(value); return *this;}

    /**
     * AWS region, e.g. 'us-west-2'
     */
    inline DeleteReservationResult& WithRegion(Aws::String&& value) { SetRegion(std::move(value)); return *this;}

    /**
     * AWS region, e.g. 'us-west-2'
     */
    inline DeleteReservationResult& WithRegion(const char* value) { SetRegion(value); return *this;}


    /**
     * Unique reservation ID, e.g. '1234567'
     */
    inline const Aws::String& GetReservationId() const{ return m_reservationId; }

    /**
     * Unique reservation ID, e.g. '1234567'
     */
    inline void SetReservationId(const Aws::String& value) { m_reservationId = value; }

    /**
     * Unique reservation ID, e.g. '1234567'
     */
    inline void SetReservationId(Aws::String&& value) { m_reservationId = std::move(value); }

    /**
     * Unique reservation ID, e.g. '1234567'
     */
    inline void SetReservationId(const char* value) { m_reservationId.assign(value); }

    /**
     * Unique reservation ID, e.g. '1234567'
     */
    inline DeleteReservationResult& WithReservationId(const Aws::String& value) { SetReservationId(value); return *this;}

    /**
     * Unique reservation ID, e.g. '1234567'
     */
    inline DeleteReservationResult& WithReservationId(Aws::String&& value) { SetReservationId(std::move(value)); return *this;}

    /**
     * Unique reservation ID, e.g. '1234567'
     */
    inline DeleteReservationResult& WithReservationId(const char* value) { SetReservationId(value); return *this;}


    /**
     * Resource configuration details
     */
    inline const ReservationResourceSpecification& GetResourceSpecification() const{ return m_resourceSpecification; }

    /**
     * Resource configuration details
     */
    inline void SetResourceSpecification(const ReservationResourceSpecification& value) { m_resourceSpecification = value; }

    /**
     * Resource configuration details
     */
    inline void SetResourceSpecification(ReservationResourceSpecification&& value) { m_resourceSpecification = std::move(value); }

    /**
     * Resource configuration details
     */
    inline DeleteReservationResult& WithResourceSpecification(const ReservationResourceSpecification& value) { SetResourceSpecification(value); return *this;}

    /**
     * Resource configuration details
     */
    inline DeleteReservationResult& WithResourceSpecification(ReservationResourceSpecification&& value) { SetResourceSpecification(std::move(value)); return *this;}


    /**
     * Reservation UTC start date and time in ISO-8601 format, e.g.
     * '2018-03-01T00:00:00'
     */
    inline const Aws::String& GetStart() const{ return m_start; }

    /**
     * Reservation UTC start date and time in ISO-8601 format, e.g.
     * '2018-03-01T00:00:00'
     */
    inline void SetStart(const Aws::String& value) { m_start = value; }

    /**
     * Reservation UTC start date and time in ISO-8601 format, e.g.
     * '2018-03-01T00:00:00'
     */
    inline void SetStart(Aws::String&& value) { m_start = std::move(value); }

    /**
     * Reservation UTC start date and time in ISO-8601 format, e.g.
     * '2018-03-01T00:00:00'
     */
    inline void SetStart(const char* value) { m_start.assign(value); }

    /**
     * Reservation UTC start date and time in ISO-8601 format, e.g.
     * '2018-03-01T00:00:00'
     */
    inline DeleteReservationResult& WithStart(const Aws::String& value) { SetStart(value); return *this;}

    /**
     * Reservation UTC start date and time in ISO-8601 format, e.g.
     * '2018-03-01T00:00:00'
     */
    inline DeleteReservationResult& WithStart(Aws::String&& value) { SetStart(std::move(value)); return *this;}

    /**
     * Reservation UTC start date and time in ISO-8601 format, e.g.
     * '2018-03-01T00:00:00'
     */
    inline DeleteReservationResult& WithStart(const char* value) { SetStart(value); return *this;}


    /**
     * Current state of reservation, e.g. 'ACTIVE'
     */
    inline const ReservationState& GetState() const{ return m_state; }

    /**
     * Current state of reservation, e.g. 'ACTIVE'
     */
    inline void SetState(const ReservationState& value) { m_state = value; }

    /**
     * Current state of reservation, e.g. 'ACTIVE'
     */
    inline void SetState(ReservationState&& value) { m_state = std::move(value); }

    /**
     * Current state of reservation, e.g. 'ACTIVE'
     */
    inline DeleteReservationResult& WithState(const ReservationState& value) { SetState(value); return *this;}

    /**
     * Current state of reservation, e.g. 'ACTIVE'
     */
    inline DeleteReservationResult& WithState(ReservationState&& value) { SetState(std::move(value)); return *this;}


    /**
     * Recurring usage charge for each reserved resource, e.g. '157.0'
     */
    inline double GetUsagePrice() const{ return m_usagePrice; }

    /**
     * Recurring usage charge for each reserved resource, e.g. '157.0'
     */
    inline void SetUsagePrice(double value) { m_usagePrice = value; }

    /**
     * Recurring usage charge for each reserved resource, e.g. '157.0'
     */
    inline DeleteReservationResult& WithUsagePrice(double value) { SetUsagePrice(value); return *this;}

  private:

    Aws::String m_arn;

    int m_count;

    Aws::String m_currencyCode;

    int m_duration;

    OfferingDurationUnits m_durationUnits;

    Aws::String m_end;

    double m_fixedPrice;

    Aws::String m_name;

    Aws::String m_offeringDescription;

    Aws::String m_offeringId;

    OfferingType m_offeringType;

    Aws::String m_region;

    Aws::String m_reservationId;

    ReservationResourceSpecification m_resourceSpecification;

    Aws::String m_start;

    ReservationState m_state;

    double m_usagePrice;
  };

} // namespace Model
} // namespace MediaLive
} // namespace Aws
