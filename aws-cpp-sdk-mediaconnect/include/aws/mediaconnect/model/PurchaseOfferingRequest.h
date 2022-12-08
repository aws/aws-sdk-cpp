/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mediaconnect/MediaConnect_EXPORTS.h>
#include <aws/mediaconnect/MediaConnectRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace MediaConnect
{
namespace Model
{

  /**
   * A request to purchase a offering.<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconnect-2018-11-14/PurchaseOfferingRequest">AWS
   * API Reference</a></p>
   */
  class PurchaseOfferingRequest : public MediaConnectRequest
  {
  public:
    AWS_MEDIACONNECT_API PurchaseOfferingRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "PurchaseOffering"; }

    AWS_MEDIACONNECT_API Aws::String SerializePayload() const override;


    /**
     * The Amazon Resource Name (ARN) of the offering.
     */
    inline const Aws::String& GetOfferingArn() const{ return m_offeringArn; }

    /**
     * The Amazon Resource Name (ARN) of the offering.
     */
    inline bool OfferingArnHasBeenSet() const { return m_offeringArnHasBeenSet; }

    /**
     * The Amazon Resource Name (ARN) of the offering.
     */
    inline void SetOfferingArn(const Aws::String& value) { m_offeringArnHasBeenSet = true; m_offeringArn = value; }

    /**
     * The Amazon Resource Name (ARN) of the offering.
     */
    inline void SetOfferingArn(Aws::String&& value) { m_offeringArnHasBeenSet = true; m_offeringArn = std::move(value); }

    /**
     * The Amazon Resource Name (ARN) of the offering.
     */
    inline void SetOfferingArn(const char* value) { m_offeringArnHasBeenSet = true; m_offeringArn.assign(value); }

    /**
     * The Amazon Resource Name (ARN) of the offering.
     */
    inline PurchaseOfferingRequest& WithOfferingArn(const Aws::String& value) { SetOfferingArn(value); return *this;}

    /**
     * The Amazon Resource Name (ARN) of the offering.
     */
    inline PurchaseOfferingRequest& WithOfferingArn(Aws::String&& value) { SetOfferingArn(std::move(value)); return *this;}

    /**
     * The Amazon Resource Name (ARN) of the offering.
     */
    inline PurchaseOfferingRequest& WithOfferingArn(const char* value) { SetOfferingArn(value); return *this;}


    /**
     * The name that you want to use for the reservation.
     */
    inline const Aws::String& GetReservationName() const{ return m_reservationName; }

    /**
     * The name that you want to use for the reservation.
     */
    inline bool ReservationNameHasBeenSet() const { return m_reservationNameHasBeenSet; }

    /**
     * The name that you want to use for the reservation.
     */
    inline void SetReservationName(const Aws::String& value) { m_reservationNameHasBeenSet = true; m_reservationName = value; }

    /**
     * The name that you want to use for the reservation.
     */
    inline void SetReservationName(Aws::String&& value) { m_reservationNameHasBeenSet = true; m_reservationName = std::move(value); }

    /**
     * The name that you want to use for the reservation.
     */
    inline void SetReservationName(const char* value) { m_reservationNameHasBeenSet = true; m_reservationName.assign(value); }

    /**
     * The name that you want to use for the reservation.
     */
    inline PurchaseOfferingRequest& WithReservationName(const Aws::String& value) { SetReservationName(value); return *this;}

    /**
     * The name that you want to use for the reservation.
     */
    inline PurchaseOfferingRequest& WithReservationName(Aws::String&& value) { SetReservationName(std::move(value)); return *this;}

    /**
     * The name that you want to use for the reservation.
     */
    inline PurchaseOfferingRequest& WithReservationName(const char* value) { SetReservationName(value); return *this;}


    /**
     * The date and time that you want the reservation to begin, in Coordinated
     * Universal Time (UTC). You can specify any date and time between 12:00am on the
     * first day of the current month to the current time on today's date, inclusive.
     * Specify the start in a 24-hour notation. Use the following format:
     * YYYY-MM-DDTHH:mm:SSZ, where T and Z are literal characters. For example, to
     * specify 11:30pm on March 5, 2020, enter 2020-03-05T23:30:00Z.
     */
    inline const Aws::String& GetStart() const{ return m_start; }

    /**
     * The date and time that you want the reservation to begin, in Coordinated
     * Universal Time (UTC). You can specify any date and time between 12:00am on the
     * first day of the current month to the current time on today's date, inclusive.
     * Specify the start in a 24-hour notation. Use the following format:
     * YYYY-MM-DDTHH:mm:SSZ, where T and Z are literal characters. For example, to
     * specify 11:30pm on March 5, 2020, enter 2020-03-05T23:30:00Z.
     */
    inline bool StartHasBeenSet() const { return m_startHasBeenSet; }

    /**
     * The date and time that you want the reservation to begin, in Coordinated
     * Universal Time (UTC). You can specify any date and time between 12:00am on the
     * first day of the current month to the current time on today's date, inclusive.
     * Specify the start in a 24-hour notation. Use the following format:
     * YYYY-MM-DDTHH:mm:SSZ, where T and Z are literal characters. For example, to
     * specify 11:30pm on March 5, 2020, enter 2020-03-05T23:30:00Z.
     */
    inline void SetStart(const Aws::String& value) { m_startHasBeenSet = true; m_start = value; }

    /**
     * The date and time that you want the reservation to begin, in Coordinated
     * Universal Time (UTC). You can specify any date and time between 12:00am on the
     * first day of the current month to the current time on today's date, inclusive.
     * Specify the start in a 24-hour notation. Use the following format:
     * YYYY-MM-DDTHH:mm:SSZ, where T and Z are literal characters. For example, to
     * specify 11:30pm on March 5, 2020, enter 2020-03-05T23:30:00Z.
     */
    inline void SetStart(Aws::String&& value) { m_startHasBeenSet = true; m_start = std::move(value); }

    /**
     * The date and time that you want the reservation to begin, in Coordinated
     * Universal Time (UTC). You can specify any date and time between 12:00am on the
     * first day of the current month to the current time on today's date, inclusive.
     * Specify the start in a 24-hour notation. Use the following format:
     * YYYY-MM-DDTHH:mm:SSZ, where T and Z are literal characters. For example, to
     * specify 11:30pm on March 5, 2020, enter 2020-03-05T23:30:00Z.
     */
    inline void SetStart(const char* value) { m_startHasBeenSet = true; m_start.assign(value); }

    /**
     * The date and time that you want the reservation to begin, in Coordinated
     * Universal Time (UTC). You can specify any date and time between 12:00am on the
     * first day of the current month to the current time on today's date, inclusive.
     * Specify the start in a 24-hour notation. Use the following format:
     * YYYY-MM-DDTHH:mm:SSZ, where T and Z are literal characters. For example, to
     * specify 11:30pm on March 5, 2020, enter 2020-03-05T23:30:00Z.
     */
    inline PurchaseOfferingRequest& WithStart(const Aws::String& value) { SetStart(value); return *this;}

    /**
     * The date and time that you want the reservation to begin, in Coordinated
     * Universal Time (UTC). You can specify any date and time between 12:00am on the
     * first day of the current month to the current time on today's date, inclusive.
     * Specify the start in a 24-hour notation. Use the following format:
     * YYYY-MM-DDTHH:mm:SSZ, where T and Z are literal characters. For example, to
     * specify 11:30pm on March 5, 2020, enter 2020-03-05T23:30:00Z.
     */
    inline PurchaseOfferingRequest& WithStart(Aws::String&& value) { SetStart(std::move(value)); return *this;}

    /**
     * The date and time that you want the reservation to begin, in Coordinated
     * Universal Time (UTC). You can specify any date and time between 12:00am on the
     * first day of the current month to the current time on today's date, inclusive.
     * Specify the start in a 24-hour notation. Use the following format:
     * YYYY-MM-DDTHH:mm:SSZ, where T and Z are literal characters. For example, to
     * specify 11:30pm on March 5, 2020, enter 2020-03-05T23:30:00Z.
     */
    inline PurchaseOfferingRequest& WithStart(const char* value) { SetStart(value); return *this;}

  private:

    Aws::String m_offeringArn;
    bool m_offeringArnHasBeenSet = false;

    Aws::String m_reservationName;
    bool m_reservationNameHasBeenSet = false;

    Aws::String m_start;
    bool m_startHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaConnect
} // namespace Aws
