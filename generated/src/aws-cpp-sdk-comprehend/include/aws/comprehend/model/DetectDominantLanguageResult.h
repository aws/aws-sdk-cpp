/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/comprehend/Comprehend_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/comprehend/model/DominantLanguage.h>
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
namespace Comprehend
{
namespace Model
{
  class DetectDominantLanguageResult
  {
  public:
    AWS_COMPREHEND_API DetectDominantLanguageResult();
    AWS_COMPREHEND_API DetectDominantLanguageResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_COMPREHEND_API DetectDominantLanguageResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Array of languages that Amazon Comprehend detected in the input text. The
     * array is sorted in descending order of the score (the dominant language is
     * always the first element in the array).</p> <p>For each language, the response
     * returns the RFC 5646 language code and the level of confidence that Amazon
     * Comprehend has in the accuracy of its inference. For more information about RFC
     * 5646, see <a href="https://tools.ietf.org/html/rfc5646">Tags for Identifying
     * Languages</a> on the <i>IETF Tools</i> web site.</p>
     */
    inline const Aws::Vector<DominantLanguage>& GetLanguages() const{ return m_languages; }

    /**
     * <p>Array of languages that Amazon Comprehend detected in the input text. The
     * array is sorted in descending order of the score (the dominant language is
     * always the first element in the array).</p> <p>For each language, the response
     * returns the RFC 5646 language code and the level of confidence that Amazon
     * Comprehend has in the accuracy of its inference. For more information about RFC
     * 5646, see <a href="https://tools.ietf.org/html/rfc5646">Tags for Identifying
     * Languages</a> on the <i>IETF Tools</i> web site.</p>
     */
    inline void SetLanguages(const Aws::Vector<DominantLanguage>& value) { m_languages = value; }

    /**
     * <p>Array of languages that Amazon Comprehend detected in the input text. The
     * array is sorted in descending order of the score (the dominant language is
     * always the first element in the array).</p> <p>For each language, the response
     * returns the RFC 5646 language code and the level of confidence that Amazon
     * Comprehend has in the accuracy of its inference. For more information about RFC
     * 5646, see <a href="https://tools.ietf.org/html/rfc5646">Tags for Identifying
     * Languages</a> on the <i>IETF Tools</i> web site.</p>
     */
    inline void SetLanguages(Aws::Vector<DominantLanguage>&& value) { m_languages = std::move(value); }

    /**
     * <p>Array of languages that Amazon Comprehend detected in the input text. The
     * array is sorted in descending order of the score (the dominant language is
     * always the first element in the array).</p> <p>For each language, the response
     * returns the RFC 5646 language code and the level of confidence that Amazon
     * Comprehend has in the accuracy of its inference. For more information about RFC
     * 5646, see <a href="https://tools.ietf.org/html/rfc5646">Tags for Identifying
     * Languages</a> on the <i>IETF Tools</i> web site.</p>
     */
    inline DetectDominantLanguageResult& WithLanguages(const Aws::Vector<DominantLanguage>& value) { SetLanguages(value); return *this;}

    /**
     * <p>Array of languages that Amazon Comprehend detected in the input text. The
     * array is sorted in descending order of the score (the dominant language is
     * always the first element in the array).</p> <p>For each language, the response
     * returns the RFC 5646 language code and the level of confidence that Amazon
     * Comprehend has in the accuracy of its inference. For more information about RFC
     * 5646, see <a href="https://tools.ietf.org/html/rfc5646">Tags for Identifying
     * Languages</a> on the <i>IETF Tools</i> web site.</p>
     */
    inline DetectDominantLanguageResult& WithLanguages(Aws::Vector<DominantLanguage>&& value) { SetLanguages(std::move(value)); return *this;}

    /**
     * <p>Array of languages that Amazon Comprehend detected in the input text. The
     * array is sorted in descending order of the score (the dominant language is
     * always the first element in the array).</p> <p>For each language, the response
     * returns the RFC 5646 language code and the level of confidence that Amazon
     * Comprehend has in the accuracy of its inference. For more information about RFC
     * 5646, see <a href="https://tools.ietf.org/html/rfc5646">Tags for Identifying
     * Languages</a> on the <i>IETF Tools</i> web site.</p>
     */
    inline DetectDominantLanguageResult& AddLanguages(const DominantLanguage& value) { m_languages.push_back(value); return *this; }

    /**
     * <p>Array of languages that Amazon Comprehend detected in the input text. The
     * array is sorted in descending order of the score (the dominant language is
     * always the first element in the array).</p> <p>For each language, the response
     * returns the RFC 5646 language code and the level of confidence that Amazon
     * Comprehend has in the accuracy of its inference. For more information about RFC
     * 5646, see <a href="https://tools.ietf.org/html/rfc5646">Tags for Identifying
     * Languages</a> on the <i>IETF Tools</i> web site.</p>
     */
    inline DetectDominantLanguageResult& AddLanguages(DominantLanguage&& value) { m_languages.push_back(std::move(value)); return *this; }


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline DetectDominantLanguageResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline DetectDominantLanguageResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline DetectDominantLanguageResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::Vector<DominantLanguage> m_languages;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Comprehend
} // namespace Aws
