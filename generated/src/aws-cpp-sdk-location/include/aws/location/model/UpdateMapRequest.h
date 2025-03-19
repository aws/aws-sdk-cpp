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
    AWS_LOCATIONSERVICE_API UpdateMapRequest() = default;

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
    inline const Aws::String& GetMapName() const { return m_mapName; }
    inline bool MapNameHasBeenSet() const { return m_mapNameHasBeenSet; }
    template<typename MapNameT = Aws::String>
    void SetMapName(MapNameT&& value) { m_mapNameHasBeenSet = true; m_mapName = std::forward<MapNameT>(value); }
    template<typename MapNameT = Aws::String>
    UpdateMapRequest& WithMapName(MapNameT&& value) { SetMapName(std::forward<MapNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Updates the description for the map resource.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    UpdateMapRequest& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Updates the parts of the map configuration that can be updated, including the
     * political view.</p>
     */
    inline const MapConfigurationUpdate& GetConfigurationUpdate() const { return m_configurationUpdate; }
    inline bool ConfigurationUpdateHasBeenSet() const { return m_configurationUpdateHasBeenSet; }
    template<typename ConfigurationUpdateT = MapConfigurationUpdate>
    void SetConfigurationUpdate(ConfigurationUpdateT&& value) { m_configurationUpdateHasBeenSet = true; m_configurationUpdate = std::forward<ConfigurationUpdateT>(value); }
    template<typename ConfigurationUpdateT = MapConfigurationUpdate>
    UpdateMapRequest& WithConfigurationUpdate(ConfigurationUpdateT&& value) { SetConfigurationUpdate(std::forward<ConfigurationUpdateT>(value)); return *this;}
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
