/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/geo-maps/GeoMaps_EXPORTS.h>
#include <aws/geo-maps/GeoMapsRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace GeoMaps
{
namespace Model
{

  /**
   */
  class GetGlyphsRequest : public GeoMapsRequest
  {
  public:
    AWS_GEOMAPS_API GetGlyphsRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetGlyphs"; }

    AWS_GEOMAPS_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>Name of the <code>FontStack</code> to retrieve. </p> <p>Example: <code>Amazon
     * Ember Bold,Noto Sans Bold</code>.</p> <p>The supported font stacks are as
     * follows:</p> <ul> <li> <p>Amazon Ember Bold</p> </li> <li> <p>Amazon Ember Bold
     * Italic</p> </li> <li> <p>Amazon Ember Bold,Noto Sans Bold</p> </li> <li>
     * <p>Amazon Ember Bold,Noto Sans Bold,Noto Sans Arabic Bold</p> </li> <li>
     * <p>Amazon Ember Condensed RC BdItalic</p> </li> <li> <p>Amazon Ember Condensed
     * RC Bold</p> </li> <li> <p>Amazon Ember Condensed RC Bold Italic</p> </li> <li>
     * <p>Amazon Ember Condensed RC Bold,Noto Sans Bold</p> </li> <li> <p>Amazon Ember
     * Condensed RC Bold,Noto Sans Bold,Noto Sans Arabic Condensed Bold</p> </li> <li>
     * <p>Amazon Ember Condensed RC Light</p> </li> <li> <p>Amazon Ember Condensed RC
     * Light Italic</p> </li> <li> <p>Amazon Ember Condensed RC LtItalic</p> </li> <li>
     * <p>Amazon Ember Condensed RC Regular</p> </li> <li> <p>Amazon Ember Condensed RC
     * Regular Italic</p> </li> <li> <p>Amazon Ember Condensed RC Regular,Noto Sans
     * Regular</p> </li> <li> <p>Amazon Ember Condensed RC Regular,Noto Sans
     * Regular,Noto Sans Arabic Condensed Regular</p> </li> <li> <p>Amazon Ember
     * Condensed RC RgItalic</p> </li> <li> <p>Amazon Ember Condensed RC ThItalic</p>
     * </li> <li> <p>Amazon Ember Condensed RC Thin</p> </li> <li> <p>Amazon Ember
     * Condensed RC Thin Italic</p> </li> <li> <p>Amazon Ember Heavy</p> </li> <li>
     * <p>Amazon Ember Heavy Italic</p> </li> <li> <p>Amazon Ember Light</p> </li> <li>
     * <p>Amazon Ember Light Italic</p> </li> <li> <p>Amazon Ember Medium</p> </li>
     * <li> <p>Amazon Ember Medium Italic</p> </li> <li> <p>Amazon Ember Medium,Noto
     * Sans Medium</p> </li> <li> <p>Amazon Ember Medium,Noto Sans Medium,Noto Sans
     * Arabic Medium</p> </li> <li> <p>Amazon Ember Regular</p> </li> <li> <p>Amazon
     * Ember Regular Italic</p> </li> <li> <p>Amazon Ember Regular Italic,Noto Sans
     * Italic</p> </li> <li> <p>Amazon Ember Regular Italic,Noto Sans Italic,Noto Sans
     * Arabic Regular</p> </li> <li> <p>Amazon Ember Regular,Noto Sans Regular</p>
     * </li> <li> <p>Amazon Ember Regular,Noto Sans Regular,Noto Sans Arabic
     * Regular</p> </li> <li> <p>Amazon Ember Thin</p> </li> <li> <p>Amazon Ember Thin
     * Italic</p> </li> <li> <p>AmazonEmberCdRC_Bd</p> </li> <li>
     * <p>AmazonEmberCdRC_BdIt</p> </li> <li> <p>AmazonEmberCdRC_Lt</p> </li> <li>
     * <p>AmazonEmberCdRC_LtIt</p> </li> <li> <p>AmazonEmberCdRC_Rg</p> </li> <li>
     * <p>AmazonEmberCdRC_RgIt</p> </li> <li> <p>AmazonEmberCdRC_Th</p> </li> <li>
     * <p>AmazonEmberCdRC_ThIt</p> </li> <li> <p>AmazonEmber_Bd</p> </li> <li>
     * <p>AmazonEmber_BdIt</p> </li> <li> <p>AmazonEmber_He</p> </li> <li>
     * <p>AmazonEmber_HeIt</p> </li> <li> <p>AmazonEmber_Lt</p> </li> <li>
     * <p>AmazonEmber_LtIt</p> </li> <li> <p>AmazonEmber_Md</p> </li> <li>
     * <p>AmazonEmber_MdIt</p> </li> <li> <p>AmazonEmber_Rg</p> </li> <li>
     * <p>AmazonEmber_RgIt</p> </li> <li> <p>AmazonEmber_Th</p> </li> <li>
     * <p>AmazonEmber_ThIt</p> </li> <li> <p>Noto Sans Black</p> </li> <li> <p>Noto
     * Sans Black Italic</p> </li> <li> <p>Noto Sans Bold</p> </li> <li> <p>Noto Sans
     * Bold Italic</p> </li> <li> <p>Noto Sans Extra Bold</p> </li> <li> <p>Noto Sans
     * Extra Bold Italic</p> </li> <li> <p>Noto Sans Extra Light</p> </li> <li> <p>Noto
     * Sans Extra Light Italic</p> </li> <li> <p>Noto Sans Italic</p> </li> <li>
     * <p>Noto Sans Light</p> </li> <li> <p>Noto Sans Light Italic</p> </li> <li>
     * <p>Noto Sans Medium</p> </li> <li> <p>Noto Sans Medium Italic</p> </li> <li>
     * <p>Noto Sans Regular</p> </li> <li> <p>Noto Sans Semi Bold</p> </li> <li>
     * <p>Noto Sans Semi Bold Italic</p> </li> <li> <p>Noto Sans Thin</p> </li> <li>
     * <p>Noto Sans Thin Italic</p> </li> <li> <p>NotoSans-Bold</p> </li> <li>
     * <p>NotoSans-Italic</p> </li> <li> <p>NotoSans-Medium</p> </li> <li>
     * <p>NotoSans-Regular</p> </li> <li> <p>Open Sans Regular,Arial Unicode MS
     * Regular</p> </li> </ul>
     */
    inline const Aws::String& GetFontStack() const { return m_fontStack; }
    inline bool FontStackHasBeenSet() const { return m_fontStackHasBeenSet; }
    template<typename FontStackT = Aws::String>
    void SetFontStack(FontStackT&& value) { m_fontStackHasBeenSet = true; m_fontStack = std::forward<FontStackT>(value); }
    template<typename FontStackT = Aws::String>
    GetGlyphsRequest& WithFontStack(FontStackT&& value) { SetFontStack(std::forward<FontStackT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A Unicode range of characters to download glyphs for. This must be aligned to
     * multiples of 256. </p> <p>Example: <code>0-255.pdf</code> </p>
     */
    inline const Aws::String& GetFontUnicodeRange() const { return m_fontUnicodeRange; }
    inline bool FontUnicodeRangeHasBeenSet() const { return m_fontUnicodeRangeHasBeenSet; }
    template<typename FontUnicodeRangeT = Aws::String>
    void SetFontUnicodeRange(FontUnicodeRangeT&& value) { m_fontUnicodeRangeHasBeenSet = true; m_fontUnicodeRange = std::forward<FontUnicodeRangeT>(value); }
    template<typename FontUnicodeRangeT = Aws::String>
    GetGlyphsRequest& WithFontUnicodeRange(FontUnicodeRangeT&& value) { SetFontUnicodeRange(std::forward<FontUnicodeRangeT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_fontStack;
    bool m_fontStackHasBeenSet = false;

    Aws::String m_fontUnicodeRange;
    bool m_fontUnicodeRangeHasBeenSet = false;
  };

} // namespace Model
} // namespace GeoMaps
} // namespace Aws
