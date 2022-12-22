/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/transcribe/TranscribeService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/transcribe/model/LanguageCode.h>
#include <aws/core/utils/DateTime.h>
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
namespace TranscribeService
{
namespace Model
{

  /**
   * <p>Provides information about a custom vocabulary filter, including the language
   * of the filter, when it was last modified, and its name.</p><p><h3>See Also:</h3>
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/transcribe-2017-10-26/VocabularyFilterInfo">AWS
   * API Reference</a></p>
   */
  class VocabularyFilterInfo
  {
  public:
    AWS_TRANSCRIBESERVICE_API VocabularyFilterInfo();
    AWS_TRANSCRIBESERVICE_API VocabularyFilterInfo(Aws::Utils::Json::JsonView jsonValue);
    AWS_TRANSCRIBESERVICE_API VocabularyFilterInfo& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_TRANSCRIBESERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>A unique name, chosen by you, for your custom vocabulary filter. This name is
     * case sensitive, cannot contain spaces, and must be unique within an Amazon Web
     * Services account.</p>
     */
    inline const Aws::String& GetVocabularyFilterName() const{ return m_vocabularyFilterName; }

    /**
     * <p>A unique name, chosen by you, for your custom vocabulary filter. This name is
     * case sensitive, cannot contain spaces, and must be unique within an Amazon Web
     * Services account.</p>
     */
    inline bool VocabularyFilterNameHasBeenSet() const { return m_vocabularyFilterNameHasBeenSet; }

    /**
     * <p>A unique name, chosen by you, for your custom vocabulary filter. This name is
     * case sensitive, cannot contain spaces, and must be unique within an Amazon Web
     * Services account.</p>
     */
    inline void SetVocabularyFilterName(const Aws::String& value) { m_vocabularyFilterNameHasBeenSet = true; m_vocabularyFilterName = value; }

    /**
     * <p>A unique name, chosen by you, for your custom vocabulary filter. This name is
     * case sensitive, cannot contain spaces, and must be unique within an Amazon Web
     * Services account.</p>
     */
    inline void SetVocabularyFilterName(Aws::String&& value) { m_vocabularyFilterNameHasBeenSet = true; m_vocabularyFilterName = std::move(value); }

    /**
     * <p>A unique name, chosen by you, for your custom vocabulary filter. This name is
     * case sensitive, cannot contain spaces, and must be unique within an Amazon Web
     * Services account.</p>
     */
    inline void SetVocabularyFilterName(const char* value) { m_vocabularyFilterNameHasBeenSet = true; m_vocabularyFilterName.assign(value); }

    /**
     * <p>A unique name, chosen by you, for your custom vocabulary filter. This name is
     * case sensitive, cannot contain spaces, and must be unique within an Amazon Web
     * Services account.</p>
     */
    inline VocabularyFilterInfo& WithVocabularyFilterName(const Aws::String& value) { SetVocabularyFilterName(value); return *this;}

    /**
     * <p>A unique name, chosen by you, for your custom vocabulary filter. This name is
     * case sensitive, cannot contain spaces, and must be unique within an Amazon Web
     * Services account.</p>
     */
    inline VocabularyFilterInfo& WithVocabularyFilterName(Aws::String&& value) { SetVocabularyFilterName(std::move(value)); return *this;}

    /**
     * <p>A unique name, chosen by you, for your custom vocabulary filter. This name is
     * case sensitive, cannot contain spaces, and must be unique within an Amazon Web
     * Services account.</p>
     */
    inline VocabularyFilterInfo& WithVocabularyFilterName(const char* value) { SetVocabularyFilterName(value); return *this;}


