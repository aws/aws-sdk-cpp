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
    AWS_GEOMAPS_API GetSpritesRequest() = default;

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
    inline const Aws::String& GetFileName() const { return m_fileName; }
    inline bool FileNameHasBeenSet() const { return m_fileNameHasBeenSet; }
    template<typename FileNameT = Aws::String>
    void SetFileName(FileNameT&& value) { m_fileNameHasBeenSet = true; m_fileName = std::forward<FileNameT>(value); }
    template<typename FileNameT = Aws::String>
    GetSpritesRequest& WithFileName(FileNameT&& value) { SetFileName(std::forward<FileNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Style specifies the desired map style for the <code>Sprites</code> APIs.</p>
     */
    inline MapStyle GetStyle() const { return m_style; }
    inline bool StyleHasBeenSet() const { return m_styleHasBeenSet; }
    inline void SetStyle(MapStyle value) { m_styleHasBeenSet = true; m_style = value; }
    inline GetSpritesRequest& WithStyle(MapStyle value) { SetStyle(value); return *this;}
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
    inline void SetColorScheme(ColorScheme value) { m_colorSchemeHasBeenSet = true; m_colorScheme = value; }
    inline GetSpritesRequest& WithColorScheme(ColorScheme value) { SetColorScheme(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Optimizes map styles for specific use case or industry. You can choose
     * allowed variant only with Standard map style.</p> <p>Example:
     * <code>Default</code> </p>  <p>Valid values for Variant are case
     * sensitive.</p> 
     */
    inline Variant GetVariant() const { return m_variant; }
    inline bool VariantHasBeenSet() const { return m_variantHasBeenSet; }
    inline void SetVariant(Variant value) { m_variantHasBeenSet = true; m_variant = value; }
    inline GetSpritesRequest& WithVariant(Variant value) { SetVariant(value); return *this;}
    ///@}
  private:

    Aws::String m_fileName;
    bool m_fileNameHasBeenSet = false;

    MapStyle m_style{MapStyle::NOT_SET};
    bool m_styleHasBeenSet = false;

    ColorScheme m_colorScheme{ColorScheme::NOT_SET};
    bool m_colorSchemeHasBeenSet = false;

    Variant m_variant{Variant::NOT_SET};
    bool m_variantHasBeenSet = false;
  };

} // namespace Model
} // namespace GeoMaps
} // namespace Aws
