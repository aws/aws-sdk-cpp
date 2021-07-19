﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/location/LocationService_EXPORTS.h>
#include <aws/location/LocationServiceRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/location/model/PricingPlan.h>
#include <utility>

namespace Aws
{
namespace LocationService
{
namespace Model
{

  /**
   */
  class AWS_LOCATIONSERVICE_API UpdateMapRequest : public LocationServiceRequest
  {
  public:
    UpdateMapRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateMap"; }

    Aws::String SerializePayload() const override;


    /**
     * <p>Updates the description for the map resource.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>Updates the description for the map resource.</p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>Updates the description for the map resource.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>Updates the description for the map resource.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>Updates the description for the map resource.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>Updates the description for the map resource.</p>
     */
    inline UpdateMapRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>Updates the description for the map resource.</p>
     */
    inline UpdateMapRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>Updates the description for the map resource.</p>
     */
    inline UpdateMapRequest& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>The name of the map resource to update.</p>
     */
    inline const Aws::String& GetMapName() const{ return m_mapName; }

    /**
     * <p>The name of the map resource to update.</p>
     */
    inline bool MapNameHasBeenSet() const { return m_mapNameHasBeenSet; }

    /**
     * <p>The name of the map resource to update.</p>
     */
    inline void SetMapName(const Aws::String& value) { m_mapNameHasBeenSet = true; m_mapName = value; }

    /**
     * <p>The name of the map resource to update.</p>
     */
    inline void SetMapName(Aws::String&& value) { m_mapNameHasBeenSet = true; m_mapName = std::move(value); }

    /**
     * <p>The name of the map resource to update.</p>
     */
    inline void SetMapName(const char* value) { m_mapNameHasBeenSet = true; m_mapName.assign(value); }

    /**
     * <p>The name of the map resource to update.</p>
     */
    inline UpdateMapRequest& WithMapName(const Aws::String& value) { SetMapName(value); return *this;}

    /**
     * <p>The name of the map resource to update.</p>
     */
    inline UpdateMapRequest& WithMapName(Aws::String&& value) { SetMapName(std::move(value)); return *this;}

    /**
     * <p>The name of the map resource to update.</p>
     */
    inline UpdateMapRequest& WithMapName(const char* value) { SetMapName(value); return *this;}


    /**
     * <p>Updates the pricing plan for the map resource.</p> <p>For more information
     * about each pricing plan option restrictions, see <a
     * href="https://aws.amazon.com/location/pricing/">Amazon Location Service
     * pricing</a>.</p>
     */
    inline const PricingPlan& GetPricingPlan() const{ return m_pricingPlan; }

    /**
     * <p>Updates the pricing plan for the map resource.</p> <p>For more information
     * about each pricing plan option restrictions, see <a
     * href="https://aws.amazon.com/location/pricing/">Amazon Location Service
     * pricing</a>.</p>
     */
    inline bool PricingPlanHasBeenSet() const { return m_pricingPlanHasBeenSet; }

    /**
     * <p>Updates the pricing plan for the map resource.</p> <p>For more information
     * about each pricing plan option restrictions, see <a
     * href="https://aws.amazon.com/location/pricing/">Amazon Location Service
     * pricing</a>.</p>
     */
    inline void SetPricingPlan(const PricingPlan& value) { m_pricingPlanHasBeenSet = true; m_pricingPlan = value; }

    /**
     * <p>Updates the pricing plan for the map resource.</p> <p>For more information
     * about each pricing plan option restrictions, see <a
     * href="https://aws.amazon.com/location/pricing/">Amazon Location Service
     * pricing</a>.</p>
     */
    inline void SetPricingPlan(PricingPlan&& value) { m_pricingPlanHasBeenSet = true; m_pricingPlan = std::move(value); }

    /**
     * <p>Updates the pricing plan for the map resource.</p> <p>For more information
     * about each pricing plan option restrictions, see <a
     * href="https://aws.amazon.com/location/pricing/">Amazon Location Service
     * pricing</a>.</p>
     */
    inline UpdateMapRequest& WithPricingPlan(const PricingPlan& value) { SetPricingPlan(value); return *this;}

    /**
     * <p>Updates the pricing plan for the map resource.</p> <p>For more information
     * about each pricing plan option restrictions, see <a
     * href="https://aws.amazon.com/location/pricing/">Amazon Location Service
     * pricing</a>.</p>
     */
    inline UpdateMapRequest& WithPricingPlan(PricingPlan&& value) { SetPricingPlan(std::move(value)); return *this;}

  private:

    Aws::String m_description;
    bool m_descriptionHasBeenSet;

    Aws::String m_mapName;
    bool m_mapNameHasBeenSet;

    PricingPlan m_pricingPlan;
    bool m_pricingPlanHasBeenSet;
  };

} // namespace Model
} // namespace LocationService
} // namespace Aws
