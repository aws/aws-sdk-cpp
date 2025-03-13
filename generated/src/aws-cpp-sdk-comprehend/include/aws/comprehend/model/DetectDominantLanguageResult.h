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
    AWS_COMPREHEND_API DetectDominantLanguageResult() = default;
    AWS_COMPREHEND_API DetectDominantLanguageResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_COMPREHEND_API DetectDominantLanguageResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Array of languages that Amazon Comprehend detected in the input text. The
     * array is sorted in descending order of the score (the dominant language is
     * always the first element in the array).</p> <p>For each language, the response
     * returns the RFC 5646 language code and the level of confidence that Amazon
     * Comprehend has in the accuracy of its inference. For more information about RFC
     * 5646, see <a href="https://tools.ietf.org/html/rfc5646">Tags for Identifying
     * Languages</a> on the <i>IETF Tools</i> web site.</p>
     */
    inline const Aws::Vector<DominantLanguage>& GetLanguages() const { return m_languages; }
    template<typename LanguagesT = Aws::Vector<DominantLanguage>>
    void SetLanguages(LanguagesT&& value) { m_languagesHasBeenSet = true; m_languages = std::forward<LanguagesT>(value); }
    template<typename LanguagesT = Aws::Vector<DominantLanguage>>
    DetectDominantLanguageResult& WithLanguages(LanguagesT&& value) { SetLanguages(std::forward<LanguagesT>(value)); return *this;}
    template<typename LanguagesT = DominantLanguage>
    DetectDominantLanguageResult& AddLanguages(LanguagesT&& value) { m_languagesHasBeenSet = true; m_languages.emplace_back(std::forward<LanguagesT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    DetectDominantLanguageResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<DominantLanguage> m_languages;
    bool m_languagesHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Comprehend
} // namespace Aws
