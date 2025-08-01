/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/location/LocationService_EXPORTS.h>
#include <aws/location/LocationServiceRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Http
{
    class URI;
} //namespace Http
namespace LocationService
{
namespace Model
{

  /**
   */
  class GetMapGlyphsRequest : public LocationServiceRequest
  {
  public:
    AWS_LOCATIONSERVICE_API GetMapGlyphsRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetMapGlyphs"; }

    AWS_LOCATIONSERVICE_API Aws::String SerializePayload() const override;

    AWS_LOCATIONSERVICE_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    ///@{
    /**
     * <p>The map resource associated with the glyph ﬁle.</p>
     */
    inline const Aws::String& GetMapName() const { return m_mapName; }
    inline bool MapNameHasBeenSet() const { return m_mapNameHasBeenSet; }
    template<typename MapNameT = Aws::String>
    void SetMapName(MapNameT&& value) { m_mapNameHasBeenSet = true; m_mapName = std::forward<MapNameT>(value); }
    template<typename MapNameT = Aws::String>
    GetMapGlyphsRequest& WithMapName(MapNameT&& value) { SetMapName(std::forward<MapNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A comma-separated list of fonts to load glyphs from in order of preference.
     * For example, <code>Noto Sans Regular, Arial Unicode</code>.</p> <p>Valid font
     * stacks for <a
     * href="https://docs.aws.amazon.com/location/previous/developerguide/esri.html">Esri</a>
     * styles: </p> <ul> <li> <p>VectorEsriDarkGrayCanvas – <code>Ubuntu Medium
     * Italic</code> | <code>Ubuntu Medium</code> | <code>Ubuntu Italic</code> |
     * <code>Ubuntu Regular</code> | <code>Ubuntu Bold</code> </p> </li> <li>
     * <p>VectorEsriLightGrayCanvas – <code>Ubuntu Italic</code> | <code>Ubuntu
     * Regular</code> | <code>Ubuntu Light</code> | <code>Ubuntu Bold</code> </p> </li>
     * <li> <p>VectorEsriTopographic – <code>Noto Sans Italic</code> | <code>Noto Sans
     * Regular</code> | <code>Noto Sans Bold</code> | <code>Noto Serif Regular</code> |
     * <code>Roboto Condensed Light Italic</code> </p> </li> <li> <p>VectorEsriStreets
     * – <code>Arial Regular</code> | <code>Arial Italic</code> | <code>Arial
     * Bold</code> </p> </li> <li> <p>VectorEsriNavigation – <code>Arial Regular</code>
     * | <code>Arial Italic</code> | <code>Arial Bold</code> </p> </li> </ul> <p>Valid
     * font stacks for <a
     * href="https://docs.aws.amazon.com/location/previous/developerguide/HERE.html">HERE
     * Technologies</a> styles:</p> <ul> <li> <p>VectorHereContrast – <code>Fira GO
     * Regular</code> | <code>Fira GO Bold</code> </p> </li> <li> <p>VectorHereExplore,
     * VectorHereExploreTruck, HybridHereExploreSatellite – <code>Fira GO Italic</code>
     * | <code>Fira GO Map</code> | <code>Fira GO Map Bold</code> | <code>Noto Sans CJK
     * JP Bold</code> | <code>Noto Sans CJK JP Light</code> | <code>Noto Sans CJK JP
     * Regular</code> </p> </li> </ul> <p>Valid font stacks for <a
     * href="https://docs.aws.amazon.com/location/previous/developerguide/grab.html">GrabMaps</a>
     * styles:</p> <ul> <li> <p>VectorGrabStandardLight, VectorGrabStandardDark –
     * <code>Noto Sans Regular</code> | <code>Noto Sans Medium</code> | <code>Noto Sans
     * Bold</code> </p> </li> </ul> <p>Valid font stacks for <a
     * href="https://docs.aws.amazon.com/location/previous/developerguide/open-data.html">Open
     * Data</a> styles:</p> <ul> <li> <p>VectorOpenDataStandardLight,
     * VectorOpenDataStandardDark, VectorOpenDataVisualizationLight,
     * VectorOpenDataVisualizationDark – <code>Amazon Ember Regular,Noto Sans
     * Regular</code> | <code>Amazon Ember Bold,Noto Sans Bold</code> | <code>Amazon
     * Ember Medium,Noto Sans Medium</code> | <code>Amazon Ember Regular Italic,Noto
     * Sans Italic</code> | <code>Amazon Ember Condensed RC Regular,Noto Sans
     * Regular</code> | <code>Amazon Ember Condensed RC Bold,Noto Sans Bold</code> |
     * <code>Amazon Ember Regular,Noto Sans Regular,Noto Sans Arabic Regular</code> |
     * <code>Amazon Ember Condensed RC Bold,Noto Sans Bold,Noto Sans Arabic Condensed
     * Bold</code> | <code>Amazon Ember Bold,Noto Sans Bold,Noto Sans Arabic
     * Bold</code> | <code>Amazon Ember Regular Italic,Noto Sans Italic,Noto Sans
     * Arabic Regular</code> | <code>Amazon Ember Condensed RC Regular,Noto Sans
     * Regular,Noto Sans Arabic Condensed Regular</code> | <code>Amazon Ember
     * Medium,Noto Sans Medium,Noto Sans Arabic Medium</code> </p> </li> </ul> 
     * <p>The fonts used by the Open Data map styles are combined fonts that use
     * <code>Amazon Ember</code> for most glyphs but <code>Noto Sans</code> for glyphs
     * unsupported by <code>Amazon Ember</code>.</p> 
     */
    inline const Aws::String& GetFontStack() const { return m_fontStack; }
    inline bool FontStackHasBeenSet() const { return m_fontStackHasBeenSet; }
    template<typename FontStackT = Aws::String>
    void SetFontStack(FontStackT&& value) { m_fontStackHasBeenSet = true; m_fontStack = std::forward<FontStackT>(value); }
    template<typename FontStackT = Aws::String>
    GetMapGlyphsRequest& WithFontStack(FontStackT&& value) { SetFontStack(std::forward<FontStackT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A Unicode range of characters to download glyphs for. Each response will
     * contain 256 characters. For example, 0–255 includes all characters from range
     * <code>U+0000</code> to <code>00FF</code>. Must be aligned to multiples of
     * 256.</p>
     */
    inline const Aws::String& GetFontUnicodeRange() const { return m_fontUnicodeRange; }
    inline bool FontUnicodeRangeHasBeenSet() const { return m_fontUnicodeRangeHasBeenSet; }
    template<typename FontUnicodeRangeT = Aws::String>
    void SetFontUnicodeRange(FontUnicodeRangeT&& value) { m_fontUnicodeRangeHasBeenSet = true; m_fontUnicodeRange = std::forward<FontUnicodeRangeT>(value); }
    template<typename FontUnicodeRangeT = Aws::String>
    GetMapGlyphsRequest& WithFontUnicodeRange(FontUnicodeRangeT&& value) { SetFontUnicodeRange(std::forward<FontUnicodeRangeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The optional <a
     * href="https://docs.aws.amazon.com/location/previous/developerguide/using-apikeys.html">API
     * key</a> to authorize the request.</p>
     */
    inline const Aws::String& GetKey() const { return m_key; }
    inline bool KeyHasBeenSet() const { return m_keyHasBeenSet; }
    template<typename KeyT = Aws::String>
    void SetKey(KeyT&& value) { m_keyHasBeenSet = true; m_key = std::forward<KeyT>(value); }
    template<typename KeyT = Aws::String>
    GetMapGlyphsRequest& WithKey(KeyT&& value) { SetKey(std::forward<KeyT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_mapName;
    bool m_mapNameHasBeenSet = false;

    Aws::String m_fontStack;
    bool m_fontStackHasBeenSet = false;

    Aws::String m_fontUnicodeRange;
    bool m_fontUnicodeRangeHasBeenSet = false;

    Aws::String m_key;
    bool m_keyHasBeenSet = false;
  };

} // namespace Model
} // namespace LocationService
} // namespace Aws
