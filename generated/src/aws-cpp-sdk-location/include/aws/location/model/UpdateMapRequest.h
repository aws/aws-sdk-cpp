/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/location/LocationService_EXPORTS.h>
#include <aws/location/LocationServiceRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/location/model/MapConfigurationUpdate.h>
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


    ///@{
    /**
     * <p>The name of the map resource to update.</p>
     */
    inline const Aws::String& GetMapName() const{ return m_mapName; }
    inline bool MapNameHasBeenSet() const { return m_mapNameHasBeenSet; }
    inline void SetMapName(const Aws::String& value) { m_mapNameHasBeenSet = true; m_mapName = value; }
    inline void SetMapName(Aws::String&& value) { m_mapNameHasBeenSet = true; m_mapName = std::move(value); }
    inline void SetMapName(const char* value) { m_mapNameHasBeenSet = true; m_mapName.assign(value); }
    inline UpdateMapRequest& WithMapName(const Aws::String& value) { SetMapName(value); return *this;}
    inline UpdateMapRequest& WithMapName(Aws::String&& value) { SetMapName(std::move(value)); return *this;}
    inline UpdateMapRequest& WithMapName(const char* value) { SetMapName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Updates the description for the map resource.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }
    inline UpdateMapRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline UpdateMapRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline UpdateMapRequest& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Updates the parts of the map configuration that can be updated, including the
     * political view.</p>
     */
    inline const MapConfigurationUpdate& GetConfigurationUpdate() const{ return m_configurationUpdate; }
    inline bool ConfigurationUpdateHasBeenSet() const { return m_configurationUpdateHasBeenSet; }
    inline void SetConfigurationUpdate(const MapConfigurationUpdate& value) { m_configurationUpdateHasBeenSet = true; m_configurationUpdate = value; }
    inline void SetConfigurationUpdate(MapConfigurationUpdate&& value) { m_configurationUpdateHasBeenSet = true; m_configurationUpdate = std::move(value); }
    inline UpdateMapRequest& WithConfigurationUpdate(const MapConfigurationUpdate& value) { SetConfigurationUpdate(value); return *this;}
    inline UpdateMapRequest& WithConfigurationUpdate(MapConfigurationUpdate&& value) { SetConfigurationUpdate(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_mapName;
    bool m_mapNameHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    MapConfigurationUpdate m_configurationUpdate;
    bool m_configurationUpdateHasBeenSet = false;
  };

} // namespace Model
} // namespace LocationService
} // namespace Aws
