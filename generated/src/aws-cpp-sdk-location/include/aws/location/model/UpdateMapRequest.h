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
  class UpdateMapRequest : public LocationServiceRequest
  {
  public:
    AWS_LOCATIONSERVICE_API UpdateMapRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateMap"; }

    AWS_LOCATIONSERVICE_API Aws::String SerializePayload() const override;


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

  private:

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::String m_mapName;
    bool m_mapNameHasBeenSet = false;
  };

} // namespace Model
} // namespace LocationService
} // namespace Aws
