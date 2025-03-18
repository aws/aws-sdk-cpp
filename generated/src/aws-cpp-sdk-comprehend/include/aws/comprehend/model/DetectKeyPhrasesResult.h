/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/comprehend/Comprehend_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/comprehend/model/KeyPhrase.h>
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
  class DetectKeyPhrasesResult
  {
  public:
    AWS_COMPREHEND_API DetectKeyPhrasesResult() = default;
    AWS_COMPREHEND_API DetectKeyPhrasesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_COMPREHEND_API DetectKeyPhrasesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A collection of key phrases that Amazon Comprehend identified in the input
     * text. For each key phrase, the response provides the text of the key phrase,
     * where the key phrase begins and ends, and the level of confidence that Amazon
     * Comprehend has in the accuracy of the detection. </p>
     */
    inline const Aws::Vector<KeyPhrase>& GetKeyPhrases() const { return m_keyPhrases; }
    template<typename KeyPhrasesT = Aws::Vector<KeyPhrase>>
    void SetKeyPhrases(KeyPhrasesT&& value) { m_keyPhrasesHasBeenSet = true; m_keyPhrases = std::forward<KeyPhrasesT>(value); }
    template<typename KeyPhrasesT = Aws::Vector<KeyPhrase>>
    DetectKeyPhrasesResult& WithKeyPhrases(KeyPhrasesT&& value) { SetKeyPhrases(std::forward<KeyPhrasesT>(value)); return *this;}
    template<typename KeyPhrasesT = KeyPhrase>
    DetectKeyPhrasesResult& AddKeyPhrases(KeyPhrasesT&& value) { m_keyPhrasesHasBeenSet = true; m_keyPhrases.emplace_back(std::forward<KeyPhrasesT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    DetectKeyPhrasesResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<KeyPhrase> m_keyPhrases;
    bool m_keyPhrasesHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Comprehend
} // namespace Aws
