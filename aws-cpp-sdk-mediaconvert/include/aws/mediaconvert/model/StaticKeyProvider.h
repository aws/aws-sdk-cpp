/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#pragma once
#include <aws/mediaconvert/MediaConvert_EXPORTS.h>
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
namespace MediaConvert
{
namespace Model
{

  /**
   * Use these settings to set up encryption with a static key provider.<p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconvert-2017-08-29/StaticKeyProvider">AWS
   * API Reference</a></p>
   */
  class AWS_MEDIACONVERT_API StaticKeyProvider
  {
  public:
    StaticKeyProvider();
    StaticKeyProvider(Aws::Utils::Json::JsonView jsonValue);
    StaticKeyProvider& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * Relates to DRM implementation. Sets the value of the KEYFORMAT attribute. Must
     * be 'identity' or a reverse DNS string. May be omitted to indicate an implicit
     * value of 'identity'.
     */
    inline const Aws::String& GetKeyFormat() const{ return m_keyFormat; }

    /**
     * Relates to DRM implementation. Sets the value of the KEYFORMAT attribute. Must
     * be 'identity' or a reverse DNS string. May be omitted to indicate an implicit
     * value of 'identity'.
     */
    inline bool KeyFormatHasBeenSet() const { return m_keyFormatHasBeenSet; }

    /**
     * Relates to DRM implementation. Sets the value of the KEYFORMAT attribute. Must
     * be 'identity' or a reverse DNS string. May be omitted to indicate an implicit
     * value of 'identity'.
     */
    inline void SetKeyFormat(const Aws::String& value) { m_keyFormatHasBeenSet = true; m_keyFormat = value; }

    /**
     * Relates to DRM implementation. Sets the value of the KEYFORMAT attribute. Must
     * be 'identity' or a reverse DNS string. May be omitted to indicate an implicit
     * value of 'identity'.
     */
    inline void SetKeyFormat(Aws::String&& value) { m_keyFormatHasBeenSet = true; m_keyFormat = std::move(value); }

    /**
     * Relates to DRM implementation. Sets the value of the KEYFORMAT attribute. Must
     * be 'identity' or a reverse DNS string. May be omitted to indicate an implicit
     * value of 'identity'.
     */
    inline void SetKeyFormat(const char* value) { m_keyFormatHasBeenSet = true; m_keyFormat.assign(value); }

    /**
     * Relates to DRM implementation. Sets the value of the KEYFORMAT attribute. Must
     * be 'identity' or a reverse DNS string. May be omitted to indicate an implicit
     * value of 'identity'.
     */
    inline StaticKeyProvider& WithKeyFormat(const Aws::String& value) { SetKeyFormat(value); return *this;}

    /**
     * Relates to DRM implementation. Sets the value of the KEYFORMAT attribute. Must
     * be 'identity' or a reverse DNS string. May be omitted to indicate an implicit
     * value of 'identity'.
     */
    inline StaticKeyProvider& WithKeyFormat(Aws::String&& value) { SetKeyFormat(std::move(value)); return *this;}

    /**
     * Relates to DRM implementation. Sets the value of the KEYFORMAT attribute. Must
     * be 'identity' or a reverse DNS string. May be omitted to indicate an implicit
     * value of 'identity'.
     */
    inline StaticKeyProvider& WithKeyFormat(const char* value) { SetKeyFormat(value); return *this;}


    /**
     * Relates to DRM implementation. Either a single positive integer version value or
     * a slash delimited list of version values (1/2/3).
     */
    inline const Aws::String& GetKeyFormatVersions() const{ return m_keyFormatVersions; }

    /**
     * Relates to DRM implementation. Either a single positive integer version value or
     * a slash delimited list of version values (1/2/3).
     */
    inline bool KeyFormatVersionsHasBeenSet() const { return m_keyFormatVersionsHasBeenSet; }

    /**
     * Relates to DRM implementation. Either a single positive integer version value or
     * a slash delimited list of version values (1/2/3).
     */
    inline void SetKeyFormatVersions(const Aws::String& value) { m_keyFormatVersionsHasBeenSet = true; m_keyFormatVersions = value; }

    /**
     * Relates to DRM implementation. Either a single positive integer version value or
     * a slash delimited list of version values (1/2/3).
     */
    inline void SetKeyFormatVersions(Aws::String&& value) { m_keyFormatVersionsHasBeenSet = true; m_keyFormatVersions = std::move(value); }

    /**
     * Relates to DRM implementation. Either a single positive integer version value or
     * a slash delimited list of version values (1/2/3).
     */
    inline void SetKeyFormatVersions(const char* value) { m_keyFormatVersionsHasBeenSet = true; m_keyFormatVersions.assign(value); }

