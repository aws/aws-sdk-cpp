/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/translate/Translate_EXPORTS.h>
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
namespace Translate
{
namespace Model
{

  /**
   * <p>A supported language.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/translate-2017-07-01/Language">AWS
   * API Reference</a></p>
   */
  class Language
  {
  public:
    AWS_TRANSLATE_API Language();
    AWS_TRANSLATE_API Language(Aws::Utils::Json::JsonView jsonValue);
    AWS_TRANSLATE_API Language& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_TRANSLATE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Language name of the supported language.</p>
     */
    inline const Aws::String& GetLanguageName() const{ return m_languageName; }

    /**
     * <p>Language name of the supported language.</p>
     */
    inline bool LanguageNameHasBeenSet() const { return m_languageNameHasBeenSet; }

    /**
     * <p>Language name of the supported language.</p>
     */
    inline void SetLanguageName(const Aws::String& value) { m_languageNameHasBeenSet = true; m_languageName = value; }

    /**
     * <p>Language name of the supported language.</p>
     */
    inline void SetLanguageName(Aws::String&& value) { m_languageNameHasBeenSet = true; m_languageName = std::move(value); }

    /**
     * <p>Language name of the supported language.</p>
     */
    inline void SetLanguageName(const char* value) { m_languageNameHasBeenSet = true; m_languageName.assign(value); }

    /**
     * <p>Language name of the supported language.</p>
     */
    inline Language& WithLanguageName(const Aws::String& value) { SetLanguageName(value); return *this;}

    /**
     * <p>Language name of the supported language.</p>
     */
    inline Language& WithLanguageName(Aws::String&& value) { SetLanguageName(std::move(value)); return *this;}

    /**
     * <p>Language name of the supported language.</p>
     */
    inline Language& WithLanguageName(const char* value) { SetLanguageName(value); return *this;}


    /**
     * <p>Language code for the supported language.</p>
     */
    inline const Aws::String& GetLanguageCode() const{ return m_languageCode; }

    /**
     * <p>Language code for the supported language.</p>
     */
    inline bool LanguageCodeHasBeenSet() const { return m_languageCodeHasBeenSet; }

    /**
     * <p>Language code for the supported language.</p>
     */
    inline void SetLanguageCode(const Aws::String& value) { m_languageCodeHasBeenSet = true; m_languageCode = value; }

    /**
     * <p>Language code for the supported language.</p>
     */
    inline void SetLanguageCode(Aws::String&& value) { m_languageCodeHasBeenSet = true; m_languageCode = std::move(value); }

    /**
     * <p>Language code for the supported language.</p>
     */
    inline void SetLanguageCode(const char* value) { m_languageCodeHasBeenSet = true; m_languageCode.assign(value); }

    /**
     * <p>Language code for the supported language.</p>
     */
    inline Language& WithLanguageCode(const Aws::String& value) { SetLanguageCode(value); return *this;}

    /**
     * <p>Language code for the supported language.</p>
     */
    inline Language& WithLanguageCode(Aws::String&& value) { SetLanguageCode(std::move(value)); return *this;}

    /**
     * <p>Language code for the supported language.</p>
     */
    inline Language& WithLanguageCode(const char* value) { SetLanguageCode(value); return *this;}

  private:

    Aws::String m_languageName;
    bool m_languageNameHasBeenSet = false;

    Aws::String m_languageCode;
    bool m_languageCodeHasBeenSet = false;
  };

} // namespace Model
} // namespace Translate
} // namespace Aws
