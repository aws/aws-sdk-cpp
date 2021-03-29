/**
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
  class AWS_LOCATIONSERVICE_API CreateGeofenceCollectionRequest : public LocationServiceRequest
  {
  public:
    CreateGeofenceCollectionRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateGeofenceCollection"; }

    Aws::String SerializePayload() const override;


    /**
     * <p>A custom name for the geofence collection.</p> <p>Requirements:</p> <ul> <li>
     * <p>Contain only alphanumeric characters (A–Z, a–z, 0-9), hyphens (-), periods
     * (.), and underscores (_). </p> </li> <li> <p>Must be a unique geofence
     * collection name.</p> </li> <li> <p>No spaces allowed. For example,
     * <code>ExampleGeofenceCollection</code>.</p> </li> </ul>
     */
    inline const Aws::String& GetCollectionName() const{ return m_collectionName; }

    /**
     * <p>A custom name for the geofence collection.</p> <p>Requirements:</p> <ul> <li>
     * <p>Contain only alphanumeric characters (A–Z, a–z, 0-9), hyphens (-), periods
     * (.), and underscores (_). </p> </li> <li> <p>Must be a unique geofence
     * collection name.</p> </li> <li> <p>No spaces allowed. For example,
     * <code>ExampleGeofenceCollection</code>.</p> </li> </ul>
     */
    inline bool CollectionNameHasBeenSet() const { return m_collectionNameHasBeenSet; }

    /**
     * <p>A custom name for the geofence collection.</p> <p>Requirements:</p> <ul> <li>
     * <p>Contain only alphanumeric characters (A–Z, a–z, 0-9), hyphens (-), periods
     * (.), and underscores (_). </p> </li> <li> <p>Must be a unique geofence
     * collection name.</p> </li> <li> <p>No spaces allowed. For example,
     * <code>ExampleGeofenceCollection</code>.</p> </li> </ul>
     */
    inline void SetCollectionName(const Aws::String& value) { m_collectionNameHasBeenSet = true; m_collectionName = value; }

    /**
     * <p>A custom name for the geofence collection.</p> <p>Requirements:</p> <ul> <li>
     * <p>Contain only alphanumeric characters (A–Z, a–z, 0-9), hyphens (-), periods
     * (.), and underscores (_). </p> </li> <li> <p>Must be a unique geofence
     * collection name.</p> </li> <li> <p>No spaces allowed. For example,
     * <code>ExampleGeofenceCollection</code>.</p> </li> </ul>
     */
    inline void SetCollectionName(Aws::String&& value) { m_collectionNameHasBeenSet = true; m_collectionName = std::move(value); }

    /**
     * <p>A custom name for the geofence collection.</p> <p>Requirements:</p> <ul> <li>
     * <p>Contain only alphanumeric characters (A–Z, a–z, 0-9), hyphens (-), periods
     * (.), and underscores (_). </p> </li> <li> <p>Must be a unique geofence
     * collection name.</p> </li> <li> <p>No spaces allowed. For example,
     * <code>ExampleGeofenceCollection</code>.</p> </li> </ul>
     */
    inline void SetCollectionName(const char* value) { m_collectionNameHasBeenSet = true; m_collectionName.assign(value); }

    /**
     * <p>A custom name for the geofence collection.</p> <p>Requirements:</p> <ul> <li>
     * <p>Contain only alphanumeric characters (A–Z, a–z, 0-9), hyphens (-), periods
     * (.), and underscores (_). </p> </li> <li> <p>Must be a unique geofence
     * collection name.</p> </li> <li> <p>No spaces allowed. For example,
     * <code>ExampleGeofenceCollection</code>.</p> </li> </ul>
     */
    inline CreateGeofenceCollectionRequest& WithCollectionName(const Aws::String& value) { SetCollectionName(value); return *this;}

    /**
     * <p>A custom name for the geofence collection.</p> <p>Requirements:</p> <ul> <li>
     * <p>Contain only alphanumeric characters (A–Z, a–z, 0-9), hyphens (-), periods
     * (.), and underscores (_). </p> </li> <li> <p>Must be a unique geofence
     * collection name.</p> </li> <li> <p>No spaces allowed. For example,
     * <code>ExampleGeofenceCollection</code>.</p> </li> </ul>
     */
    inline CreateGeofenceCollectionRequest& WithCollectionName(Aws::String&& value) { SetCollectionName(std::move(value)); return *this;}

    /**
     * <p>A custom name for the geofence collection.</p> <p>Requirements:</p> <ul> <li>
     * <p>Contain only alphanumeric characters (A–Z, a–z, 0-9), hyphens (-), periods
     * (.), and underscores (_). </p> </li> <li> <p>Must be a unique geofence
     * collection name.</p> </li> <li> <p>No spaces allowed. For example,
     * <code>ExampleGeofenceCollection</code>.</p> </li> </ul>
     */
    inline CreateGeofenceCollectionRequest& WithCollectionName(const char* value) { SetCollectionName(value); return *this;}


    /**
     * <p>An optional description for the geofence collection.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>An optional description for the geofence collection.</p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>An optional description for the geofence collection.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>An optional description for the geofence collection.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>An optional description for the geofence collection.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>An optional description for the geofence collection.</p>
     */
    inline CreateGeofenceCollectionRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>An optional description for the geofence collection.</p>
     */
    inline CreateGeofenceCollectionRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>An optional description for the geofence collection.</p>
     */
    inline CreateGeofenceCollectionRequest& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>Specifies the pricing plan for your geofence collection.</p> <p>For
     * additional details and restrictions on each pricing plan option, see the <a
     * href="https://aws.amazon.com/location/pricing/">Amazon Location Service pricing
     * page</a>.</p>
     */
    inline const PricingPlan& GetPricingPlan() const{ return m_pricingPlan; }

    /**
     * <p>Specifies the pricing plan for your geofence collection.</p> <p>For
     * additional details and restrictions on each pricing plan option, see the <a
     * href="https://aws.amazon.com/location/pricing/">Amazon Location Service pricing
     * page</a>.</p>
     */
    inline bool PricingPlanHasBeenSet() const { return m_pricingPlanHasBeenSet; }

    /**
     * <p>Specifies the pricing plan for your geofence collection.</p> <p>For
     * additional details and restrictions on each pricing plan option, see the <a
     * href="https://aws.amazon.com/location/pricing/">Amazon Location Service pricing
     * page</a>.</p>
     */
    inline void SetPricingPlan(const PricingPlan& value) { m_pricingPlanHasBeenSet = true; m_pricingPlan = value; }

    /**
     * <p>Specifies the pricing plan for your geofence collection.</p> <p>For
     * additional details and restrictions on each pricing plan option, see the <a
     * href="https://aws.amazon.com/location/pricing/">Amazon Location Service pricing
     * page</a>.</p>
     */
    inline void SetPricingPlan(PricingPlan&& value) { m_pricingPlanHasBeenSet = true; m_pricingPlan = std::move(value); }

    /**
     * <p>Specifies the pricing plan for your geofence collection.</p> <p>For
     * additional details and restrictions on each pricing plan option, see the <a
     * href="https://aws.amazon.com/location/pricing/">Amazon Location Service pricing
     * page</a>.</p>
     */
    inline CreateGeofenceCollectionRequest& WithPricingPlan(const PricingPlan& value) { SetPricingPlan(value); return *this;}

    /**
     * <p>Specifies the pricing plan for your geofence collection.</p> <p>For
     * additional details and restrictions on each pricing plan option, see the <a
     * href="https://aws.amazon.com/location/pricing/">Amazon Location Service pricing
     * page</a>.</p>
     */
    inline CreateGeofenceCollectionRequest& WithPricingPlan(PricingPlan&& value) { SetPricingPlan(std::move(value)); return *this;}


    /**
     * <p>Specifies the plan data source. Required if the Mobile Asset Tracking (MAT)
     * or the Mobile Asset Management (MAM) pricing plan is selected.</p> <p>Billing is
     * determined by the resource usage, the associated pricing plan, and the data
     * source that was specified. For more information about each pricing plan option
     * and restrictions, see the <a
     * href="https://aws.amazon.com/location/pricing/">Amazon Location Service pricing
     * page</a>.</p> <p>Valid Values: <code>Esri </code>| <code>Here</code> </p>
     */
    inline const Aws::String& GetPricingPlanDataSource() const{ return m_pricingPlanDataSource; }

    /**
     * <p>Specifies the plan data source. Required if the Mobile Asset Tracking (MAT)
     * or the Mobile Asset Management (MAM) pricing plan is selected.</p> <p>Billing is
     * determined by the resource usage, the associated pricing plan, and the data
     * source that was specified. For more information about each pricing plan option
     * and restrictions, see the <a
     * href="https://aws.amazon.com/location/pricing/">Amazon Location Service pricing
     * page</a>.</p> <p>Valid Values: <code>Esri </code>| <code>Here</code> </p>
     */
    inline bool PricingPlanDataSourceHasBeenSet() const { return m_pricingPlanDataSourceHasBeenSet; }

    /**
     * <p>Specifies the plan data source. Required if the Mobile Asset Tracking (MAT)
     * or the Mobile Asset Management (MAM) pricing plan is selected.</p> <p>Billing is
     * determined by the resource usage, the associated pricing plan, and the data
     * source that was specified. For more information about each pricing plan option
     * and restrictions, see the <a
     * href="https://aws.amazon.com/location/pricing/">Amazon Location Service pricing
     * page</a>.</p> <p>Valid Values: <code>Esri </code>| <code>Here</code> </p>
     */
    inline void SetPricingPlanDataSource(const Aws::String& value) { m_pricingPlanDataSourceHasBeenSet = true; m_pricingPlanDataSource = value; }

    /**
     * <p>Specifies the plan data source. Required if the Mobile Asset Tracking (MAT)
     * or the Mobile Asset Management (MAM) pricing plan is selected.</p> <p>Billing is
     * determined by the resource usage, the associated pricing plan, and the data
     * source that was specified. For more information about each pricing plan option
     * and restrictions, see the <a
     * href="https://aws.amazon.com/location/pricing/">Amazon Location Service pricing
     * page</a>.</p> <p>Valid Values: <code>Esri </code>| <code>Here</code> </p>
     */
    inline void SetPricingPlanDataSource(Aws::String&& value) { m_pricingPlanDataSourceHasBeenSet = true; m_pricingPlanDataSource = std::move(value); }

    /**
     * <p>Specifies the plan data source. Required if the Mobile Asset Tracking (MAT)
     * or the Mobile Asset Management (MAM) pricing plan is selected.</p> <p>Billing is
     * determined by the resource usage, the associated pricing plan, and the data
     * source that was specified. For more information about each pricing plan option
     * and restrictions, see the <a
     * href="https://aws.amazon.com/location/pricing/">Amazon Location Service pricing
     * page</a>.</p> <p>Valid Values: <code>Esri </code>| <code>Here</code> </p>
     */
    inline void SetPricingPlanDataSource(const char* value) { m_pricingPlanDataSourceHasBeenSet = true; m_pricingPlanDataSource.assign(value); }

    /**
     * <p>Specifies the plan data source. Required if the Mobile Asset Tracking (MAT)
     * or the Mobile Asset Management (MAM) pricing plan is selected.</p> <p>Billing is
     * determined by the resource usage, the associated pricing plan, and the data
     * source that was specified. For more information about each pricing plan option
     * and restrictions, see the <a
     * href="https://aws.amazon.com/location/pricing/">Amazon Location Service pricing
     * page</a>.</p> <p>Valid Values: <code>Esri </code>| <code>Here</code> </p>
     */
    inline CreateGeofenceCollectionRequest& WithPricingPlanDataSource(const Aws::String& value) { SetPricingPlanDataSource(value); return *this;}

    /**
     * <p>Specifies the plan data source. Required if the Mobile Asset Tracking (MAT)
     * or the Mobile Asset Management (MAM) pricing plan is selected.</p> <p>Billing is
     * determined by the resource usage, the associated pricing plan, and the data
     * source that was specified. For more information about each pricing plan option
     * and restrictions, see the <a
     * href="https://aws.amazon.com/location/pricing/">Amazon Location Service pricing
     * page</a>.</p> <p>Valid Values: <code>Esri </code>| <code>Here</code> </p>
     */
    inline CreateGeofenceCollectionRequest& WithPricingPlanDataSource(Aws::String&& value) { SetPricingPlanDataSource(std::move(value)); return *this;}

    /**
     * <p>Specifies the plan data source. Required if the Mobile Asset Tracking (MAT)
     * or the Mobile Asset Management (MAM) pricing plan is selected.</p> <p>Billing is
     * determined by the resource usage, the associated pricing plan, and the data
     * source that was specified. For more information about each pricing plan option
     * and restrictions, see the <a
     * href="https://aws.amazon.com/location/pricing/">Amazon Location Service pricing
     * page</a>.</p> <p>Valid Values: <code>Esri </code>| <code>Here</code> </p>
     */
    inline CreateGeofenceCollectionRequest& WithPricingPlanDataSource(const char* value) { SetPricingPlanDataSource(value); return *this;}

  private:

    Aws::String m_collectionName;
    bool m_collectionNameHasBeenSet;

    Aws::String m_description;
    bool m_descriptionHasBeenSet;

    PricingPlan m_pricingPlan;
    bool m_pricingPlanHasBeenSet;

    Aws::String m_pricingPlanDataSource;
    bool m_pricingPlanDataSourceHasBeenSet;
  };

} // namespace Model
} // namespace LocationService
} // namespace Aws
