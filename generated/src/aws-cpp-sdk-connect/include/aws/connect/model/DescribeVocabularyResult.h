﻿/**
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
    AWS_CONNECT_API DescribeVocabularyResult();
    AWS_CONNECT_API DescribeVocabularyResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CONNECT_API DescribeVocabularyResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>A list of specific words that you want Contact Lens for Amazon Connect to
     * recognize in your audio input. They are generally domain-specific words and
     * phrases, words that Contact Lens is not recognizing, or proper nouns.</p>
     */
    inline const Vocabulary& GetVocabulary() const{ return m_vocabulary; }

    /**
     * <p>A list of specific words that you want Contact Lens for Amazon Connect to
     * recognize in your audio input. They are generally domain-specific words and
     * phrases, words that Contact Lens is not recognizing, or proper nouns.</p>
     */
    inline void SetVocabulary(const Vocabulary& value) { m_vocabulary = value; }

    /**
     * <p>A list of specific words that you want Contact Lens for Amazon Connect to
     * recognize in your audio input. They are generally domain-specific words and
     * phrases, words that Contact Lens is not recognizing, or proper nouns.</p>
     */
    inline void SetVocabulary(Vocabulary&& value) { m_vocabulary = std::move(value); }

    /**
     * <p>A list of specific words that you want Contact Lens for Amazon Connect to
     * recognize in your audio input. They are generally domain-specific words and
     * phrases, words that Contact Lens is not recognizing, or proper nouns.</p>
     */
    inline DescribeVocabularyResult& WithVocabulary(const Vocabulary& value) { SetVocabulary(value); return *this;}

    /**
     * <p>A list of specific words that you want Contact Lens for Amazon Connect to
     * recognize in your audio input. They are generally domain-specific words and
     * phrases, words that Contact Lens is not recognizing, or proper nouns.</p>
     */
    inline DescribeVocabularyResult& WithVocabulary(Vocabulary&& value) { SetVocabulary(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline DescribeVocabularyResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline DescribeVocabularyResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline DescribeVocabularyResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Vocabulary m_vocabulary;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Connect
} // namespace Aws
