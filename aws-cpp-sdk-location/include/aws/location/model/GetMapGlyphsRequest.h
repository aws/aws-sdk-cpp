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
namespace LocationService
{
namespace Model
{

  /**
   */
  class AWS_LOCATIONSERVICE_API GetMapGlyphsRequest : public LocationServiceRequest
  {
  public:
    GetMapGlyphsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetMapGlyphs"; }

    Aws::String SerializePayload() const override;


    /**
     * <p>A comma-separated list of fonts to load glyphs from in order of preference..
     * For example, <code>Noto Sans, Arial Unicode</code>.</p>
     */
    inline const Aws::String& GetFontStack() const{ return m_fontStack; }

    /**
     * <p>A comma-separated list of fonts to load glyphs from in order of preference..
     * For example, <code>Noto Sans, Arial Unicode</code>.</p>
     */
    inline bool FontStackHasBeenSet() const { return m_fontStackHasBeenSet; }

    /**
     * <p>A comma-separated list of fonts to load glyphs from in order of preference..
     * For example, <code>Noto Sans, Arial Unicode</code>.</p>
     */
    inline void SetFontStack(const Aws::String& value) { m_fontStackHasBeenSet = true; m_fontStack = value; }

    /**
     * <p>A comma-separated list of fonts to load glyphs from in order of preference..
     * For example, <code>Noto Sans, Arial Unicode</code>.</p>
     */
    inline void SetFontStack(Aws::String&& value) { m_fontStackHasBeenSet = true; m_fontStack = std::move(value); }

    /**
     * <p>A comma-separated list of fonts to load glyphs from in order of preference..
     * For example, <code>Noto Sans, Arial Unicode</code>.</p>
     */
    inline void SetFontStack(const char* value) { m_fontStackHasBeenSet = true; m_fontStack.assign(value); }

    /**
     * <p>A comma-separated list of fonts to load glyphs from in order of preference..
     * For example, <code>Noto Sans, Arial Unicode</code>.</p>
     */
    inline GetMapGlyphsRequest& WithFontStack(const Aws::String& value) { SetFontStack(value); return *this;}

    /**
     * <p>A comma-separated list of fonts to load glyphs from in order of preference..
     * For example, <code>Noto Sans, Arial Unicode</code>.</p>
     */
    inline GetMapGlyphsRequest& WithFontStack(Aws::String&& value) { SetFontStack(std::move(value)); return *this;}

    /**
     * <p>A comma-separated list of fonts to load glyphs from in order of preference..
     * For example, <code>Noto Sans, Arial Unicode</code>.</p>
     */
    inline GetMapGlyphsRequest& WithFontStack(const char* value) { SetFontStack(value); return *this;}


    /**
     * <p>A Unicode range of characters to download glyphs for. Each response will
     * contain 256 characters. For example, 0-255 includes all characters from range
     * <code>U+0000</code> to <code>00FF</code>. Must be aligned to multiples of
     * 256.</p>
     */
    inline const Aws::String& GetFontUnicodeRange() const{ return m_fontUnicodeRange; }

    /**
     * <p>A Unicode range of characters to download glyphs for. Each response will
     * contain 256 characters. For example, 0-255 includes all characters from range
     * <code>U+0000</code> to <code>00FF</code>. Must be aligned to multiples of
     * 256.</p>
     */
    inline bool FontUnicodeRangeHasBeenSet() const { return m_fontUnicodeRangeHasBeenSet; }

    /**
     * <p>A Unicode range of characters to download glyphs for. Each response will
     * contain 256 characters. For example, 0-255 includes all characters from range
     * <code>U+0000</code> to <code>00FF</code>. Must be aligned to multiples of
     * 256.</p>
     */
    inline void SetFontUnicodeRange(const Aws::String& value) { m_fontUnicodeRangeHasBeenSet = true; m_fontUnicodeRange = value; }

