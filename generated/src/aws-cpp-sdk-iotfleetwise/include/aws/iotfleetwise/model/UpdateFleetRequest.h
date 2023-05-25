/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotfleetwise/IoTFleetWise_EXPORTS.h>
#include <aws/iotfleetwise/IoTFleetWiseRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace IoTFleetWise
{
namespace Model
{

  /**
   */
  class UpdateFleetRequest : public IoTFleetWiseRequest
  {
  public:
    AWS_IOTFLEETWISE_API UpdateFleetRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateFleet"; }

    AWS_IOTFLEETWISE_API Aws::String SerializePayload() const override;

    AWS_IOTFLEETWISE_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p> The ID of the fleet to update. </p>
     */
    inline const Aws::String& GetFleetId() const{ return m_fleetId; }

    /**
     * <p> The ID of the fleet to update. </p>
     */
    inline bool FleetIdHasBeenSet() const { return m_fleetIdHasBeenSet; }

    /**
     * <p> The ID of the fleet to update. </p>
     */
    inline void SetFleetId(const Aws::String& value) { m_fleetIdHasBeenSet = true; m_fleetId = value; }

    /**
     * <p> The ID of the fleet to update. </p>
     */
    inline void SetFleetId(Aws::String&& value) { m_fleetIdHasBeenSet = true; m_fleetId = std::move(value); }

    /**
     * <p> The ID of the fleet to update. </p>
     */
    inline void SetFleetId(const char* value) { m_fleetIdHasBeenSet = true; m_fleetId.assign(value); }

    /**
     * <p> The ID of the fleet to update. </p>
     */
    inline UpdateFleetRequest& WithFleetId(const Aws::String& value) { SetFleetId(value); return *this;}

    /**
     * <p> The ID of the fleet to update. </p>
     */
    inline UpdateFleetRequest& WithFleetId(Aws::String&& value) { SetFleetId(std::move(value)); return *this;}

    /**
     * <p> The ID of the fleet to update. </p>
     */
    inline UpdateFleetRequest& WithFleetId(const char* value) { SetFleetId(value); return *this;}


    /**
     * <p> An updated description of the fleet. </p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p> An updated description of the fleet. </p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p> An updated description of the fleet. </p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p> An updated description of the fleet. </p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p> An updated description of the fleet. </p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p> An updated description of the fleet. </p>
     */
    inline UpdateFleetRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p> An updated description of the fleet. </p>
     */
    inline UpdateFleetRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p> An updated description of the fleet. </p>
     */
    inline UpdateFleetRequest& WithDescription(const char* value) { SetDescription(value); return *this;}

  private:

    Aws::String m_fleetId;
    bool m_fleetIdHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTFleetWise
} // namespace Aws
