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
  class GetMapGlyphsRequest : public LocationServiceRequest
  {
  public:
    AWS_LOCATIONSERVICE_API GetMapGlyphsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetMapGlyphs"; }

    AWS_LOCATIONSERVICE_API Aws::String SerializePayload() const override;


    /**
     * <p>A comma-separated list of fonts to load glyphs from in order of preference.
     * For example, <code>Noto Sans Regular, Arial Unicode</code>.</p> <p>Valid fonts
     * stacks for <a
     * href="https://docs.aws.amazon.com/location/latest/developerguide/esri.html">Esri</a>
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
     * href="https://docs.aws.amazon.com/location/latest/developerguide/HERE.html">HERE
     * Technologies</a> styles:</p> <ul> <li> <p>VectorHereContrast – <code>Fira GO
     * Regular</code> | <code>Fira GO Bold</code> </p> </li> <li> <p>VectorHereExplore,
     * VectorHereExploreTruck, HybridHereExploreSatellite – <code>Fira GO Italic</code>
     * | <code>Fira GO Map</code> | <code>Fira GO Map Bold</code> | <code>Noto Sans CJK
     * JP Bold</code> | <code>Noto Sans CJK JP Light</code> | <code>Noto Sans CJK JP
     * Regular</code> </p> </li> </ul> <p>Valid font stacks for <a
     * href="https://docs.aws.amazon.com/location/latest/developerguide/open-data.html">Open
     * Data (Preview)</a> styles:</p> <ul> <li> <p>VectorOpenDataStandardLight –
     * <code>Amazon Ember Regular,Noto Sans Regular</code> | <code>Amazon Ember
     * Bold,Noto Sans Bold</code> | <code>Amazon Ember Medium,Noto Sans Medium</code> |
     * <code>Amazon Ember Regular Italic,Noto Sans Italic</code> | <code>Amazon Ember
     * Condensed RC Regular,Noto Sans Regular</code> | <code>Amazon Ember Condensed RC
     * Bold,Noto Sans Bold</code> </p> </li> </ul>  <p>The fonts used by
     * <code>VectorOpenDataStandardLight</code> are combined fonts that use
     * <code>Amazon Ember</code> for most glyphs but <code>Noto Sans</code> for glyphs
     * unsupported by <code>Amazon Ember</code>.</p> 
     */
    inline const Aws::String& GetFontStack() const{ return m_fontStack; }

    /**
     * <p>A comma-separated list of fonts to load glyphs from in order of preference.
     * For example, <code>Noto Sans Regular, Arial Unicode</code>.</p> <p>Valid fonts
     * stacks for <a
     * href="https://docs.aws.amazon.com/location/latest/developerguide/esri.html">Esri</a>
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
     * href="https://docs.aws.amazon.com/location/latest/developerguide/HERE.html">HERE
     * Technologies</a> styles:</p> <ul> <li> <p>VectorHereContrast – <code>Fira GO
     * Regular</code> | <code>Fira GO Bold</code> </p> </li> <li> <p>VectorHereExplore,
     * VectorHereExploreTruck, HybridHereExploreSatellite – <code>Fira GO Italic</code>
     * | <code>Fira GO Map</code> | <code>Fira GO Map Bold</code> | <code>Noto Sans CJK
     * JP Bold</code> | <code>Noto Sans CJK JP Light</code> | <code>Noto Sans CJK JP
     * Regular</code> </p> </li> </ul> <p>Valid font stacks for <a
     * href="https://docs.aws.amazon.com/location/latest/developerguide/open-data.html">Open
     * Data (Preview)</a> styles:</p> <ul> <li> <p>VectorOpenDataStandardLight –
     * <code>Amazon Ember Regular,Noto Sans Regular</code> | <code>Amazon Ember
     * Bold,Noto Sans Bold</code> | <code>Amazon Ember Medium,Noto Sans Medium</code> |
     * <code>Amazon Ember Regular Italic,Noto Sans Italic</code> | <code>Amazon Ember
     * Condensed RC Regular,Noto Sans Regular</code> | <code>Amazon Ember Condensed RC
     * Bold,Noto Sans Bold</code> </p> </li> </ul>  <p>The fonts used by
     * <code>VectorOpenDataStandardLight</code> are combined fonts that use
     * <code>Amazon Ember</code> for most glyphs but <code>Noto Sans</code> for glyphs
     * unsupported by <code>Amazon Ember</code>.</p> 
     */
    inline bool FontStackHasBeenSet() const { return m_fontStackHasBeenSet; }

    /**
     * <p>A comma-separated list of fonts to load glyphs from in order of preference.
     * For example, <code>Noto Sans Regular, Arial Unicode</code>.</p> <p>Valid fonts
     * stacks for <a
     * href="https://docs.aws.amazon.com/location/latest/developerguide/esri.html">Esri</a>
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
     * href="https://docs.aws.amazon.com/location/latest/developerguide/HERE.html">HERE
     * Technologies</a> styles:</p> <ul> <li> <p>VectorHereContrast – <code>Fira GO
     * Regular</code> | <code>Fira GO Bold</code> </p> </li> <li> <p>VectorHereExplore,
     * VectorHereExploreTruck, HybridHereExploreSatellite – <code>Fira GO Italic</code>
     * | <code>Fira GO Map</code> | <code>Fira GO Map Bold</code> | <code>Noto Sans CJK
     * JP Bold</code> | <code>Noto Sans CJK JP Light</code> | <code>Noto Sans CJK JP
     * Regular</code> </p> </li> </ul> <p>Valid font stacks for <a
     * href="https://docs.aws.amazon.com/location/latest/developerguide/open-data.html">Open
     * Data (Preview)</a> styles:</p> <ul> <li> <p>VectorOpenDataStandardLight –
     * <code>Amazon Ember Regular,Noto Sans Regular</code> | <code>Amazon Ember
     * Bold,Noto Sans Bold</code> | <code>Amazon Ember Medium,Noto Sans Medium</code> |
     * <code>Amazon Ember Regular Italic,Noto Sans Italic</code> | <code>Amazon Ember
     * Condensed RC Regular,Noto Sans Regular</code> | <code>Amazon Ember Condensed RC
     * Bold,Noto Sans Bold</code> </p> </li> </ul>  <p>The fonts used by
     * <code>VectorOpenDataStandardLight</code> are combined fonts that use
     * <code>Amazon Ember</code> for most glyphs but <code>Noto Sans</code> for glyphs
     * unsupported by <code>Amazon Ember</code>.</p> 
     */
    inline void SetFontStack(const Aws::String& value) { m_fontStackHasBeenSet = true; m_fontStack = value; }

    /**
     * <p>A comma-separated list of fonts to load glyphs from in order of preference.
     * For example, <code>Noto Sans Regular, Arial Unicode</code>.</p> <p>Valid fonts
     * stacks for <a
     * href="https://docs.aws.amazon.com/location/latest/developerguide/esri.html">Esri</a>
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
     * href="https://docs.aws.amazon.com/location/latest/developerguide/HERE.html">HERE
     * Technologies</a> styles:</p> <ul> <li> <p>VectorHereContrast – <code>Fira GO
     * Regular</code> | <code>Fira GO Bold</code> </p> </li> <li> <p>VectorHereExplore,
     * VectorHereExploreTruck, HybridHereExploreSatellite – <code>Fira GO Italic</code>
     * | <code>Fira GO Map</code> | <code>Fira GO Map Bold</code> | <code>Noto Sans CJK
     * JP Bold</code> | <code>Noto Sans CJK JP Light</code> | <code>Noto Sans CJK JP
     * Regular</code> </p> </li> </ul> <p>Valid font stacks for <a
     * href="https://docs.aws.amazon.com/location/latest/developerguide/open-data.html">Open
     * Data (Preview)</a> styles:</p> <ul> <li> <p>VectorOpenDataStandardLight –
     * <code>Amazon Ember Regular,Noto Sans Regular</code> | <code>Amazon Ember
     * Bold,Noto Sans Bold</code> | <code>Amazon Ember Medium,Noto Sans Medium</code> |
     * <code>Amazon Ember Regular Italic,Noto Sans Italic</code> | <code>Amazon Ember
     * Condensed RC Regular,Noto Sans Regular</code> | <code>Amazon Ember Condensed RC
     * Bold,Noto Sans Bold</code> </p> </li> </ul>  <p>The fonts used by
     * <code>VectorOpenDataStandardLight</code> are combined fonts that use
     * <code>Amazon Ember</code> for most glyphs but <code>Noto Sans</code> for glyphs
     * unsupported by <code>Amazon Ember</code>.</p> 
     */
    inline void SetFontStack(Aws::String&& value) { m_fontStackHasBeenSet = true; m_fontStack = std::move(value); }

    /**
     * <p>A comma-separated list of fonts to load glyphs from in order of preference.
     * For example, <code>Noto Sans Regular, Arial Unicode</code>.</p> <p>Valid fonts
     * stacks for <a
     * href="https://docs.aws.amazon.com/location/latest/developerguide/esri.html">Esri</a>
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
     * href="https://docs.aws.amazon.com/location/latest/developerguide/HERE.html">HERE
     * Technologies</a> styles:</p> <ul> <li> <p>VectorHereContrast – <code>Fira GO
     * Regular</code> | <code>Fira GO Bold</code> </p> </li> <li> <p>VectorHereExplore,
     * VectorHereExploreTruck, HybridHereExploreSatellite – <code>Fira GO Italic</code>
     * | <code>Fira GO Map</code> | <code>Fira GO Map Bold</code> | <code>Noto Sans CJK
     * JP Bold</code> | <code>Noto Sans CJK JP Light</code> | <code>Noto Sans CJK JP
     * Regular</code> </p> </li> </ul> <p>Valid font stacks for <a
     * href="https://docs.aws.amazon.com/location/latest/developerguide/open-data.html">Open
     * Data (Preview)</a> styles:</p> <ul> <li> <p>VectorOpenDataStandardLight –
     * <code>Amazon Ember Regular,Noto Sans Regular</code> | <code>Amazon Ember
     * Bold,Noto Sans Bold</code> | <code>Amazon Ember Medium,Noto Sans Medium</code> |
     * <code>Amazon Ember Regular Italic,Noto Sans Italic</code> | <code>Amazon Ember
     * Condensed RC Regular,Noto Sans Regular</code> | <code>Amazon Ember Condensed RC
     * Bold,Noto Sans Bold</code> </p> </li> </ul>  <p>The fonts used by
     * <code>VectorOpenDataStandardLight</code> are combined fonts that use
     * <code>Amazon Ember</code> for most glyphs but <code>Noto Sans</code> for glyphs
     * unsupported by <code>Amazon Ember</code>.</p> 
     */
    inline void SetFontStack(const char* value) { m_fontStackHasBeenSet = true; m_fontStack.assign(value); }

    /**
     * <p>A comma-separated list of fonts to load glyphs from in order of preference.
     * For example, <code>Noto Sans Regular, Arial Unicode</code>.</p> <p>Valid fonts
     * stacks for <a
     * href="https://docs.aws.amazon.com/location/latest/developerguide/esri.html">Esri</a>
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
     * href="https://docs.aws.amazon.com/location/latest/developerguide/HERE.html">HERE
     * Technologies</a> styles:</p> <ul> <li> <p>VectorHereContrast – <code>Fira GO
     * Regular</code> | <code>Fira GO Bold</code> </p> </li> <li> <p>VectorHereExplore,
     * VectorHereExploreTruck, HybridHereExploreSatellite – <code>Fira GO Italic</code>
     * | <code>Fira GO Map</code> | <code>Fira GO Map Bold</code> | <code>Noto Sans CJK
     * JP Bold</code> | <code>Noto Sans CJK JP Light</code> | <code>Noto Sans CJK JP
     * Regular</code> </p> </li> </ul> <p>Valid font stacks for <a
     * href="https://docs.aws.amazon.com/location/latest/developerguide/open-data.html">Open
     * Data (Preview)</a> styles:</p> <ul> <li> <p>VectorOpenDataStandardLight –
     * <code>Amazon Ember Regular,Noto Sans Regular</code> | <code>Amazon Ember
     * Bold,Noto Sans Bold</code> | <code>Amazon Ember Medium,Noto Sans Medium</code> |
     * <code>Amazon Ember Regular Italic,Noto Sans Italic</code> | <code>Amazon Ember
     * Condensed RC Regular,Noto Sans Regular</code> | <code>Amazon Ember Condensed RC
     * Bold,Noto Sans Bold</code> </p> </li> </ul>  <p>The fonts used by
     * <code>VectorOpenDataStandardLight</code> are combined fonts that use
     * <code>Amazon Ember</code> for most glyphs but <code>Noto Sans</code> for glyphs
     * unsupported by <code>Amazon Ember</code>.</p> 
     */
    inline GetMapGlyphsRequest& WithFontStack(const Aws::String& value) { SetFontStack(value); return *this;}

    /**
     * <p>A comma-separated list of fonts to load glyphs from in order of preference.
     * For example, <code>Noto Sans Regular, Arial Unicode</code>.</p> <p>Valid fonts
     * stacks for <a
     * href="https://docs.aws.amazon.com/location/latest/developerguide/esri.html">Esri</a>
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
     * href="https://docs.aws.amazon.com/location/latest/developerguide/HERE.html">HERE
     * Technologies</a> styles:</p> <ul> <li> <p>VectorHereContrast – <code>Fira GO
     * Regular</code> | <code>Fira GO Bold</code> </p> </li> <li> <p>VectorHereExplore,
     * VectorHereExploreTruck, HybridHereExploreSatellite – <code>Fira GO Italic</code>
     * | <code>Fira GO Map</code> | <code>Fira GO Map Bold</code> | <code>Noto Sans CJK
     * JP Bold</code> | <code>Noto Sans CJK JP Light</code> | <code>Noto Sans CJK JP
     * Regular</code> </p> </li> </ul> <p>Valid font stacks for <a
     * href="https://docs.aws.amazon.com/location/latest/developerguide/open-data.html">Open
     * Data (Preview)</a> styles:</p> <ul> <li> <p>VectorOpenDataStandardLight –
     * <code>Amazon Ember Regular,Noto Sans Regular</code> | <code>Amazon Ember
     * Bold,Noto Sans Bold</code> | <code>Amazon Ember Medium,Noto Sans Medium</code> |
     * <code>Amazon Ember Regular Italic,Noto Sans Italic</code> | <code>Amazon Ember
     * Condensed RC Regular,Noto Sans Regular</code> | <code>Amazon Ember Condensed RC
     * Bold,Noto Sans Bold</code> </p> </li> </ul>  <p>The fonts used by
     * <code>VectorOpenDataStandardLight</code> are combined fonts that use
     * <code>Amazon Ember</code> for most glyphs but <code>Noto Sans</code> for glyphs
     * unsupported by <code>Amazon Ember</code>.</p> 
     */
    inline GetMapGlyphsRequest& WithFontStack(Aws::String&& value) { SetFontStack(std::move(value)); return *this;}

    /**
     * <p>A comma-separated list of fonts to load glyphs from in order of preference.
     * For example, <code>Noto Sans Regular, Arial Unicode</code>.</p> <p>Valid fonts
     * stacks for <a
     * href="https://docs.aws.amazon.com/location/latest/developerguide/esri.html">Esri</a>
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
     * href="https://docs.aws.amazon.com/location/latest/developerguide/HERE.html">HERE
     * Technologies</a> styles:</p> <ul> <li> <p>VectorHereContrast – <code>Fira GO
     * Regular</code> | <code>Fira GO Bold</code> </p> </li> <li> <p>VectorHereExplore,
     * VectorHereExploreTruck, HybridHereExploreSatellite – <code>Fira GO Italic</code>
     * | <code>Fira GO Map</code> | <code>Fira GO Map Bold</code> | <code>Noto Sans CJK
     * JP Bold</code> | <code>Noto Sans CJK JP Light</code> | <code>Noto Sans CJK JP
     * Regular</code> </p> </li> </ul> <p>Valid font stacks for <a
     * href="https://docs.aws.amazon.com/location/latest/developerguide/open-data.html">Open
     * Data (Preview)</a> styles:</p> <ul> <li> <p>VectorOpenDataStandardLight –
     * <code>Amazon Ember Regular,Noto Sans Regular</code> | <code>Amazon Ember
     * Bold,Noto Sans Bold</code> | <code>Amazon Ember Medium,Noto Sans Medium</code> |
     * <code>Amazon Ember Regular Italic,Noto Sans Italic</code> | <code>Amazon Ember
     * Condensed RC Regular,Noto Sans Regular</code> | <code>Amazon Ember Condensed RC
     * Bold,Noto Sans Bold</code> </p> </li> </ul>  <p>The fonts used by
     * <code>VectorOpenDataStandardLight</code> are combined fonts that use
     * <code>Amazon Ember</code> for most glyphs but <code>Noto Sans</code> for glyphs
     * unsupported by <code>Amazon Ember</code>.</p> 
     */
    inline GetMapGlyphsRequest& WithFontStack(const char* value) { SetFontStack(value); return *this;}


    /**
     * <p>A Unicode range of characters to download glyphs for. Each response will
     * contain 256 characters. For example, 0–255 includes all characters from range
     * <code>U+0000</code> to <code>00FF</code>. Must be aligned to multiples of
     * 256.</p>
     */
    inline const Aws::String& GetFontUnicodeRange() const{ return m_fontUnicodeRange; }

    /**
     * <p>A Unicode range of characters to download glyphs for. Each response will
     * contain 256 characters. For example, 0–255 includes all characters from range
     * <code>U+0000</code> to <code>00FF</code>. Must be aligned to multiples of
     * 256.</p>
     */
    inline bool FontUnicodeRangeHasBeenSet() const { return m_fontUnicodeRangeHasBeenSet; }

    /**
     * <p>A Unicode range of characters to download glyphs for. Each response will
     * contain 256 characters. For example, 0–255 includes all characters from range
     * <code>U+0000</code> to <code>00FF</code>. Must be aligned to multiples of
     * 256.</p>
     */
    inline void SetFontUnicodeRange(const Aws::String& value) { m_fontUnicodeRangeHasBeenSet = true; m_fontUnicodeRange = value; }

    /**
     * <p>A Unicode range of characters to download glyphs for. Each response will
     * contain 256 characters. For example, 0–255 includes all characters from range
     * <code>U+0000</code> to <code>00FF</code>. Must be aligned to multiples of
     * 256.</p>
     */
    inline void SetFontUnicodeRange(Aws::String&& value) { m_fontUnicodeRangeHasBeenSet = true; m_fontUnicodeRange = std::move(value); }

    /**
     * <p>A Unicode range of characters to download glyphs for. Each response will
     * contain 256 characters. For example, 0–255 includes all characters from range
     * <code>U+0000</code> to <code>00FF</code>. Must be aligned to multiples of
     * 256.</p>
     */
    inline void SetFontUnicodeRange(const char* value) { m_fontUnicodeRangeHasBeenSet = true; m_fontUnicodeRange.assign(value); }

    /**
     * <p>A Unicode range of characters to download glyphs for. Each response will
     * contain 256 characters. For example, 0–255 includes all characters from range
     * <code>U+0000</code> to <code>00FF</code>. Must be aligned to multiples of
     * 256.</p>
     */
    inline GetMapGlyphsRequest& WithFontUnicodeRange(const Aws::String& value) { SetFontUnicodeRange(value); return *this;}

    /**
     * <p>A Unicode range of characters to download glyphs for. Each response will
     * contain 256 characters. For example, 0–255 includes all characters from range
     * <code>U+0000</code> to <code>00FF</code>. Must be aligned to multiples of
     * 256.</p>
     */
    inline GetMapGlyphsRequest& WithFontUnicodeRange(Aws::String&& value) { SetFontUnicodeRange(std::move(value)); return *this;}

    /**
     * <p>A Unicode range of characters to download glyphs for. Each response will
     * contain 256 characters. For example, 0–255 includes all characters from range
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
    bool m_fontStackHasBeenSet = false;

    Aws::String m_fontUnicodeRange;
    bool m_fontUnicodeRangeHasBeenSet = false;

    Aws::String m_mapName;
    bool m_mapNameHasBeenSet = false;
  };

} // namespace Model
} // namespace LocationService
} // namespace Aws