    /**
     * Relates to DRM implementation. Either a single positive integer version value or
     * a slash delimited list of version values (1/2/3).
     */
    inline StaticKeyProvider& WithKeyFormatVersions(const Aws::String& value) { SetKeyFormatVersions(value); return *this;}

    /**
     * Relates to DRM implementation. Either a single positive integer version value or
     * a slash delimited list of version values (1/2/3).
     */
    inline StaticKeyProvider& WithKeyFormatVersions(Aws::String&& value) { SetKeyFormatVersions(std::move(value)); return *this;}

    /**
     * Relates to DRM implementation. Either a single positive integer version value or
     * a slash delimited list of version values (1/2/3).
     */
    inline StaticKeyProvider& WithKeyFormatVersions(const char* value) { SetKeyFormatVersions(value); return *this;}


    /**
     * Relates to DRM implementation. Use a 32-character hexidecimal string to specify
     * Key Value (StaticKeyValue).
     */
    inline const Aws::String& GetStaticKeyValue() const{ return m_staticKeyValue; }

    /**
     * Relates to DRM implementation. Use a 32-character hexidecimal string to specify
     * Key Value (StaticKeyValue).
     */
    inline bool StaticKeyValueHasBeenSet() const { return m_staticKeyValueHasBeenSet; }

    /**
     * Relates to DRM implementation. Use a 32-character hexidecimal string to specify
     * Key Value (StaticKeyValue).
     */
    inline void SetStaticKeyValue(const Aws::String& value) { m_staticKeyValueHasBeenSet = true; m_staticKeyValue = value; }

    /**
     * Relates to DRM implementation. Use a 32-character hexidecimal string to specify
     * Key Value (StaticKeyValue).
     */
    inline void SetStaticKeyValue(Aws::String&& value) { m_staticKeyValueHasBeenSet = true; m_staticKeyValue = std::move(value); }

    /**
     * Relates to DRM implementation. Use a 32-character hexidecimal string to specify
     * Key Value (StaticKeyValue).
     */
    inline void SetStaticKeyValue(const char* value) { m_staticKeyValueHasBeenSet = true; m_staticKeyValue.assign(value); }

    /**
     * Relates to DRM implementation. Use a 32-character hexidecimal string to specify
     * Key Value (StaticKeyValue).
     */
    inline StaticKeyProvider& WithStaticKeyValue(const Aws::String& value) { SetStaticKeyValue(value); return *this;}

    /**
     * Relates to DRM implementation. Use a 32-character hexidecimal string to specify
     * Key Value (StaticKeyValue).
     */
    inline StaticKeyProvider& WithStaticKeyValue(Aws::String&& value) { SetStaticKeyValue(std::move(value)); return *this;}

    /**
     * Relates to DRM implementation. Use a 32-character hexidecimal string to specify
     * Key Value (StaticKeyValue).
     */
    inline StaticKeyProvider& WithStaticKeyValue(const char* value) { SetStaticKeyValue(value); return *this;}


    /**
     * Relates to DRM implementation. The location of the license server used for
     * protecting content.
     */
    inline const Aws::String& GetUrl() const{ return m_url; }

    /**
     * Relates to DRM implementation. The location of the license server used for
     * protecting content.
     */
    inline bool UrlHasBeenSet() const { return m_urlHasBeenSet; }

    /**
     * Relates to DRM implementation. The location of the license server used for
     * protecting content.
     */
    inline void SetUrl(const Aws::String& value) { m_urlHasBeenSet = true; m_url = value; }

    /**
     * Relates to DRM implementation. The location of the license server used for
     * protecting content.
     */
    inline void SetUrl(Aws::String&& value) { m_urlHasBeenSet = true; m_url = std::move(value); }

    /**
     * Relates to DRM implementation. The location of the license server used for
     * protecting content.
     */
    inline void SetUrl(const char* value) { m_urlHasBeenSet = true; m_url.assign(value); }

    /**
     * Relates to DRM implementation. The location of the license server used for
     * protecting content.
     */
    inline StaticKeyProvider& WithUrl(const Aws::String& value) { SetUrl(value); return *this;}

    /**
     * Relates to DRM implementation. The location of the license server used for
     * protecting content.
     */
    inline StaticKeyProvider& WithUrl(Aws::String&& value) { SetUrl(std::move(value)); return *this;}

    /**
     * Relates to DRM implementation. The location of the license server used for
     * protecting content.
     */
    inline StaticKeyProvider& WithUrl(const char* value) { SetUrl(value); return *this;}

  private:

    Aws::String m_keyFormat;
    bool m_keyFormatHasBeenSet;

    Aws::String m_keyFormatVersions;
    bool m_keyFormatVersionsHasBeenSet;

    Aws::String m_staticKeyValue;
    bool m_staticKeyValueHasBeenSet;

    Aws::String m_url;
    bool m_urlHasBeenSet;
  };

} // namespace Model
} // namespace MediaConvert
} // namespace Aws
