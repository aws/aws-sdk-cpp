/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/location/LocationService_EXPORTS.h>
#include <aws/location/LocationServiceRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/location/model/PositionFiltering.h>
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
  class AWS_LOCATIONSERVICE_API UpdateTrackerRequest : public LocationServiceRequest
  {
  public:
    UpdateTrackerRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateTracker"; }

    Aws::String SerializePayload() const override;


    /**
     * <p>Updates the description for the tracker resource.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>Updates the description for the tracker resource.</p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>Updates the description for the tracker resource.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>Updates the description for the tracker resource.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>Updates the description for the tracker resource.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>Updates the description for the tracker resource.</p>
     */
    inline UpdateTrackerRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>Updates the description for the tracker resource.</p>
     */
    inline UpdateTrackerRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>Updates the description for the tracker resource.</p>
     */
    inline UpdateTrackerRequest& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>Updates the position filtering for the tracker resource.</p> <p>Valid
     * values:</p> <ul> <li> <p> <code>TimeBased</code> - Location updates are
     * evaluated against linked geofence collections, but not every location update is
     * stored. If your update frequency is more often than 30 seconds, only one update
     * per 30 seconds is stored for each unique device ID. </p> </li> <li> <p>
     * <code>DistanceBased</code> - If the device has moved less than 30 m (98.4 ft),
     * location updates are ignored. Location updates within this distance are neither
     * evaluated against linked geofence collections, nor stored. This helps control
     * costs by reducing the number of geofence evaluations and historical device
     * positions to paginate through. Distance-based filtering can also reduce the
     * effects of GPS noise when displaying device trajectories on a map. </p> </li>
     * <li> <p> <code>AccuracyBased</code> - If the device has moved less than the
     * measured accuracy, location updates are ignored. For example, if two consecutive
     * updates from a device have a horizontal accuracy of 5 m and 10 m, the second
     * update is ignored if the device has moved less than 15 m. Ignored location
     * updates are neither evaluated against linked geofence collections, nor stored.
     * This helps educe the effects of GPS noise when displaying device trajectories on
     * a map, and can help control costs by reducing the number of geofence
     * evaluations. </p> </li> </ul>
     */
    inline const PositionFiltering& GetPositionFiltering() const{ return m_positionFiltering; }

    /**
     * <p>Updates the position filtering for the tracker resource.</p> <p>Valid
     * values:</p> <ul> <li> <p> <code>TimeBased</code> - Location updates are
     * evaluated against linked geofence collections, but not every location update is
     * stored. If your update frequency is more often than 30 seconds, only one update
     * per 30 seconds is stored for each unique device ID. </p> </li> <li> <p>
     * <code>DistanceBased</code> - If the device has moved less than 30 m (98.4 ft),
     * location updates are ignored. Location updates within this distance are neither
     * evaluated against linked geofence collections, nor stored. This helps control
     * costs by reducing the number of geofence evaluations and historical device
     * positions to paginate through. Distance-based filtering can also reduce the
     * effects of GPS noise when displaying device trajectories on a map. </p> </li>
     * <li> <p> <code>AccuracyBased</code> - If the device has moved less than the
     * measured accuracy, location updates are ignored. For example, if two consecutive
     * updates from a device have a horizontal accuracy of 5 m and 10 m, the second
     * update is ignored if the device has moved less than 15 m. Ignored location
     * updates are neither evaluated against linked geofence collections, nor stored.
     * This helps educe the effects of GPS noise when displaying device trajectories on
     * a map, and can help control costs by reducing the number of geofence
     * evaluations. </p> </li> </ul>
     */
    inline bool PositionFilteringHasBeenSet() const { return m_positionFilteringHasBeenSet; }

    /**
     * <p>Updates the position filtering for the tracker resource.</p> <p>Valid
     * values:</p> <ul> <li> <p> <code>TimeBased</code> - Location updates are
     * evaluated against linked geofence collections, but not every location update is
     * stored. If your update frequency is more often than 30 seconds, only one update
     * per 30 seconds is stored for each unique device ID. </p> </li> <li> <p>
     * <code>DistanceBased</code> - If the device has moved less than 30 m (98.4 ft),
     * location updates are ignored. Location updates within this distance are neither
     * evaluated against linked geofence collections, nor stored. This helps control
     * costs by reducing the number of geofence evaluations and historical device
     * positions to paginate through. Distance-based filtering can also reduce the
     * effects of GPS noise when displaying device trajectories on a map. </p> </li>
     * <li> <p> <code>AccuracyBased</code> - If the device has moved less than the
     * measured accuracy, location updates are ignored. For example, if two consecutive
     * updates from a device have a horizontal accuracy of 5 m and 10 m, the second
     * update is ignored if the device has moved less than 15 m. Ignored location
     * updates are neither evaluated against linked geofence collections, nor stored.
     * This helps educe the effects of GPS noise when displaying device trajectories on
     * a map, and can help control costs by reducing the number of geofence
     * evaluations. </p> </li> </ul>
     */
    inline void SetPositionFiltering(const PositionFiltering& value) { m_positionFilteringHasBeenSet = true; m_positionFiltering = value; }

    /**
     * <p>Updates the position filtering for the tracker resource.</p> <p>Valid
     * values:</p> <ul> <li> <p> <code>TimeBased</code> - Location updates are
     * evaluated against linked geofence collections, but not every location update is
     * stored. If your update frequency is more often than 30 seconds, only one update
     * per 30 seconds is stored for each unique device ID. </p> </li> <li> <p>
     * <code>DistanceBased</code> - If the device has moved less than 30 m (98.4 ft),
     * location updates are ignored. Location updates within this distance are neither
     * evaluated against linked geofence collections, nor stored. This helps control
     * costs by reducing the number of geofence evaluations and historical device
     * positions to paginate through. Distance-based filtering can also reduce the
     * effects of GPS noise when displaying device trajectories on a map. </p> </li>
     * <li> <p> <code>AccuracyBased</code> - If the device has moved less than the
     * measured accuracy, location updates are ignored. For example, if two consecutive
     * updates from a device have a horizontal accuracy of 5 m and 10 m, the second
     * update is ignored if the device has moved less than 15 m. Ignored location
     * updates are neither evaluated against linked geofence collections, nor stored.
     * This helps educe the effects of GPS noise when displaying device trajectories on
     * a map, and can help control costs by reducing the number of geofence
     * evaluations. </p> </li> </ul>
     */
    inline void SetPositionFiltering(PositionFiltering&& value) { m_positionFilteringHasBeenSet = true; m_positionFiltering = std::move(value); }

    /**
     * <p>Updates the position filtering for the tracker resource.</p> <p>Valid
     * values:</p> <ul> <li> <p> <code>TimeBased</code> - Location updates are
     * evaluated against linked geofence collections, but not every location update is
     * stored. If your update frequency is more often than 30 seconds, only one update
     * per 30 seconds is stored for each unique device ID. </p> </li> <li> <p>
     * <code>DistanceBased</code> - If the device has moved less than 30 m (98.4 ft),
     * location updates are ignored. Location updates within this distance are neither
     * evaluated against linked geofence collections, nor stored. This helps control
     * costs by reducing the number of geofence evaluations and historical device
     * positions to paginate through. Distance-based filtering can also reduce the
     * effects of GPS noise when displaying device trajectories on a map. </p> </li>
     * <li> <p> <code>AccuracyBased</code> - If the device has moved less than the
     * measured accuracy, location updates are ignored. For example, if two consecutive
     * updates from a device have a horizontal accuracy of 5 m and 10 m, the second
     * update is ignored if the device has moved less than 15 m. Ignored location
     * updates are neither evaluated against linked geofence collections, nor stored.
     * This helps educe the effects of GPS noise when displaying device trajectories on
     * a map, and can help control costs by reducing the number of geofence
     * evaluations. </p> </li> </ul>
     */
    inline UpdateTrackerRequest& WithPositionFiltering(const PositionFiltering& value) { SetPositionFiltering(value); return *this;}

    /**
     * <p>Updates the position filtering for the tracker resource.</p> <p>Valid
     * values:</p> <ul> <li> <p> <code>TimeBased</code> - Location updates are
     * evaluated against linked geofence collections, but not every location update is
     * stored. If your update frequency is more often than 30 seconds, only one update
     * per 30 seconds is stored for each unique device ID. </p> </li> <li> <p>
     * <code>DistanceBased</code> - If the device has moved less than 30 m (98.4 ft),
     * location updates are ignored. Location updates within this distance are neither
     * evaluated against linked geofence collections, nor stored. This helps control
     * costs by reducing the number of geofence evaluations and historical device
     * positions to paginate through. Distance-based filtering can also reduce the
     * effects of GPS noise when displaying device trajectories on a map. </p> </li>
     * <li> <p> <code>AccuracyBased</code> - If the device has moved less than the
     * measured accuracy, location updates are ignored. For example, if two consecutive
     * updates from a device have a horizontal accuracy of 5 m and 10 m, the second
     * update is ignored if the device has moved less than 15 m. Ignored location
     * updates are neither evaluated against linked geofence collections, nor stored.
     * This helps educe the effects of GPS noise when displaying device trajectories on
     * a map, and can help control costs by reducing the number of geofence
     * evaluations. </p> </li> </ul>
     */
    inline UpdateTrackerRequest& WithPositionFiltering(PositionFiltering&& value) { SetPositionFiltering(std::move(value)); return *this;}


    /**
     * <p>Updates the pricing plan for the tracker resource.</p> <p>For more
     * information about each pricing plan option restrictions, see <a
     * href="https://aws.amazon.com/location/pricing/">Amazon Location Service
     * pricing</a>.</p>
     */
    inline const PricingPlan& GetPricingPlan() const{ return m_pricingPlan; }

    /**
     * <p>Updates the pricing plan for the tracker resource.</p> <p>For more
     * information about each pricing plan option restrictions, see <a
     * href="https://aws.amazon.com/location/pricing/">Amazon Location Service
     * pricing</a>.</p>
     */
    inline bool PricingPlanHasBeenSet() const { return m_pricingPlanHasBeenSet; }

    /**
     * <p>Updates the pricing plan for the tracker resource.</p> <p>For more
     * information about each pricing plan option restrictions, see <a
     * href="https://aws.amazon.com/location/pricing/">Amazon Location Service
     * pricing</a>.</p>
     */
    inline void SetPricingPlan(const PricingPlan& value) { m_pricingPlanHasBeenSet = true; m_pricingPlan = value; }

    /**
     * <p>Updates the pricing plan for the tracker resource.</p> <p>For more
     * information about each pricing plan option restrictions, see <a
     * href="https://aws.amazon.com/location/pricing/">Amazon Location Service
     * pricing</a>.</p>
     */
    inline void SetPricingPlan(PricingPlan&& value) { m_pricingPlanHasBeenSet = true; m_pricingPlan = std::move(value); }

    /**
     * <p>Updates the pricing plan for the tracker resource.</p> <p>For more
     * information about each pricing plan option restrictions, see <a
     * href="https://aws.amazon.com/location/pricing/">Amazon Location Service
     * pricing</a>.</p>
     */
    inline UpdateTrackerRequest& WithPricingPlan(const PricingPlan& value) { SetPricingPlan(value); return *this;}

    /**
     * <p>Updates the pricing plan for the tracker resource.</p> <p>For more
     * information about each pricing plan option restrictions, see <a
     * href="https://aws.amazon.com/location/pricing/">Amazon Location Service
     * pricing</a>.</p>
     */
    inline UpdateTrackerRequest& WithPricingPlan(PricingPlan&& value) { SetPricingPlan(std::move(value)); return *this;}


    /**
     * <p>Updates the data provider for the tracker resource. </p> <p>A required value
     * for the following pricing plans: <code>MobileAssetTracking</code>|
     * <code>MobileAssetManagement</code> </p> <p>For more information about <a
     * href="https://aws.amazon.com/location/data-providers/">data providers</a> and <a
     * href="https://aws.amazon.com/location/pricing/">pricing plans</a>, see the
     * Amazon Location Service product page</p>  <p>This can only be updated when
     * updating the <code>PricingPlan</code> in the same request.</p> <p>Amazon
     * Location Service uses <code>PricingPlanDataSource</code> to calculate billing
     * for your tracker resource. Your data won't be shared with the data provider, and
     * will remain in your AWS account and Region unless you move it.</p> 
     */
    inline const Aws::String& GetPricingPlanDataSource() const{ return m_pricingPlanDataSource; }

    /**
     * <p>Updates the data provider for the tracker resource. </p> <p>A required value
     * for the following pricing plans: <code>MobileAssetTracking</code>|
     * <code>MobileAssetManagement</code> </p> <p>For more information about <a
     * href="https://aws.amazon.com/location/data-providers/">data providers</a> and <a
     * href="https://aws.amazon.com/location/pricing/">pricing plans</a>, see the
     * Amazon Location Service product page</p>  <p>This can only be updated when
     * updating the <code>PricingPlan</code> in the same request.</p> <p>Amazon
     * Location Service uses <code>PricingPlanDataSource</code> to calculate billing
     * for your tracker resource. Your data won't be shared with the data provider, and
     * will remain in your AWS account and Region unless you move it.</p> 
     */
    inline bool PricingPlanDataSourceHasBeenSet() const { return m_pricingPlanDataSourceHasBeenSet; }

    /**
     * <p>Updates the data provider for the tracker resource. </p> <p>A required value
     * for the following pricing plans: <code>MobileAssetTracking</code>|
     * <code>MobileAssetManagement</code> </p> <p>For more information about <a
     * href="https://aws.amazon.com/location/data-providers/">data providers</a> and <a
     * href="https://aws.amazon.com/location/pricing/">pricing plans</a>, see the
     * Amazon Location Service product page</p>  <p>This can only be updated when
     * updating the <code>PricingPlan</code> in the same request.</p> <p>Amazon
     * Location Service uses <code>PricingPlanDataSource</code> to calculate billing
     * for your tracker resource. Your data won't be shared with the data provider, and
     * will remain in your AWS account and Region unless you move it.</p> 
     */
    inline void SetPricingPlanDataSource(const Aws::String& value) { m_pricingPlanDataSourceHasBeenSet = true; m_pricingPlanDataSource = value; }

    /**
     * <p>Updates the data provider for the tracker resource. </p> <p>A required value
     * for the following pricing plans: <code>MobileAssetTracking</code>|
     * <code>MobileAssetManagement</code> </p> <p>For more information about <a
     * href="https://aws.amazon.com/location/data-providers/">data providers</a> and <a
     * href="https://aws.amazon.com/location/pricing/">pricing plans</a>, see the
     * Amazon Location Service product page</p>  <p>This can only be updated when
     * updating the <code>PricingPlan</code> in the same request.</p> <p>Amazon
     * Location Service uses <code>PricingPlanDataSource</code> to calculate billing
     * for your tracker resource. Your data won't be shared with the data provider, and
     * will remain in your AWS account and Region unless you move it.</p> 
     */
    inline void SetPricingPlanDataSource(Aws::String&& value) { m_pricingPlanDataSourceHasBeenSet = true; m_pricingPlanDataSource = std::move(value); }

    /**
     * <p>Updates the data provider for the tracker resource. </p> <p>A required value
     * for the following pricing plans: <code>MobileAssetTracking</code>|
     * <code>MobileAssetManagement</code> </p> <p>For more information about <a
     * href="https://aws.amazon.com/location/data-providers/">data providers</a> and <a
     * href="https://aws.amazon.com/location/pricing/">pricing plans</a>, see the
     * Amazon Location Service product page</p>  <p>This can only be updated when
     * updating the <code>PricingPlan</code> in the same request.</p> <p>Amazon
     * Location Service uses <code>PricingPlanDataSource</code> to calculate billing
     * for your tracker resource. Your data won't be shared with the data provider, and
     * will remain in your AWS account and Region unless you move it.</p> 
     */
    inline void SetPricingPlanDataSource(const char* value) { m_pricingPlanDataSourceHasBeenSet = true; m_pricingPlanDataSource.assign(value); }

    /**
     * <p>Updates the data provider for the tracker resource. </p> <p>A required value
     * for the following pricing plans: <code>MobileAssetTracking</code>|
     * <code>MobileAssetManagement</code> </p> <p>For more information about <a
     * href="https://aws.amazon.com/location/data-providers/">data providers</a> and <a
     * href="https://aws.amazon.com/location/pricing/">pricing plans</a>, see the
     * Amazon Location Service product page</p>  <p>This can only be updated when
     * updating the <code>PricingPlan</code> in the same request.</p> <p>Amazon
     * Location Service uses <code>PricingPlanDataSource</code> to calculate billing
     * for your tracker resource. Your data won't be shared with the data provider, and
     * will remain in your AWS account and Region unless you move it.</p> 
     */
    inline UpdateTrackerRequest& WithPricingPlanDataSource(const Aws::String& value) { SetPricingPlanDataSource(value); return *this;}

    /**
     * <p>Updates the data provider for the tracker resource. </p> <p>A required value
     * for the following pricing plans: <code>MobileAssetTracking</code>|
     * <code>MobileAssetManagement</code> </p> <p>For more information about <a
     * href="https://aws.amazon.com/location/data-providers/">data providers</a> and <a
     * href="https://aws.amazon.com/location/pricing/">pricing plans</a>, see the
     * Amazon Location Service product page</p>  <p>This can only be updated when
     * updating the <code>PricingPlan</code> in the same request.</p> <p>Amazon
     * Location Service uses <code>PricingPlanDataSource</code> to calculate billing
     * for your tracker resource. Your data won't be shared with the data provider, and
     * will remain in your AWS account and Region unless you move it.</p> 
     */
    inline UpdateTrackerRequest& WithPricingPlanDataSource(Aws::String&& value) { SetPricingPlanDataSource(std::move(value)); return *this;}

    /**
     * <p>Updates the data provider for the tracker resource. </p> <p>A required value
     * for the following pricing plans: <code>MobileAssetTracking</code>|
     * <code>MobileAssetManagement</code> </p> <p>For more information about <a
     * href="https://aws.amazon.com/location/data-providers/">data providers</a> and <a
     * href="https://aws.amazon.com/location/pricing/">pricing plans</a>, see the
     * Amazon Location Service product page</p>  <p>This can only be updated when
     * updating the <code>PricingPlan</code> in the same request.</p> <p>Amazon
     * Location Service uses <code>PricingPlanDataSource</code> to calculate billing
     * for your tracker resource. Your data won't be shared with the data provider, and
     * will remain in your AWS account and Region unless you move it.</p> 
     */
    inline UpdateTrackerRequest& WithPricingPlanDataSource(const char* value) { SetPricingPlanDataSource(value); return *this;}


    /**
     * <p>The name of the tracker resource to update.</p>
     */
    inline const Aws::String& GetTrackerName() const{ return m_trackerName; }

    /**
     * <p>The name of the tracker resource to update.</p>
     */
    inline bool TrackerNameHasBeenSet() const { return m_trackerNameHasBeenSet; }

    /**
     * <p>The name of the tracker resource to update.</p>
     */
    inline void SetTrackerName(const Aws::String& value) { m_trackerNameHasBeenSet = true; m_trackerName = value; }

    /**
     * <p>The name of the tracker resource to update.</p>
     */
    inline void SetTrackerName(Aws::String&& value) { m_trackerNameHasBeenSet = true; m_trackerName = std::move(value); }

    /**
     * <p>The name of the tracker resource to update.</p>
     */
    inline void SetTrackerName(const char* value) { m_trackerNameHasBeenSet = true; m_trackerName.assign(value); }

    /**
     * <p>The name of the tracker resource to update.</p>
     */
    inline UpdateTrackerRequest& WithTrackerName(const Aws::String& value) { SetTrackerName(value); return *this;}

    /**
     * <p>The name of the tracker resource to update.</p>
     */
    inline UpdateTrackerRequest& WithTrackerName(Aws::String&& value) { SetTrackerName(std::move(value)); return *this;}

    /**
     * <p>The name of the tracker resource to update.</p>
     */
    inline UpdateTrackerRequest& WithTrackerName(const char* value) { SetTrackerName(value); return *this;}

  private:

    Aws::String m_description;
    bool m_descriptionHasBeenSet;

    PositionFiltering m_positionFiltering;
    bool m_positionFilteringHasBeenSet;

    PricingPlan m_pricingPlan;
    bool m_pricingPlanHasBeenSet;

    Aws::String m_pricingPlanDataSource;
    bool m_pricingPlanDataSourceHasBeenSet;

    Aws::String m_trackerName;
    bool m_trackerNameHasBeenSet;
  };

} // namespace Model
} // namespace LocationService
} // namespace Aws