    /**
     * <p>The language code that represents the language of the entries in your
     * vocabulary filter. Each custom vocabulary filter must contain terms in only one
     * language.</p> <p>A custom vocabulary filter can only be used to transcribe files
     * in the same language as the filter. For example, if you create a custom
     * vocabulary filter using US English (<code>en-US</code>), you can only apply this
     * filter to files that contain English audio.</p> <p>For a list of supported
     * languages and their associated language codes, refer to the <a
     * href="https://docs.aws.amazon.com/transcribe/latest/dg/supported-languages.html">Supported
     * languages</a> table.</p>
     */
    inline const LanguageCode& GetLanguageCode() const{ return m_languageCode; }

    /**
     * <p>The language code that represents the language of the entries in your
     * vocabulary filter. Each custom vocabulary filter must contain terms in only one
     * language.</p> <p>A custom vocabulary filter can only be used to transcribe files
     * in the same language as the filter. For example, if you create a custom
     * vocabulary filter using US English (<code>en-US</code>), you can only apply this
     * filter to files that contain English audio.</p> <p>For a list of supported
     * languages and their associated language codes, refer to the <a
     * href="https://docs.aws.amazon.com/transcribe/latest/dg/supported-languages.html">Supported
     * languages</a> table.</p>
     */
    inline bool LanguageCodeHasBeenSet() const { return m_languageCodeHasBeenSet; }

    /**
     * <p>The language code that represents the language of the entries in your
     * vocabulary filter. Each custom vocabulary filter must contain terms in only one
     * language.</p> <p>A custom vocabulary filter can only be used to transcribe files
     * in the same language as the filter. For example, if you create a custom
     * vocabulary filter using US English (<code>en-US</code>), you can only apply this
     * filter to files that contain English audio.</p> <p>For a list of supported
     * languages and their associated language codes, refer to the <a
     * href="https://docs.aws.amazon.com/transcribe/latest/dg/supported-languages.html">Supported
     * languages</a> table.</p>
     */
    inline void SetLanguageCode(const LanguageCode& value) { m_languageCodeHasBeenSet = true; m_languageCode = value; }

    /**
     * <p>The language code that represents the language of the entries in your
     * vocabulary filter. Each custom vocabulary filter must contain terms in only one
     * language.</p> <p>A custom vocabulary filter can only be used to transcribe files
     * in the same language as the filter. For example, if you create a custom
     * vocabulary filter using US English (<code>en-US</code>), you can only apply this
     * filter to files that contain English audio.</p> <p>For a list of supported
     * languages and their associated language codes, refer to the <a
     * href="https://docs.aws.amazon.com/transcribe/latest/dg/supported-languages.html">Supported
     * languages</a> table.</p>
     */
    inline void SetLanguageCode(LanguageCode&& value) { m_languageCodeHasBeenSet = true; m_languageCode = std::move(value); }

    /**
     * <p>The language code that represents the language of the entries in your
     * vocabulary filter. Each custom vocabulary filter must contain terms in only one
     * language.</p> <p>A custom vocabulary filter can only be used to transcribe files
     * in the same language as the filter. For example, if you create a custom
     * vocabulary filter using US English (<code>en-US</code>), you can only apply this
     * filter to files that contain English audio.</p> <p>For a list of supported
     * languages and their associated language codes, refer to the <a
     * href="https://docs.aws.amazon.com/transcribe/latest/dg/supported-languages.html">Supported
     * languages</a> table.</p>
     */
    inline VocabularyFilterInfo& WithLanguageCode(const LanguageCode& value) { SetLanguageCode(value); return *this;}

    /**
     * <p>The language code that represents the language of the entries in your
     * vocabulary filter. Each custom vocabulary filter must contain terms in only one
     * language.</p> <p>A custom vocabulary filter can only be used to transcribe files
     * in the same language as the filter. For example, if you create a custom
     * vocabulary filter using US English (<code>en-US</code>), you can only apply this
     * filter to files that contain English audio.</p> <p>For a list of supported
     * languages and their associated language codes, refer to the <a
     * href="https://docs.aws.amazon.com/transcribe/latest/dg/supported-languages.html">Supported
     * languages</a> table.</p>
     */
    inline VocabularyFilterInfo& WithLanguageCode(LanguageCode&& value) { SetLanguageCode(std::move(value)); return *this;}


