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
  class AWS_LOCATIONSERVICE_API MapConfiguration
  {
  public:
    MapConfiguration();
    MapConfiguration(Aws::Utils::Json::JsonView jsonValue);
    MapConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Specifies the map style selected from an available data provider.</p>
     * <p>Valid styles: <code>VectorEsriStreets</code>,
     * <code>VectorEsriTopographic</code>, <code>VectorEsriNavigation</code>,
     * <code>VectorEsriDarkGrayCanvas</code>, <code>VectorEsriLightGrayCanvas</code>,
     * <code>VectorHereBerlin</code>.</p>  <p>When using HERE as your data
     * provider, and selecting the Style <code>VectorHereBerlin</code>, you may not use
     * HERE Maps for Asset Management. See the <a
     * href="https://aws.amazon.com/service-terms/">AWS Service Terms</a> for Amazon
     * Location Service. </p> 
     */
    inline const Aws::String& GetStyle() const{ return m_style; }

    /**
     * <p>Specifies the map style selected from an available data provider.</p>
     * <p>Valid styles: <code>VectorEsriStreets</code>,
     * <code>VectorEsriTopographic</code>, <code>VectorEsriNavigation</code>,
     * <code>VectorEsriDarkGrayCanvas</code>, <code>VectorEsriLightGrayCanvas</code>,
     * <code>VectorHereBerlin</code>.</p>  <p>When using HERE as your data
     * provider, and selecting the Style <code>VectorHereBerlin</code>, you may not use
     * HERE Maps for Asset Management. See the <a
     * href="https://aws.amazon.com/service-terms/">AWS Service Terms</a> for Amazon
     * Location Service. </p> 
     */
    inline bool StyleHasBeenSet() const { return m_styleHasBeenSet; }

    /**
     * <p>Specifies the map style selected from an available data provider.</p>
     * <p>Valid styles: <code>VectorEsriStreets</code>,
     * <code>VectorEsriTopographic</code>, <code>VectorEsriNavigation</code>,
     * <code>VectorEsriDarkGrayCanvas</code>, <code>VectorEsriLightGrayCanvas</code>,
     * <code>VectorHereBerlin</code>.</p>  <p>When using HERE as your data
     * provider, and selecting the Style <code>VectorHereBerlin</code>, you may not use
     * HERE Maps for Asset Management. See the <a
     * href="https://aws.amazon.com/service-terms/">AWS Service Terms</a> for Amazon
     * Location Service. </p> 
     */
    inline void SetStyle(const Aws::String& value) { m_styleHasBeenSet = true; m_style = value; }

    /**
     * <p>Specifies the map style selected from an available data provider.</p>
     * <p>Valid styles: <code>VectorEsriStreets</code>,
     * <code>VectorEsriTopographic</code>, <code>VectorEsriNavigation</code>,
     * <code>VectorEsriDarkGrayCanvas</code>, <code>VectorEsriLightGrayCanvas</code>,
     * <code>VectorHereBerlin</code>.</p>  <p>When using HERE as your data
     * provider, and selecting the Style <code>VectorHereBerlin</code>, you may not use
     * HERE Maps for Asset Management. See the <a
     * href="https://aws.amazon.com/service-terms/">AWS Service Terms</a> for Amazon
     * Location Service. </p> 
     */
    inline void SetStyle(Aws::String&& value) { m_styleHasBeenSet = true; m_style = std::move(value); }

    /**
     * <p>Specifies the map style selected from an available data provider.</p>
     * <p>Valid styles: <code>VectorEsriStreets</code>,
     * <code>VectorEsriTopographic</code>, <code>VectorEsriNavigation</code>,
     * <code>VectorEsriDarkGrayCanvas</code>, <code>VectorEsriLightGrayCanvas</code>,
     * <code>VectorHereBerlin</code>.</p>  <p>When using HERE as your data
     * provider, and selecting the Style <code>VectorHereBerlin</code>, you may not use
     * HERE Maps for Asset Management. See the <a
     * href="https://aws.amazon.com/service-terms/">AWS Service Terms</a> for Amazon
     * Location Service. </p> 
     */
    inline void SetStyle(const char* value) { m_styleHasBeenSet = true; m_style.assign(value); }

    /**
     * <p>Specifies the map style selected from an available data provider.</p>
     * <p>Valid styles: <code>VectorEsriStreets</code>,
     * <code>VectorEsriTopographic</code>, <code>VectorEsriNavigation</code>,
     * <code>VectorEsriDarkGrayCanvas</code>, <code>VectorEsriLightGrayCanvas</code>,
     * <code>VectorHereBerlin</code>.</p>  <p>When using HERE as your data
     * provider, and selecting the Style <code>VectorHereBerlin</code>, you may not use
     * HERE Maps for Asset Management. See the <a
     * href="https://aws.amazon.com/service-terms/">AWS Service Terms</a> for Amazon
     * Location Service. </p> 
     */
    inline MapConfiguration& WithStyle(const Aws::String& value) { SetStyle(value); return *this;}

    /**
     * <p>Specifies the map style selected from an available data provider.</p>
     * <p>Valid styles: <code>VectorEsriStreets</code>,
     * <code>VectorEsriTopographic</code>, <code>VectorEsriNavigation</code>,
     * <code>VectorEsriDarkGrayCanvas</code>, <code>VectorEsriLightGrayCanvas</code>,
     * <code>VectorHereBerlin</code>.</p>  <p>When using HERE as your data
     * provider, and selecting the Style <code>VectorHereBerlin</code>, you may not use
     * HERE Maps for Asset Management. See the <a
     * href="https://aws.amazon.com/service-terms/">AWS Service Terms</a> for Amazon
     * Location Service. </p> 
     */
    inline MapConfiguration& WithStyle(Aws::String&& value) { SetStyle(std::move(value)); return *this;}

    /**
     * <p>Specifies the map style selected from an available data provider.</p>
     * <p>Valid styles: <code>VectorEsriStreets</code>,
     * <code>VectorEsriTopographic</code>, <code>VectorEsriNavigation</code>,
     * <code>VectorEsriDarkGrayCanvas</code>, <code>VectorEsriLightGrayCanvas</code>,
     * <code>VectorHereBerlin</code>.</p>  <p>When using HERE as your data
     * provider, and selecting the Style <code>VectorHereBerlin</code>, you may not use
     * HERE Maps for Asset Management. See the <a
     * href="https://aws.amazon.com/service-terms/">AWS Service Terms</a> for Amazon
     * Location Service. </p> 
     */
    inline MapConfiguration& WithStyle(const char* value) { SetStyle(value); return *this;}

  private:

    Aws::String m_style;
    bool m_styleHasBeenSet;
  };

} // namespace Model
} // namespace LocationService
} // namespace Aws
