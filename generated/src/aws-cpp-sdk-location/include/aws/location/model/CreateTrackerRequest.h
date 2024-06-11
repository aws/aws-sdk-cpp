﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/location/LocationService_EXPORTS.h>
#include <aws/location/LocationServiceRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
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
  class CreateTrackerRequest : public LocationServiceRequest
  {
  public:
    AWS_LOCATIONSERVICE_API CreateTrackerRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateTracker"; }

    AWS_LOCATIONSERVICE_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The name for the tracker resource.</p> <p>Requirements:</p> <ul> <li>
     * <p>Contain only alphanumeric characters (A-Z, a-z, 0-9) , hyphens (-), periods
     * (.), and underscores (_).</p> </li> <li> <p>Must be a unique tracker resource
     * name.</p> </li> <li> <p>No spaces allowed. For example,
     * <code>ExampleTracker</code>.</p> </li> </ul>
     */
    inline const Aws::String& GetTrackerName() const{ return m_trackerName; }
    inline bool TrackerNameHasBeenSet() const { return m_trackerNameHasBeenSet; }
    inline void SetTrackerName(const Aws::String& value) { m_trackerNameHasBeenSet = true; m_trackerName = value; }
    inline void SetTrackerName(Aws::String&& value) { m_trackerNameHasBeenSet = true; m_trackerName = std::move(value); }
    inline void SetTrackerName(const char* value) { m_trackerNameHasBeenSet = true; m_trackerName.assign(value); }
    inline CreateTrackerRequest& WithTrackerName(const Aws::String& value) { SetTrackerName(value); return *this;}
    inline CreateTrackerRequest& WithTrackerName(Aws::String&& value) { SetTrackerName(std::move(value)); return *this;}
    inline CreateTrackerRequest& WithTrackerName(const char* value) { SetTrackerName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A key identifier for an <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/create-keys.html">Amazon
     * Web Services KMS customer managed key</a>. Enter a key ID, key ARN, alias name,
     * or alias ARN.</p>
     */
    inline const Aws::String& GetKmsKeyId() const{ return m_kmsKeyId; }
    inline bool KmsKeyIdHasBeenSet() const { return m_kmsKeyIdHasBeenSet; }
    inline void SetKmsKeyId(const Aws::String& value) { m_kmsKeyIdHasBeenSet = true; m_kmsKeyId = value; }
    inline void SetKmsKeyId(Aws::String&& value) { m_kmsKeyIdHasBeenSet = true; m_kmsKeyId = std::move(value); }
    inline void SetKmsKeyId(const char* value) { m_kmsKeyIdHasBeenSet = true; m_kmsKeyId.assign(value); }
    inline CreateTrackerRequest& WithKmsKeyId(const Aws::String& value) { SetKmsKeyId(value); return *this;}
    inline CreateTrackerRequest& WithKmsKeyId(Aws::String&& value) { SetKmsKeyId(std::move(value)); return *this;}
    inline CreateTrackerRequest& WithKmsKeyId(const char* value) { SetKmsKeyId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>An optional description for the tracker resource.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }
    inline CreateTrackerRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline CreateTrackerRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline CreateTrackerRequest& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Applies one or more tags to the tracker resource. A tag is a key-value pair
     * helps manage, identify, search, and filter your resources by labelling them.</p>
     * <p>Format: <code>"key" : "value"</code> </p> <p>Restrictions:</p> <ul> <li>
     * <p>Maximum 50 tags per resource</p> </li> <li> <p>Each resource tag must be
     * unique with a maximum of one value.</p> </li> <li> <p>Maximum key length: 128
     * Unicode characters in UTF-8</p> </li> <li> <p>Maximum value length: 256 Unicode
     * characters in UTF-8</p> </li> <li> <p>Can use alphanumeric characters (A–Z, a–z,
     * 0–9), and the following characters: + - = . _ : / @. </p> </li> <li> <p>Cannot
     * use "aws:" as a prefix for a key.</p> </li> </ul>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tagsHasBeenSet = true; m_tags = value; }
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }
    inline CreateTrackerRequest& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}
    inline CreateTrackerRequest& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}
    inline CreateTrackerRequest& AddTags(const Aws::String& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }
    inline CreateTrackerRequest& AddTags(Aws::String&& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }
    inline CreateTrackerRequest& AddTags(const Aws::String& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }
    inline CreateTrackerRequest& AddTags(Aws::String&& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), std::move(value)); return *this; }
    inline CreateTrackerRequest& AddTags(const char* key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }
    inline CreateTrackerRequest& AddTags(Aws::String&& key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }
    inline CreateTrackerRequest& AddTags(const char* key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }
    ///@}

    ///@{
    /**
     * <p>Specifies the position filtering for the tracker resource.</p> <p>Valid
     * values:</p> <ul> <li> <p> <code>TimeBased</code> - Location updates are
     * evaluated against linked geofence collections, but not every location update is
     * stored. If your update frequency is more often than 30 seconds, only one update
     * per 30 seconds is stored for each unique device ID. </p> </li> <li> <p>
     * <code>DistanceBased</code> - If the device has moved less than 30 m (98.4 ft),
     * location updates are ignored. Location updates within this area are neither
     * evaluated against linked geofence collections, nor stored. This helps control
     * costs by reducing the number of geofence evaluations and historical device
     * positions to paginate through. Distance-based filtering can also reduce the
     * effects of GPS noise when displaying device trajectories on a map. </p> </li>
     * <li> <p> <code>AccuracyBased</code> - If the device has moved less than the
     * measured accuracy, location updates are ignored. For example, if two consecutive
     * updates from a device have a horizontal accuracy of 5 m and 10 m, the second
     * update is ignored if the device has moved less than 15 m. Ignored location
     * updates are neither evaluated against linked geofence collections, nor stored.
     * This can reduce the effects of GPS noise when displaying device trajectories on
     * a map, and can help control your costs by reducing the number of geofence
     * evaluations. </p> </li> </ul> <p>This field is optional. If not specified, the
     * default value is <code>TimeBased</code>.</p>
     */
    inline const PositionFiltering& GetPositionFiltering() const{ return m_positionFiltering; }
    inline bool PositionFilteringHasBeenSet() const { return m_positionFilteringHasBeenSet; }
    inline void SetPositionFiltering(const PositionFiltering& value) { m_positionFilteringHasBeenSet = true; m_positionFiltering = value; }
    inline void SetPositionFiltering(PositionFiltering&& value) { m_positionFilteringHasBeenSet = true; m_positionFiltering = std::move(value); }
    inline CreateTrackerRequest& WithPositionFiltering(const PositionFiltering& value) { SetPositionFiltering(value); return *this;}
    inline CreateTrackerRequest& WithPositionFiltering(PositionFiltering&& value) { SetPositionFiltering(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Whether to enable position <code>UPDATE</code> events from this tracker to be
     * sent to EventBridge.</p>  <p>You do not need enable this feature to get
     * <code>ENTER</code> and <code>EXIT</code> events for geofences with this tracker.
     * Those events are always sent to EventBridge.</p> 
     */
    inline bool GetEventBridgeEnabled() const{ return m_eventBridgeEnabled; }
    inline bool EventBridgeEnabledHasBeenSet() const { return m_eventBridgeEnabledHasBeenSet; }
    inline void SetEventBridgeEnabled(bool value) { m_eventBridgeEnabledHasBeenSet = true; m_eventBridgeEnabled = value; }
    inline CreateTrackerRequest& WithEventBridgeEnabled(bool value) { SetEventBridgeEnabled(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Enables <code>GeospatialQueries</code> for a tracker that uses a <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/create-keys.html">Amazon
     * Web Services KMS customer managed key</a>.</p> <p>This parameter is only used if
     * you are using a KMS customer managed key.</p>  <p>If you wish to encrypt
     * your data using your own KMS customer managed key, then the Bounding Polygon
     * Queries feature will be disabled by default. This is because by using this
     * feature, a representation of your device positions will not be encrypted using
     * the your KMS managed key. The exact device position, however; is still encrypted
     * using your managed key.</p> <p>You can choose to opt-in to the Bounding Polygon
     * Quseries feature. This is done by setting the
     * <code>KmsKeyEnableGeospatialQueries</code> parameter to true when creating or
     * updating a Tracker.</p> 
     */
    inline bool GetKmsKeyEnableGeospatialQueries() const{ return m_kmsKeyEnableGeospatialQueries; }
    inline bool KmsKeyEnableGeospatialQueriesHasBeenSet() const { return m_kmsKeyEnableGeospatialQueriesHasBeenSet; }
    inline void SetKmsKeyEnableGeospatialQueries(bool value) { m_kmsKeyEnableGeospatialQueriesHasBeenSet = true; m_kmsKeyEnableGeospatialQueries = value; }
    inline CreateTrackerRequest& WithKmsKeyEnableGeospatialQueries(bool value) { SetKmsKeyEnableGeospatialQueries(value); return *this;}
    ///@}
  private:

    Aws::String m_trackerName;
    bool m_trackerNameHasBeenSet = false;

    Aws::String m_kmsKeyId;
    bool m_kmsKeyIdHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet = false;

    PositionFiltering m_positionFiltering;
    bool m_positionFilteringHasBeenSet = false;

    bool m_eventBridgeEnabled;
    bool m_eventBridgeEnabledHasBeenSet = false;

    bool m_kmsKeyEnableGeospatialQueries;
    bool m_kmsKeyEnableGeospatialQueriesHasBeenSet = false;
  };

} // namespace Model
} // namespace LocationService
} // namespace Aws
