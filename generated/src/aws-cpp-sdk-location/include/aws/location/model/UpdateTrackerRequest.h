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
    AWS_LOCATIONSERVICE_API UpdateTrackerRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateTracker"; }

    AWS_LOCATIONSERVICE_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The name of the tracker resource to update.</p>
     */
    inline const Aws::String& GetTrackerName() const { return m_trackerName; }
    inline bool TrackerNameHasBeenSet() const { return m_trackerNameHasBeenSet; }
    template<typename TrackerNameT = Aws::String>
    void SetTrackerName(TrackerNameT&& value) { m_trackerNameHasBeenSet = true; m_trackerName = std::forward<TrackerNameT>(value); }
    template<typename TrackerNameT = Aws::String>
    UpdateTrackerRequest& WithTrackerName(TrackerNameT&& value) { SetTrackerName(std::forward<TrackerNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Updates the description for the tracker resource.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    UpdateTrackerRequest& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
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
    inline PositionFiltering GetPositionFiltering() const { return m_positionFiltering; }
    inline bool PositionFilteringHasBeenSet() const { return m_positionFilteringHasBeenSet; }
    inline void SetPositionFiltering(PositionFiltering value) { m_positionFilteringHasBeenSet = true; m_positionFiltering = value; }
    inline UpdateTrackerRequest& WithPositionFiltering(PositionFiltering value) { SetPositionFiltering(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Whether to enable position <code>UPDATE</code> events from this tracker to be
     * sent to EventBridge.</p>  <p>You do not need enable this feature to get
     * <code>ENTER</code> and <code>EXIT</code> events for geofences with this tracker.
     * Those events are always sent to EventBridge.</p> 
     */
    inline bool GetEventBridgeEnabled() const { return m_eventBridgeEnabled; }
    inline bool EventBridgeEnabledHasBeenSet() const { return m_eventBridgeEnabledHasBeenSet; }
    inline void SetEventBridgeEnabled(bool value) { m_eventBridgeEnabledHasBeenSet = true; m_eventBridgeEnabled = value; }
    inline UpdateTrackerRequest& WithEventBridgeEnabled(bool value) { SetEventBridgeEnabled(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Enables <code>GeospatialQueries</code> for a tracker that uses a <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/create-keys.html">Amazon
     * Web Services KMS customer managed key</a>.</p> <p>This parameter is only used if
     * you are using a KMS customer managed key.</p>
     */
    inline bool GetKmsKeyEnableGeospatialQueries() const { return m_kmsKeyEnableGeospatialQueries; }
    inline bool KmsKeyEnableGeospatialQueriesHasBeenSet() const { return m_kmsKeyEnableGeospatialQueriesHasBeenSet; }
    inline void SetKmsKeyEnableGeospatialQueries(bool value) { m_kmsKeyEnableGeospatialQueriesHasBeenSet = true; m_kmsKeyEnableGeospatialQueries = value; }
    inline UpdateTrackerRequest& WithKmsKeyEnableGeospatialQueries(bool value) { SetKmsKeyEnableGeospatialQueries(value); return *this;}
    ///@}
  private:

    Aws::String m_trackerName;
    bool m_trackerNameHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    PositionFiltering m_positionFiltering{PositionFiltering::NOT_SET};
    bool m_positionFilteringHasBeenSet = false;

    bool m_eventBridgeEnabled{false};
    bool m_eventBridgeEnabledHasBeenSet = false;

    bool m_kmsKeyEnableGeospatialQueries{false};
    bool m_kmsKeyEnableGeospatialQueriesHasBeenSet = false;
  };

} // namespace Model
} // namespace LocationService
} // namespace Aws
