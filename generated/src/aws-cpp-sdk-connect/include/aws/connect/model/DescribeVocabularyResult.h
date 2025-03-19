/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/connect/model/Vocabulary.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace Connect
{
namespace Model
{
  class DescribeVocabularyResult
  {
  public:
    AWS_CONNECT_API DescribeVocabularyResult() = default;
    AWS_CONNECT_API DescribeVocabularyResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CONNECT_API DescribeVocabularyResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A list of specific words that you want Contact Lens for Amazon Connect to
     * recognize in your audio input. They are generally domain-specific words and
     * phrases, words that Contact Lens is not recognizing, or proper nouns.</p>
     */
    inline const Vocabulary& GetVocabulary() const { return m_vocabulary; }
    template<typename VocabularyT = Vocabulary>
    void SetVocabulary(VocabularyT&& value) { m_vocabularyHasBeenSet = true; m_vocabulary = std::forward<VocabularyT>(value); }
    template<typename VocabularyT = Vocabulary>
    DescribeVocabularyResult& WithVocabulary(VocabularyT&& value) { SetVocabulary(std::forward<VocabularyT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    DescribeVocabularyResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Vocabulary m_vocabulary;
    bool m_vocabularyHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Connect
} // namespace Aws
