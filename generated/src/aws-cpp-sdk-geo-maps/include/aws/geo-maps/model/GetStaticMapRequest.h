/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/geo-maps/GeoMaps_EXPORTS.h>
#include <aws/geo-maps/GeoMapsRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
    AWS_GEOMAPS_API GetStaticMapRequest();

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
    inline const Aws::String& GetBoundingBox() const{ return m_boundingBox; }
    inline bool BoundingBoxHasBeenSet() const { return m_boundingBoxHasBeenSet; }
    inline void SetBoundingBox(const Aws::String& value) { m_boundingBoxHasBeenSet = true; m_boundingBox = value; }
    inline void SetBoundingBox(Aws::String&& value) { m_boundingBoxHasBeenSet = true; m_boundingBox = std::move(value); }
    inline void SetBoundingBox(const char* value) { m_boundingBoxHasBeenSet = true; m_boundingBox.assign(value); }
    inline GetStaticMapRequest& WithBoundingBox(const Aws::String& value) { SetBoundingBox(value); return *this;}
    inline GetStaticMapRequest& WithBoundingBox(Aws::String&& value) { SetBoundingBox(std::move(value)); return *this;}
    inline GetStaticMapRequest& WithBoundingBox(const char* value) { SetBoundingBox(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Takes in two or more pair of coordinates, [Lon, Lat], with each coordinate
     * separated by a comma. The API will generate an image to encompass all of the
     * provided coordinates. </p>  <p>Cannot be used with <code>Zoom</code> and
     * or <code>Radius</code> </p>  <p>Example:
     * 97.170451,78.039098,99.045536,27.176178</p>
     */
    inline const Aws::String& GetBoundedPositions() const{ return m_boundedPositions; }
    inline bool BoundedPositionsHasBeenSet() const { return m_boundedPositionsHasBeenSet; }
    inline void SetBoundedPositions(const Aws::String& value) { m_boundedPositionsHasBeenSet = true; m_boundedPositions = value; }
    inline void SetBoundedPositions(Aws::String&& value) { m_boundedPositionsHasBeenSet = true; m_boundedPositions = std::move(value); }
    inline void SetBoundedPositions(const char* value) { m_boundedPositionsHasBeenSet = true; m_boundedPositions.assign(value); }
    inline GetStaticMapRequest& WithBoundedPositions(const Aws::String& value) { SetBoundedPositions(value); return *this;}
    inline GetStaticMapRequest& WithBoundedPositions(Aws::String&& value) { SetBoundedPositions(std::move(value)); return *this;}
    inline GetStaticMapRequest& WithBoundedPositions(const char* value) { SetBoundedPositions(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Takes in a pair of coordinates, [Lon, Lat], which becomes the center point of
     * the image. This parameter requires that either zoom or radius is set.</p> 
     * <p>Cannot be used with <code>Zoom</code> and or <code>Radius</code> </p> 
     * <p>Example: 49.295,-123.108</p>
     */
    inline const Aws::String& GetCenter() const{ return m_center; }
    inline bool CenterHasBeenSet() const { return m_centerHasBeenSet; }
    inline void SetCenter(const Aws::String& value) { m_centerHasBeenSet = true; m_center = value; }
    inline void SetCenter(Aws::String&& value) { m_centerHasBeenSet = true; m_center = std::move(value); }
    inline void SetCenter(const char* value) { m_centerHasBeenSet = true; m_center.assign(value); }
    inline GetStaticMapRequest& WithCenter(const Aws::String& value) { SetCenter(value); return *this;}
    inline GetStaticMapRequest& WithCenter(Aws::String&& value) { SetCenter(std::move(value)); return *this;}
    inline GetStaticMapRequest& WithCenter(const char* value) { SetCenter(value); return *this;}
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
    inline const Aws::String& GetCompactOverlay() const{ return m_compactOverlay; }
    inline bool CompactOverlayHasBeenSet() const { return m_compactOverlayHasBeenSet; }
    inline void SetCompactOverlay(const Aws::String& value) { m_compactOverlayHasBeenSet = true; m_compactOverlay = value; }
    inline void SetCompactOverlay(Aws::String&& value) { m_compactOverlayHasBeenSet = true; m_compactOverlay = std::move(value); }
    inline void SetCompactOverlay(const char* value) { m_compactOverlayHasBeenSet = true; m_compactOverlay.assign(value); }
    inline GetStaticMapRequest& WithCompactOverlay(const Aws::String& value) { SetCompactOverlay(value); return *this;}
    inline GetStaticMapRequest& WithCompactOverlay(Aws::String&& value) { SetCompactOverlay(std::move(value)); return *this;}
    inline GetStaticMapRequest& WithCompactOverlay(const char* value) { SetCompactOverlay(value); return *this;}
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
    inline const Aws::String& GetGeoJsonOverlay() const{ return m_geoJsonOverlay; }
    inline bool GeoJsonOverlayHasBeenSet() const { return m_geoJsonOverlayHasBeenSet; }
    inline void SetGeoJsonOverlay(const Aws::String& value) { m_geoJsonOverlayHasBeenSet = true; m_geoJsonOverlay = value; }
    inline void SetGeoJsonOverlay(Aws::String&& value) { m_geoJsonOverlayHasBeenSet = true; m_geoJsonOverlay = std::move(value); }
    inline void SetGeoJsonOverlay(const char* value) { m_geoJsonOverlayHasBeenSet = true; m_geoJsonOverlay.assign(value); }
    inline GetStaticMapRequest& WithGeoJsonOverlay(const Aws::String& value) { SetGeoJsonOverlay(value); return *this;}
    inline GetStaticMapRequest& WithGeoJsonOverlay(Aws::String&& value) { SetGeoJsonOverlay(std::move(value)); return *this;}
    inline GetStaticMapRequest& WithGeoJsonOverlay(const char* value) { SetGeoJsonOverlay(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the height of the map image.</p>
     */
    inline int GetHeight() const{ return m_height; }
    inline bool HeightHasBeenSet() const { return m_heightHasBeenSet; }
    inline void SetHeight(int value) { m_heightHasBeenSet = true; m_height = value; }
    inline GetStaticMapRequest& WithHeight(int value) { SetHeight(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Optional: The API key to be used for authorization. Either an API key or
     * valid SigV4 signature must be provided when making a request. </p>
     */
    inline const Aws::String& GetKey() const{ return m_key; }
    inline bool KeyHasBeenSet() const { return m_keyHasBeenSet; }
    inline void SetKey(const Aws::String& value) { m_keyHasBeenSet = true; m_key = value; }
    inline void SetKey(Aws::String&& value) { m_keyHasBeenSet = true; m_key = std::move(value); }
    inline void SetKey(const char* value) { m_keyHasBeenSet = true; m_key.assign(value); }
    inline GetStaticMapRequest& WithKey(const Aws::String& value) { SetKey(value); return *this;}
    inline GetStaticMapRequest& WithKey(Aws::String&& value) { SetKey(std::move(value)); return *this;}
    inline GetStaticMapRequest& WithKey(const char* value) { SetKey(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Applies additional space (in pixels) around overlay feature to prevent them
     * from being cut or obscured.</p>  <p>Value for max and min is determined
     * by:</p> <p>Min: <code>1</code> </p> <p>Max: <code>min(height, width)/4</code>
     * </p>  <p>Example: <code>100</code> </p>
     */
    inline int GetPadding() const{ return m_padding; }
    inline bool PaddingHasBeenSet() const { return m_paddingHasBeenSet; }
    inline void SetPadding(int value) { m_paddingHasBeenSet = true; m_padding = value; }
    inline GetStaticMapRequest& WithPadding(int value) { SetPadding(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Used with center parameter, it specifies the zoom of the image where you can
     * control it on a granular level. Takes in any value <code>&gt;= 1</code>. </p>
     * <p>Example: <code>1500</code> </p>  <p>Cannot be used with
     * <code>Zoom</code>.</p>  <p> <b>Unit</b>: <code>Meters</code> </p> <p/>
     */
    inline long long GetRadius() const{ return m_radius; }
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
    inline const Aws::String& GetFileName() const{ return m_fileName; }
    inline bool FileNameHasBeenSet() const { return m_fileNameHasBeenSet; }
    inline void SetFileName(const Aws::String& value) { m_fileNameHasBeenSet = true; m_fileName = value; }
    inline void SetFileName(Aws::String&& value) { m_fileNameHasBeenSet = true; m_fileName = std::move(value); }
    inline void SetFileName(const char* value) { m_fileNameHasBeenSet = true; m_fileName.assign(value); }
    inline GetStaticMapRequest& WithFileName(const Aws::String& value) { SetFileName(value); return *this;}
    inline GetStaticMapRequest& WithFileName(Aws::String&& value) { SetFileName(std::move(value)); return *this;}
    inline GetStaticMapRequest& WithFileName(const char* value) { SetFileName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Displays a scale on the bottom right of the map image with the unit specified
     * in the input. </p> <p>Example: <code>KilometersMiles, Miles, Kilometers,
     * MilesKilometers</code> </p>
     */
    inline const ScaleBarUnit& GetScaleBarUnit() const{ return m_scaleBarUnit; }
    inline bool ScaleBarUnitHasBeenSet() const { return m_scaleBarUnitHasBeenSet; }
    inline void SetScaleBarUnit(const ScaleBarUnit& value) { m_scaleBarUnitHasBeenSet = true; m_scaleBarUnit = value; }
    inline void SetScaleBarUnit(ScaleBarUnit&& value) { m_scaleBarUnitHasBeenSet = true; m_scaleBarUnit = std::move(value); }
    inline GetStaticMapRequest& WithScaleBarUnit(const ScaleBarUnit& value) { SetScaleBarUnit(value); return *this;}
    inline GetStaticMapRequest& WithScaleBarUnit(ScaleBarUnit&& value) { SetScaleBarUnit(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Style specifies the desired map style for the <code>Style</code> APIs.</p>
     */
    inline const StaticMapStyle& GetStyle() const{ return m_style; }
    inline bool StyleHasBeenSet() const { return m_styleHasBeenSet; }
    inline void SetStyle(const StaticMapStyle& value) { m_styleHasBeenSet = true; m_style = value; }
    inline void SetStyle(StaticMapStyle&& value) { m_styleHasBeenSet = true; m_style = std::move(value); }
    inline GetStaticMapRequest& WithStyle(const StaticMapStyle& value) { SetStyle(value); return *this;}
    inline GetStaticMapRequest& WithStyle(StaticMapStyle&& value) { SetStyle(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the width of the map image.</p>
     */
    inline int GetWidth() const{ return m_width; }
    inline bool WidthHasBeenSet() const { return m_widthHasBeenSet; }
    inline void SetWidth(int value) { m_widthHasBeenSet = true; m_width = value; }
    inline GetStaticMapRequest& WithWidth(int value) { SetWidth(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the zoom level of the map image.</p>  <p>Cannot be used with
     * <code>Radius</code>.</p> 
     */
    inline double GetZoom() const{ return m_zoom; }
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

    Aws::String m_compactOverlay;
    bool m_compactOverlayHasBeenSet = false;

    Aws::String m_geoJsonOverlay;
    bool m_geoJsonOverlayHasBeenSet = false;

    int m_height;
    bool m_heightHasBeenSet = false;

    Aws::String m_key;
    bool m_keyHasBeenSet = false;

    int m_padding;
    bool m_paddingHasBeenSet = false;

    long long m_radius;
    bool m_radiusHasBeenSet = false;

    Aws::String m_fileName;
    bool m_fileNameHasBeenSet = false;

    ScaleBarUnit m_scaleBarUnit;
    bool m_scaleBarUnitHasBeenSet = false;

    StaticMapStyle m_style;
    bool m_styleHasBeenSet = false;

    int m_width;
    bool m_widthHasBeenSet = false;

    double m_zoom;
    bool m_zoomHasBeenSet = false;
  };

} // namespace Model
} // namespace GeoMaps
} // namespace Aws
