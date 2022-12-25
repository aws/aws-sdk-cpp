/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/medialive/MediaLive_EXPORTS.h>
#include <aws/medialive/MediaLiveRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/medialive/model/RenewalSettings.h>
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
  class UpdateReservationRequest : public MediaLiveRequest
  {
  public:
    AWS_MEDIALIVE_API UpdateReservationRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateReservation"; }

    AWS_MEDIALIVE_API Aws::String SerializePayload() const override;


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
     * Renewal settings for the reservation
     */
    inline const RenewalSettings& GetRenewalSettings() const{ return m_renewalSettings; }

    /**
     * Renewal settings for the reservation
     */
    inline bool RenewalSettingsHasBeenSet() const { return m_renewalSettingsHasBeenSet; }

    /**
     * Renewal settings for the reservation
     */
    inline void SetRenewalSettings(const RenewalSettings& value) { m_renewalSettingsHasBeenSet = true; m_renewalSettings = value; }

    /**
     * Renewal settings for the reservation
     */
    inline void SetRenewalSettings(RenewalSettings&& value) { m_renewalSettingsHasBeenSet = true; m_renewalSettings = std::move(value); }

    /**
     * Renewal settings for the reservation
     */
    inline UpdateReservationRequest& WithRenewalSettings(const RenewalSettings& value) { SetRenewalSettings(value); return *this;}

    /**
     * Renewal settings for the reservation
     */
    inline UpdateReservationRequest& WithRenewalSettings(RenewalSettings&& value) { SetRenewalSettings(std::move(value)); return *this;}


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
    bool m_nameHasBeenSet = false;

    RenewalSettings m_renewalSettings;
    bool m_renewalSettingsHasBeenSet = false;

    Aws::String m_reservationId;
    bool m_reservationIdHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaLive
} // namespace Aws
