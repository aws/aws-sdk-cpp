/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/location/LocationService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace LocationService
{
namespace Model
{

  /**
   * <p>Specifies the political view for the style.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/location-2020-11-19/MapConfigurationUpdate">AWS
   * API Reference</a></p>
   */
  class MapConfigurationUpdate
  {
  public:
    AWS_LOCATIONSERVICE_API MapConfigurationUpdate() = default;
    AWS_LOCATIONSERVICE_API MapConfigurationUpdate(Aws::Utils::Json::JsonView jsonValue);
    AWS_LOCATIONSERVICE_API MapConfigurationUpdate& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LOCATIONSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Specifies the political view for the style. Set to an empty string to not use
     * a political view, or, for styles that support specific political views, you can
     * choose a view, such as <code>IND</code> for the Indian view.</p>  <p>Not
     * all map resources or styles support political view styles. See <a
     * href="https://docs.aws.amazon.com/location/previous/developerguide/map-concepts.html#political-views">Political
     * views</a> for more information.</p> 
     */
    inline const Aws::String& GetPoliticalView() const { return m_politicalView; }
    inline bool PoliticalViewHasBeenSet() const { return m_politicalViewHasBeenSet; }
    template<typename PoliticalViewT = Aws::String>
    void SetPoliticalView(PoliticalViewT&& value) { m_politicalViewHasBeenSet = true; m_politicalView = std::forward<PoliticalViewT>(value); }
    template<typename PoliticalViewT = Aws::String>
    MapConfigurationUpdate& WithPoliticalView(PoliticalViewT&& value) { SetPoliticalView(std::forward<PoliticalViewT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the custom layers for the style. Leave unset to not enable any
     * custom layer, or, for styles that support custom layers, you can enable
     * layer(s), such as POI layer for the VectorEsriNavigation style. Default is
     * <code>unset</code>.</p>  <p>Not all map resources or styles support custom
     * layers. See Custom Layers for more information.</p> 
     */
    inline const Aws::Vector<Aws::String>& GetCustomLayers() const { return m_customLayers; }
    inline bool CustomLayersHasBeenSet() const { return m_customLayersHasBeenSet; }
    template<typename CustomLayersT = Aws::Vector<Aws::String>>
    void SetCustomLayers(CustomLayersT&& value) { m_customLayersHasBeenSet = true; m_customLayers = std::forward<CustomLayersT>(value); }
    template<typename CustomLayersT = Aws::Vector<Aws::String>>
    MapConfigurationUpdate& WithCustomLayers(CustomLayersT&& value) { SetCustomLayers(std::forward<CustomLayersT>(value)); return *this;}
    template<typename CustomLayersT = Aws::String>
    MapConfigurationUpdate& AddCustomLayers(CustomLayersT&& value) { m_customLayersHasBeenSet = true; m_customLayers.emplace_back(std::forward<CustomLayersT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_politicalView;
    bool m_politicalViewHasBeenSet = false;

    Aws::Vector<Aws::String> m_customLayers;
    bool m_customLayersHasBeenSet = false;
  };

} // namespace Model
} // namespace LocationService
} // namespace Aws
