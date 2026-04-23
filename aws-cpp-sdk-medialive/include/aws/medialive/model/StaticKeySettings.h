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
#include <aws/medialive/MediaLive_EXPORTS.h>
#include <aws/medialive/model/InputLocation.h>
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
namespace MediaLive
{
namespace Model
{

  /**
   * Static Key Settings<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/StaticKeySettings">AWS
   * API Reference</a></p>
   */
  class AWS_MEDIALIVE_API StaticKeySettings
  {
  public:
    StaticKeySettings();
    StaticKeySettings(Aws::Utils::Json::JsonView jsonValue);
    StaticKeySettings& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * The URL of the license server used for protecting content.
     */
    inline const InputLocation& GetKeyProviderServer() const{ return m_keyProviderServer; }

    /**
     * The URL of the license server used for protecting content.
     */
    inline bool KeyProviderServerHasBeenSet() const { return m_keyProviderServerHasBeenSet; }

    /**
     * The URL of the license server used for protecting content.
     */
    inline void SetKeyProviderServer(const InputLocation& value) { m_keyProviderServerHasBeenSet = true; m_keyProviderServer = value; }

    /**
     * The URL of the license server used for protecting content.
     */
    inline void SetKeyProviderServer(InputLocation&& value) { m_keyProviderServerHasBeenSet = true; m_keyProviderServer = std::move(value); }

    /**
     * The URL of the license server used for protecting content.
     */
    inline StaticKeySettings& WithKeyProviderServer(const InputLocation& value) { SetKeyProviderServer(value); return *this;}

    /**
     * The URL of the license server used for protecting content.
     */
    inline StaticKeySettings& WithKeyProviderServer(InputLocation&& value) { SetKeyProviderServer(std::move(value)); return *this;}


    /**
     * Static key value as a 32 character hexadecimal string.
     */
    inline const Aws::String& GetStaticKeyValue() const{ return m_staticKeyValue; }

    /**
     * Static key value as a 32 character hexadecimal string.
     */
    inline bool StaticKeyValueHasBeenSet() const { return m_staticKeyValueHasBeenSet; }

    /**
     * Static key value as a 32 character hexadecimal string.
     */
    inline void SetStaticKeyValue(const Aws::String& value) { m_staticKeyValueHasBeenSet = true; m_staticKeyValue = value; }

    /**
     * Static key value as a 32 character hexadecimal string.
     */
    inline void SetStaticKeyValue(Aws::String&& value) { m_staticKeyValueHasBeenSet = true; m_staticKeyValue = std::move(value); }

    /**
     * Static key value as a 32 character hexadecimal string.
     */
    inline void SetStaticKeyValue(const char* value) { m_staticKeyValueHasBeenSet = true; m_staticKeyValue.assign(value); }

    /**
     * Static key value as a 32 character hexadecimal string.
     */
    inline StaticKeySettings& WithStaticKeyValue(const Aws::String& value) { SetStaticKeyValue(value); return *this;}

    /**
     * Static key value as a 32 character hexadecimal string.
     */
    inline StaticKeySettings& WithStaticKeyValue(Aws::String&& value) { SetStaticKeyValue(std::move(value)); return *this;}

    /**
     * Static key value as a 32 character hexadecimal string.
     */
    inline StaticKeySettings& WithStaticKeyValue(const char* value) { SetStaticKeyValue(value); return *this;}

  private:

    InputLocation m_keyProviderServer;
    bool m_keyProviderServerHasBeenSet;

    Aws::String m_staticKeyValue;
    bool m_staticKeyValueHasBeenSet;
  };

} // namespace Model
} // namespace MediaLive
} // namespace Aws
