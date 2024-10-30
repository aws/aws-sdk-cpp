/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/geo-places/GeoPlaces_EXPORTS.h>
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
namespace GeoPlaces
{
namespace Model
{

  /**
   * <p>How to pronounce the various components of the address or
   * place.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/geo-places-2020-11-19/PhonemeTranscription">AWS
   * API Reference</a></p>
   */
  class PhonemeTranscription
  {
  public:
    AWS_GEOPLACES_API PhonemeTranscription();
    AWS_GEOPLACES_API PhonemeTranscription(Aws::Utils::Json::JsonView jsonValue);
    AWS_GEOPLACES_API PhonemeTranscription& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GEOPLACES_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Value which indicates how to pronounce the value.</p>
     */
    inline const Aws::String& GetValue() const{ return m_value; }
    inline bool ValueHasBeenSet() const { return m_valueHasBeenSet; }
    inline void SetValue(const Aws::String& value) { m_valueHasBeenSet = true; m_value = value; }
    inline void SetValue(Aws::String&& value) { m_valueHasBeenSet = true; m_value = std::move(value); }
    inline void SetValue(const char* value) { m_valueHasBeenSet = true; m_value.assign(value); }
    inline PhonemeTranscription& WithValue(const Aws::String& value) { SetValue(value); return *this;}
    inline PhonemeTranscription& WithValue(Aws::String&& value) { SetValue(std::move(value)); return *this;}
    inline PhonemeTranscription& WithValue(const char* value) { SetValue(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of <a href="https://en.wikipedia.org/wiki/IETF_language_tag">BCP
     * 47</a> compliant language codes for the results to be rendered in. If there is
     * no data for the result in the requested language, data will be returned in the
     * default language for the entry.</p>
     */
    inline const Aws::String& GetLanguage() const{ return m_language; }
    inline bool LanguageHasBeenSet() const { return m_languageHasBeenSet; }
    inline void SetLanguage(const Aws::String& value) { m_languageHasBeenSet = true; m_language = value; }
    inline void SetLanguage(Aws::String&& value) { m_languageHasBeenSet = true; m_language = std::move(value); }
    inline void SetLanguage(const char* value) { m_languageHasBeenSet = true; m_language.assign(value); }
    inline PhonemeTranscription& WithLanguage(const Aws::String& value) { SetLanguage(value); return *this;}
    inline PhonemeTranscription& WithLanguage(Aws::String&& value) { SetLanguage(std::move(value)); return *this;}
    inline PhonemeTranscription& WithLanguage(const char* value) { SetLanguage(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Boolean which indicates if it the preferred pronunciation.</p>
     */
    inline bool GetPreferred() const{ return m_preferred; }
    inline bool PreferredHasBeenSet() const { return m_preferredHasBeenSet; }
    inline void SetPreferred(bool value) { m_preferredHasBeenSet = true; m_preferred = value; }
    inline PhonemeTranscription& WithPreferred(bool value) { SetPreferred(value); return *this;}
    ///@}
  private:

    Aws::String m_value;
    bool m_valueHasBeenSet = false;

    Aws::String m_language;
    bool m_languageHasBeenSet = false;

    bool m_preferred;
    bool m_preferredHasBeenSet = false;
  };

} // namespace Model
} // namespace GeoPlaces
} // namespace Aws
