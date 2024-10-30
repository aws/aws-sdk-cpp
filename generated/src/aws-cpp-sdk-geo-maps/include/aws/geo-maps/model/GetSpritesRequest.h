/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/geo-maps/GeoMaps_EXPORTS.h>
#include <aws/geo-maps/GeoMapsRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/geo-maps/model/MapStyle.h>
#include <aws/geo-maps/model/ColorScheme.h>
#include <aws/geo-maps/model/Variant.h>
#include <utility>

namespace Aws
{
namespace GeoMaps
{
namespace Model
{

  /**
   */
  class GetSpritesRequest : public GeoMapsRequest
  {
  public:
    AWS_GEOMAPS_API GetSpritesRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetSprites"; }

    AWS_GEOMAPS_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p> <code>Sprites</code> API: The name of the sprite ﬁle to retrieve, following
     * pattern <code>sprites(@2x)?\.(png|json)</code>.</p> <p>Example:
     * <code>sprites.png</code> </p>
     */
    inline const Aws::String& GetFileName() const{ return m_fileName; }
    inline bool FileNameHasBeenSet() const { return m_fileNameHasBeenSet; }
    inline void SetFileName(const Aws::String& value) { m_fileNameHasBeenSet = true; m_fileName = value; }
    inline void SetFileName(Aws::String&& value) { m_fileNameHasBeenSet = true; m_fileName = std::move(value); }
    inline void SetFileName(const char* value) { m_fileNameHasBeenSet = true; m_fileName.assign(value); }
    inline GetSpritesRequest& WithFileName(const Aws::String& value) { SetFileName(value); return *this;}
    inline GetSpritesRequest& WithFileName(Aws::String&& value) { SetFileName(std::move(value)); return *this;}
    inline GetSpritesRequest& WithFileName(const char* value) { SetFileName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Style specifies the desired map style for the <code>Sprites</code> APIs.</p>
     */
    inline const MapStyle& GetStyle() const{ return m_style; }
    inline bool StyleHasBeenSet() const { return m_styleHasBeenSet; }
    inline void SetStyle(const MapStyle& value) { m_styleHasBeenSet = true; m_style = value; }
    inline void SetStyle(MapStyle&& value) { m_styleHasBeenSet = true; m_style = std::move(value); }
    inline GetSpritesRequest& WithStyle(const MapStyle& value) { SetStyle(value); return *this;}
    inline GetSpritesRequest& WithStyle(MapStyle&& value) { SetStyle(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Sets color tone for map such as dark and light for specific map styles. It
     * applies to only vector map styles such as Standard and Monochrome.</p>
     * <p>Example: <code>Light</code> </p> <p>Default value: <code>Light</code> </p>
     *  <p>Valid values for ColorScheme are case sensitive.</p> 
     */
    inline const ColorScheme& GetColorScheme() const{ return m_colorScheme; }
    inline bool ColorSchemeHasBeenSet() const { return m_colorSchemeHasBeenSet; }
    inline void SetColorScheme(const ColorScheme& value) { m_colorSchemeHasBeenSet = true; m_colorScheme = value; }
    inline void SetColorScheme(ColorScheme&& value) { m_colorSchemeHasBeenSet = true; m_colorScheme = std::move(value); }
    inline GetSpritesRequest& WithColorScheme(const ColorScheme& value) { SetColorScheme(value); return *this;}
    inline GetSpritesRequest& WithColorScheme(ColorScheme&& value) { SetColorScheme(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Optimizes map styles for specific use case or industry. You can choose
     * allowed variant only with Standard map style.</p> <p>Example:
     * <code>Default</code> </p>  <p>Valid values for Variant are case
     * sensitive.</p> 
     */
    inline const Variant& GetVariant() const{ return m_variant; }
    inline bool VariantHasBeenSet() const { return m_variantHasBeenSet; }
    inline void SetVariant(const Variant& value) { m_variantHasBeenSet = true; m_variant = value; }
    inline void SetVariant(Variant&& value) { m_variantHasBeenSet = true; m_variant = std::move(value); }
    inline GetSpritesRequest& WithVariant(const Variant& value) { SetVariant(value); return *this;}
    inline GetSpritesRequest& WithVariant(Variant&& value) { SetVariant(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_fileName;
    bool m_fileNameHasBeenSet = false;

    MapStyle m_style;
    bool m_styleHasBeenSet = false;

    ColorScheme m_colorScheme;
    bool m_colorSchemeHasBeenSet = false;

    Variant m_variant;
    bool m_variantHasBeenSet = false;
  };

} // namespace Model
} // namespace GeoMaps
} // namespace Aws
