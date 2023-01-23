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
   * <p>The text message.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/alexaforbusiness-2017-11-09/Text">AWS
   * API Reference</a></p>
   */
  class Text
  {
  public:
    AWS_ALEXAFORBUSINESS_API Text();
    AWS_ALEXAFORBUSINESS_API Text(Aws::Utils::Json::JsonView jsonValue);
    AWS_ALEXAFORBUSINESS_API Text& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_ALEXAFORBUSINESS_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The locale of the text message. Currently, en-US is supported.</p>
     */
    inline const Locale& GetLocale() const{ return m_locale; }

    /**
     * <p>The locale of the text message. Currently, en-US is supported.</p>
     */
    inline bool LocaleHasBeenSet() const { return m_localeHasBeenSet; }

    /**
     * <p>The locale of the text message. Currently, en-US is supported.</p>
     */
    inline void SetLocale(const Locale& value) { m_localeHasBeenSet = true; m_locale = value; }

    /**
     * <p>The locale of the text message. Currently, en-US is supported.</p>
     */
    inline void SetLocale(Locale&& value) { m_localeHasBeenSet = true; m_locale = std::move(value); }

    /**
     * <p>The locale of the text message. Currently, en-US is supported.</p>
     */
    inline Text& WithLocale(const Locale& value) { SetLocale(value); return *this;}

    /**
     * <p>The locale of the text message. Currently, en-US is supported.</p>
     */
    inline Text& WithLocale(Locale&& value) { SetLocale(std::move(value)); return *this;}


    /**
     * <p>The value of the text message.</p>
     */
    inline const Aws::String& GetValue() const{ return m_value; }

    /**
     * <p>The value of the text message.</p>
     */
    inline bool ValueHasBeenSet() const { return m_valueHasBeenSet; }

    /**
     * <p>The value of the text message.</p>
     */
    inline void SetValue(const Aws::String& value) { m_valueHasBeenSet = true; m_value = value; }

    /**
     * <p>The value of the text message.</p>
     */
    inline void SetValue(Aws::String&& value) { m_valueHasBeenSet = true; m_value = std::move(value); }

    /**
     * <p>The value of the text message.</p>
     */
    inline void SetValue(const char* value) { m_valueHasBeenSet = true; m_value.assign(value); }

    /**
     * <p>The value of the text message.</p>
     */
    inline Text& WithValue(const Aws::String& value) { SetValue(value); return *this;}

    /**
     * <p>The value of the text message.</p>
     */
    inline Text& WithValue(Aws::String&& value) { SetValue(std::move(value)); return *this;}

    /**
     * <p>The value of the text message.</p>
     */
    inline Text& WithValue(const char* value) { SetValue(value); return *this;}

  private:

    Locale m_locale;
    bool m_localeHasBeenSet = false;

    Aws::String m_value;
    bool m_valueHasBeenSet = false;
  };

} // namespace Model
} // namespace AlexaForBusiness
} // namespace Aws
