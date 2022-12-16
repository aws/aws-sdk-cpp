/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/location/LocationService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
   * <p>Specifies the map tile style selected from an available
   * provider.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/location-2020-11-19/MapConfiguration">AWS
   * API Reference</a></p>
   */
  class MapConfiguration
  {
  public:
    AWS_LOCATIONSERVICE_API MapConfiguration();
    AWS_LOCATIONSERVICE_API MapConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_LOCATIONSERVICE_API MapConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LOCATIONSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Specifies the map style selected from an available data provider.</p>
     * <p>Valid <a
     * href="https://docs.aws.amazon.com/location/latest/developerguide/esri.html">Esri
     * map styles</a>:</p> <ul> <li> <p> <code>VectorEsriDarkGrayCanvas</code> – The
     * Esri Dark Gray Canvas map style. A vector basemap with a dark gray, neutral
     * background with minimal colors, labels, and features that's designed to draw
     * attention to your thematic content. </p> </li> <li> <p>
     * <code>RasterEsriImagery</code> – The Esri Imagery map style. A raster basemap
     * that provides one meter or better satellite and aerial imagery in many parts of
     * the world and lower resolution satellite imagery worldwide. </p> </li> <li> <p>
     * <code>VectorEsriLightGrayCanvas</code> – The Esri Light Gray Canvas map style,
     * which provides a detailed vector basemap with a light gray, neutral background
     * style with minimal colors, labels, and features that's designed to draw
     * attention to your thematic content. </p> </li> <li> <p>
     * <code>VectorEsriTopographic</code> – The Esri Light map style, which provides a
     * detailed vector basemap with a classic Esri map style.</p> </li> <li> <p>
     * <code>VectorEsriStreets</code> – The Esri World Streets map style, which
     * provides a detailed vector basemap for the world symbolized with a classic Esri
     * street map style. The vector tile layer is similar in content and style to the
     * World Street Map raster map.</p> </li> <li> <p>
     * <code>VectorEsriNavigation</code> – The Esri World Navigation map style, which
     * provides a detailed basemap for the world symbolized with a custom navigation
     * map style that's designed for use during the day in mobile devices.</p> </li>
     * </ul> <p>Valid <a
     * href="https://docs.aws.amazon.com/location/latest/developerguide/HERE.html">HERE
     * Technologies map styles</a>:</p> <ul> <li> <p> <code>VectorHereContrast</code> –
     * The HERE Contrast (Berlin) map style is a high contrast detailed base map of the
     * world that blends 3D and 2D rendering.</p>  <p>The
     * <code>VectorHereContrast</code> style has been renamed from
     * <code>VectorHereBerlin</code>. <code>VectorHereBerlin</code> has been
     * deprecated, but will continue to work in applications that use it.</p> 
     * </li> <li> <p> <code>VectorHereExplore</code> – A default HERE map style
     * containing a neutral, global map and its features including roads, buildings,
     * landmarks, and water features. It also now includes a fully designed map of
     * Japan.</p> </li> <li> <p> <code>VectorHereExploreTruck</code> – A global map
     * containing truck restrictions and attributes (e.g. width / height / HAZMAT)
     * symbolized with highlighted segments and icons on top of HERE Explore to support
     * use cases within transport and logistics.</p> </li> <li> <p>
     * <code>RasterHereExploreSatellite</code> – A global map containing high
     * resolution satellite imagery.</p> </li> <li> <p>
     * <code>HybridHereExploreSatellite</code> – A global map displaying the road
     * network, street names, and city labels over satellite imagery. This style will
     * automatically retrieve both raster and vector tiles, and your charges will be
     * based on total tiles retrieved.</p>  <p>Hybrid styles use both vector and
     * raster tiles when rendering the map that you see. This means that more tiles are
     * retrieved than when using either vector or raster tiles alone. Your charges will
     * include all tiles retrieved.</p>  </li> </ul> <p>Valid <a
     * href="https://docs.aws.amazon.com/location/latest/developerguide/open-data.html">Open
     * Data (Preview) map styles</a>:</p> <ul> <li> <p>
     * <code>VectorOpenDataStandardLight</code> – The Open Data Standard Light
     * (preview) map style provides a detailed basemap for the world suitable for
     * website and mobile application use. The map includes highways major roads, minor
     * roads, railways, water features, cities, parks, landmarks, building footprints,
     * and administrative boundaries.</p>  <p>Open Data maps is in preview.
     * We may add, change, or remove features before announcing general availability.
     * For more information, see <a
     * href="https://docs.aws.amazon.com/location/latest/developerguide/open-data.html#open-data-preview">Open
     * Data is in preview release</a>.</p>  </li> </ul>
     */
    inline const Aws::String& GetStyle() const{ return m_style; }

    /**
     * <p>Specifies the map style selected from an available data provider.</p>
     * <p>Valid <a
     * href="https://docs.aws.amazon.com/location/latest/developerguide/esri.html">Esri
     * map styles</a>:</p> <ul> <li> <p> <code>VectorEsriDarkGrayCanvas</code> – The
     * Esri Dark Gray Canvas map style. A vector basemap with a dark gray, neutral
     * background with minimal colors, labels, and features that's designed to draw
     * attention to your thematic content. </p> </li> <li> <p>
     * <code>RasterEsriImagery</code> – The Esri Imagery map style. A raster basemap
     * that provides one meter or better satellite and aerial imagery in many parts of
     * the world and lower resolution satellite imagery worldwide. </p> </li> <li> <p>
     * <code>VectorEsriLightGrayCanvas</code> – The Esri Light Gray Canvas map style,
     * which provides a detailed vector basemap with a light gray, neutral background
     * style with minimal colors, labels, and features that's designed to draw
     * attention to your thematic content. </p> </li> <li> <p>
     * <code>VectorEsriTopographic</code> – The Esri Light map style, which provides a
     * detailed vector basemap with a classic Esri map style.</p> </li> <li> <p>
     * <code>VectorEsriStreets</code> – The Esri World Streets map style, which
     * provides a detailed vector basemap for the world symbolized with a classic Esri
     * street map style. The vector tile layer is similar in content and style to the
     * World Street Map raster map.</p> </li> <li> <p>
     * <code>VectorEsriNavigation</code> – The Esri World Navigation map style, which
     * provides a detailed basemap for the world symbolized with a custom navigation
     * map style that's designed for use during the day in mobile devices.</p> </li>
     * </ul> <p>Valid <a
     * href="https://docs.aws.amazon.com/location/latest/developerguide/HERE.html">HERE
     * Technologies map styles</a>:</p> <ul> <li> <p> <code>VectorHereContrast</code> –
     * The HERE Contrast (Berlin) map style is a high contrast detailed base map of the
     * world that blends 3D and 2D rendering.</p>  <p>The
     * <code>VectorHereContrast</code> style has been renamed from
     * <code>VectorHereBerlin</code>. <code>VectorHereBerlin</code> has been
     * deprecated, but will continue to work in applications that use it.</p> 
     * </li> <li> <p> <code>VectorHereExplore</code> – A default HERE map style
     * containing a neutral, global map and its features including roads, buildings,
     * landmarks, and water features. It also now includes a fully designed map of
     * Japan.</p> </li> <li> <p> <code>VectorHereExploreTruck</code> – A global map
     * containing truck restrictions and attributes (e.g. width / height / HAZMAT)
     * symbolized with highlighted segments and icons on top of HERE Explore to support
     * use cases within transport and logistics.</p> </li> <li> <p>
     * <code>RasterHereExploreSatellite</code> – A global map containing high
     * resolution satellite imagery.</p> </li> <li> <p>
     * <code>HybridHereExploreSatellite</code> – A global map displaying the road
     * network, street names, and city labels over satellite imagery. This style will
     * automatically retrieve both raster and vector tiles, and your charges will be
     * based on total tiles retrieved.</p>  <p>Hybrid styles use both vector and
     * raster tiles when rendering the map that you see. This means that more tiles are
     * retrieved than when using either vector or raster tiles alone. Your charges will
     * include all tiles retrieved.</p>  </li> </ul> <p>Valid <a
     * href="https://docs.aws.amazon.com/location/latest/developerguide/open-data.html">Open
     * Data (Preview) map styles</a>:</p> <ul> <li> <p>
     * <code>VectorOpenDataStandardLight</code> – The Open Data Standard Light
     * (preview) map style provides a detailed basemap for the world suitable for
     * website and mobile application use. The map includes highways major roads, minor
     * roads, railways, water features, cities, parks, landmarks, building footprints,
     * and administrative boundaries.</p>  <p>Open Data maps is in preview.
     * We may add, change, or remove features before announcing general availability.
     * For more information, see <a
     * href="https://docs.aws.amazon.com/location/latest/developerguide/open-data.html#open-data-preview">Open
     * Data is in preview release</a>.</p>  </li> </ul>
     */
    inline bool StyleHasBeenSet() const { return m_styleHasBeenSet; }

    /**
     * <p>Specifies the map style selected from an available data provider.</p>
     * <p>Valid <a
     * href="https://docs.aws.amazon.com/location/latest/developerguide/esri.html">Esri
     * map styles</a>:</p> <ul> <li> <p> <code>VectorEsriDarkGrayCanvas</code> – The
     * Esri Dark Gray Canvas map style. A vector basemap with a dark gray, neutral
     * background with minimal colors, labels, and features that's designed to draw
     * attention to your thematic content. </p> </li> <li> <p>
     * <code>RasterEsriImagery</code> – The Esri Imagery map style. A raster basemap
     * that provides one meter or better satellite and aerial imagery in many parts of
     * the world and lower resolution satellite imagery worldwide. </p> </li> <li> <p>
     * <code>VectorEsriLightGrayCanvas</code> – The Esri Light Gray Canvas map style,
     * which provides a detailed vector basemap with a light gray, neutral background
     * style with minimal colors, labels, and features that's designed to draw
     * attention to your thematic content. </p> </li> <li> <p>
     * <code>VectorEsriTopographic</code> – The Esri Light map style, which provides a
     * detailed vector basemap with a classic Esri map style.</p> </li> <li> <p>
     * <code>VectorEsriStreets</code> – The Esri World Streets map style, which
     * provides a detailed vector basemap for the world symbolized with a classic Esri
     * street map style. The vector tile layer is similar in content and style to the
     * World Street Map raster map.</p> </li> <li> <p>
     * <code>VectorEsriNavigation</code> – The Esri World Navigation map style, which
     * provides a detailed basemap for the world symbolized with a custom navigation
     * map style that's designed for use during the day in mobile devices.</p> </li>
     * </ul> <p>Valid <a
     * href="https://docs.aws.amazon.com/location/latest/developerguide/HERE.html">HERE
     * Technologies map styles</a>:</p> <ul> <li> <p> <code>VectorHereContrast</code> –
     * The HERE Contrast (Berlin) map style is a high contrast detailed base map of the
     * world that blends 3D and 2D rendering.</p>  <p>The
     * <code>VectorHereContrast</code> style has been renamed from
     * <code>VectorHereBerlin</code>. <code>VectorHereBerlin</code> has been
     * deprecated, but will continue to work in applications that use it.</p> 
     * </li> <li> <p> <code>VectorHereExplore</code> – A default HERE map style
     * containing a neutral, global map and its features including roads, buildings,
     * landmarks, and water features. It also now includes a fully designed map of
     * Japan.</p> </li> <li> <p> <code>VectorHereExploreTruck</code> – A global map
     * containing truck restrictions and attributes (e.g. width / height / HAZMAT)
     * symbolized with highlighted segments and icons on top of HERE Explore to support
     * use cases within transport and logistics.</p> </li> <li> <p>
     * <code>RasterHereExploreSatellite</code> – A global map containing high
     * resolution satellite imagery.</p> </li> <li> <p>
     * <code>HybridHereExploreSatellite</code> – A global map displaying the road
     * network, street names, and city labels over satellite imagery. This style will
     * automatically retrieve both raster and vector tiles, and your charges will be
     * based on total tiles retrieved.</p>  <p>Hybrid styles use both vector and
     * raster tiles when rendering the map that you see. This means that more tiles are
     * retrieved than when using either vector or raster tiles alone. Your charges will
     * include all tiles retrieved.</p>  </li> </ul> <p>Valid <a
     * href="https://docs.aws.amazon.com/location/latest/developerguide/open-data.html">Open
     * Data (Preview) map styles</a>:</p> <ul> <li> <p>
     * <code>VectorOpenDataStandardLight</code> – The Open Data Standard Light
     * (preview) map style provides a detailed basemap for the world suitable for
     * website and mobile application use. The map includes highways major roads, minor
     * roads, railways, water features, cities, parks, landmarks, building footprints,
     * and administrative boundaries.</p>  <p>Open Data maps is in preview.
     * We may add, change, or remove features before announcing general availability.
     * For more information, see <a
     * href="https://docs.aws.amazon.com/location/latest/developerguide/open-data.html#open-data-preview">Open
     * Data is in preview release</a>.</p>  </li> </ul>
     */
    inline void SetStyle(const Aws::String& value) { m_styleHasBeenSet = true; m_style = value; }

    /**
     * <p>Specifies the map style selected from an available data provider.</p>
     * <p>Valid <a
     * href="https://docs.aws.amazon.com/location/latest/developerguide/esri.html">Esri
     * map styles</a>:</p> <ul> <li> <p> <code>VectorEsriDarkGrayCanvas</code> – The
     * Esri Dark Gray Canvas map style. A vector basemap with a dark gray, neutral
     * background with minimal colors, labels, and features that's designed to draw
     * attention to your thematic content. </p> </li> <li> <p>
     * <code>RasterEsriImagery</code> – The Esri Imagery map style. A raster basemap
     * that provides one meter or better satellite and aerial imagery in many parts of
     * the world and lower resolution satellite imagery worldwide. </p> </li> <li> <p>
     * <code>VectorEsriLightGrayCanvas</code> – The Esri Light Gray Canvas map style,
     * which provides a detailed vector basemap with a light gray, neutral background
     * style with minimal colors, labels, and features that's designed to draw
     * attention to your thematic content. </p> </li> <li> <p>
     * <code>VectorEsriTopographic</code> – The Esri Light map style, which provides a
     * detailed vector basemap with a classic Esri map style.</p> </li> <li> <p>
     * <code>VectorEsriStreets</code> – The Esri World Streets map style, which
     * provides a detailed vector basemap for the world symbolized with a classic Esri
     * street map style. The vector tile layer is similar in content and style to the
     * World Street Map raster map.</p> </li> <li> <p>
     * <code>VectorEsriNavigation</code> – The Esri World Navigation map style, which
     * provides a detailed basemap for the world symbolized with a custom navigation
     * map style that's designed for use during the day in mobile devices.</p> </li>
     * </ul> <p>Valid <a
     * href="https://docs.aws.amazon.com/location/latest/developerguide/HERE.html">HERE
     * Technologies map styles</a>:</p> <ul> <li> <p> <code>VectorHereContrast</code> –
     * The HERE Contrast (Berlin) map style is a high contrast detailed base map of the
     * world that blends 3D and 2D rendering.</p>  <p>The
     * <code>VectorHereContrast</code> style has been renamed from
     * <code>VectorHereBerlin</code>. <code>VectorHereBerlin</code> has been
     * deprecated, but will continue to work in applications that use it.</p> 
     * </li> <li> <p> <code>VectorHereExplore</code> – A default HERE map style
     * containing a neutral, global map and its features including roads, buildings,
     * landmarks, and water features. It also now includes a fully designed map of
     * Japan.</p> </li> <li> <p> <code>VectorHereExploreTruck</code> – A global map
     * containing truck restrictions and attributes (e.g. width / height / HAZMAT)
     * symbolized with highlighted segments and icons on top of HERE Explore to support
     * use cases within transport and logistics.</p> </li> <li> <p>
     * <code>RasterHereExploreSatellite</code> – A global map containing high
     * resolution satellite imagery.</p> </li> <li> <p>
     * <code>HybridHereExploreSatellite</code> – A global map displaying the road
     * network, street names, and city labels over satellite imagery. This style will
     * automatically retrieve both raster and vector tiles, and your charges will be
     * based on total tiles retrieved.</p>  <p>Hybrid styles use both vector and
     * raster tiles when rendering the map that you see. This means that more tiles are
     * retrieved than when using either vector or raster tiles alone. Your charges will
     * include all tiles retrieved.</p>  </li> </ul> <p>Valid <a
     * href="https://docs.aws.amazon.com/location/latest/developerguide/open-data.html">Open
     * Data (Preview) map styles</a>:</p> <ul> <li> <p>
     * <code>VectorOpenDataStandardLight</code> – The Open Data Standard Light
     * (preview) map style provides a detailed basemap for the world suitable for
     * website and mobile application use. The map includes highways major roads, minor
     * roads, railways, water features, cities, parks, landmarks, building footprints,
     * and administrative boundaries.</p>  <p>Open Data maps is in preview.
     * We may add, change, or remove features before announcing general availability.
     * For more information, see <a
     * href="https://docs.aws.amazon.com/location/latest/developerguide/open-data.html#open-data-preview">Open
     * Data is in preview release</a>.</p>  </li> </ul>
     */
    inline void SetStyle(Aws::String&& value) { m_styleHasBeenSet = true; m_style = std::move(value); }

    /**
     * <p>Specifies the map style selected from an available data provider.</p>
     * <p>Valid <a
     * href="https://docs.aws.amazon.com/location/latest/developerguide/esri.html">Esri
     * map styles</a>:</p> <ul> <li> <p> <code>VectorEsriDarkGrayCanvas</code> – The
     * Esri Dark Gray Canvas map style. A vector basemap with a dark gray, neutral
     * background with minimal colors, labels, and features that's designed to draw
     * attention to your thematic content. </p> </li> <li> <p>
     * <code>RasterEsriImagery</code> – The Esri Imagery map style. A raster basemap
     * that provides one meter or better satellite and aerial imagery in many parts of
     * the world and lower resolution satellite imagery worldwide. </p> </li> <li> <p>
     * <code>VectorEsriLightGrayCanvas</code> – The Esri Light Gray Canvas map style,
     * which provides a detailed vector basemap with a light gray, neutral background
     * style with minimal colors, labels, and features that's designed to draw
     * attention to your thematic content. </p> </li> <li> <p>
     * <code>VectorEsriTopographic</code> – The Esri Light map style, which provides a
     * detailed vector basemap with a classic Esri map style.</p> </li> <li> <p>
     * <code>VectorEsriStreets</code> – The Esri World Streets map style, which
     * provides a detailed vector basemap for the world symbolized with a classic Esri
     * street map style. The vector tile layer is similar in content and style to the
     * World Street Map raster map.</p> </li> <li> <p>
     * <code>VectorEsriNavigation</code> – The Esri World Navigation map style, which
     * provides a detailed basemap for the world symbolized with a custom navigation
     * map style that's designed for use during the day in mobile devices.</p> </li>
     * </ul> <p>Valid <a
     * href="https://docs.aws.amazon.com/location/latest/developerguide/HERE.html">HERE
     * Technologies map styles</a>:</p> <ul> <li> <p> <code>VectorHereContrast</code> –
     * The HERE Contrast (Berlin) map style is a high contrast detailed base map of the
     * world that blends 3D and 2D rendering.</p>  <p>The
     * <code>VectorHereContrast</code> style has been renamed from
     * <code>VectorHereBerlin</code>. <code>VectorHereBerlin</code> has been
     * deprecated, but will continue to work in applications that use it.</p> 
     * </li> <li> <p> <code>VectorHereExplore</code> – A default HERE map style
     * containing a neutral, global map and its features including roads, buildings,
     * landmarks, and water features. It also now includes a fully designed map of
     * Japan.</p> </li> <li> <p> <code>VectorHereExploreTruck</code> – A global map
     * containing truck restrictions and attributes (e.g. width / height / HAZMAT)
     * symbolized with highlighted segments and icons on top of HERE Explore to support
     * use cases within transport and logistics.</p> </li> <li> <p>
     * <code>RasterHereExploreSatellite</code> – A global map containing high
     * resolution satellite imagery.</p> </li> <li> <p>
     * <code>HybridHereExploreSatellite</code> – A global map displaying the road
     * network, street names, and city labels over satellite imagery. This style will
     * automatically retrieve both raster and vector tiles, and your charges will be
     * based on total tiles retrieved.</p>  <p>Hybrid styles use both vector and
     * raster tiles when rendering the map that you see. This means that more tiles are
     * retrieved than when using either vector or raster tiles alone. Your charges will
     * include all tiles retrieved.</p>  </li> </ul> <p>Valid <a
     * href="https://docs.aws.amazon.com/location/latest/developerguide/open-data.html">Open
     * Data (Preview) map styles</a>:</p> <ul> <li> <p>
     * <code>VectorOpenDataStandardLight</code> – The Open Data Standard Light
     * (preview) map style provides a detailed basemap for the world suitable for
     * website and mobile application use. The map includes highways major roads, minor
     * roads, railways, water features, cities, parks, landmarks, building footprints,
     * and administrative boundaries.</p>  <p>Open Data maps is in preview.
     * We may add, change, or remove features before announcing general availability.
     * For more information, see <a
     * href="https://docs.aws.amazon.com/location/latest/developerguide/open-data.html#open-data-preview">Open
     * Data is in preview release</a>.</p>  </li> </ul>
     */
    inline void SetStyle(const char* value) { m_styleHasBeenSet = true; m_style.assign(value); }

    /**
     * <p>Specifies the map style selected from an available data provider.</p>
     * <p>Valid <a
     * href="https://docs.aws.amazon.com/location/latest/developerguide/esri.html">Esri
     * map styles</a>:</p> <ul> <li> <p> <code>VectorEsriDarkGrayCanvas</code> – The
     * Esri Dark Gray Canvas map style. A vector basemap with a dark gray, neutral
     * background with minimal colors, labels, and features that's designed to draw
     * attention to your thematic content. </p> </li> <li> <p>
     * <code>RasterEsriImagery</code> – The Esri Imagery map style. A raster basemap
     * that provides one meter or better satellite and aerial imagery in many parts of
     * the world and lower resolution satellite imagery worldwide. </p> </li> <li> <p>
     * <code>VectorEsriLightGrayCanvas</code> – The Esri Light Gray Canvas map style,
     * which provides a detailed vector basemap with a light gray, neutral background
     * style with minimal colors, labels, and features that's designed to draw
     * attention to your thematic content. </p> </li> <li> <p>
     * <code>VectorEsriTopographic</code> – The Esri Light map style, which provides a
     * detailed vector basemap with a classic Esri map style.</p> </li> <li> <p>
     * <code>VectorEsriStreets</code> – The Esri World Streets map style, which
     * provides a detailed vector basemap for the world symbolized with a classic Esri
     * street map style. The vector tile layer is similar in content and style to the
     * World Street Map raster map.</p> </li> <li> <p>
     * <code>VectorEsriNavigation</code> – The Esri World Navigation map style, which
     * provides a detailed basemap for the world symbolized with a custom navigation
     * map style that's designed for use during the day in mobile devices.</p> </li>
     * </ul> <p>Valid <a
     * href="https://docs.aws.amazon.com/location/latest/developerguide/HERE.html">HERE
     * Technologies map styles</a>:</p> <ul> <li> <p> <code>VectorHereContrast</code> –
     * The HERE Contrast (Berlin) map style is a high contrast detailed base map of the
     * world that blends 3D and 2D rendering.</p>  <p>The
     * <code>VectorHereContrast</code> style has been renamed from
     * <code>VectorHereBerlin</code>. <code>VectorHereBerlin</code> has been
     * deprecated, but will continue to work in applications that use it.</p> 
     * </li> <li> <p> <code>VectorHereExplore</code> – A default HERE map style
     * containing a neutral, global map and its features including roads, buildings,
     * landmarks, and water features. It also now includes a fully designed map of
     * Japan.</p> </li> <li> <p> <code>VectorHereExploreTruck</code> – A global map
     * containing truck restrictions and attributes (e.g. width / height / HAZMAT)
     * symbolized with highlighted segments and icons on top of HERE Explore to support
     * use cases within transport and logistics.</p> </li> <li> <p>
     * <code>RasterHereExploreSatellite</code> – A global map containing high
     * resolution satellite imagery.</p> </li> <li> <p>
     * <code>HybridHereExploreSatellite</code> – A global map displaying the road
     * network, street names, and city labels over satellite imagery. This style will
     * automatically retrieve both raster and vector tiles, and your charges will be
     * based on total tiles retrieved.</p>  <p>Hybrid styles use both vector and
     * raster tiles when rendering the map that you see. This means that more tiles are
     * retrieved than when using either vector or raster tiles alone. Your charges will
     * include all tiles retrieved.</p>  </li> </ul> <p>Valid <a
     * href="https://docs.aws.amazon.com/location/latest/developerguide/open-data.html">Open
     * Data (Preview) map styles</a>:</p> <ul> <li> <p>
     * <code>VectorOpenDataStandardLight</code> – The Open Data Standard Light
     * (preview) map style provides a detailed basemap for the world suitable for
     * website and mobile application use. The map includes highways major roads, minor
     * roads, railways, water features, cities, parks, landmarks, building footprints,
     * and administrative boundaries.</p>  <p>Open Data maps is in preview.
     * We may add, change, or remove features before announcing general availability.
     * For more information, see <a
     * href="https://docs.aws.amazon.com/location/latest/developerguide/open-data.html#open-data-preview">Open
     * Data is in preview release</a>.</p>  </li> </ul>
     */
    inline MapConfiguration& WithStyle(const Aws::String& value) { SetStyle(value); return *this;}

    /**
     * <p>Specifies the map style selected from an available data provider.</p>
     * <p>Valid <a
     * href="https://docs.aws.amazon.com/location/latest/developerguide/esri.html">Esri
     * map styles</a>:</p> <ul> <li> <p> <code>VectorEsriDarkGrayCanvas</code> – The
     * Esri Dark Gray Canvas map style. A vector basemap with a dark gray, neutral
     * background with minimal colors, labels, and features that's designed to draw
     * attention to your thematic content. </p> </li> <li> <p>
     * <code>RasterEsriImagery</code> – The Esri Imagery map style. A raster basemap
     * that provides one meter or better satellite and aerial imagery in many parts of
     * the world and lower resolution satellite imagery worldwide. </p> </li> <li> <p>
     * <code>VectorEsriLightGrayCanvas</code> – The Esri Light Gray Canvas map style,
     * which provides a detailed vector basemap with a light gray, neutral background
     * style with minimal colors, labels, and features that's designed to draw
     * attention to your thematic content. </p> </li> <li> <p>
     * <code>VectorEsriTopographic</code> – The Esri Light map style, which provides a
     * detailed vector basemap with a classic Esri map style.</p> </li> <li> <p>
     * <code>VectorEsriStreets</code> – The Esri World Streets map style, which
     * provides a detailed vector basemap for the world symbolized with a classic Esri
     * street map style. The vector tile layer is similar in content and style to the
     * World Street Map raster map.</p> </li> <li> <p>
     * <code>VectorEsriNavigation</code> – The Esri World Navigation map style, which
     * provides a detailed basemap for the world symbolized with a custom navigation
     * map style that's designed for use during the day in mobile devices.</p> </li>
     * </ul> <p>Valid <a
     * href="https://docs.aws.amazon.com/location/latest/developerguide/HERE.html">HERE
     * Technologies map styles</a>:</p> <ul> <li> <p> <code>VectorHereContrast</code> –
     * The HERE Contrast (Berlin) map style is a high contrast detailed base map of the
     * world that blends 3D and 2D rendering.</p>  <p>The
     * <code>VectorHereContrast</code> style has been renamed from
     * <code>VectorHereBerlin</code>. <code>VectorHereBerlin</code> has been
     * deprecated, but will continue to work in applications that use it.</p> 
     * </li> <li> <p> <code>VectorHereExplore</code> – A default HERE map style
     * containing a neutral, global map and its features including roads, buildings,
     * landmarks, and water features. It also now includes a fully designed map of
     * Japan.</p> </li> <li> <p> <code>VectorHereExploreTruck</code> – A global map
     * containing truck restrictions and attributes (e.g. width / height / HAZMAT)
     * symbolized with highlighted segments and icons on top of HERE Explore to support
     * use cases within transport and logistics.</p> </li> <li> <p>
     * <code>RasterHereExploreSatellite</code> – A global map containing high
     * resolution satellite imagery.</p> </li> <li> <p>
     * <code>HybridHereExploreSatellite</code> – A global map displaying the road
     * network, street names, and city labels over satellite imagery. This style will
     * automatically retrieve both raster and vector tiles, and your charges will be
     * based on total tiles retrieved.</p>  <p>Hybrid styles use both vector and
     * raster tiles when rendering the map that you see. This means that more tiles are
     * retrieved than when using either vector or raster tiles alone. Your charges will
     * include all tiles retrieved.</p>  </li> </ul> <p>Valid <a
     * href="https://docs.aws.amazon.com/location/latest/developerguide/open-data.html">Open
     * Data (Preview) map styles</a>:</p> <ul> <li> <p>
     * <code>VectorOpenDataStandardLight</code> – The Open Data Standard Light
     * (preview) map style provides a detailed basemap for the world suitable for
     * website and mobile application use. The map includes highways major roads, minor
     * roads, railways, water features, cities, parks, landmarks, building footprints,
     * and administrative boundaries.</p>  <p>Open Data maps is in preview.
     * We may add, change, or remove features before announcing general availability.
     * For more information, see <a
     * href="https://docs.aws.amazon.com/location/latest/developerguide/open-data.html#open-data-preview">Open
     * Data is in preview release</a>.</p>  </li> </ul>
     */
    inline MapConfiguration& WithStyle(Aws::String&& value) { SetStyle(std::move(value)); return *this;}

    /**
     * <p>Specifies the map style selected from an available data provider.</p>
     * <p>Valid <a
     * href="https://docs.aws.amazon.com/location/latest/developerguide/esri.html">Esri
     * map styles</a>:</p> <ul> <li> <p> <code>VectorEsriDarkGrayCanvas</code> – The
     * Esri Dark Gray Canvas map style. A vector basemap with a dark gray, neutral
     * background with minimal colors, labels, and features that's designed to draw
     * attention to your thematic content. </p> </li> <li> <p>
     * <code>RasterEsriImagery</code> – The Esri Imagery map style. A raster basemap
     * that provides one meter or better satellite and aerial imagery in many parts of
     * the world and lower resolution satellite imagery worldwide. </p> </li> <li> <p>
     * <code>VectorEsriLightGrayCanvas</code> – The Esri Light Gray Canvas map style,
     * which provides a detailed vector basemap with a light gray, neutral background
     * style with minimal colors, labels, and features that's designed to draw
     * attention to your thematic content. </p> </li> <li> <p>
     * <code>VectorEsriTopographic</code> – The Esri Light map style, which provides a
     * detailed vector basemap with a classic Esri map style.</p> </li> <li> <p>
     * <code>VectorEsriStreets</code> – The Esri World Streets map style, which
     * provides a detailed vector basemap for the world symbolized with a classic Esri
     * street map style. The vector tile layer is similar in content and style to the
     * World Street Map raster map.</p> </li> <li> <p>
     * <code>VectorEsriNavigation</code> – The Esri World Navigation map style, which
     * provides a detailed basemap for the world symbolized with a custom navigation
     * map style that's designed for use during the day in mobile devices.</p> </li>
     * </ul> <p>Valid <a
     * href="https://docs.aws.amazon.com/location/latest/developerguide/HERE.html">HERE
     * Technologies map styles</a>:</p> <ul> <li> <p> <code>VectorHereContrast</code> –
     * The HERE Contrast (Berlin) map style is a high contrast detailed base map of the
     * world that blends 3D and 2D rendering.</p>  <p>The
     * <code>VectorHereContrast</code> style has been renamed from
     * <code>VectorHereBerlin</code>. <code>VectorHereBerlin</code> has been
     * deprecated, but will continue to work in applications that use it.</p> 
     * </li> <li> <p> <code>VectorHereExplore</code> – A default HERE map style
     * containing a neutral, global map and its features including roads, buildings,
     * landmarks, and water features. It also now includes a fully designed map of
     * Japan.</p> </li> <li> <p> <code>VectorHereExploreTruck</code> – A global map
     * containing truck restrictions and attributes (e.g. width / height / HAZMAT)
     * symbolized with highlighted segments and icons on top of HERE Explore to support
     * use cases within transport and logistics.</p> </li> <li> <p>
     * <code>RasterHereExploreSatellite</code> – A global map containing high
     * resolution satellite imagery.</p> </li> <li> <p>
     * <code>HybridHereExploreSatellite</code> – A global map displaying the road
     * network, street names, and city labels over satellite imagery. This style will
     * automatically retrieve both raster and vector tiles, and your charges will be
     * based on total tiles retrieved.</p>  <p>Hybrid styles use both vector and
     * raster tiles when rendering the map that you see. This means that more tiles are
     * retrieved than when using either vector or raster tiles alone. Your charges will
     * include all tiles retrieved.</p>  </li> </ul> <p>Valid <a
     * href="https://docs.aws.amazon.com/location/latest/developerguide/open-data.html">Open
     * Data (Preview) map styles</a>:</p> <ul> <li> <p>
     * <code>VectorOpenDataStandardLight</code> – The Open Data Standard Light
     * (preview) map style provides a detailed basemap for the world suitable for
     * website and mobile application use. The map includes highways major roads, minor
     * roads, railways, water features, cities, parks, landmarks, building footprints,
     * and administrative boundaries.</p>  <p>Open Data maps is in preview.
     * We may add, change, or remove features before announcing general availability.
     * For more information, see <a
     * href="https://docs.aws.amazon.com/location/latest/developerguide/open-data.html#open-data-preview">Open
     * Data is in preview release</a>.</p>  </li> </ul>
     */
    inline MapConfiguration& WithStyle(const char* value) { SetStyle(value); return *this;}

  private:

    Aws::String m_style;
    bool m_styleHasBeenSet = false;
  };

} // namespace Model
} // namespace LocationService
} // namespace Aws
