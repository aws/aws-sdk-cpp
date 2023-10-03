/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/location/LocationService_EXPORTS.h>
#include <aws/location/LocationServiceRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/location/model/PositionFiltering.h>
#include <utility>

namespace Aws
{
namespace LocationService
{
namespace Model
{

  /**
   */
  class UpdateTrackerRequest : public LocationServiceRequest
  {
  public:
    AWS_LOCATIONSERVICE_API UpdateTrackerRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateTracker"; }

    AWS_LOCATIONSERVICE_API Aws::String SerializePayload() const override;


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
     * <p>Whether to enable position <code>UPDATE</code> events from this tracker to be
     * sent to EventBridge.</p>  <p>You do not need enable this feature to get
     * <code>ENTER</code> and <code>EXIT</code> events for geofences with this tracker.
     * Those events are always sent to EventBridge.</p> 
     */
    inline bool GetEventBridgeEnabled() const{ return m_eventBridgeEnabled; }

    /**
     * <p>Whether to enable position <code>UPDATE</code> events from this tracker to be
     * sent to EventBridge.</p>  <p>You do not need enable this feature to get
     * <code>ENTER</code> and <code>EXIT</code> events for geofences with this tracker.
     * Those events are always sent to EventBridge.</p> 
     */
    inline bool EventBridgeEnabledHasBeenSet() const { return m_eventBridgeEnabledHasBeenSet; }

    /**
     * <p>Whether to enable position <code>UPDATE</code> events from this tracker to be
     * sent to EventBridge.</p>  <p>You do not need enable this feature to get
     * <code>ENTER</code> and <code>EXIT</code> events for geofences with this tracker.
     * Those events are always sent to EventBridge.</p> 
     */
    inline void SetEventBridgeEnabled(bool value) { m_eventBridgeEnabledHasBeenSet = true; m_eventBridgeEnabled = value; }

    /**
     * <p>Whether to enable position <code>UPDATE</code> events from this tracker to be
     * sent to EventBridge.</p>  <p>You do not need enable this feature to get
     * <code>ENTER</code> and <code>EXIT</code> events for geofences with this tracker.
     * Those events are always sent to EventBridge.</p> 
     */
    inline UpdateTrackerRequest& WithEventBridgeEnabled(bool value) { SetEventBridgeEnabled(value); return *this;}


    /**
     * <p>Enables <code>GeospatialQueries</code> for a tracker that uses a <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/create-keys.html">Amazon
     * Web Services KMS customer managed key</a>.</p> <p>This parameter is only used if
     * you are using a KMS customer managed key.</p>
     */
    inline bool GetKmsKeyEnableGeospatialQueries() const{ return m_kmsKeyEnableGeospatialQueries; }

    /**
     * <p>Enables <code>GeospatialQueries</code> for a tracker that uses a <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/create-keys.html">Amazon
     * Web Services KMS customer managed key</a>.</p> <p>This parameter is only used if
     * you are using a KMS customer managed key.</p>
     */
    inline bool KmsKeyEnableGeospatialQueriesHasBeenSet() const { return m_kmsKeyEnableGeospatialQueriesHasBeenSet; }

    /**
     * <p>Enables <code>GeospatialQueries</code> for a tracker that uses a <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/create-keys.html">Amazon
     * Web Services KMS customer managed key</a>.</p> <p>This parameter is only used if
     * you are using a KMS customer managed key.</p>
     */
    inline void SetKmsKeyEnableGeospatialQueries(bool value) { m_kmsKeyEnableGeospatialQueriesHasBeenSet = true; m_kmsKeyEnableGeospatialQueries = value; }

    /**
     * <p>Enables <code>GeospatialQueries</code> for a tracker that uses a <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/create-keys.html">Amazon
     * Web Services KMS customer managed key</a>.</p> <p>This parameter is only used if
     * you are using a KMS customer managed key.</p>
     */
    inline UpdateTrackerRequest& WithKmsKeyEnableGeospatialQueries(bool value) { SetKmsKeyEnableGeospatialQueries(value); return *this;}


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
    bool m_descriptionHasBeenSet = false;

    bool m_eventBridgeEnabled;
    bool m_eventBridgeEnabledHasBeenSet = false;

    bool m_kmsKeyEnableGeospatialQueries;
    bool m_kmsKeyEnableGeospatialQueriesHasBeenSet = false;

    PositionFiltering m_positionFiltering;
    bool m_positionFilteringHasBeenSet = false;

    Aws::String m_trackerName;
    bool m_trackerNameHasBeenSet = false;
  };

} // namespace Model
} // namespace LocationService
} // namespace Aws