    /**
     * <p>A Unicode range of characters to download glyphs for. Each response will
     * contain 256 characters. For example, 0-255 includes all characters from range
     * <code>U+0000</code> to <code>00FF</code>. Must be aligned to multiples of
     * 256.</p>
     */
    inline void SetFontUnicodeRange(Aws::String&& value) { m_fontUnicodeRangeHasBeenSet = true; m_fontUnicodeRange = std::move(value); }

    /**
     * <p>A Unicode range of characters to download glyphs for. Each response will
     * contain 256 characters. For example, 0-255 includes all characters from range
     * <code>U+0000</code> to <code>00FF</code>. Must be aligned to multiples of
     * 256.</p>
     */
    inline void SetFontUnicodeRange(const char* value) { m_fontUnicodeRangeHasBeenSet = true; m_fontUnicodeRange.assign(value); }

    /**
     * <p>A Unicode range of characters to download glyphs for. Each response will
     * contain 256 characters. For example, 0-255 includes all characters from range
     * <code>U+0000</code> to <code>00FF</code>. Must be aligned to multiples of
     * 256.</p>
     */
    inline GetMapGlyphsRequest& WithFontUnicodeRange(const Aws::String& value) { SetFontUnicodeRange(value); return *this;}

    /**
     * <p>A Unicode range of characters to download glyphs for. Each response will
     * contain 256 characters. For example, 0-255 includes all characters from range
     * <code>U+0000</code> to <code>00FF</code>. Must be aligned to multiples of
     * 256.</p>
     */
    inline GetMapGlyphsRequest& WithFontUnicodeRange(Aws::String&& value) { SetFontUnicodeRange(std::move(value)); return *this;}

    /**
     * <p>A Unicode range of characters to download glyphs for. Each response will
     * contain 256 characters. For example, 0-255 includes all characters from range
     * <code>U+0000</code> to <code>00FF</code>. Must be aligned to multiples of
     * 256.</p>
     */
    inline GetMapGlyphsRequest& WithFontUnicodeRange(const char* value) { SetFontUnicodeRange(value); return *this;}


    /**
     * <p>The map resource associated with the glyph ﬁle.</p>
     */
    inline const Aws::String& GetMapName() const{ return m_mapName; }

    /**
     * <p>The map resource associated with the glyph ﬁle.</p>
     */
    inline bool MapNameHasBeenSet() const { return m_mapNameHasBeenSet; }

    /**
     * <p>The map resource associated with the glyph ﬁle.</p>
     */
    inline void SetMapName(const Aws::String& value) { m_mapNameHasBeenSet = true; m_mapName = value; }

    /**
     * <p>The map resource associated with the glyph ﬁle.</p>
     */
    inline void SetMapName(Aws::String&& value) { m_mapNameHasBeenSet = true; m_mapName = std::move(value); }

    /**
     * <p>The map resource associated with the glyph ﬁle.</p>
     */
    inline void SetMapName(const char* value) { m_mapNameHasBeenSet = true; m_mapName.assign(value); }

    /**
     * <p>The map resource associated with the glyph ﬁle.</p>
     */
    inline GetMapGlyphsRequest& WithMapName(const Aws::String& value) { SetMapName(value); return *this;}

    /**
     * <p>The map resource associated with the glyph ﬁle.</p>
     */
    inline GetMapGlyphsRequest& WithMapName(Aws::String&& value) { SetMapName(std::move(value)); return *this;}

    /**
     * <p>The map resource associated with the glyph ﬁle.</p>
     */
    inline GetMapGlyphsRequest& WithMapName(const char* value) { SetMapName(value); return *this;}

  private:

    Aws::String m_fontStack;
    bool m_fontStackHasBeenSet;

    Aws::String m_fontUnicodeRange;
    bool m_fontUnicodeRangeHasBeenSet;

    Aws::String m_mapName;
    bool m_mapNameHasBeenSet;
  };

} // namespace Model
} // namespace LocationService
} // namespace Aws
