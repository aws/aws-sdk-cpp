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
   */
  class DescribeReservationRequest : public MediaConnectRequest
  {
  public:
    AWS_MEDIACONNECT_API DescribeReservationRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeReservation"; }

    AWS_MEDIACONNECT_API Aws::String SerializePayload() const override;


    /**
     * The Amazon Resource Name (ARN) of the reservation.
     */
    inline const Aws::String& GetReservationArn() const{ return m_reservationArn; }

    /**
     * The Amazon Resource Name (ARN) of the reservation.
     */
    inline bool ReservationArnHasBeenSet() const { return m_reservationArnHasBeenSet; }

    /**
     * The Amazon Resource Name (ARN) of the reservation.
     */
    inline void SetReservationArn(const Aws::String& value) { m_reservationArnHasBeenSet = true; m_reservationArn = value; }

    /**
     * The Amazon Resource Name (ARN) of the reservation.
     */
    inline void SetReservationArn(Aws::String&& value) { m_reservationArnHasBeenSet = true; m_reservationArn = std::move(value); }

    /**
     * The Amazon Resource Name (ARN) of the reservation.
     */
    inline void SetReservationArn(const char* value) { m_reservationArnHasBeenSet = true; m_reservationArn.assign(value); }

    /**
     * The Amazon Resource Name (ARN) of the reservation.
     */
    inline DescribeReservationRequest& WithReservationArn(const Aws::String& value) { SetReservationArn(value); return *this;}

    /**
     * The Amazon Resource Name (ARN) of the reservation.
     */
    inline DescribeReservationRequest& WithReservationArn(Aws::String&& value) { SetReservationArn(std::move(value)); return *this;}

    /**
     * The Amazon Resource Name (ARN) of the reservation.
     */
    inline DescribeReservationRequest& WithReservationArn(const char* value) { SetReservationArn(value); return *this;}

  private:

    Aws::String m_reservationArn;
    bool m_reservationArnHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaConnect
} // namespace Aws
