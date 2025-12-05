/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/geo-maps/GeoMapsRequest.h>
#include <aws/geo-maps/GeoMaps_EXPORTS.h>
#include <aws/geo-maps/model/ColorScheme.h>
#include <aws/geo-maps/model/ContourDensity.h>
#include <aws/geo-maps/model/MapStyle.h>
#include <aws/geo-maps/model/Terrain.h>
#include <aws/geo-maps/model/Traffic.h>
#include <aws/geo-maps/model/TravelMode.h>

#include <utility>

namespace Aws {
namespace Http {
class URI;
}  // namespace Http
namespace GeoMaps {
namespace Model {

/**
 */
class GetStyleDescriptorRequest : public GeoMapsRequest {
 public:
  AWS_GEOMAPS_API GetStyleDescriptorRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "GetStyleDescriptor"; }

  AWS_GEOMAPS_API Aws::String SerializePayload() const override;

  AWS_GEOMAPS_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;

  ///@{
  /**
   * <p>Style specifies the desired map style.</p>
   */
  inline MapStyle GetStyle() const { return m_style; }
  inline bool StyleHasBeenSet() const { return m_styleHasBeenSet; }
  inline void SetStyle(MapStyle value) {
    m_styleHasBeenSet = true;
    m_style = value;
  }
  inline GetStyleDescriptorRequest& WithStyle(MapStyle value) {
    SetStyle(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Sets color tone for map such as dark and light for specific map styles. It
   * applies to only vector map styles such as Standard and Monochrome.</p>
   * <p>Example: <code>Light</code> </p> <p>Default value: <code>Light</code> </p>
   *  <p>Valid values for ColorScheme are case sensitive.</p>
   */
  inline ColorScheme GetColorScheme() const { return m_colorScheme; }
  inline bool ColorSchemeHasBeenSet() const { return m_colorSchemeHasBeenSet; }
  inline void SetColorScheme(ColorScheme value) {
    m_colorSchemeHasBeenSet = true;
    m_colorScheme = value;
  }
  inline GetStyleDescriptorRequest& WithColorScheme(ColorScheme value) {
    SetColorScheme(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Specifies the political view using ISO 3166-2 or ISO 3166-3 country code
   * format.</p> <p>The following political views are currently supported:</p> <ul>
   * <li> <p> <code>ARG</code>: Argentina's view on the Southern Patagonian Ice Field
   * and Tierra Del Fuego, including the Falkland Islands, South Georgia, and South
   * Sandwich Islands</p> </li> <li> <p> <code>EGY</code>: Egypt's view on Bir
   * Tawil</p> </li> <li> <p> <code>IND</code>: India's view on Gilgit-Baltistan</p>
   * </li> <li> <p> <code>KEN</code>: Kenya's view on the Ilemi Triangle</p> </li>
   * <li> <p> <code>MAR</code>: Morocco's view on Western Sahara</p> </li> <li> <p>
   * <code>RUS</code>: Russia's view on Crimea</p> </li> <li> <p> <code>SDN</code>:
   * Sudan's view on the Halaib Triangle</p> </li> <li> <p> <code>SRB</code>:
   * Serbia's view on Kosovo, Vukovar, and Sarengrad Islands</p> </li> <li> <p>
   * <code>SUR</code>: Suriname's view on the Courantyne Headwaters and Lawa
   * Headwaters</p> </li> <li> <p> <code>SYR</code>: Syria's view on the Golan
   * Heights</p> </li> <li> <p> <code>TUR</code>: Turkey's view on Cyprus and
   * Northern Cyprus</p> </li> <li> <p> <code>TZA</code>: Tanzania's view on Lake
   * Malawi</p> </li> <li> <p> <code>URY</code>: Uruguay's view on Rincon de
   * Artigas</p> </li> <li> <p> <code>VNM</code>: Vietnam's view on the Paracel
   * Islands and Spratly Islands</p> </li> </ul>
   */
  inline const Aws::String& GetPoliticalView() const { return m_politicalView; }
  inline bool PoliticalViewHasBeenSet() const { return m_politicalViewHasBeenSet; }
  template <typename PoliticalViewT = Aws::String>
  void SetPoliticalView(PoliticalViewT&& value) {
    m_politicalViewHasBeenSet = true;
    m_politicalView = std::forward<PoliticalViewT>(value);
  }
  template <typename PoliticalViewT = Aws::String>
  GetStyleDescriptorRequest& WithPoliticalView(PoliticalViewT&& value) {
    SetPoliticalView(std::forward<PoliticalViewT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Adjusts how physical terrain details are rendered on the map.</p> <p>The
   * following terrain styles are currently supported:</p> <ul> <li> <p>
   * <code>Hillshade</code>: Displays the physical terrain details through shading
   * and highlighting of elevation change and geographic features.</p> </li> </ul>
   * <p>This parameter is valid only for the <code>Standard</code> map style.</p>
   */
  inline Terrain GetTerrain() const { return m_terrain; }
  inline bool TerrainHasBeenSet() const { return m_terrainHasBeenSet; }
  inline void SetTerrain(Terrain value) {
    m_terrainHasBeenSet = true;
    m_terrain = value;
  }
  inline GetStyleDescriptorRequest& WithTerrain(Terrain value) {
    SetTerrain(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Displays the shape and steepness of terrain features using elevation lines.
   * The density value controls how densely the available contour line information is
   * rendered on the map.</p> <p>This parameter is valid only for the
   * <code>Standard</code> map style.</p>
   */
  inline ContourDensity GetContourDensity() const { return m_contourDensity; }
  inline bool ContourDensityHasBeenSet() const { return m_contourDensityHasBeenSet; }
  inline void SetContourDensity(ContourDensity value) {
    m_contourDensityHasBeenSet = true;
    m_contourDensity = value;
  }
  inline GetStyleDescriptorRequest& WithContourDensity(ContourDensity value) {
    SetContourDensity(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Displays real-time traffic information overlay on map, such as incident
   * events and flow events.</p> <p>This parameter is valid only for the
   * <code>Standard</code> map style.</p>
   */
  inline Traffic GetTraffic() const { return m_traffic; }
  inline bool TrafficHasBeenSet() const { return m_trafficHasBeenSet; }
  inline void SetTraffic(Traffic value) {
    m_trafficHasBeenSet = true;
    m_traffic = value;
  }
  inline GetStyleDescriptorRequest& WithTraffic(Traffic value) {
    SetTraffic(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Renders additional map information relevant to selected travel modes.
   * Information for multiple travel modes can be displayed simultaneously, although
   * this increases the overall information density rendered on the map.</p> <p>This
   * parameter is valid only for the <code>Standard</code> map style.</p>
   */
  inline const Aws::Vector<TravelMode>& GetTravelModes() const { return m_travelModes; }
  inline bool TravelModesHasBeenSet() const { return m_travelModesHasBeenSet; }
  template <typename TravelModesT = Aws::Vector<TravelMode>>
  void SetTravelModes(TravelModesT&& value) {
    m_travelModesHasBeenSet = true;
    m_travelModes = std::forward<TravelModesT>(value);
  }
  template <typename TravelModesT = Aws::Vector<TravelMode>>
  GetStyleDescriptorRequest& WithTravelModes(TravelModesT&& value) {
    SetTravelModes(std::forward<TravelModesT>(value));
    return *this;
  }
  inline GetStyleDescriptorRequest& AddTravelModes(TravelMode value) {
    m_travelModesHasBeenSet = true;
    m_travelModes.push_back(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Optional: The API key to be used for authorization. Either an API key or
   * valid SigV4 signature must be provided when making a request. </p>
   */
  inline const Aws::String& GetKey() const { return m_key; }
  inline bool KeyHasBeenSet() const { return m_keyHasBeenSet; }
  template <typename KeyT = Aws::String>
  void SetKey(KeyT&& value) {
    m_keyHasBeenSet = true;
    m_key = std::forward<KeyT>(value);
  }
  template <typename KeyT = Aws::String>
  GetStyleDescriptorRequest& WithKey(KeyT&& value) {
    SetKey(std::forward<KeyT>(value));
    return *this;
  }
  ///@}
 private:
  MapStyle m_style{MapStyle::NOT_SET};

  ColorScheme m_colorScheme{ColorScheme::NOT_SET};

  Aws::String m_politicalView;

  Terrain m_terrain{Terrain::NOT_SET};

  ContourDensity m_contourDensity{ContourDensity::NOT_SET};

  Traffic m_traffic{Traffic::NOT_SET};

  Aws::Vector<TravelMode> m_travelModes;

  Aws::String m_key;
  bool m_styleHasBeenSet = false;
  bool m_colorSchemeHasBeenSet = false;
  bool m_politicalViewHasBeenSet = false;
  bool m_terrainHasBeenSet = false;
  bool m_contourDensityHasBeenSet = false;
  bool m_trafficHasBeenSet = false;
  bool m_travelModesHasBeenSet = false;
  bool m_keyHasBeenSet = false;
};

}  // namespace Model
}  // namespace GeoMaps
}  // namespace Aws