    /**
     * <p>The date and time the specified custom vocabulary filter was last
     * modified.</p> <p>Timestamps are in the format
     * <code>YYYY-MM-DD'T'HH:MM:SS.SSSSSS-UTC</code>. For example,
     * <code>2022-05-04T12:32:58.761000-07:00</code> represents 12:32 PM UTC-7 on May
     * 4, 2022.</p>
     */
    inline const Aws::Utils::DateTime& GetLastModifiedTime() const{ return m_lastModifiedTime; }

    /**
     * <p>The date and time the specified custom vocabulary filter was last
     * modified.</p> <p>Timestamps are in the format
     * <code>YYYY-MM-DD'T'HH:MM:SS.SSSSSS-UTC</code>. For example,
     * <code>2022-05-04T12:32:58.761000-07:00</code> represents 12:32 PM UTC-7 on May
     * 4, 2022.</p>
     */
    inline bool LastModifiedTimeHasBeenSet() const { return m_lastModifiedTimeHasBeenSet; }

    /**
     * <p>The date and time the specified custom vocabulary filter was last
     * modified.</p> <p>Timestamps are in the format
     * <code>YYYY-MM-DD'T'HH:MM:SS.SSSSSS-UTC</code>. For example,
     * <code>2022-05-04T12:32:58.761000-07:00</code> represents 12:32 PM UTC-7 on May
     * 4, 2022.</p>
     */
    inline void SetLastModifiedTime(const Aws::Utils::DateTime& value) { m_lastModifiedTimeHasBeenSet = true; m_lastModifiedTime = value; }

    /**
     * <p>The date and time the specified custom vocabulary filter was last
     * modified.</p> <p>Timestamps are in the format
     * <code>YYYY-MM-DD'T'HH:MM:SS.SSSSSS-UTC</code>. For example,
     * <code>2022-05-04T12:32:58.761000-07:00</code> represents 12:32 PM UTC-7 on May
     * 4, 2022.</p>
     */
    inline void SetLastModifiedTime(Aws::Utils::DateTime&& value) { m_lastModifiedTimeHasBeenSet = true; m_lastModifiedTime = std::move(value); }

    /**
     * <p>The date and time the specified custom vocabulary filter was last
     * modified.</p> <p>Timestamps are in the format
     * <code>YYYY-MM-DD'T'HH:MM:SS.SSSSSS-UTC</code>. For example,
     * <code>2022-05-04T12:32:58.761000-07:00</code> represents 12:32 PM UTC-7 on May
     * 4, 2022.</p>
     */
    inline VocabularyFilterInfo& WithLastModifiedTime(const Aws::Utils::DateTime& value) { SetLastModifiedTime(value); return *this;}

    /**
     * <p>The date and time the specified custom vocabulary filter was last
     * modified.</p> <p>Timestamps are in the format
     * <code>YYYY-MM-DD'T'HH:MM:SS.SSSSSS-UTC</code>. For example,
     * <code>2022-05-04T12:32:58.761000-07:00</code> represents 12:32 PM UTC-7 on May
     * 4, 2022.</p>
     */
    inline VocabularyFilterInfo& WithLastModifiedTime(Aws::Utils::DateTime&& value) { SetLastModifiedTime(std::move(value)); return *this;}

  private:

    Aws::String m_vocabularyFilterName;
    bool m_vocabularyFilterNameHasBeenSet = false;

    LanguageCode m_languageCode;
    bool m_languageCodeHasBeenSet = false;

    Aws::Utils::DateTime m_lastModifiedTime;
    bool m_lastModifiedTimeHasBeenSet = false;
  };

} // namespace Model
} // namespace TranscribeService
} // namespace Aws
