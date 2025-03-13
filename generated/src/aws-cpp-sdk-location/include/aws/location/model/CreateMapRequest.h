/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/location/LocationService_EXPORTS.h>
#include <aws/location/LocationServiceRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/location/model/MapConfiguration.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <utility>

namespace Aws
{
namespace LocationService
{
namespace Model
{

  /**
   */
  class CreateMapRequest : public LocationServiceRequest
  {
  public:
    AWS_LOCATIONSERVICE_API CreateMapRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateMap"; }

    AWS_LOCATIONSERVICE_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The name for the map resource.</p> <p>Requirements:</p> <ul> <li> <p>Must
     * contain only alphanumeric characters (A–Z, a–z, 0–9), hyphens (-), periods (.),
     * and underscores (_). </p> </li> <li> <p>Must be a unique map resource name. </p>
     * </li> <li> <p>No spaces allowed. For example, <code>ExampleMap</code>.</p> </li>
     * </ul>
     */
    inline const Aws::String& GetMapName() const { return m_mapName; }
    inline bool MapNameHasBeenSet() const { return m_mapNameHasBeenSet; }
    template<typename MapNameT = Aws::String>
    void SetMapName(MapNameT&& value) { m_mapNameHasBeenSet = true; m_mapName = std::forward<MapNameT>(value); }
    template<typename MapNameT = Aws::String>
    CreateMapRequest& WithMapName(MapNameT&& value) { SetMapName(std::forward<MapNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the <code>MapConfiguration</code>, including the map style, for the
     * map resource that you create. The map style defines the look of maps and the
     * data provider for your map resource.</p>
     */
    inline const MapConfiguration& GetConfiguration() const { return m_configuration; }
    inline bool ConfigurationHasBeenSet() const { return m_configurationHasBeenSet; }
    template<typename ConfigurationT = MapConfiguration>
    void SetConfiguration(ConfigurationT&& value) { m_configurationHasBeenSet = true; m_configuration = std::forward<ConfigurationT>(value); }
    template<typename ConfigurationT = MapConfiguration>
    CreateMapRequest& WithConfiguration(ConfigurationT&& value) { SetConfiguration(std::forward<ConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An optional description for the map resource.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    CreateMapRequest& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Applies one or more tags to the map resource. A tag is a key-value pair helps
     * manage, identify, search, and filter your resources by labelling them.</p>
     * <p>Format: <code>"key" : "value"</code> </p> <p>Restrictions:</p> <ul> <li>
     * <p>Maximum 50 tags per resource</p> </li> <li> <p>Each resource tag must be
     * unique with a maximum of one value.</p> </li> <li> <p>Maximum key length: 128
     * Unicode characters in UTF-8</p> </li> <li> <p>Maximum value length: 256 Unicode
     * characters in UTF-8</p> </li> <li> <p>Can use alphanumeric characters (A–Z, a–z,
     * 0–9), and the following characters: + - = . _ : / @. </p> </li> <li> <p>Cannot
     * use "aws:" as a prefix for a key.</p> </li> </ul>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const { return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    template<typename TagsT = Aws::Map<Aws::String, Aws::String>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Map<Aws::String, Aws::String>>
    CreateMapRequest& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsKeyT = Aws::String, typename TagsValueT = Aws::String>
    CreateMapRequest& AddTags(TagsKeyT&& key, TagsValueT&& value) {
      m_tagsHasBeenSet = true; m_tags.emplace(std::forward<TagsKeyT>(key), std::forward<TagsValueT>(value)); return *this;
    }
    ///@}
  private:

    Aws::String m_mapName;
    bool m_mapNameHasBeenSet = false;

    MapConfiguration m_configuration;
    bool m_configurationHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace LocationService
} // namespace Aws
