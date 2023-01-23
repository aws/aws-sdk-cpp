/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/comprehend/Comprehend_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
    AWS_COMPREHEND_API DetectKeyPhrasesResult();
    AWS_COMPREHEND_API DetectKeyPhrasesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_COMPREHEND_API DetectKeyPhrasesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>A collection of key phrases that Amazon Comprehend identified in the input
     * text. For each key phrase, the response provides the text of the key phrase,
     * where the key phrase begins and ends, and the level of confidence that Amazon
     * Comprehend has in the accuracy of the detection. </p>
     */
    inline const Aws::Vector<KeyPhrase>& GetKeyPhrases() const{ return m_keyPhrases; }

    /**
     * <p>A collection of key phrases that Amazon Comprehend identified in the input
     * text. For each key phrase, the response provides the text of the key phrase,
     * where the key phrase begins and ends, and the level of confidence that Amazon
     * Comprehend has in the accuracy of the detection. </p>
     */
    inline void SetKeyPhrases(const Aws::Vector<KeyPhrase>& value) { m_keyPhrases = value; }

    /**
     * <p>A collection of key phrases that Amazon Comprehend identified in the input
     * text. For each key phrase, the response provides the text of the key phrase,
     * where the key phrase begins and ends, and the level of confidence that Amazon
     * Comprehend has in the accuracy of the detection. </p>
     */
    inline void SetKeyPhrases(Aws::Vector<KeyPhrase>&& value) { m_keyPhrases = std::move(value); }

    /**
     * <p>A collection of key phrases that Amazon Comprehend identified in the input
     * text. For each key phrase, the response provides the text of the key phrase,
     * where the key phrase begins and ends, and the level of confidence that Amazon
     * Comprehend has in the accuracy of the detection. </p>
     */
    inline DetectKeyPhrasesResult& WithKeyPhrases(const Aws::Vector<KeyPhrase>& value) { SetKeyPhrases(value); return *this;}

    /**
     * <p>A collection of key phrases that Amazon Comprehend identified in the input
     * text. For each key phrase, the response provides the text of the key phrase,
     * where the key phrase begins and ends, and the level of confidence that Amazon
     * Comprehend has in the accuracy of the detection. </p>
     */
    inline DetectKeyPhrasesResult& WithKeyPhrases(Aws::Vector<KeyPhrase>&& value) { SetKeyPhrases(std::move(value)); return *this;}

    /**
     * <p>A collection of key phrases that Amazon Comprehend identified in the input
     * text. For each key phrase, the response provides the text of the key phrase,
     * where the key phrase begins and ends, and the level of confidence that Amazon
     * Comprehend has in the accuracy of the detection. </p>
     */
    inline DetectKeyPhrasesResult& AddKeyPhrases(const KeyPhrase& value) { m_keyPhrases.push_back(value); return *this; }

    /**
     * <p>A collection of key phrases that Amazon Comprehend identified in the input
     * text. For each key phrase, the response provides the text of the key phrase,
     * where the key phrase begins and ends, and the level of confidence that Amazon
     * Comprehend has in the accuracy of the detection. </p>
     */
    inline DetectKeyPhrasesResult& AddKeyPhrases(KeyPhrase&& value) { m_keyPhrases.push_back(std::move(value)); return *this; }

  private:

    Aws::Vector<KeyPhrase> m_keyPhrases;
  };

} // namespace Model
} // namespace Comprehend
} // namespace Aws
