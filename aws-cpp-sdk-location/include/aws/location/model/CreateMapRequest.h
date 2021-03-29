/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/location/LocationService_EXPORTS.h>
#include <aws/location/LocationServiceRequest.h>
#include <aws/location/model/MapConfiguration.h>
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
  class AWS_LOCATIONSERVICE_API CreateMapRequest : public LocationServiceRequest
  {
  public:
    CreateMapRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateMap"; }

    Aws::String SerializePayload() const override;


    /**
     * <p>Specifies the map style selected from an available data provider.</p>
     */
    inline const MapConfiguration& GetConfiguration() const{ return m_configuration; }

    /**
     * <p>Specifies the map style selected from an available data provider.</p>
     */
    inline bool ConfigurationHasBeenSet() const { return m_configurationHasBeenSet; }

    /**
     * <p>Specifies the map style selected from an available data provider.</p>
     */
    inline void SetConfiguration(const MapConfiguration& value) { m_configurationHasBeenSet = true; m_configuration = value; }

    /**
     * <p>Specifies the map style selected from an available data provider.</p>
     */
    inline void SetConfiguration(MapConfiguration&& value) { m_configurationHasBeenSet = true; m_configuration = std::move(value); }

    /**
     * <p>Specifies the map style selected from an available data provider.</p>
     */
    inline CreateMapRequest& WithConfiguration(const MapConfiguration& value) { SetConfiguration(value); return *this;}

    /**
     * <p>Specifies the map style selected from an available data provider.</p>
     */
    inline CreateMapRequest& WithConfiguration(MapConfiguration&& value) { SetConfiguration(std::move(value)); return *this;}


    /**
     * <p>An optional description for the map resource.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>An optional description for the map resource.</p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>An optional description for the map resource.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>An optional description for the map resource.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>An optional description for the map resource.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>An optional description for the map resource.</p>
     */
    inline CreateMapRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>An optional description for the map resource.</p>
     */
    inline CreateMapRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>An optional description for the map resource.</p>
     */
    inline CreateMapRequest& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>The name for the map resource.</p> <p>Requirements:</p> <ul> <li> <p>Must
     * contain only alphanumeric characters (A–Z, a–z, 0–9), hyphens (-), periods (.),
     * and underscores (_). </p> </li> <li> <p>Must be a unique map resource name. </p>
     * </li> <li> <p>No spaces allowed. For example, <code>ExampleMap</code>.</p> </li>
     * </ul>
     */
    inline const Aws::String& GetMapName() const{ return m_mapName; }

    /**
     * <p>The name for the map resource.</p> <p>Requirements:</p> <ul> <li> <p>Must
     * contain only alphanumeric characters (A–Z, a–z, 0–9), hyphens (-), periods (.),
     * and underscores (_). </p> </li> <li> <p>Must be a unique map resource name. </p>
     * </li> <li> <p>No spaces allowed. For example, <code>ExampleMap</code>.</p> </li>
     * </ul>
     */
    inline bool MapNameHasBeenSet() const { return m_mapNameHasBeenSet; }

    /**
     * <p>The name for the map resource.</p> <p>Requirements:</p> <ul> <li> <p>Must
     * contain only alphanumeric characters (A–Z, a–z, 0–9), hyphens (-), periods (.),
     * and underscores (_). </p> </li> <li> <p>Must be a unique map resource name. </p>
     * </li> <li> <p>No spaces allowed. For example, <code>ExampleMap</code>.</p> </li>
     * </ul>
     */
    inline void SetMapName(const Aws::String& value) { m_mapNameHasBeenSet = true; m_mapName = value; }

    /**
     * <p>The name for the map resource.</p> <p>Requirements:</p> <ul> <li> <p>Must
     * contain only alphanumeric characters (A–Z, a–z, 0–9), hyphens (-), periods (.),
     * and underscores (_). </p> </li> <li> <p>Must be a unique map resource name. </p>
     * </li> <li> <p>No spaces allowed. For example, <code>ExampleMap</code>.</p> </li>
     * </ul>
     */
    inline void SetMapName(Aws::String&& value) { m_mapNameHasBeenSet = true; m_mapName = std::move(value); }

    /**
     * <p>The name for the map resource.</p> <p>Requirements:</p> <ul> <li> <p>Must
     * contain only alphanumeric characters (A–Z, a–z, 0–9), hyphens (-), periods (.),
     * and underscores (_). </p> </li> <li> <p>Must be a unique map resource name. </p>
     * </li> <li> <p>No spaces allowed. For example, <code>ExampleMap</code>.</p> </li>
     * </ul>
     */
    inline void SetMapName(const char* value) { m_mapNameHasBeenSet = true; m_mapName.assign(value); }

    /**
     * <p>The name for the map resource.</p> <p>Requirements:</p> <ul> <li> <p>Must
     * contain only alphanumeric characters (A–Z, a–z, 0–9), hyphens (-), periods (.),
     * and underscores (_). </p> </li> <li> <p>Must be a unique map resource name. </p>
     * </li> <li> <p>No spaces allowed. For example, <code>ExampleMap</code>.</p> </li>
     * </ul>
     */
    inline CreateMapRequest& WithMapName(const Aws::String& value) { SetMapName(value); return *this;}

    /**
     * <p>The name for the map resource.</p> <p>Requirements:</p> <ul> <li> <p>Must
     * contain only alphanumeric characters (A–Z, a–z, 0–9), hyphens (-), periods (.),
     * and underscores (_). </p> </li> <li> <p>Must be a unique map resource name. </p>
     * </li> <li> <p>No spaces allowed. For example, <code>ExampleMap</code>.</p> </li>
     * </ul>
     */
    inline CreateMapRequest& WithMapName(Aws::String&& value) { SetMapName(std::move(value)); return *this;}

    /**
     * <p>The name for the map resource.</p> <p>Requirements:</p> <ul> <li> <p>Must
     * contain only alphanumeric characters (A–Z, a–z, 0–9), hyphens (-), periods (.),
     * and underscores (_). </p> </li> <li> <p>Must be a unique map resource name. </p>
     * </li> <li> <p>No spaces allowed. For example, <code>ExampleMap</code>.</p> </li>
     * </ul>
     */
    inline CreateMapRequest& WithMapName(const char* value) { SetMapName(value); return *this;}


    /**
     * <p>Specifies the pricing plan for your map resource.</p> <p>For additional
     * details and restrictions on each pricing plan option, see the <a
     * href="https://aws.amazon.com/location/pricing/">Amazon Location Service pricing
     * page</a>.</p>
     */
    inline const PricingPlan& GetPricingPlan() const{ return m_pricingPlan; }

    /**
     * <p>Specifies the pricing plan for your map resource.</p> <p>For additional
     * details and restrictions on each pricing plan option, see the <a
     * href="https://aws.amazon.com/location/pricing/">Amazon Location Service pricing
     * page</a>.</p>
     */
    inline bool PricingPlanHasBeenSet() const { return m_pricingPlanHasBeenSet; }

    /**
     * <p>Specifies the pricing plan for your map resource.</p> <p>For additional
     * details and restrictions on each pricing plan option, see the <a
     * href="https://aws.amazon.com/location/pricing/">Amazon Location Service pricing
     * page</a>.</p>
     */
    inline void SetPricingPlan(const PricingPlan& value) { m_pricingPlanHasBeenSet = true; m_pricingPlan = value; }

    /**
     * <p>Specifies the pricing plan for your map resource.</p> <p>For additional
     * details and restrictions on each pricing plan option, see the <a
     * href="https://aws.amazon.com/location/pricing/">Amazon Location Service pricing
     * page</a>.</p>
     */
    inline void SetPricingPlan(PricingPlan&& value) { m_pricingPlanHasBeenSet = true; m_pricingPlan = std::move(value); }

    /**
     * <p>Specifies the pricing plan for your map resource.</p> <p>For additional
     * details and restrictions on each pricing plan option, see the <a
     * href="https://aws.amazon.com/location/pricing/">Amazon Location Service pricing
     * page</a>.</p>
     */
    inline CreateMapRequest& WithPricingPlan(const PricingPlan& value) { SetPricingPlan(value); return *this;}

    /**
     * <p>Specifies the pricing plan for your map resource.</p> <p>For additional
     * details and restrictions on each pricing plan option, see the <a
     * href="https://aws.amazon.com/location/pricing/">Amazon Location Service pricing
     * page</a>.</p>
     */
    inline CreateMapRequest& WithPricingPlan(PricingPlan&& value) { SetPricingPlan(std::move(value)); return *this;}

  private:

    MapConfiguration m_configuration;
    bool m_configurationHasBeenSet;

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
