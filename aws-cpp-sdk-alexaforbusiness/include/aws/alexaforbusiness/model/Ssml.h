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
#include <aws/alexaforbusiness/AlexaForBusiness_EXPORTS.h>
#include <aws/alexaforbusiness/model/Locale.h>
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
namespace AlexaForBusiness
{
namespace Model
{

  /**
   * <p>The SSML message. For more information, see <a
   * href="https://developer.amazon.com/docs/custom-skills/speech-synthesis-markup-language-ssml-reference.html">SSML
   * Reference</a>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/alexaforbusiness-2017-11-09/Ssml">AWS
   * API Reference</a></p>
   */
  class AWS_ALEXAFORBUSINESS_API Ssml
  {
  public:
    Ssml();
    Ssml(Aws::Utils::Json::JsonView jsonValue);
    Ssml& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The locale of the SSML message. Currently, en-US is supported.</p>
     */
    inline const Locale& GetLocale() const{ return m_locale; }

    /**
     * <p>The locale of the SSML message. Currently, en-US is supported.</p>
     */
    inline bool LocaleHasBeenSet() const { return m_localeHasBeenSet; }

    /**
     * <p>The locale of the SSML message. Currently, en-US is supported.</p>
     */
    inline void SetLocale(const Locale& value) { m_localeHasBeenSet = true; m_locale = value; }

    /**
     * <p>The locale of the SSML message. Currently, en-US is supported.</p>
     */
    inline void SetLocale(Locale&& value) { m_localeHasBeenSet = true; m_locale = std::move(value); }

    /**
     * <p>The locale of the SSML message. Currently, en-US is supported.</p>
     */
    inline Ssml& WithLocale(const Locale& value) { SetLocale(value); return *this;}

    /**
     * <p>The locale of the SSML message. Currently, en-US is supported.</p>
     */
    inline Ssml& WithLocale(Locale&& value) { SetLocale(std::move(value)); return *this;}


    /**
     * <p>The value of the SSML message in the correct SSML format. The audio tag is
     * not supported.</p>
     */
    inline const Aws::String& GetValue() const{ return m_value; }

    /**
     * <p>The value of the SSML message in the correct SSML format. The audio tag is
     * not supported.</p>
     */
    inline bool ValueHasBeenSet() const { return m_valueHasBeenSet; }

    /**
     * <p>The value of the SSML message in the correct SSML format. The audio tag is
     * not supported.</p>
     */
    inline void SetValue(const Aws::String& value) { m_valueHasBeenSet = true; m_value = value; }

    /**
     * <p>The value of the SSML message in the correct SSML format. The audio tag is
     * not supported.</p>
     */
    inline void SetValue(Aws::String&& value) { m_valueHasBeenSet = true; m_value = std::move(value); }

    /**
     * <p>The value of the SSML message in the correct SSML format. The audio tag is
     * not supported.</p>
     */
    inline void SetValue(const char* value) { m_valueHasBeenSet = true; m_value.assign(value); }

    /**
     * <p>The value of the SSML message in the correct SSML format. The audio tag is
     * not supported.</p>
     */
    inline Ssml& WithValue(const Aws::String& value) { SetValue(value); return *this;}

    /**
     * <p>The value of the SSML message in the correct SSML format. The audio tag is
     * not supported.</p>
     */
    inline Ssml& WithValue(Aws::String&& value) { SetValue(std::move(value)); return *this;}

    /**
     * <p>The value of the SSML message in the correct SSML format. The audio tag is
     * not supported.</p>
     */
    inline Ssml& WithValue(const char* value) { SetValue(value); return *this;}

  private:

    Locale m_locale;
    bool m_localeHasBeenSet;

    Aws::String m_value;
    bool m_valueHasBeenSet;
  };

} // namespace Model
} // namespace AlexaForBusiness
} // namespace Aws
