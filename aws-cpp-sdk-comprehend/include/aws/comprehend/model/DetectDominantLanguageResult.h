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
#include <aws/comprehend/Comprehend_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
  class AWS_COMPREHEND_API DetectDominantLanguageResult
  {
  public:
    DetectDominantLanguageResult();
    DetectDominantLanguageResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    DetectDominantLanguageResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The languages that Amazon Comprehend detected in the input text. For each
     * language, the response returns the RFC 5646 language code and the level of
     * confidence that Amazon Comprehend has in the accuracy of its inference. For more
     * information about RFC 5646, see <a
     * href="https://tools.ietf.org/html/rfc5646">Tags for Identifying Languages</a> on
     * the <i>IETF Tools</i> web site.</p>
     */
    inline const Aws::Vector<DominantLanguage>& GetLanguages() const{ return m_languages; }

    /**
     * <p>The languages that Amazon Comprehend detected in the input text. For each
     * language, the response returns the RFC 5646 language code and the level of
     * confidence that Amazon Comprehend has in the accuracy of its inference. For more
     * information about RFC 5646, see <a
     * href="https://tools.ietf.org/html/rfc5646">Tags for Identifying Languages</a> on
     * the <i>IETF Tools</i> web site.</p>
     */
    inline void SetLanguages(const Aws::Vector<DominantLanguage>& value) { m_languages = value; }

    /**
     * <p>The languages that Amazon Comprehend detected in the input text. For each
     * language, the response returns the RFC 5646 language code and the level of
     * confidence that Amazon Comprehend has in the accuracy of its inference. For more
     * information about RFC 5646, see <a
     * href="https://tools.ietf.org/html/rfc5646">Tags for Identifying Languages</a> on
     * the <i>IETF Tools</i> web site.</p>
     */
    inline void SetLanguages(Aws::Vector<DominantLanguage>&& value) { m_languages = std::move(value); }

    /**
     * <p>The languages that Amazon Comprehend detected in the input text. For each
     * language, the response returns the RFC 5646 language code and the level of
     * confidence that Amazon Comprehend has in the accuracy of its inference. For more
     * information about RFC 5646, see <a
     * href="https://tools.ietf.org/html/rfc5646">Tags for Identifying Languages</a> on
     * the <i>IETF Tools</i> web site.</p>
     */
    inline DetectDominantLanguageResult& WithLanguages(const Aws::Vector<DominantLanguage>& value) { SetLanguages(value); return *this;}

    /**
     * <p>The languages that Amazon Comprehend detected in the input text. For each
     * language, the response returns the RFC 5646 language code and the level of
     * confidence that Amazon Comprehend has in the accuracy of its inference. For more
     * information about RFC 5646, see <a
     * href="https://tools.ietf.org/html/rfc5646">Tags for Identifying Languages</a> on
     * the <i>IETF Tools</i> web site.</p>
     */
    inline DetectDominantLanguageResult& WithLanguages(Aws::Vector<DominantLanguage>&& value) { SetLanguages(std::move(value)); return *this;}

    /**
     * <p>The languages that Amazon Comprehend detected in the input text. For each
     * language, the response returns the RFC 5646 language code and the level of
     * confidence that Amazon Comprehend has in the accuracy of its inference. For more
     * information about RFC 5646, see <a
     * href="https://tools.ietf.org/html/rfc5646">Tags for Identifying Languages</a> on
     * the <i>IETF Tools</i> web site.</p>
     */
    inline DetectDominantLanguageResult& AddLanguages(const DominantLanguage& value) { m_languages.push_back(value); return *this; }

    /**
     * <p>The languages that Amazon Comprehend detected in the input text. For each
     * language, the response returns the RFC 5646 language code and the level of
     * confidence that Amazon Comprehend has in the accuracy of its inference. For more
     * information about RFC 5646, see <a
     * href="https://tools.ietf.org/html/rfc5646">Tags for Identifying Languages</a> on
     * the <i>IETF Tools</i> web site.</p>
     */
    inline DetectDominantLanguageResult& AddLanguages(DominantLanguage&& value) { m_languages.push_back(std::move(value)); return *this; }

  private:

    Aws::Vector<DominantLanguage> m_languages;
  };

} // namespace Model
} // namespace Comprehend
} // namespace Aws
