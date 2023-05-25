/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/location/LocationService_EXPORTS.h>
#include <aws/location/LocationServiceRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace LocationService
{
namespace Model
{

  /**
   */
  class UpdateGeofenceCollectionRequest : public LocationServiceRequest
  {
  public:
    AWS_LOCATIONSERVICE_API UpdateGeofenceCollectionRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateGeofenceCollection"; }

    AWS_LOCATIONSERVICE_API Aws::String SerializePayload() const override;


    /**
     * <p>The name of the geofence collection to update.</p>
     */
    inline const Aws::String& GetCollectionName() const{ return m_collectionName; }

    /**
     * <p>The name of the geofence collection to update.</p>
     */
    inline bool CollectionNameHasBeenSet() const { return m_collectionNameHasBeenSet; }

    /**
     * <p>The name of the geofence collection to update.</p>
     */
    inline void SetCollectionName(const Aws::String& value) { m_collectionNameHasBeenSet = true; m_collectionName = value; }

    /**
     * <p>The name of the geofence collection to update.</p>
     */
    inline void SetCollectionName(Aws::String&& value) { m_collectionNameHasBeenSet = true; m_collectionName = std::move(value); }

    /**
     * <p>The name of the geofence collection to update.</p>
     */
    inline void SetCollectionName(const char* value) { m_collectionNameHasBeenSet = true; m_collectionName.assign(value); }

    /**
     * <p>The name of the geofence collection to update.</p>
     */
    inline UpdateGeofenceCollectionRequest& WithCollectionName(const Aws::String& value) { SetCollectionName(value); return *this;}

    /**
     * <p>The name of the geofence collection to update.</p>
     */
    inline UpdateGeofenceCollectionRequest& WithCollectionName(Aws::String&& value) { SetCollectionName(std::move(value)); return *this;}

    /**
     * <p>The name of the geofence collection to update.</p>
     */
    inline UpdateGeofenceCollectionRequest& WithCollectionName(const char* value) { SetCollectionName(value); return *this;}


    /**
     * <p>Updates the description for the geofence collection.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>Updates the description for the geofence collection.</p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>Updates the description for the geofence collection.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>Updates the description for the geofence collection.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>Updates the description for the geofence collection.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>Updates the description for the geofence collection.</p>
     */
    inline UpdateGeofenceCollectionRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>Updates the description for the geofence collection.</p>
     */
    inline UpdateGeofenceCollectionRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>Updates the description for the geofence collection.</p>
     */
    inline UpdateGeofenceCollectionRequest& WithDescription(const char* value) { SetDescription(value); return *this;}

  private:

    Aws::String m_collectionName;
    bool m_collectionNameHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;
  };

} // namespace Model
} // namespace LocationService
} // namespace Aws
