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
#include <aws/medialive/MediaLiveRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace MediaLive
{
namespace Model
{

  /**
   * Request to update a reservation<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/UpdateReservationRequest">AWS
   * API Reference</a></p>
   */
  class AWS_MEDIALIVE_API UpdateReservationRequest : public MediaLiveRequest
  {
  public:
    UpdateReservationRequest();
    
    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateReservation"; }

    Aws::String SerializePayload() const override;


    /**
     * Name of the reservation
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * Name of the reservation
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * Name of the reservation
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * Name of the reservation
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * Name of the reservation
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * Name of the reservation
     */
    inline UpdateReservationRequest& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * Name of the reservation
     */
    inline UpdateReservationRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * Name of the reservation
     */
    inline UpdateReservationRequest& WithName(const char* value) { SetName(value); return *this;}


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
    inline UpdateReservationRequest& WithReservationId(const Aws::String& value) { SetReservationId(value); return *this;}

    /**
     * Unique reservation ID, e.g. '1234567'
     */
    inline UpdateReservationRequest& WithReservationId(Aws::String&& value) { SetReservationId(std::move(value)); return *this;}

    /**
     * Unique reservation ID, e.g. '1234567'
     */
    inline UpdateReservationRequest& WithReservationId(const char* value) { SetReservationId(value); return *this;}

  private:

    Aws::String m_name;
    bool m_nameHasBeenSet;

    Aws::String m_reservationId;
    bool m_reservationIdHasBeenSet;
  };

} // namespace Model
} // namespace MediaLive
} // namespace Aws
