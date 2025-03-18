/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/geo-maps/GeoMaps_EXPORTS.h>
#include <aws/geo-maps/GeoMapsRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/geo-maps/model/ColorScheme.h>
#include <aws/geo-maps/model/LabelSize.h>
#include <aws/geo-maps/model/MapFeatureMode.h>
#include <aws/geo-maps/model/ScaleBarUnit.h>
#include <aws/geo-maps/model/StaticMapStyle.h>
#include <utility>

namespace Aws
{
namespace Http
{
    class URI;
} //namespace Http
namespace GeoMaps
{
namespace Model
{

  /**
   */
  class GetStaticMapRequest : public GeoMapsRequest
  {
  public:
    AWS_GEOMAPS_API GetStaticMapRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetStaticMap"; }

    AWS_GEOMAPS_API Aws::String SerializePayload() const override;

    AWS_GEOMAPS_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    ///@{
    /**
     * <p>Takes in two pairs of coordinates, [Lon, Lat], denoting south-westerly and
     * north-easterly edges of the image. The underlying area becomes the view of the
     * image. </p> <p>Example: -123.17075,49.26959,-123.08125,49.31429</p>
     */
    inline const Aws::String& GetBoundingBox() const { return m_boundingBox; }
    inline bool BoundingBoxHasBeenSet() const { return m_boundingBoxHasBeenSet; }
    template<typename BoundingBoxT = Aws::String>
    void SetBoundingBox(BoundingBoxT&& value) { m_boundingBoxHasBeenSet = true; m_boundingBox = std::forward<BoundingBoxT>(value); }
    template<typename BoundingBoxT = Aws::String>
    GetStaticMapRequest& WithBoundingBox(BoundingBoxT&& value) { SetBoundingBox(std::forward<BoundingBoxT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Takes in two or more pair of coordinates, [Lon, Lat], with each coordinate
     * separated by a comma. The API will generate an image to encompass all of the
     * provided coordinates. </p>  <p>Cannot be used with <code>Zoom</code> and
     * or <code>Radius</code> </p>  <p>Example:
     * 97.170451,78.039098,99.045536,27.176178</p>
     */
    inline const Aws::String& GetBoundedPositions() const { return m_boundedPositions; }
    inline bool BoundedPositionsHasBeenSet() const { return m_boundedPositionsHasBeenSet; }
    template<typename BoundedPositionsT = Aws::String>
    void SetBoundedPositions(BoundedPositionsT&& value) { m_boundedPositionsHasBeenSet = true; m_boundedPositions = std::forward<BoundedPositionsT>(value); }
    template<typename BoundedPositionsT = Aws::String>
    GetStaticMapRequest& WithBoundedPositions(BoundedPositionsT&& value) { SetBoundedPositions(std::forward<BoundedPositionsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Takes in a pair of coordinates, [Lon, Lat], which becomes the center point of
     * the image. This parameter requires that either zoom or radius is set.</p> 
     * <p>Cannot be used with <code>Zoom</code> and or <code>Radius</code> </p> 
     * <p>Example: 49.295,-123.108</p>
     */
    inline const Aws::String& GetCenter() const { return m_center; }
    inline bool CenterHasBeenSet() const { return m_centerHasBeenSet; }
    template<typename CenterT = Aws::String>
    void SetCenter(CenterT&& value) { m_centerHasBeenSet = true; m_center = std::forward<CenterT>(value); }
    template<typename CenterT = Aws::String>
    GetStaticMapRequest& WithCenter(CenterT&& value) { SetCenter(std::forward<CenterT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Sets color tone for map, such as dark and light for specific map styles. It
     * only applies to vector map styles, such as Standard.</p> <p>Example:
     * <code>Light</code> </p> <p>Default value: <code>Light</code> </p> 
     * <p>Valid values for <code>ColorScheme</code> are case sensitive.</p> 
     */
    inline ColorScheme GetColorScheme() const { return m_colorScheme; }
    inline bool ColorSchemeHasBeenSet() const { return m_colorSchemeHasBeenSet; }
    inline void SetColorScheme(ColorScheme value) { m_colorSchemeHasBeenSet = true; m_colorScheme = value; }
    inline GetStaticMapRequest& WithColorScheme(ColorScheme value) { SetColorScheme(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Takes in a string to draw geometries on the image. The input is a comma
     * separated format as follows format: <code>[Lon, Lat]</code> </p> <p>Example:
     * <code>line:-122.407653,37.798557,-122.413291,37.802443;color=%23DD0000;width=7;outline-color=#00DD00;outline-width=5yd|point:-122.40572,37.80004;label=Fog
     * Hill Market;size=large;text-color=%23DD0000;color=#EE4B2B</code> </p> 
     * <p>Currently it supports the following geometry types: point, line and polygon.
     * It does not support multiPoint , multiLine and multiPolgyon.</p> 
     */
    inline const Aws::String& GetCompactOverlay() const { return m_compactOverlay; }
    inline bool CompactOverlayHasBeenSet() const { return m_compactOverlayHasBeenSet; }
    template<typename CompactOverlayT = Aws::String>
    void SetCompactOverlay(CompactOverlayT&& value) { m_compactOverlayHasBeenSet = true; m_compactOverlay = std::forward<CompactOverlayT>(value); }
    template<typename CompactOverlayT = Aws::String>
    GetStaticMapRequest& WithCompactOverlay(CompactOverlayT&& value) { SetCompactOverlay(std::forward<CompactOverlayT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>It is a flag that takes in true or false. It prevents the labels that are on
     * the edge of the image from being cut or obscured.</p>
     */
    inline bool GetCropLabels() const { return m_cropLabels; }
    inline bool CropLabelsHasBeenSet() const { return m_cropLabelsHasBeenSet; }
    inline void SetCropLabels(bool value) { m_cropLabelsHasBeenSet = true; m_cropLabels = value; }
    inline GetStaticMapRequest& WithCropLabels(bool value) { SetCropLabels(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Takes in a string to draw geometries on the image. The input is a valid
     * GeoJSON collection object. </p> <p>Example:
     * <code>{"type":"FeatureCollection","features":
     * [{"type":"Feature","geometry":{"type":"MultiPoint","coordinates":
     * [[-90.076345,51.504107],[-0.074451,51.506892]]},"properties":
     * {"color":"#00DD00"}}]}</code> </p>
     */
    inline const Aws::String& GetGeoJsonOverlay() const { return m_geoJsonOverlay; }
    inline bool GeoJsonOverlayHasBeenSet() const { return m_geoJsonOverlayHasBeenSet; }
    template<typename GeoJsonOverlayT = Aws::String>
    void SetGeoJsonOverlay(GeoJsonOverlayT&& value) { m_geoJsonOverlayHasBeenSet = true; m_geoJsonOverlay = std::forward<GeoJsonOverlayT>(value); }
    template<typename GeoJsonOverlayT = Aws::String>
    GetStaticMapRequest& WithGeoJsonOverlay(GeoJsonOverlayT&& value) { SetGeoJsonOverlay(std::forward<GeoJsonOverlayT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the height of the map image.</p>
     */
    inline int GetHeight() const { return m_height; }
    inline bool HeightHasBeenSet() const { return m_heightHasBeenSet; }
    inline void SetHeight(int value) { m_heightHasBeenSet = true; m_height = value; }
    inline GetStaticMapRequest& WithHeight(int value) { SetHeight(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Optional: The API key to be used for authorization. Either an API key or
     * valid SigV4 signature must be provided when making a request. </p>
     */
    inline const Aws::String& GetKey() const { return m_key; }
    inline bool KeyHasBeenSet() const { return m_keyHasBeenSet; }
    template<typename KeyT = Aws::String>
    void SetKey(KeyT&& value) { m_keyHasBeenSet = true; m_key = std::forward<KeyT>(value); }
    template<typename KeyT = Aws::String>
    GetStaticMapRequest& WithKey(KeyT&& value) { SetKey(std::forward<KeyT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Overrides the label size auto-calculated by <code>FileName</code>. Takes in
     * one of the values - <code>Small</code> or <code>Large</code>.</p>
     */
    inline LabelSize GetLabelSize() const { return m_labelSize; }
    inline bool LabelSizeHasBeenSet() const { return m_labelSizeHasBeenSet; }
    inline void SetLabelSize(LabelSize value) { m_labelSizeHasBeenSet = true; m_labelSize = value; }
    inline GetStaticMapRequest& WithLabelSize(LabelSize value) { SetLabelSize(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the language on the map labels using the BCP 47 language tag,
     * limited to ISO 639-1 two-letter language codes. If the specified language data
     * isn't available for the map image, the labels will default to the regional
     * primary language.</p> <p>Supported codes:</p> <ul> <li> <p> <code>ar</code> </p>
     * </li> <li> <p> <code>as</code> </p> </li> <li> <p> <code>az</code> </p> </li>
     * <li> <p> <code>be</code> </p> </li> <li> <p> <code>bg</code> </p> </li> <li> <p>
     * <code>bn</code> </p> </li> <li> <p> <code>bs</code> </p> </li> <li> <p>
     * <code>ca</code> </p> </li> <li> <p> <code>cs</code> </p> </li> <li> <p>
     * <code>cy</code> </p> </li> <li> <p> <code>da</code> </p> </li> <li> <p>
     * <code>de</code> </p> </li> <li> <p> <code>el</code> </p> </li> <li> <p>
     * <code>en</code> </p> </li> <li> <p> <code>es</code> </p> </li> <li> <p>
     * <code>et</code> </p> </li> <li> <p> <code>eu</code> </p> </li> <li> <p>
     * <code>fi</code> </p> </li> <li> <p> <code>fo</code> </p> </li> <li> <p>
     * <code>fr</code> </p> </li> <li> <p> <code>ga</code> </p> </li> <li> <p>
     * <code>gl</code> </p> </li> <li> <p> <code>gn</code> </p> </li> <li> <p>
     * <code>gu</code> </p> </li> <li> <p> <code>he</code> </p> </li> <li> <p>
     * <code>hi</code> </p> </li> <li> <p> <code>hr</code> </p> </li> <li> <p>
     * <code>hu</code> </p> </li> <li> <p> <code>hy</code> </p> </li> <li> <p>
     * <code>id</code> </p> </li> <li> <p> <code>is</code> </p> </li> <li> <p>
     * <code>it</code> </p> </li> <li> <p> <code>ja</code> </p> </li> <li> <p>
     * <code>ka</code> </p> </li> <li> <p> <code>kk</code> </p> </li> <li> <p>
     * <code>km</code> </p> </li> <li> <p> <code>kn</code> </p> </li> <li> <p>
     * <code>ko</code> </p> </li> <li> <p> <code>ky</code> </p> </li> <li> <p>
     * <code>lt</code> </p> </li> <li> <p> <code>lv</code> </p> </li> <li> <p>
     * <code>mk</code> </p> </li> <li> <p> <code>ml</code> </p> </li> <li> <p>
     * <code>mr</code> </p> </li> <li> <p> <code>ms</code> </p> </li> <li> <p>
     * <code>mt</code> </p> </li> <li> <p> <code>my</code> </p> </li> <li> <p>
     * <code>nl</code> </p> </li> <li> <p> <code>no</code> </p> </li> <li> <p>
     * <code>or</code> </p> </li> <li> <p> <code>pa</code> </p> </li> <li> <p>
     * <code>pl</code> </p> </li> <li> <p> <code>pt</code> </p> </li> <li> <p>
     * <code>ro</code> </p> </li> <li> <p> <code>ru</code> </p> </li> <li> <p>
     * <code>sk</code> </p> </li> <li> <p> <code>sl</code> </p> </li> <li> <p>
     * <code>sq</code> </p> </li> <li> <p> <code>sr</code> </p> </li> <li> <p>
     * <code>sv</code> </p> </li> <li> <p> <code>ta</code> </p> </li> <li> <p>
     * <code>te</code> </p> </li> <li> <p> <code>th</code> </p> </li> <li> <p>
     * <code>tr</code> </p> </li> <li> <p> <code>uk</code> </p> </li> <li> <p>
     * <code>uz</code> </p> </li> <li> <p> <code>vi</code> </p> </li> <li> <p>
     * <code>zh</code> </p> </li> </ul>
     */
    inline const Aws::String& GetLanguage() const { return m_language; }
    inline bool LanguageHasBeenSet() const { return m_languageHasBeenSet; }
    template<typename LanguageT = Aws::String>
    void SetLanguage(LanguageT&& value) { m_languageHasBeenSet = true; m_language = std::forward<LanguageT>(value); }
    template<typename LanguageT = Aws::String>
    GetStaticMapRequest& WithLanguage(LanguageT&& value) { SetLanguage(std::forward<LanguageT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Applies additional space (in pixels) around overlay feature to prevent them
     * from being cut or obscured.</p>  <p>Value for max and min is determined
     * by:</p> <p>Min: <code>1</code> </p> <p>Max: <code>min(height, width)/4</code>
     * </p>  <p>Example: <code>100</code> </p>
     */
    inline int GetPadding() const { return m_padding; }
    inline bool PaddingHasBeenSet() const { return m_paddingHasBeenSet; }
    inline void SetPadding(int value) { m_paddingHasBeenSet = true; m_padding = value; }
    inline GetStaticMapRequest& WithPadding(int value) { SetPadding(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the political view, using ISO 3166-2 or ISO 3166-3 country code
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
    template<typename PoliticalViewT = Aws::String>
    void SetPoliticalView(PoliticalViewT&& value) { m_politicalViewHasBeenSet = true; m_politicalView = std::forward<PoliticalViewT>(value); }
    template<typename PoliticalViewT = Aws::String>
    GetStaticMapRequest& WithPoliticalView(PoliticalViewT&& value) { SetPoliticalView(std::forward<PoliticalViewT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Determines if the result image will display icons representing points of
     * interest on the map.</p>
     */
    inline MapFeatureMode GetPointsOfInterests() const { return m_pointsOfInterests; }
    inline bool PointsOfInterestsHasBeenSet() const { return m_pointsOfInterestsHasBeenSet; }
    inline void SetPointsOfInterests(MapFeatureMode value) { m_pointsOfInterestsHasBeenSet = true; m_pointsOfInterests = value; }
    inline GetStaticMapRequest& WithPointsOfInterests(MapFeatureMode value) { SetPointsOfInterests(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Used with center parameter, it specifies the zoom of the image where you can
     * control it on a granular level. Takes in any value <code>&gt;= 1</code>. </p>
     * <p>Example: <code>1500</code> </p>  <p>Cannot be used with
     * <code>Zoom</code>.</p>  <p> <b>Unit</b>: <code>Meters</code> </p> <p/>
     */
    inline long long GetRadius() const { return m_radius; }
    inline bool RadiusHasBeenSet() const { return m_radiusHasBeenSet; }
    inline void SetRadius(long long value) { m_radiusHasBeenSet = true; m_radius = value; }
    inline GetStaticMapRequest& WithRadius(long long value) { SetRadius(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The map scaling parameter to size the image, icons, and labels. It follows
     * the pattern of <code>^map(@2x)?$</code>.</p> <p>Example: <code>map,
     * map@2x</code> </p>
     */
    inline const Aws::String& GetFileName() const { return m_fileName; }
    inline bool FileNameHasBeenSet() const { return m_fileNameHasBeenSet; }
    template<typename FileNameT = Aws::String>
    void SetFileName(FileNameT&& value) { m_fileNameHasBeenSet = true; m_fileName = std::forward<FileNameT>(value); }
    template<typename FileNameT = Aws::String>
    GetStaticMapRequest& WithFileName(FileNameT&& value) { SetFileName(std::forward<FileNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Displays a scale on the bottom right of the map image with the unit specified
     * in the input. </p> <p>Example: <code>KilometersMiles, Miles, Kilometers,
     * MilesKilometers</code> </p>
     */
    inline ScaleBarUnit GetScaleBarUnit() const { return m_scaleBarUnit; }
    inline bool ScaleBarUnitHasBeenSet() const { return m_scaleBarUnitHasBeenSet; }
    inline void SetScaleBarUnit(ScaleBarUnit value) { m_scaleBarUnitHasBeenSet = true; m_scaleBarUnit = value; }
    inline GetStaticMapRequest& WithScaleBarUnit(ScaleBarUnit value) { SetScaleBarUnit(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> <code>Style</code> specifies the desired map style.</p>
     */
    inline StaticMapStyle GetStyle() const { return m_style; }
    inline bool StyleHasBeenSet() const { return m_styleHasBeenSet; }
    inline void SetStyle(StaticMapStyle value) { m_styleHasBeenSet = true; m_style = value; }
    inline GetStaticMapRequest& WithStyle(StaticMapStyle value) { SetStyle(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the width of the map image.</p>
     */
    inline int GetWidth() const { return m_width; }
    inline bool WidthHasBeenSet() const { return m_widthHasBeenSet; }
    inline void SetWidth(int value) { m_widthHasBeenSet = true; m_width = value; }
    inline GetStaticMapRequest& WithWidth(int value) { SetWidth(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the zoom level of the map image.</p>  <p>Cannot be used with
     * <code>Radius</code>.</p> 
     */
    inline double GetZoom() const { return m_zoom; }
    inline bool ZoomHasBeenSet() const { return m_zoomHasBeenSet; }
    inline void SetZoom(double value) { m_zoomHasBeenSet = true; m_zoom = value; }
    inline GetStaticMapRequest& WithZoom(double value) { SetZoom(value); return *this;}
    ///@}
  private:

    Aws::String m_boundingBox;
    bool m_boundingBoxHasBeenSet = false;

    Aws::String m_boundedPositions;
    bool m_boundedPositionsHasBeenSet = false;

    Aws::String m_center;
    bool m_centerHasBeenSet = false;

    ColorScheme m_colorScheme{ColorScheme::NOT_SET};
    bool m_colorSchemeHasBeenSet = false;

    Aws::String m_compactOverlay;
    bool m_compactOverlayHasBeenSet = false;

    bool m_cropLabels{false};
    bool m_cropLabelsHasBeenSet = false;

    Aws::String m_geoJsonOverlay;
    bool m_geoJsonOverlayHasBeenSet = false;

    int m_height{0};
    bool m_heightHasBeenSet = false;

    Aws::String m_key;
    bool m_keyHasBeenSet = false;

    LabelSize m_labelSize{LabelSize::NOT_SET};
    bool m_labelSizeHasBeenSet = false;

    Aws::String m_language;
    bool m_languageHasBeenSet = false;

    int m_padding{0};
    bool m_paddingHasBeenSet = false;

    Aws::String m_politicalView;
    bool m_politicalViewHasBeenSet = false;

    MapFeatureMode m_pointsOfInterests{MapFeatureMode::NOT_SET};
    bool m_pointsOfInterestsHasBeenSet = false;

    long long m_radius{0};
    bool m_radiusHasBeenSet = false;

    Aws::String m_fileName;
    bool m_fileNameHasBeenSet = false;

    ScaleBarUnit m_scaleBarUnit{ScaleBarUnit::NOT_SET};
    bool m_scaleBarUnitHasBeenSet = false;

    StaticMapStyle m_style{StaticMapStyle::NOT_SET};
    bool m_styleHasBeenSet = false;

    int m_width{0};
    bool m_widthHasBeenSet = false;

    double m_zoom{0.0};
    bool m_zoomHasBeenSet = false;
  };

} // namespace Model
} // namespace GeoMaps
} // namespace Aws
