/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/location/LocationService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
     * <p>Specifies the custom layers for the style. Leave unset to not enable any
     * custom layer, or, for styles that support custom layers, you can enable
     * layer(s), such as <code>POI</code> layer for the VectorEsriNavigation style.
     * Default is <code>unset</code>.</p>  <p>Currenlty only
     * <code>VectorEsriNavigation</code> supports CustomLayers. For more information,
     * see <a
     * href="https://docs.aws.amazon.com/location/latest/developerguide/map-concepts.html#map-custom-layers">Custom
     * Layers</a>.</p> 
     */
    inline const Aws::Vector<Aws::String>& GetCustomLayers() const{ return m_customLayers; }

    /**
     * <p>Specifies the custom layers for the style. Leave unset to not enable any
     * custom layer, or, for styles that support custom layers, you can enable
     * layer(s), such as <code>POI</code> layer for the VectorEsriNavigation style.
     * Default is <code>unset</code>.</p>  <p>Currenlty only
     * <code>VectorEsriNavigation</code> supports CustomLayers. For more information,
     * see <a
     * href="https://docs.aws.amazon.com/location/latest/developerguide/map-concepts.html#map-custom-layers">Custom
     * Layers</a>.</p> 
     */
    inline bool CustomLayersHasBeenSet() const { return m_customLayersHasBeenSet; }

    /**
     * <p>Specifies the custom layers for the style. Leave unset to not enable any
     * custom layer, or, for styles that support custom layers, you can enable
     * layer(s), such as <code>POI</code> layer for the VectorEsriNavigation style.
     * Default is <code>unset</code>.</p>  <p>Currenlty only
     * <code>VectorEsriNavigation</code> supports CustomLayers. For more information,
     * see <a
     * href="https://docs.aws.amazon.com/location/latest/developerguide/map-concepts.html#map-custom-layers">Custom
     * Layers</a>.</p> 
     */
    inline void SetCustomLayers(const Aws::Vector<Aws::String>& value) { m_customLayersHasBeenSet = true; m_customLayers = value; }

    /**
     * <p>Specifies the custom layers for the style. Leave unset to not enable any
     * custom layer, or, for styles that support custom layers, you can enable
     * layer(s), such as <code>POI</code> layer for the VectorEsriNavigation style.
     * Default is <code>unset</code>.</p>  <p>Currenlty only
     * <code>VectorEsriNavigation</code> supports CustomLayers. For more information,
     * see <a
     * href="https://docs.aws.amazon.com/location/latest/developerguide/map-concepts.html#map-custom-layers">Custom
     * Layers</a>.</p> 
     */
    inline void SetCustomLayers(Aws::Vector<Aws::String>&& value) { m_customLayersHasBeenSet = true; m_customLayers = std::move(value); }

    /**
     * <p>Specifies the custom layers for the style. Leave unset to not enable any
     * custom layer, or, for styles that support custom layers, you can enable
     * layer(s), such as <code>POI</code> layer for the VectorEsriNavigation style.
     * Default is <code>unset</code>.</p>  <p>Currenlty only
     * <code>VectorEsriNavigation</code> supports CustomLayers. For more information,
     * see <a
     * href="https://docs.aws.amazon.com/location/latest/developerguide/map-concepts.html#map-custom-layers">Custom
     * Layers</a>.</p> 
     */
    inline MapConfiguration& WithCustomLayers(const Aws::Vector<Aws::String>& value) { SetCustomLayers(value); return *this;}

    /**
     * <p>Specifies the custom layers for the style. Leave unset to not enable any
     * custom layer, or, for styles that support custom layers, you can enable
     * layer(s), such as <code>POI</code> layer for the VectorEsriNavigation style.
     * Default is <code>unset</code>.</p>  <p>Currenlty only
     * <code>VectorEsriNavigation</code> supports CustomLayers. For more information,
     * see <a
     * href="https://docs.aws.amazon.com/location/latest/developerguide/map-concepts.html#map-custom-layers">Custom
     * Layers</a>.</p> 
     */
    inline MapConfiguration& WithCustomLayers(Aws::Vector<Aws::String>&& value) { SetCustomLayers(std::move(value)); return *this;}

    /**
     * <p>Specifies the custom layers for the style. Leave unset to not enable any
     * custom layer, or, for styles that support custom layers, you can enable
     * layer(s), such as <code>POI</code> layer for the VectorEsriNavigation style.
     * Default is <code>unset</code>.</p>  <p>Currenlty only
     * <code>VectorEsriNavigation</code> supports CustomLayers. For more information,
     * see <a
     * href="https://docs.aws.amazon.com/location/latest/developerguide/map-concepts.html#map-custom-layers">Custom
     * Layers</a>.</p> 
     */
    inline MapConfiguration& AddCustomLayers(const Aws::String& value) { m_customLayersHasBeenSet = true; m_customLayers.push_back(value); return *this; }

    /**
     * <p>Specifies the custom layers for the style. Leave unset to not enable any
     * custom layer, or, for styles that support custom layers, you can enable
     * layer(s), such as <code>POI</code> layer for the VectorEsriNavigation style.
     * Default is <code>unset</code>.</p>  <p>Currenlty only
     * <code>VectorEsriNavigation</code> supports CustomLayers. For more information,
     * see <a
     * href="https://docs.aws.amazon.com/location/latest/developerguide/map-concepts.html#map-custom-layers">Custom
     * Layers</a>.</p> 
     */
    inline MapConfiguration& AddCustomLayers(Aws::String&& value) { m_customLayersHasBeenSet = true; m_customLayers.push_back(std::move(value)); return *this; }

    /**
     * <p>Specifies the custom layers for the style. Leave unset to not enable any
     * custom layer, or, for styles that support custom layers, you can enable
     * layer(s), such as <code>POI</code> layer for the VectorEsriNavigation style.
     * Default is <code>unset</code>.</p>  <p>Currenlty only
     * <code>VectorEsriNavigation</code> supports CustomLayers. For more information,
     * see <a
     * href="https://docs.aws.amazon.com/location/latest/developerguide/map-concepts.html#map-custom-layers">Custom
     * Layers</a>.</p> 
     */
    inline MapConfiguration& AddCustomLayers(const char* value) { m_customLayersHasBeenSet = true; m_customLayers.push_back(value); return *this; }


    /**
     * <p>Specifies the political view for the style. Leave unset to not use a
     * political view, or, for styles that support specific political views, you can
     * choose a view, such as <code>IND</code> for the Indian view.</p> <p>Default is
     * unset.</p>  <p>Not all map resources or styles support political view
     * styles. See <a
     * href="https://docs.aws.amazon.com/location/latest/developerguide/map-concepts.html#political-views">Political
     * views</a> for more information.</p> 
     */
    inline const Aws::String& GetPoliticalView() const{ return m_politicalView; }

    /**
     * <p>Specifies the political view for the style. Leave unset to not use a
     * political view, or, for styles that support specific political views, you can
     * choose a view, such as <code>IND</code> for the Indian view.</p> <p>Default is
     * unset.</p>  <p>Not all map resources or styles support political view
     * styles. See <a
     * href="https://docs.aws.amazon.com/location/latest/developerguide/map-concepts.html#political-views">Political
     * views</a> for more information.</p> 
     */
    inline bool PoliticalViewHasBeenSet() const { return m_politicalViewHasBeenSet; }

    /**
     * <p>Specifies the political view for the style. Leave unset to not use a
     * political view, or, for styles that support specific political views, you can
     * choose a view, such as <code>IND</code> for the Indian view.</p> <p>Default is
     * unset.</p>  <p>Not all map resources or styles support political view
     * styles. See <a
     * href="https://docs.aws.amazon.com/location/latest/developerguide/map-concepts.html#political-views">Political
     * views</a> for more information.</p> 
     */
    inline void SetPoliticalView(const Aws::String& value) { m_politicalViewHasBeenSet = true; m_politicalView = value; }

    /**
     * <p>Specifies the political view for the style. Leave unset to not use a
     * political view, or, for styles that support specific political views, you can
     * choose a view, such as <code>IND</code> for the Indian view.</p> <p>Default is
     * unset.</p>  <p>Not all map resources or styles support political view
     * styles. See <a
     * href="https://docs.aws.amazon.com/location/latest/developerguide/map-concepts.html#political-views">Political
     * views</a> for more information.</p> 
     */
    inline void SetPoliticalView(Aws::String&& value) { m_politicalViewHasBeenSet = true; m_politicalView = std::move(value); }

    /**
     * <p>Specifies the political view for the style. Leave unset to not use a
     * political view, or, for styles that support specific political views, you can
     * choose a view, such as <code>IND</code> for the Indian view.</p> <p>Default is
     * unset.</p>  <p>Not all map resources or styles support political view
     * styles. See <a
     * href="https://docs.aws.amazon.com/location/latest/developerguide/map-concepts.html#political-views">Political
     * views</a> for more information.</p> 
     */
    inline void SetPoliticalView(const char* value) { m_politicalViewHasBeenSet = true; m_politicalView.assign(value); }

    /**
     * <p>Specifies the political view for the style. Leave unset to not use a
     * political view, or, for styles that support specific political views, you can
     * choose a view, such as <code>IND</code> for the Indian view.</p> <p>Default is
     * unset.</p>  <p>Not all map resources or styles support political view
     * styles. See <a
     * href="https://docs.aws.amazon.com/location/latest/developerguide/map-concepts.html#political-views">Political
     * views</a> for more information.</p> 
     */
    inline MapConfiguration& WithPoliticalView(const Aws::String& value) { SetPoliticalView(value); return *this;}

    /**
     * <p>Specifies the political view for the style. Leave unset to not use a
     * political view, or, for styles that support specific political views, you can
     * choose a view, such as <code>IND</code> for the Indian view.</p> <p>Default is
     * unset.</p>  <p>Not all map resources or styles support political view
     * styles. See <a
     * href="https://docs.aws.amazon.com/location/latest/developerguide/map-concepts.html#political-views">Political
     * views</a> for more information.</p> 
     */
    inline MapConfiguration& WithPoliticalView(Aws::String&& value) { SetPoliticalView(std::move(value)); return *this;}

    /**
     * <p>Specifies the political view for the style. Leave unset to not use a
     * political view, or, for styles that support specific political views, you can
     * choose a view, such as <code>IND</code> for the Indian view.</p> <p>Default is
     * unset.</p>  <p>Not all map resources or styles support political view
     * styles. See <a
     * href="https://docs.aws.amazon.com/location/latest/developerguide/map-concepts.html#political-views">Political
     * views</a> for more information.</p> 
     */
    inline MapConfiguration& WithPoliticalView(const char* value) { SetPoliticalView(value); return *this;}


    /**
     * <p>Specifies the map style selected from an available data provider.</p>
     * <p>Valid <a
     * href="https://docs.aws.amazon.com/location/latest/developerguide/esri.html">Esri
     * map styles</a>:</p> <ul> <li> <p> <code>VectorEsriNavigation</code> – The Esri
     * Navigation map style, which provides a detailed basemap for the world symbolized
     * with a custom navigation map style that's designed for use during the day in
     * mobile devices. It also includes a richer set of places, such as shops,
     * services, restaurants, attractions, and other points of interest. Enable the
     * <code>POI</code> layer by setting it in CustomLayers to leverage the additional
     * places data.</p> <p/> </li> <li> <p> <code>RasterEsriImagery</code> – The Esri
     * Imagery map style. A raster basemap that provides one meter or better satellite
     * and aerial imagery in many parts of the world and lower resolution satellite
     * imagery worldwide. </p> </li> <li> <p> <code>VectorEsriLightGrayCanvas</code> –
     * The Esri Light Gray Canvas map style, which provides a detailed vector basemap
     * with a light gray, neutral background style with minimal colors, labels, and
     * features that's designed to draw attention to your thematic content. </p> </li>
     * <li> <p> <code>VectorEsriTopographic</code> – The Esri Light map style, which
     * provides a detailed vector basemap with a classic Esri map style.</p> </li> <li>
     * <p> <code>VectorEsriStreets</code> – The Esri Street Map style, which provides a
     * detailed vector basemap for the world symbolized with a classic Esri street map
     * style. The vector tile layer is similar in content and style to the World Street
     * Map raster map.</p> </li> <li> <p> <code>VectorEsriDarkGrayCanvas</code> – The
     * Esri Dark Gray Canvas map style. A vector basemap with a dark gray, neutral
     * background with minimal colors, labels, and features that's designed to draw
     * attention to your thematic content. </p> </li> </ul> <p>Valid <a
     * href="https://docs.aws.amazon.com/location/latest/developerguide/HERE.html">HERE
     * Technologies map styles</a>:</p> <ul> <li> <p> <code>VectorHereExplore</code> –
     * A default HERE map style containing a neutral, global map and its features
     * including roads, buildings, landmarks, and water features. It also now includes
     * a fully designed map of Japan.</p> </li> <li> <p>
     * <code>RasterHereExploreSatellite</code> – A global map containing high
     * resolution satellite imagery.</p> </li> <li> <p>
     * <code>HybridHereExploreSatellite</code> – A global map displaying the road
     * network, street names, and city labels over satellite imagery. This style will
     * automatically retrieve both raster and vector tiles, and your charges will be
     * based on total tiles retrieved.</p>  <p>Hybrid styles use both vector and
     * raster tiles when rendering the map that you see. This means that more tiles are
     * retrieved than when using either vector or raster tiles alone. Your charges will
     * include all tiles retrieved.</p>  </li> <li> <p>
     * <code>VectorHereContrast</code> – The HERE Contrast (Berlin) map style is a high
     * contrast detailed base map of the world that blends 3D and 2D rendering.</p>
     *  <p>The <code>VectorHereContrast</code> style has been renamed from
     * <code>VectorHereBerlin</code>. <code>VectorHereBerlin</code> has been
     * deprecated, but will continue to work in applications that use it.</p> 
     * </li> <li> <p> <code>VectorHereExploreTruck</code> – A global map containing
     * truck restrictions and attributes (e.g. width / height / HAZMAT) symbolized with
     * highlighted segments and icons on top of HERE Explore to support use cases
     * within transport and logistics.</p> </li> </ul> <p>Valid <a
     * href="https://docs.aws.amazon.com/location/latest/developerguide/grab.html">GrabMaps
     * map styles</a>:</p> <ul> <li> <p> <code>VectorGrabStandardLight</code> – The
     * Grab Standard Light map style provides a basemap with detailed land use
     * coloring, area names, roads, landmarks, and points of interest covering
     * Southeast Asia.</p> </li> <li> <p> <code>VectorGrabStandardDark</code> – The
     * Grab Standard Dark map style provides a dark variation of the standard basemap
     * covering Southeast Asia.</p> </li> </ul>  <p>Grab provides maps only for
     * countries in Southeast Asia, and is only available in the Asia Pacific
     * (Singapore) Region (<code>ap-southeast-1</code>). For more information, see <a
     * href="https://docs.aws.amazon.com/location/latest/developerguide/grab.html#grab-coverage-area">GrabMaps
     * countries and area covered</a>.</p>  <p>Valid <a
     * href="https://docs.aws.amazon.com/location/latest/developerguide/open-data.html">Open
     * Data map styles</a>:</p> <ul> <li> <p> <code>VectorOpenDataStandardLight</code>
     * – The Open Data Standard Light map style provides a detailed basemap for the
     * world suitable for website and mobile application use. The map includes highways
     * major roads, minor roads, railways, water features, cities, parks, landmarks,
     * building footprints, and administrative boundaries.</p> </li> <li> <p>
     * <code>VectorOpenDataStandardDark</code> – Open Data Standard Dark is a
     * dark-themed map style that provides a detailed basemap for the world suitable
     * for website and mobile application use. The map includes highways major roads,
     * minor roads, railways, water features, cities, parks, landmarks, building
     * footprints, and administrative boundaries.</p> </li> <li> <p>
     * <code>VectorOpenDataVisualizationLight</code> – The Open Data Visualization
     * Light map style is a light-themed style with muted colors and fewer features
     * that aids in understanding overlaid data.</p> </li> <li> <p>
     * <code>VectorOpenDataVisualizationDark</code> – The Open Data Visualization Dark
     * map style is a dark-themed style with muted colors and fewer features that aids
     * in understanding overlaid data.</p> </li> </ul>
     */
    inline const Aws::String& GetStyle() const{ return m_style; }

    /**
     * <p>Specifies the map style selected from an available data provider.</p>
     * <p>Valid <a
     * href="https://docs.aws.amazon.com/location/latest/developerguide/esri.html">Esri
     * map styles</a>:</p> <ul> <li> <p> <code>VectorEsriNavigation</code> – The Esri
     * Navigation map style, which provides a detailed basemap for the world symbolized
     * with a custom navigation map style that's designed for use during the day in
     * mobile devices. It also includes a richer set of places, such as shops,
     * services, restaurants, attractions, and other points of interest. Enable the
     * <code>POI</code> layer by setting it in CustomLayers to leverage the additional
     * places data.</p> <p/> </li> <li> <p> <code>RasterEsriImagery</code> – The Esri
     * Imagery map style. A raster basemap that provides one meter or better satellite
     * and aerial imagery in many parts of the world and lower resolution satellite
     * imagery worldwide. </p> </li> <li> <p> <code>VectorEsriLightGrayCanvas</code> –
     * The Esri Light Gray Canvas map style, which provides a detailed vector basemap
     * with a light gray, neutral background style with minimal colors, labels, and
     * features that's designed to draw attention to your thematic content. </p> </li>
     * <li> <p> <code>VectorEsriTopographic</code> – The Esri Light map style, which
     * provides a detailed vector basemap with a classic Esri map style.</p> </li> <li>
     * <p> <code>VectorEsriStreets</code> – The Esri Street Map style, which provides a
     * detailed vector basemap for the world symbolized with a classic Esri street map
     * style. The vector tile layer is similar in content and style to the World Street
     * Map raster map.</p> </li> <li> <p> <code>VectorEsriDarkGrayCanvas</code> – The
     * Esri Dark Gray Canvas map style. A vector basemap with a dark gray, neutral
     * background with minimal colors, labels, and features that's designed to draw
     * attention to your thematic content. </p> </li> </ul> <p>Valid <a
     * href="https://docs.aws.amazon.com/location/latest/developerguide/HERE.html">HERE
     * Technologies map styles</a>:</p> <ul> <li> <p> <code>VectorHereExplore</code> –
     * A default HERE map style containing a neutral, global map and its features
     * including roads, buildings, landmarks, and water features. It also now includes
     * a fully designed map of Japan.</p> </li> <li> <p>
     * <code>RasterHereExploreSatellite</code> – A global map containing high
     * resolution satellite imagery.</p> </li> <li> <p>
     * <code>HybridHereExploreSatellite</code> – A global map displaying the road
     * network, street names, and city labels over satellite imagery. This style will
     * automatically retrieve both raster and vector tiles, and your charges will be
     * based on total tiles retrieved.</p>  <p>Hybrid styles use both vector and
     * raster tiles when rendering the map that you see. This means that more tiles are
     * retrieved than when using either vector or raster tiles alone. Your charges will
     * include all tiles retrieved.</p>  </li> <li> <p>
     * <code>VectorHereContrast</code> – The HERE Contrast (Berlin) map style is a high
     * contrast detailed base map of the world that blends 3D and 2D rendering.</p>
     *  <p>The <code>VectorHereContrast</code> style has been renamed from
     * <code>VectorHereBerlin</code>. <code>VectorHereBerlin</code> has been
     * deprecated, but will continue to work in applications that use it.</p> 
     * </li> <li> <p> <code>VectorHereExploreTruck</code> – A global map containing
     * truck restrictions and attributes (e.g. width / height / HAZMAT) symbolized with
     * highlighted segments and icons on top of HERE Explore to support use cases
     * within transport and logistics.</p> </li> </ul> <p>Valid <a
     * href="https://docs.aws.amazon.com/location/latest/developerguide/grab.html">GrabMaps
     * map styles</a>:</p> <ul> <li> <p> <code>VectorGrabStandardLight</code> – The
     * Grab Standard Light map style provides a basemap with detailed land use
     * coloring, area names, roads, landmarks, and points of interest covering
     * Southeast Asia.</p> </li> <li> <p> <code>VectorGrabStandardDark</code> – The
     * Grab Standard Dark map style provides a dark variation of the standard basemap
     * covering Southeast Asia.</p> </li> </ul>  <p>Grab provides maps only for
     * countries in Southeast Asia, and is only available in the Asia Pacific
     * (Singapore) Region (<code>ap-southeast-1</code>). For more information, see <a
     * href="https://docs.aws.amazon.com/location/latest/developerguide/grab.html#grab-coverage-area">GrabMaps
     * countries and area covered</a>.</p>  <p>Valid <a
     * href="https://docs.aws.amazon.com/location/latest/developerguide/open-data.html">Open
     * Data map styles</a>:</p> <ul> <li> <p> <code>VectorOpenDataStandardLight</code>
     * – The Open Data Standard Light map style provides a detailed basemap for the
     * world suitable for website and mobile application use. The map includes highways
     * major roads, minor roads, railways, water features, cities, parks, landmarks,
     * building footprints, and administrative boundaries.</p> </li> <li> <p>
     * <code>VectorOpenDataStandardDark</code> – Open Data Standard Dark is a
     * dark-themed map style that provides a detailed basemap for the world suitable
     * for website and mobile application use. The map includes highways major roads,
     * minor roads, railways, water features, cities, parks, landmarks, building
     * footprints, and administrative boundaries.</p> </li> <li> <p>
     * <code>VectorOpenDataVisualizationLight</code> – The Open Data Visualization
     * Light map style is a light-themed style with muted colors and fewer features
     * that aids in understanding overlaid data.</p> </li> <li> <p>
     * <code>VectorOpenDataVisualizationDark</code> – The Open Data Visualization Dark
     * map style is a dark-themed style with muted colors and fewer features that aids
     * in understanding overlaid data.</p> </li> </ul>
     */
    inline bool StyleHasBeenSet() const { return m_styleHasBeenSet; }

    /**
     * <p>Specifies the map style selected from an available data provider.</p>
     * <p>Valid <a
     * href="https://docs.aws.amazon.com/location/latest/developerguide/esri.html">Esri
     * map styles</a>:</p> <ul> <li> <p> <code>VectorEsriNavigation</code> – The Esri
     * Navigation map style, which provides a detailed basemap for the world symbolized
     * with a custom navigation map style that's designed for use during the day in
     * mobile devices. It also includes a richer set of places, such as shops,
     * services, restaurants, attractions, and other points of interest. Enable the
     * <code>POI</code> layer by setting it in CustomLayers to leverage the additional
     * places data.</p> <p/> </li> <li> <p> <code>RasterEsriImagery</code> – The Esri
     * Imagery map style. A raster basemap that provides one meter or better satellite
     * and aerial imagery in many parts of the world and lower resolution satellite
     * imagery worldwide. </p> </li> <li> <p> <code>VectorEsriLightGrayCanvas</code> –
     * The Esri Light Gray Canvas map style, which provides a detailed vector basemap
     * with a light gray, neutral background style with minimal colors, labels, and
     * features that's designed to draw attention to your thematic content. </p> </li>
     * <li> <p> <code>VectorEsriTopographic</code> – The Esri Light map style, which
     * provides a detailed vector basemap with a classic Esri map style.</p> </li> <li>
     * <p> <code>VectorEsriStreets</code> – The Esri Street Map style, which provides a
     * detailed vector basemap for the world symbolized with a classic Esri street map
     * style. The vector tile layer is similar in content and style to the World Street
     * Map raster map.</p> </li> <li> <p> <code>VectorEsriDarkGrayCanvas</code> – The
     * Esri Dark Gray Canvas map style. A vector basemap with a dark gray, neutral
     * background with minimal colors, labels, and features that's designed to draw
     * attention to your thematic content. </p> </li> </ul> <p>Valid <a
     * href="https://docs.aws.amazon.com/location/latest/developerguide/HERE.html">HERE
     * Technologies map styles</a>:</p> <ul> <li> <p> <code>VectorHereExplore</code> –
     * A default HERE map style containing a neutral, global map and its features
     * including roads, buildings, landmarks, and water features. It also now includes
     * a fully designed map of Japan.</p> </li> <li> <p>
     * <code>RasterHereExploreSatellite</code> – A global map containing high
     * resolution satellite imagery.</p> </li> <li> <p>
     * <code>HybridHereExploreSatellite</code> – A global map displaying the road
     * network, street names, and city labels over satellite imagery. This style will
     * automatically retrieve both raster and vector tiles, and your charges will be
     * based on total tiles retrieved.</p>  <p>Hybrid styles use both vector and
     * raster tiles when rendering the map that you see. This means that more tiles are
     * retrieved than when using either vector or raster tiles alone. Your charges will
     * include all tiles retrieved.</p>  </li> <li> <p>
     * <code>VectorHereContrast</code> – The HERE Contrast (Berlin) map style is a high
     * contrast detailed base map of the world that blends 3D and 2D rendering.</p>
     *  <p>The <code>VectorHereContrast</code> style has been renamed from
     * <code>VectorHereBerlin</code>. <code>VectorHereBerlin</code> has been
     * deprecated, but will continue to work in applications that use it.</p> 
     * </li> <li> <p> <code>VectorHereExploreTruck</code> – A global map containing
     * truck restrictions and attributes (e.g. width / height / HAZMAT) symbolized with
     * highlighted segments and icons on top of HERE Explore to support use cases
     * within transport and logistics.</p> </li> </ul> <p>Valid <a
     * href="https://docs.aws.amazon.com/location/latest/developerguide/grab.html">GrabMaps
     * map styles</a>:</p> <ul> <li> <p> <code>VectorGrabStandardLight</code> – The
     * Grab Standard Light map style provides a basemap with detailed land use
     * coloring, area names, roads, landmarks, and points of interest covering
     * Southeast Asia.</p> </li> <li> <p> <code>VectorGrabStandardDark</code> – The
     * Grab Standard Dark map style provides a dark variation of the standard basemap
     * covering Southeast Asia.</p> </li> </ul>  <p>Grab provides maps only for
     * countries in Southeast Asia, and is only available in the Asia Pacific
     * (Singapore) Region (<code>ap-southeast-1</code>). For more information, see <a
     * href="https://docs.aws.amazon.com/location/latest/developerguide/grab.html#grab-coverage-area">GrabMaps
     * countries and area covered</a>.</p>  <p>Valid <a
     * href="https://docs.aws.amazon.com/location/latest/developerguide/open-data.html">Open
     * Data map styles</a>:</p> <ul> <li> <p> <code>VectorOpenDataStandardLight</code>
     * – The Open Data Standard Light map style provides a detailed basemap for the
     * world suitable for website and mobile application use. The map includes highways
     * major roads, minor roads, railways, water features, cities, parks, landmarks,
     * building footprints, and administrative boundaries.</p> </li> <li> <p>
     * <code>VectorOpenDataStandardDark</code> – Open Data Standard Dark is a
     * dark-themed map style that provides a detailed basemap for the world suitable
     * for website and mobile application use. The map includes highways major roads,
     * minor roads, railways, water features, cities, parks, landmarks, building
     * footprints, and administrative boundaries.</p> </li> <li> <p>
     * <code>VectorOpenDataVisualizationLight</code> – The Open Data Visualization
     * Light map style is a light-themed style with muted colors and fewer features
     * that aids in understanding overlaid data.</p> </li> <li> <p>
     * <code>VectorOpenDataVisualizationDark</code> – The Open Data Visualization Dark
     * map style is a dark-themed style with muted colors and fewer features that aids
     * in understanding overlaid data.</p> </li> </ul>
     */
    inline void SetStyle(const Aws::String& value) { m_styleHasBeenSet = true; m_style = value; }

    /**
     * <p>Specifies the map style selected from an available data provider.</p>
     * <p>Valid <a
     * href="https://docs.aws.amazon.com/location/latest/developerguide/esri.html">Esri
     * map styles</a>:</p> <ul> <li> <p> <code>VectorEsriNavigation</code> – The Esri
     * Navigation map style, which provides a detailed basemap for the world symbolized
     * with a custom navigation map style that's designed for use during the day in
     * mobile devices. It also includes a richer set of places, such as shops,
     * services, restaurants, attractions, and other points of interest. Enable the
     * <code>POI</code> layer by setting it in CustomLayers to leverage the additional
     * places data.</p> <p/> </li> <li> <p> <code>RasterEsriImagery</code> – The Esri
     * Imagery map style. A raster basemap that provides one meter or better satellite
     * and aerial imagery in many parts of the world and lower resolution satellite
     * imagery worldwide. </p> </li> <li> <p> <code>VectorEsriLightGrayCanvas</code> –
     * The Esri Light Gray Canvas map style, which provides a detailed vector basemap
     * with a light gray, neutral background style with minimal colors, labels, and
     * features that's designed to draw attention to your thematic content. </p> </li>
     * <li> <p> <code>VectorEsriTopographic</code> – The Esri Light map style, which
     * provides a detailed vector basemap with a classic Esri map style.</p> </li> <li>
     * <p> <code>VectorEsriStreets</code> – The Esri Street Map style, which provides a
     * detailed vector basemap for the world symbolized with a classic Esri street map
     * style. The vector tile layer is similar in content and style to the World Street
     * Map raster map.</p> </li> <li> <p> <code>VectorEsriDarkGrayCanvas</code> – The
     * Esri Dark Gray Canvas map style. A vector basemap with a dark gray, neutral
     * background with minimal colors, labels, and features that's designed to draw
     * attention to your thematic content. </p> </li> </ul> <p>Valid <a
     * href="https://docs.aws.amazon.com/location/latest/developerguide/HERE.html">HERE
     * Technologies map styles</a>:</p> <ul> <li> <p> <code>VectorHereExplore</code> –
     * A default HERE map style containing a neutral, global map and its features
     * including roads, buildings, landmarks, and water features. It also now includes
     * a fully designed map of Japan.</p> </li> <li> <p>
     * <code>RasterHereExploreSatellite</code> – A global map containing high
     * resolution satellite imagery.</p> </li> <li> <p>
     * <code>HybridHereExploreSatellite</code> – A global map displaying the road
     * network, street names, and city labels over satellite imagery. This style will
     * automatically retrieve both raster and vector tiles, and your charges will be
     * based on total tiles retrieved.</p>  <p>Hybrid styles use both vector and
     * raster tiles when rendering the map that you see. This means that more tiles are
     * retrieved than when using either vector or raster tiles alone. Your charges will
     * include all tiles retrieved.</p>  </li> <li> <p>
     * <code>VectorHereContrast</code> – The HERE Contrast (Berlin) map style is a high
     * contrast detailed base map of the world that blends 3D and 2D rendering.</p>
     *  <p>The <code>VectorHereContrast</code> style has been renamed from
     * <code>VectorHereBerlin</code>. <code>VectorHereBerlin</code> has been
     * deprecated, but will continue to work in applications that use it.</p> 
     * </li> <li> <p> <code>VectorHereExploreTruck</code> – A global map containing
     * truck restrictions and attributes (e.g. width / height / HAZMAT) symbolized with
     * highlighted segments and icons on top of HERE Explore to support use cases
     * within transport and logistics.</p> </li> </ul> <p>Valid <a
     * href="https://docs.aws.amazon.com/location/latest/developerguide/grab.html">GrabMaps
     * map styles</a>:</p> <ul> <li> <p> <code>VectorGrabStandardLight</code> – The
     * Grab Standard Light map style provides a basemap with detailed land use
     * coloring, area names, roads, landmarks, and points of interest covering
     * Southeast Asia.</p> </li> <li> <p> <code>VectorGrabStandardDark</code> – The
     * Grab Standard Dark map style provides a dark variation of the standard basemap
     * covering Southeast Asia.</p> </li> </ul>  <p>Grab provides maps only for
     * countries in Southeast Asia, and is only available in the Asia Pacific
     * (Singapore) Region (<code>ap-southeast-1</code>). For more information, see <a
     * href="https://docs.aws.amazon.com/location/latest/developerguide/grab.html#grab-coverage-area">GrabMaps
     * countries and area covered</a>.</p>  <p>Valid <a
     * href="https://docs.aws.amazon.com/location/latest/developerguide/open-data.html">Open
     * Data map styles</a>:</p> <ul> <li> <p> <code>VectorOpenDataStandardLight</code>
     * – The Open Data Standard Light map style provides a detailed basemap for the
     * world suitable for website and mobile application use. The map includes highways
     * major roads, minor roads, railways, water features, cities, parks, landmarks,
     * building footprints, and administrative boundaries.</p> </li> <li> <p>
     * <code>VectorOpenDataStandardDark</code> – Open Data Standard Dark is a
     * dark-themed map style that provides a detailed basemap for the world suitable
     * for website and mobile application use. The map includes highways major roads,
     * minor roads, railways, water features, cities, parks, landmarks, building
     * footprints, and administrative boundaries.</p> </li> <li> <p>
     * <code>VectorOpenDataVisualizationLight</code> – The Open Data Visualization
     * Light map style is a light-themed style with muted colors and fewer features
     * that aids in understanding overlaid data.</p> </li> <li> <p>
     * <code>VectorOpenDataVisualizationDark</code> – The Open Data Visualization Dark
     * map style is a dark-themed style with muted colors and fewer features that aids
     * in understanding overlaid data.</p> </li> </ul>
     */
    inline void SetStyle(Aws::String&& value) { m_styleHasBeenSet = true; m_style = std::move(value); }

    /**
     * <p>Specifies the map style selected from an available data provider.</p>
     * <p>Valid <a
     * href="https://docs.aws.amazon.com/location/latest/developerguide/esri.html">Esri
     * map styles</a>:</p> <ul> <li> <p> <code>VectorEsriNavigation</code> – The Esri
     * Navigation map style, which provides a detailed basemap for the world symbolized
     * with a custom navigation map style that's designed for use during the day in
     * mobile devices. It also includes a richer set of places, such as shops,
     * services, restaurants, attractions, and other points of interest. Enable the
     * <code>POI</code> layer by setting it in CustomLayers to leverage the additional
     * places data.</p> <p/> </li> <li> <p> <code>RasterEsriImagery</code> – The Esri
     * Imagery map style. A raster basemap that provides one meter or better satellite
     * and aerial imagery in many parts of the world and lower resolution satellite
     * imagery worldwide. </p> </li> <li> <p> <code>VectorEsriLightGrayCanvas</code> –
     * The Esri Light Gray Canvas map style, which provides a detailed vector basemap
     * with a light gray, neutral background style with minimal colors, labels, and
     * features that's designed to draw attention to your thematic content. </p> </li>
     * <li> <p> <code>VectorEsriTopographic</code> – The Esri Light map style, which
     * provides a detailed vector basemap with a classic Esri map style.</p> </li> <li>
     * <p> <code>VectorEsriStreets</code> – The Esri Street Map style, which provides a
     * detailed vector basemap for the world symbolized with a classic Esri street map
     * style. The vector tile layer is similar in content and style to the World Street
     * Map raster map.</p> </li> <li> <p> <code>VectorEsriDarkGrayCanvas</code> – The
     * Esri Dark Gray Canvas map style. A vector basemap with a dark gray, neutral
     * background with minimal colors, labels, and features that's designed to draw
     * attention to your thematic content. </p> </li> </ul> <p>Valid <a
     * href="https://docs.aws.amazon.com/location/latest/developerguide/HERE.html">HERE
     * Technologies map styles</a>:</p> <ul> <li> <p> <code>VectorHereExplore</code> –
     * A default HERE map style containing a neutral, global map and its features
     * including roads, buildings, landmarks, and water features. It also now includes
     * a fully designed map of Japan.</p> </li> <li> <p>
     * <code>RasterHereExploreSatellite</code> – A global map containing high
     * resolution satellite imagery.</p> </li> <li> <p>
     * <code>HybridHereExploreSatellite</code> – A global map displaying the road
     * network, street names, and city labels over satellite imagery. This style will
     * automatically retrieve both raster and vector tiles, and your charges will be
     * based on total tiles retrieved.</p>  <p>Hybrid styles use both vector and
     * raster tiles when rendering the map that you see. This means that more tiles are
     * retrieved than when using either vector or raster tiles alone. Your charges will
     * include all tiles retrieved.</p>  </li> <li> <p>
     * <code>VectorHereContrast</code> – The HERE Contrast (Berlin) map style is a high
     * contrast detailed base map of the world that blends 3D and 2D rendering.</p>
     *  <p>The <code>VectorHereContrast</code> style has been renamed from
     * <code>VectorHereBerlin</code>. <code>VectorHereBerlin</code> has been
     * deprecated, but will continue to work in applications that use it.</p> 
     * </li> <li> <p> <code>VectorHereExploreTruck</code> – A global map containing
     * truck restrictions and attributes (e.g. width / height / HAZMAT) symbolized with
     * highlighted segments and icons on top of HERE Explore to support use cases
     * within transport and logistics.</p> </li> </ul> <p>Valid <a
     * href="https://docs.aws.amazon.com/location/latest/developerguide/grab.html">GrabMaps
     * map styles</a>:</p> <ul> <li> <p> <code>VectorGrabStandardLight</code> – The
     * Grab Standard Light map style provides a basemap with detailed land use
     * coloring, area names, roads, landmarks, and points of interest covering
     * Southeast Asia.</p> </li> <li> <p> <code>VectorGrabStandardDark</code> – The
     * Grab Standard Dark map style provides a dark variation of the standard basemap
     * covering Southeast Asia.</p> </li> </ul>  <p>Grab provides maps only for
     * countries in Southeast Asia, and is only available in the Asia Pacific
     * (Singapore) Region (<code>ap-southeast-1</code>). For more information, see <a
     * href="https://docs.aws.amazon.com/location/latest/developerguide/grab.html#grab-coverage-area">GrabMaps
     * countries and area covered</a>.</p>  <p>Valid <a
     * href="https://docs.aws.amazon.com/location/latest/developerguide/open-data.html">Open
     * Data map styles</a>:</p> <ul> <li> <p> <code>VectorOpenDataStandardLight</code>
     * – The Open Data Standard Light map style provides a detailed basemap for the
     * world suitable for website and mobile application use. The map includes highways
     * major roads, minor roads, railways, water features, cities, parks, landmarks,
     * building footprints, and administrative boundaries.</p> </li> <li> <p>
     * <code>VectorOpenDataStandardDark</code> – Open Data Standard Dark is a
     * dark-themed map style that provides a detailed basemap for the world suitable
     * for website and mobile application use. The map includes highways major roads,
     * minor roads, railways, water features, cities, parks, landmarks, building
     * footprints, and administrative boundaries.</p> </li> <li> <p>
     * <code>VectorOpenDataVisualizationLight</code> – The Open Data Visualization
     * Light map style is a light-themed style with muted colors and fewer features
     * that aids in understanding overlaid data.</p> </li> <li> <p>
     * <code>VectorOpenDataVisualizationDark</code> – The Open Data Visualization Dark
     * map style is a dark-themed style with muted colors and fewer features that aids
     * in understanding overlaid data.</p> </li> </ul>
     */
    inline void SetStyle(const char* value) { m_styleHasBeenSet = true; m_style.assign(value); }

    /**
     * <p>Specifies the map style selected from an available data provider.</p>
     * <p>Valid <a
     * href="https://docs.aws.amazon.com/location/latest/developerguide/esri.html">Esri
     * map styles</a>:</p> <ul> <li> <p> <code>VectorEsriNavigation</code> – The Esri
     * Navigation map style, which provides a detailed basemap for the world symbolized
     * with a custom navigation map style that's designed for use during the day in
     * mobile devices. It also includes a richer set of places, such as shops,
     * services, restaurants, attractions, and other points of interest. Enable the
     * <code>POI</code> layer by setting it in CustomLayers to leverage the additional
     * places data.</p> <p/> </li> <li> <p> <code>RasterEsriImagery</code> – The Esri
     * Imagery map style. A raster basemap that provides one meter or better satellite
     * and aerial imagery in many parts of the world and lower resolution satellite
     * imagery worldwide. </p> </li> <li> <p> <code>VectorEsriLightGrayCanvas</code> –
     * The Esri Light Gray Canvas map style, which provides a detailed vector basemap
     * with a light gray, neutral background style with minimal colors, labels, and
     * features that's designed to draw attention to your thematic content. </p> </li>
     * <li> <p> <code>VectorEsriTopographic</code> – The Esri Light map style, which
     * provides a detailed vector basemap with a classic Esri map style.</p> </li> <li>
     * <p> <code>VectorEsriStreets</code> – The Esri Street Map style, which provides a
     * detailed vector basemap for the world symbolized with a classic Esri street map
     * style. The vector tile layer is similar in content and style to the World Street
     * Map raster map.</p> </li> <li> <p> <code>VectorEsriDarkGrayCanvas</code> – The
     * Esri Dark Gray Canvas map style. A vector basemap with a dark gray, neutral
     * background with minimal colors, labels, and features that's designed to draw
     * attention to your thematic content. </p> </li> </ul> <p>Valid <a
     * href="https://docs.aws.amazon.com/location/latest/developerguide/HERE.html">HERE
     * Technologies map styles</a>:</p> <ul> <li> <p> <code>VectorHereExplore</code> –
     * A default HERE map style containing a neutral, global map and its features
     * including roads, buildings, landmarks, and water features. It also now includes
     * a fully designed map of Japan.</p> </li> <li> <p>
     * <code>RasterHereExploreSatellite</code> – A global map containing high
     * resolution satellite imagery.</p> </li> <li> <p>
     * <code>HybridHereExploreSatellite</code> – A global map displaying the road
     * network, street names, and city labels over satellite imagery. This style will
     * automatically retrieve both raster and vector tiles, and your charges will be
     * based on total tiles retrieved.</p>  <p>Hybrid styles use both vector and
     * raster tiles when rendering the map that you see. This means that more tiles are
     * retrieved than when using either vector or raster tiles alone. Your charges will
     * include all tiles retrieved.</p>  </li> <li> <p>
     * <code>VectorHereContrast</code> – The HERE Contrast (Berlin) map style is a high
     * contrast detailed base map of the world that blends 3D and 2D rendering.</p>
     *  <p>The <code>VectorHereContrast</code> style has been renamed from
     * <code>VectorHereBerlin</code>. <code>VectorHereBerlin</code> has been
     * deprecated, but will continue to work in applications that use it.</p> 
     * </li> <li> <p> <code>VectorHereExploreTruck</code> – A global map containing
     * truck restrictions and attributes (e.g. width / height / HAZMAT) symbolized with
     * highlighted segments and icons on top of HERE Explore to support use cases
     * within transport and logistics.</p> </li> </ul> <p>Valid <a
     * href="https://docs.aws.amazon.com/location/latest/developerguide/grab.html">GrabMaps
     * map styles</a>:</p> <ul> <li> <p> <code>VectorGrabStandardLight</code> – The
     * Grab Standard Light map style provides a basemap with detailed land use
     * coloring, area names, roads, landmarks, and points of interest covering
     * Southeast Asia.</p> </li> <li> <p> <code>VectorGrabStandardDark</code> – The
     * Grab Standard Dark map style provides a dark variation of the standard basemap
     * covering Southeast Asia.</p> </li> </ul>  <p>Grab provides maps only for
     * countries in Southeast Asia, and is only available in the Asia Pacific
     * (Singapore) Region (<code>ap-southeast-1</code>). For more information, see <a
     * href="https://docs.aws.amazon.com/location/latest/developerguide/grab.html#grab-coverage-area">GrabMaps
     * countries and area covered</a>.</p>  <p>Valid <a
     * href="https://docs.aws.amazon.com/location/latest/developerguide/open-data.html">Open
     * Data map styles</a>:</p> <ul> <li> <p> <code>VectorOpenDataStandardLight</code>
     * – The Open Data Standard Light map style provides a detailed basemap for the
     * world suitable for website and mobile application use. The map includes highways
     * major roads, minor roads, railways, water features, cities, parks, landmarks,
     * building footprints, and administrative boundaries.</p> </li> <li> <p>
     * <code>VectorOpenDataStandardDark</code> – Open Data Standard Dark is a
     * dark-themed map style that provides a detailed basemap for the world suitable
     * for website and mobile application use. The map includes highways major roads,
     * minor roads, railways, water features, cities, parks, landmarks, building
     * footprints, and administrative boundaries.</p> </li> <li> <p>
     * <code>VectorOpenDataVisualizationLight</code> – The Open Data Visualization
     * Light map style is a light-themed style with muted colors and fewer features
     * that aids in understanding overlaid data.</p> </li> <li> <p>
     * <code>VectorOpenDataVisualizationDark</code> – The Open Data Visualization Dark
     * map style is a dark-themed style with muted colors and fewer features that aids
     * in understanding overlaid data.</p> </li> </ul>
     */
    inline MapConfiguration& WithStyle(const Aws::String& value) { SetStyle(value); return *this;}

    /**
     * <p>Specifies the map style selected from an available data provider.</p>
     * <p>Valid <a
     * href="https://docs.aws.amazon.com/location/latest/developerguide/esri.html">Esri
     * map styles</a>:</p> <ul> <li> <p> <code>VectorEsriNavigation</code> – The Esri
     * Navigation map style, which provides a detailed basemap for the world symbolized
     * with a custom navigation map style that's designed for use during the day in
     * mobile devices. It also includes a richer set of places, such as shops,
     * services, restaurants, attractions, and other points of interest. Enable the
     * <code>POI</code> layer by setting it in CustomLayers to leverage the additional
     * places data.</p> <p/> </li> <li> <p> <code>RasterEsriImagery</code> – The Esri
     * Imagery map style. A raster basemap that provides one meter or better satellite
     * and aerial imagery in many parts of the world and lower resolution satellite
     * imagery worldwide. </p> </li> <li> <p> <code>VectorEsriLightGrayCanvas</code> –
     * The Esri Light Gray Canvas map style, which provides a detailed vector basemap
     * with a light gray, neutral background style with minimal colors, labels, and
     * features that's designed to draw attention to your thematic content. </p> </li>
     * <li> <p> <code>VectorEsriTopographic</code> – The Esri Light map style, which
     * provides a detailed vector basemap with a classic Esri map style.</p> </li> <li>
     * <p> <code>VectorEsriStreets</code> – The Esri Street Map style, which provides a
     * detailed vector basemap for the world symbolized with a classic Esri street map
     * style. The vector tile layer is similar in content and style to the World Street
     * Map raster map.</p> </li> <li> <p> <code>VectorEsriDarkGrayCanvas</code> – The
     * Esri Dark Gray Canvas map style. A vector basemap with a dark gray, neutral
     * background with minimal colors, labels, and features that's designed to draw
     * attention to your thematic content. </p> </li> </ul> <p>Valid <a
     * href="https://docs.aws.amazon.com/location/latest/developerguide/HERE.html">HERE
     * Technologies map styles</a>:</p> <ul> <li> <p> <code>VectorHereExplore</code> –
     * A default HERE map style containing a neutral, global map and its features
     * including roads, buildings, landmarks, and water features. It also now includes
     * a fully designed map of Japan.</p> </li> <li> <p>
     * <code>RasterHereExploreSatellite</code> – A global map containing high
     * resolution satellite imagery.</p> </li> <li> <p>
     * <code>HybridHereExploreSatellite</code> – A global map displaying the road
     * network, street names, and city labels over satellite imagery. This style will
     * automatically retrieve both raster and vector tiles, and your charges will be
     * based on total tiles retrieved.</p>  <p>Hybrid styles use both vector and
     * raster tiles when rendering the map that you see. This means that more tiles are
     * retrieved than when using either vector or raster tiles alone. Your charges will
     * include all tiles retrieved.</p>  </li> <li> <p>
     * <code>VectorHereContrast</code> – The HERE Contrast (Berlin) map style is a high
     * contrast detailed base map of the world that blends 3D and 2D rendering.</p>
     *  <p>The <code>VectorHereContrast</code> style has been renamed from
     * <code>VectorHereBerlin</code>. <code>VectorHereBerlin</code> has been
     * deprecated, but will continue to work in applications that use it.</p> 
     * </li> <li> <p> <code>VectorHereExploreTruck</code> – A global map containing
     * truck restrictions and attributes (e.g. width / height / HAZMAT) symbolized with
     * highlighted segments and icons on top of HERE Explore to support use cases
     * within transport and logistics.</p> </li> </ul> <p>Valid <a
     * href="https://docs.aws.amazon.com/location/latest/developerguide/grab.html">GrabMaps
     * map styles</a>:</p> <ul> <li> <p> <code>VectorGrabStandardLight</code> – The
     * Grab Standard Light map style provides a basemap with detailed land use
     * coloring, area names, roads, landmarks, and points of interest covering
     * Southeast Asia.</p> </li> <li> <p> <code>VectorGrabStandardDark</code> – The
     * Grab Standard Dark map style provides a dark variation of the standard basemap
     * covering Southeast Asia.</p> </li> </ul>  <p>Grab provides maps only for
     * countries in Southeast Asia, and is only available in the Asia Pacific
     * (Singapore) Region (<code>ap-southeast-1</code>). For more information, see <a
     * href="https://docs.aws.amazon.com/location/latest/developerguide/grab.html#grab-coverage-area">GrabMaps
     * countries and area covered</a>.</p>  <p>Valid <a
     * href="https://docs.aws.amazon.com/location/latest/developerguide/open-data.html">Open
     * Data map styles</a>:</p> <ul> <li> <p> <code>VectorOpenDataStandardLight</code>
     * – The Open Data Standard Light map style provides a detailed basemap for the
     * world suitable for website and mobile application use. The map includes highways
     * major roads, minor roads, railways, water features, cities, parks, landmarks,
     * building footprints, and administrative boundaries.</p> </li> <li> <p>
     * <code>VectorOpenDataStandardDark</code> – Open Data Standard Dark is a
     * dark-themed map style that provides a detailed basemap for the world suitable
     * for website and mobile application use. The map includes highways major roads,
     * minor roads, railways, water features, cities, parks, landmarks, building
     * footprints, and administrative boundaries.</p> </li> <li> <p>
     * <code>VectorOpenDataVisualizationLight</code> – The Open Data Visualization
     * Light map style is a light-themed style with muted colors and fewer features
     * that aids in understanding overlaid data.</p> </li> <li> <p>
     * <code>VectorOpenDataVisualizationDark</code> – The Open Data Visualization Dark
     * map style is a dark-themed style with muted colors and fewer features that aids
     * in understanding overlaid data.</p> </li> </ul>
     */
    inline MapConfiguration& WithStyle(Aws::String&& value) { SetStyle(std::move(value)); return *this;}

    /**
     * <p>Specifies the map style selected from an available data provider.</p>
     * <p>Valid <a
     * href="https://docs.aws.amazon.com/location/latest/developerguide/esri.html">Esri
     * map styles</a>:</p> <ul> <li> <p> <code>VectorEsriNavigation</code> – The Esri
     * Navigation map style, which provides a detailed basemap for the world symbolized
     * with a custom navigation map style that's designed for use during the day in
     * mobile devices. It also includes a richer set of places, such as shops,
     * services, restaurants, attractions, and other points of interest. Enable the
     * <code>POI</code> layer by setting it in CustomLayers to leverage the additional
     * places data.</p> <p/> </li> <li> <p> <code>RasterEsriImagery</code> – The Esri
     * Imagery map style. A raster basemap that provides one meter or better satellite
     * and aerial imagery in many parts of the world and lower resolution satellite
     * imagery worldwide. </p> </li> <li> <p> <code>VectorEsriLightGrayCanvas</code> –
     * The Esri Light Gray Canvas map style, which provides a detailed vector basemap
     * with a light gray, neutral background style with minimal colors, labels, and
     * features that's designed to draw attention to your thematic content. </p> </li>
     * <li> <p> <code>VectorEsriTopographic</code> – The Esri Light map style, which
     * provides a detailed vector basemap with a classic Esri map style.</p> </li> <li>
     * <p> <code>VectorEsriStreets</code> – The Esri Street Map style, which provides a
     * detailed vector basemap for the world symbolized with a classic Esri street map
     * style. The vector tile layer is similar in content and style to the World Street
     * Map raster map.</p> </li> <li> <p> <code>VectorEsriDarkGrayCanvas</code> – The
     * Esri Dark Gray Canvas map style. A vector basemap with a dark gray, neutral
     * background with minimal colors, labels, and features that's designed to draw
     * attention to your thematic content. </p> </li> </ul> <p>Valid <a
     * href="https://docs.aws.amazon.com/location/latest/developerguide/HERE.html">HERE
     * Technologies map styles</a>:</p> <ul> <li> <p> <code>VectorHereExplore</code> –
     * A default HERE map style containing a neutral, global map and its features
     * including roads, buildings, landmarks, and water features. It also now includes
     * a fully designed map of Japan.</p> </li> <li> <p>
     * <code>RasterHereExploreSatellite</code> – A global map containing high
     * resolution satellite imagery.</p> </li> <li> <p>
     * <code>HybridHereExploreSatellite</code> – A global map displaying the road
     * network, street names, and city labels over satellite imagery. This style will
     * automatically retrieve both raster and vector tiles, and your charges will be
     * based on total tiles retrieved.</p>  <p>Hybrid styles use both vector and
     * raster tiles when rendering the map that you see. This means that more tiles are
     * retrieved than when using either vector or raster tiles alone. Your charges will
     * include all tiles retrieved.</p>  </li> <li> <p>
     * <code>VectorHereContrast</code> – The HERE Contrast (Berlin) map style is a high
     * contrast detailed base map of the world that blends 3D and 2D rendering.</p>
     *  <p>The <code>VectorHereContrast</code> style has been renamed from
     * <code>VectorHereBerlin</code>. <code>VectorHereBerlin</code> has been
     * deprecated, but will continue to work in applications that use it.</p> 
     * </li> <li> <p> <code>VectorHereExploreTruck</code> – A global map containing
     * truck restrictions and attributes (e.g. width / height / HAZMAT) symbolized with
     * highlighted segments and icons on top of HERE Explore to support use cases
     * within transport and logistics.</p> </li> </ul> <p>Valid <a
     * href="https://docs.aws.amazon.com/location/latest/developerguide/grab.html">GrabMaps
     * map styles</a>:</p> <ul> <li> <p> <code>VectorGrabStandardLight</code> – The
     * Grab Standard Light map style provides a basemap with detailed land use
     * coloring, area names, roads, landmarks, and points of interest covering
     * Southeast Asia.</p> </li> <li> <p> <code>VectorGrabStandardDark</code> – The
     * Grab Standard Dark map style provides a dark variation of the standard basemap
     * covering Southeast Asia.</p> </li> </ul>  <p>Grab provides maps only for
     * countries in Southeast Asia, and is only available in the Asia Pacific
     * (Singapore) Region (<code>ap-southeast-1</code>). For more information, see <a
     * href="https://docs.aws.amazon.com/location/latest/developerguide/grab.html#grab-coverage-area">GrabMaps
     * countries and area covered</a>.</p>  <p>Valid <a
     * href="https://docs.aws.amazon.com/location/latest/developerguide/open-data.html">Open
     * Data map styles</a>:</p> <ul> <li> <p> <code>VectorOpenDataStandardLight</code>
     * – The Open Data Standard Light map style provides a detailed basemap for the
     * world suitable for website and mobile application use. The map includes highways
     * major roads, minor roads, railways, water features, cities, parks, landmarks,
     * building footprints, and administrative boundaries.</p> </li> <li> <p>
     * <code>VectorOpenDataStandardDark</code> – Open Data Standard Dark is a
     * dark-themed map style that provides a detailed basemap for the world suitable
     * for website and mobile application use. The map includes highways major roads,
     * minor roads, railways, water features, cities, parks, landmarks, building
     * footprints, and administrative boundaries.</p> </li> <li> <p>
     * <code>VectorOpenDataVisualizationLight</code> – The Open Data Visualization
     * Light map style is a light-themed style with muted colors and fewer features
     * that aids in understanding overlaid data.</p> </li> <li> <p>
     * <code>VectorOpenDataVisualizationDark</code> – The Open Data Visualization Dark
     * map style is a dark-themed style with muted colors and fewer features that aids
     * in understanding overlaid data.</p> </li> </ul>
     */
    inline MapConfiguration& WithStyle(const char* value) { SetStyle(value); return *this;}

  private:

    Aws::Vector<Aws::String> m_customLayers;
    bool m_customLayersHasBeenSet = false;

    Aws::String m_politicalView;
    bool m_politicalViewHasBeenSet = false;

    Aws::String m_style;
    bool m_styleHasBeenSet = false;
  };

} // namespace Model
} // namespace LocationService
} // namespace Aws
