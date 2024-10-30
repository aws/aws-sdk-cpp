/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/geo-routes/GeoRoutes_EXPORTS.h>
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
namespace GeoRoutes
{
namespace Model
{

  /**
   * <p>The localized string.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/geo-routes-2020-11-19/LocalizedString">AWS
   * API Reference</a></p>
   */
  class LocalizedString
  {
  public:
    AWS_GEOROUTES_API LocalizedString();
    AWS_GEOROUTES_API LocalizedString(Aws::Utils::Json::JsonView jsonValue);
    AWS_GEOROUTES_API LocalizedString& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GEOROUTES_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>A list of BCP 47 compliant language codes for the results to be rendered in.
     * The request uses the regional default as the fallback if the requested language
     * can't be provided.</p>
     */
    inline const Aws::String& GetLanguage() const{ return m_language; }
    inline bool LanguageHasBeenSet() const { return m_languageHasBeenSet; }
    inline void SetLanguage(const Aws::String& value) { m_languageHasBeenSet = true; m_language = value; }
    inline void SetLanguage(Aws::String&& value) { m_languageHasBeenSet = true; m_language = std::move(value); }
    inline void SetLanguage(const char* value) { m_languageHasBeenSet = true; m_language.assign(value); }
    inline LocalizedString& WithLanguage(const Aws::String& value) { SetLanguage(value); return *this;}
    inline LocalizedString& WithLanguage(Aws::String&& value) { SetLanguage(std::move(value)); return *this;}
    inline LocalizedString& WithLanguage(const char* value) { SetLanguage(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The value of the localized string.</p>
     */
    inline const Aws::String& GetValue() const{ return m_value; }
    inline bool ValueHasBeenSet() const { return m_valueHasBeenSet; }
    inline void SetValue(const Aws::String& value) { m_valueHasBeenSet = true; m_value = value; }
    inline void SetValue(Aws::String&& value) { m_valueHasBeenSet = true; m_value = std::move(value); }
    inline void SetValue(const char* value) { m_valueHasBeenSet = true; m_value.assign(value); }
    inline LocalizedString& WithValue(const Aws::String& value) { SetValue(value); return *this;}
    inline LocalizedString& WithValue(Aws::String&& value) { SetValue(std::move(value)); return *this;}
    inline LocalizedString& WithValue(const char* value) { SetValue(value); return *this;}
    ///@}
  private:

    Aws::String m_language;
    bool m_languageHasBeenSet = false;

    Aws::String m_value;
    bool m_valueHasBeenSet = false;
  };

} // namespace Model
} // namespace GeoRoutes
} // namespace Aws
