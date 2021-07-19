﻿/**
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
  class AWS_LOCATIONSERVICE_API MapConfiguration
  {
  public:
    MapConfiguration();
    MapConfiguration(Aws::Utils::Json::JsonView jsonValue);
    MapConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Specifies the map style selected from an available data provider. For
     * additional information on each map style and to preview each map style, see <a
     * href="location/latest/developerguide/esri.html#esri-map-styles">Esri map
     * styles</a> and <a
     * href="location/latest/developerguide/HERE.html#HERE-map-styles">HERE map
     * styles</a>.</p> <p>Valid <a
     * href="https://docs.aws.amazon.com/location/latest/developerguide/esri.html">Esri</a>
     * styles: </p> <ul> <li> <p> <code>VectorEsriDarkGrayCanvas</code> – The Esri Dark
     * Gray Canvas map style. A vector basemap with a dark gray, neutral background
     * with minimal colors, labels, and features that's designed to draw attention to
     * your thematic content. </p> </li> <li> <p> <code>RasterEsriImagery</code> – The
     * Esri Imagery map style. A raster basemap that provides one meter or better
     * satellite and aerial imagery in many parts of the world and lower resolution
     * satellite imagery worldwide. </p> </li> <li> <p>
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
     * Technologies</a> styles: </p> <ul> <li> <p> <code>VectorHereBerlin</code> – The
     * HERE Berlin map style is a high contrast detailed base map of the world that
     * blends 3D and 2D rendering.</p>  <p>When using HERE as your data provider,
     * and selecting the Style <code>VectorHereBerlin</code>, you may not use HERE
     * Technologies maps for Asset Management. See the <a
     * href="https://aws.amazon.com/service-terms/">AWS Service Terms</a> for Amazon
     * Location Service.</p>  </li> </ul>
     */
    inline const Aws::String& GetStyle() const{ return m_style; }

    /**
     * <p>Specifies the map style selected from an available data provider. For
     * additional information on each map style and to preview each map style, see <a
     * href="location/latest/developerguide/esri.html#esri-map-styles">Esri map
     * styles</a> and <a
     * href="location/latest/developerguide/HERE.html#HERE-map-styles">HERE map
     * styles</a>.</p> <p>Valid <a
     * href="https://docs.aws.amazon.com/location/latest/developerguide/esri.html">Esri</a>
     * styles: </p> <ul> <li> <p> <code>VectorEsriDarkGrayCanvas</code> – The Esri Dark
     * Gray Canvas map style. A vector basemap with a dark gray, neutral background
     * with minimal colors, labels, and features that's designed to draw attention to
     * your thematic content. </p> </li> <li> <p> <code>RasterEsriImagery</code> – The
     * Esri Imagery map style. A raster basemap that provides one meter or better
     * satellite and aerial imagery in many parts of the world and lower resolution
     * satellite imagery worldwide. </p> </li> <li> <p>
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
     * Technologies</a> styles: </p> <ul> <li> <p> <code>VectorHereBerlin</code> – The
     * HERE Berlin map style is a high contrast detailed base map of the world that
     * blends 3D and 2D rendering.</p>  <p>When using HERE as your data provider,
     * and selecting the Style <code>VectorHereBerlin</code>, you may not use HERE
     * Technologies maps for Asset Management. See the <a
     * href="https://aws.amazon.com/service-terms/">AWS Service Terms</a> for Amazon
     * Location Service.</p>  </li> </ul>
     */
    inline bool StyleHasBeenSet() const { return m_styleHasBeenSet; }

    /**
     * <p>Specifies the map style selected from an available data provider. For
     * additional information on each map style and to preview each map style, see <a
     * href="location/latest/developerguide/esri.html#esri-map-styles">Esri map
     * styles</a> and <a
     * href="location/latest/developerguide/HERE.html#HERE-map-styles">HERE map
     * styles</a>.</p> <p>Valid <a
     * href="https://docs.aws.amazon.com/location/latest/developerguide/esri.html">Esri</a>
     * styles: </p> <ul> <li> <p> <code>VectorEsriDarkGrayCanvas</code> – The Esri Dark
     * Gray Canvas map style. A vector basemap with a dark gray, neutral background
     * with minimal colors, labels, and features that's designed to draw attention to
     * your thematic content. </p> </li> <li> <p> <code>RasterEsriImagery</code> – The
     * Esri Imagery map style. A raster basemap that provides one meter or better
     * satellite and aerial imagery in many parts of the world and lower resolution
     * satellite imagery worldwide. </p> </li> <li> <p>
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
     * Technologies</a> styles: </p> <ul> <li> <p> <code>VectorHereBerlin</code> – The
     * HERE Berlin map style is a high contrast detailed base map of the world that
     * blends 3D and 2D rendering.</p>  <p>When using HERE as your data provider,
     * and selecting the Style <code>VectorHereBerlin</code>, you may not use HERE
     * Technologies maps for Asset Management. See the <a
     * href="https://aws.amazon.com/service-terms/">AWS Service Terms</a> for Amazon
     * Location Service.</p>  </li> </ul>
     */
    inline void SetStyle(const Aws::String& value) { m_styleHasBeenSet = true; m_style = value; }

    /**
     * <p>Specifies the map style selected from an available data provider. For
     * additional information on each map style and to preview each map style, see <a
     * href="location/latest/developerguide/esri.html#esri-map-styles">Esri map
     * styles</a> and <a
     * href="location/latest/developerguide/HERE.html#HERE-map-styles">HERE map
     * styles</a>.</p> <p>Valid <a
     * href="https://docs.aws.amazon.com/location/latest/developerguide/esri.html">Esri</a>
     * styles: </p> <ul> <li> <p> <code>VectorEsriDarkGrayCanvas</code> – The Esri Dark
     * Gray Canvas map style. A vector basemap with a dark gray, neutral background
     * with minimal colors, labels, and features that's designed to draw attention to
     * your thematic content. </p> </li> <li> <p> <code>RasterEsriImagery</code> – The
     * Esri Imagery map style. A raster basemap that provides one meter or better
     * satellite and aerial imagery in many parts of the world and lower resolution
     * satellite imagery worldwide. </p> </li> <li> <p>
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
     * Technologies</a> styles: </p> <ul> <li> <p> <code>VectorHereBerlin</code> – The
     * HERE Berlin map style is a high contrast detailed base map of the world that
     * blends 3D and 2D rendering.</p>  <p>When using HERE as your data provider,
     * and selecting the Style <code>VectorHereBerlin</code>, you may not use HERE
     * Technologies maps for Asset Management. See the <a
     * href="https://aws.amazon.com/service-terms/">AWS Service Terms</a> for Amazon
     * Location Service.</p>  </li> </ul>
     */
    inline void SetStyle(Aws::String&& value) { m_styleHasBeenSet = true; m_style = std::move(value); }

    /**
     * <p>Specifies the map style selected from an available data provider. For
     * additional information on each map style and to preview each map style, see <a
     * href="location/latest/developerguide/esri.html#esri-map-styles">Esri map
     * styles</a> and <a
     * href="location/latest/developerguide/HERE.html#HERE-map-styles">HERE map
     * styles</a>.</p> <p>Valid <a
     * href="https://docs.aws.amazon.com/location/latest/developerguide/esri.html">Esri</a>
     * styles: </p> <ul> <li> <p> <code>VectorEsriDarkGrayCanvas</code> – The Esri Dark
     * Gray Canvas map style. A vector basemap with a dark gray, neutral background
     * with minimal colors, labels, and features that's designed to draw attention to
     * your thematic content. </p> </li> <li> <p> <code>RasterEsriImagery</code> – The
     * Esri Imagery map style. A raster basemap that provides one meter or better
     * satellite and aerial imagery in many parts of the world and lower resolution
     * satellite imagery worldwide. </p> </li> <li> <p>
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
     * Technologies</a> styles: </p> <ul> <li> <p> <code>VectorHereBerlin</code> – The
     * HERE Berlin map style is a high contrast detailed base map of the world that
     * blends 3D and 2D rendering.</p>  <p>When using HERE as your data provider,
     * and selecting the Style <code>VectorHereBerlin</code>, you may not use HERE
     * Technologies maps for Asset Management. See the <a
     * href="https://aws.amazon.com/service-terms/">AWS Service Terms</a> for Amazon
     * Location Service.</p>  </li> </ul>
     */
    inline void SetStyle(const char* value) { m_styleHasBeenSet = true; m_style.assign(value); }

    /**
     * <p>Specifies the map style selected from an available data provider. For
     * additional information on each map style and to preview each map style, see <a
     * href="location/latest/developerguide/esri.html#esri-map-styles">Esri map
     * styles</a> and <a
     * href="location/latest/developerguide/HERE.html#HERE-map-styles">HERE map
     * styles</a>.</p> <p>Valid <a
     * href="https://docs.aws.amazon.com/location/latest/developerguide/esri.html">Esri</a>
     * styles: </p> <ul> <li> <p> <code>VectorEsriDarkGrayCanvas</code> – The Esri Dark
     * Gray Canvas map style. A vector basemap with a dark gray, neutral background
     * with minimal colors, labels, and features that's designed to draw attention to
     * your thematic content. </p> </li> <li> <p> <code>RasterEsriImagery</code> – The
     * Esri Imagery map style. A raster basemap that provides one meter or better
     * satellite and aerial imagery in many parts of the world and lower resolution
     * satellite imagery worldwide. </p> </li> <li> <p>
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
     * Technologies</a> styles: </p> <ul> <li> <p> <code>VectorHereBerlin</code> – The
     * HERE Berlin map style is a high contrast detailed base map of the world that
     * blends 3D and 2D rendering.</p>  <p>When using HERE as your data provider,
     * and selecting the Style <code>VectorHereBerlin</code>, you may not use HERE
     * Technologies maps for Asset Management. See the <a
     * href="https://aws.amazon.com/service-terms/">AWS Service Terms</a> for Amazon
     * Location Service.</p>  </li> </ul>
     */
    inline MapConfiguration& WithStyle(const Aws::String& value) { SetStyle(value); return *this;}

    /**
     * <p>Specifies the map style selected from an available data provider. For
     * additional information on each map style and to preview each map style, see <a
     * href="location/latest/developerguide/esri.html#esri-map-styles">Esri map
     * styles</a> and <a
     * href="location/latest/developerguide/HERE.html#HERE-map-styles">HERE map
     * styles</a>.</p> <p>Valid <a
     * href="https://docs.aws.amazon.com/location/latest/developerguide/esri.html">Esri</a>
     * styles: </p> <ul> <li> <p> <code>VectorEsriDarkGrayCanvas</code> – The Esri Dark
     * Gray Canvas map style. A vector basemap with a dark gray, neutral background
     * with minimal colors, labels, and features that's designed to draw attention to
     * your thematic content. </p> </li> <li> <p> <code>RasterEsriImagery</code> – The
     * Esri Imagery map style. A raster basemap that provides one meter or better
     * satellite and aerial imagery in many parts of the world and lower resolution
     * satellite imagery worldwide. </p> </li> <li> <p>
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
     * Technologies</a> styles: </p> <ul> <li> <p> <code>VectorHereBerlin</code> – The
     * HERE Berlin map style is a high contrast detailed base map of the world that
     * blends 3D and 2D rendering.</p>  <p>When using HERE as your data provider,
     * and selecting the Style <code>VectorHereBerlin</code>, you may not use HERE
     * Technologies maps for Asset Management. See the <a
     * href="https://aws.amazon.com/service-terms/">AWS Service Terms</a> for Amazon
     * Location Service.</p>  </li> </ul>
     */
    inline MapConfiguration& WithStyle(Aws::String&& value) { SetStyle(std::move(value)); return *this;}

    /**
     * <p>Specifies the map style selected from an available data provider. For
     * additional information on each map style and to preview each map style, see <a
     * href="location/latest/developerguide/esri.html#esri-map-styles">Esri map
     * styles</a> and <a
     * href="location/latest/developerguide/HERE.html#HERE-map-styles">HERE map
     * styles</a>.</p> <p>Valid <a
     * href="https://docs.aws.amazon.com/location/latest/developerguide/esri.html">Esri</a>
     * styles: </p> <ul> <li> <p> <code>VectorEsriDarkGrayCanvas</code> – The Esri Dark
     * Gray Canvas map style. A vector basemap with a dark gray, neutral background
     * with minimal colors, labels, and features that's designed to draw attention to
     * your thematic content. </p> </li> <li> <p> <code>RasterEsriImagery</code> – The
     * Esri Imagery map style. A raster basemap that provides one meter or better
     * satellite and aerial imagery in many parts of the world and lower resolution
     * satellite imagery worldwide. </p> </li> <li> <p>
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
     * Technologies</a> styles: </p> <ul> <li> <p> <code>VectorHereBerlin</code> – The
     * HERE Berlin map style is a high contrast detailed base map of the world that
     * blends 3D and 2D rendering.</p>  <p>When using HERE as your data provider,
     * and selecting the Style <code>VectorHereBerlin</code>, you may not use HERE
     * Technologies maps for Asset Management. See the <a
     * href="https://aws.amazon.com/service-terms/">AWS Service Terms</a> for Amazon
     * Location Service.</p>  </li> </ul>
     */
    inline MapConfiguration& WithStyle(const char* value) { SetStyle(value); return *this;}

  private:

    Aws::String m_style;
    bool m_styleHasBeenSet;
  };

} // namespace Model
} // namespace LocationService
} // namespace Aws
