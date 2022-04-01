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
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace TranscribeService
{
namespace Model
{
  class AWS_TRANSCRIBESERVICE_API GetVocabularyFilterResult
  {
  public:
    GetVocabularyFilterResult();
    GetVocabularyFilterResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    GetVocabularyFilterResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The name of the vocabulary filter.</p>
     */
    inline const Aws::String& GetVocabularyFilterName() const{ return m_vocabularyFilterName; }

    /**
     * <p>The name of the vocabulary filter.</p>
     */
    inline void SetVocabularyFilterName(const Aws::String& value) { m_vocabularyFilterName = value; }

    /**
     * <p>The name of the vocabulary filter.</p>
     */
    inline void SetVocabularyFilterName(Aws::String&& value) { m_vocabularyFilterName = std::move(value); }

    /**
     * <p>The name of the vocabulary filter.</p>
     */
    inline void SetVocabularyFilterName(const char* value) { m_vocabularyFilterName.assign(value); }

    /**
     * <p>The name of the vocabulary filter.</p>
     */
    inline GetVocabularyFilterResult& WithVocabularyFilterName(const Aws::String& value) { SetVocabularyFilterName(value); return *this;}

    /**
     * <p>The name of the vocabulary filter.</p>
     */
    inline GetVocabularyFilterResult& WithVocabularyFilterName(Aws::String&& value) { SetVocabularyFilterName(std::move(value)); return *this;}

    /**
     * <p>The name of the vocabulary filter.</p>
     */
    inline GetVocabularyFilterResult& WithVocabularyFilterName(const char* value) { SetVocabularyFilterName(value); return *this;}


    /**
     * <p>The language code of the words in the vocabulary filter.</p>
     */
    inline const LanguageCode& GetLanguageCode() const{ return m_languageCode; }

    /**
     * <p>The language code of the words in the vocabulary filter.</p>
     */
    inline void SetLanguageCode(const LanguageCode& value) { m_languageCode = value; }

    /**
     * <p>The language code of the words in the vocabulary filter.</p>
     */
    inline void SetLanguageCode(LanguageCode&& value) { m_languageCode = std::move(value); }

    /**
     * <p>The language code of the words in the vocabulary filter.</p>
     */
    inline GetVocabularyFilterResult& WithLanguageCode(const LanguageCode& value) { SetLanguageCode(value); return *this;}

    /**
     * <p>The language code of the words in the vocabulary filter.</p>
     */
    inline GetVocabularyFilterResult& WithLanguageCode(LanguageCode&& value) { SetLanguageCode(std::move(value)); return *this;}


    /**
     * <p>The date and time that the contents of the vocabulary filter were
     * updated.</p>
     */
    inline const Aws::Utils::DateTime& GetLastModifiedTime() const{ return m_lastModifiedTime; }

    /**
     * <p>The date and time that the contents of the vocabulary filter were
     * updated.</p>
     */
    inline void SetLastModifiedTime(const Aws::Utils::DateTime& value) { m_lastModifiedTime = value; }

    /**
     * <p>The date and time that the contents of the vocabulary filter were
     * updated.</p>
     */
    inline void SetLastModifiedTime(Aws::Utils::DateTime&& value) { m_lastModifiedTime = std::move(value); }

    /**
     * <p>The date and time that the contents of the vocabulary filter were
     * updated.</p>
     */
    inline GetVocabularyFilterResult& WithLastModifiedTime(const Aws::Utils::DateTime& value) { SetLastModifiedTime(value); return *this;}

    /**
     * <p>The date and time that the contents of the vocabulary filter were
     * updated.</p>
     */
    inline GetVocabularyFilterResult& WithLastModifiedTime(Aws::Utils::DateTime&& value) { SetLastModifiedTime(std::move(value)); return *this;}


    /**
     * <p>The URI of the list of words in the vocabulary filter. You can use this URI
     * to get the list of words.</p>
     */
    inline const Aws::String& GetDownloadUri() const{ return m_downloadUri; }

    /**
     * <p>The URI of the list of words in the vocabulary filter. You can use this URI
     * to get the list of words.</p>
     */
    inline void SetDownloadUri(const Aws::String& value) { m_downloadUri = value; }

    /**
     * <p>The URI of the list of words in the vocabulary filter. You can use this URI
     * to get the list of words.</p>
     */
    inline void SetDownloadUri(Aws::String&& value) { m_downloadUri = std::move(value); }

    /**
     * <p>The URI of the list of words in the vocabulary filter. You can use this URI
     * to get the list of words.</p>
     */
    inline void SetDownloadUri(const char* value) { m_downloadUri.assign(value); }

    /**
     * <p>The URI of the list of words in the vocabulary filter. You can use this URI
     * to get the list of words.</p>
     */
    inline GetVocabularyFilterResult& WithDownloadUri(const Aws::String& value) { SetDownloadUri(value); return *this;}

    /**
     * <p>The URI of the list of words in the vocabulary filter. You can use this URI
     * to get the list of words.</p>
     */
    inline GetVocabularyFilterResult& WithDownloadUri(Aws::String&& value) { SetDownloadUri(std::move(value)); return *this;}

    /**
     * <p>The URI of the list of words in the vocabulary filter. You can use this URI
     * to get the list of words.</p>
     */
    inline GetVocabularyFilterResult& WithDownloadUri(const char* value) { SetDownloadUri(value); return *this;}

  private:

    Aws::String m_vocabularyFilterName;

    LanguageCode m_languageCode;

    Aws::Utils::DateTime m_lastModifiedTime;

    Aws::String m_downloadUri;
  };

} // namespace Model
} // namespace TranscribeService
} // namespace Aws
