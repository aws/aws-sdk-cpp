/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
  class Ssml
  {
  public:
    AWS_ALEXAFORBUSINESS_API Ssml();
    AWS_ALEXAFORBUSINESS_API Ssml(Aws::Utils::Json::JsonView jsonValue);
    AWS_ALEXAFORBUSINESS_API Ssml& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_ALEXAFORBUSINESS_API Aws::Utils::Json::JsonValue Jsonize() const;


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
    bool m_localeHasBeenSet = false;

    Aws::String m_value;
    bool m_valueHasBeenSet = false;
  };

} // namespace Model
} // namespace AlexaForBusiness
} // namespace Aws
