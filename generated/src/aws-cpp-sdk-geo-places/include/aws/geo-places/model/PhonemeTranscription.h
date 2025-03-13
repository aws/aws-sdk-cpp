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
    AWS_GEOPLACES_API PhonemeTranscription() = default;
    AWS_GEOPLACES_API PhonemeTranscription(Aws::Utils::Json::JsonView jsonValue);
    AWS_GEOPLACES_API PhonemeTranscription& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GEOPLACES_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Value which indicates how to pronounce the value.</p>
     */
    inline const Aws::String& GetValue() const { return m_value; }
    inline bool ValueHasBeenSet() const { return m_valueHasBeenSet; }
    template<typename ValueT = Aws::String>
    void SetValue(ValueT&& value) { m_valueHasBeenSet = true; m_value = std::forward<ValueT>(value); }
    template<typename ValueT = Aws::String>
    PhonemeTranscription& WithValue(ValueT&& value) { SetValue(std::forward<ValueT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of <a href="https://en.wikipedia.org/wiki/IETF_language_tag">BCP
     * 47</a> compliant language codes for the results to be rendered in. If there is
     * no data for the result in the requested language, data will be returned in the
     * default language for the entry.</p>
     */
    inline const Aws::String& GetLanguage() const { return m_language; }
    inline bool LanguageHasBeenSet() const { return m_languageHasBeenSet; }
    template<typename LanguageT = Aws::String>
    void SetLanguage(LanguageT&& value) { m_languageHasBeenSet = true; m_language = std::forward<LanguageT>(value); }
    template<typename LanguageT = Aws::String>
    PhonemeTranscription& WithLanguage(LanguageT&& value) { SetLanguage(std::forward<LanguageT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Boolean which indicates if it the preferred pronunciation.</p>
     */
    inline bool GetPreferred() const { return m_preferred; }
    inline bool PreferredHasBeenSet() const { return m_preferredHasBeenSet; }
    inline void SetPreferred(bool value) { m_preferredHasBeenSet = true; m_preferred = value; }
    inline PhonemeTranscription& WithPreferred(bool value) { SetPreferred(value); return *this;}
    ///@}
  private:

    Aws::String m_value;
    bool m_valueHasBeenSet = false;

    Aws::String m_language;
    bool m_languageHasBeenSet = false;

    bool m_preferred{false};
    bool m_preferredHasBeenSet = false;
  };

} // namespace Model
} // namespace GeoPlaces
} // namespace Aws
