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
  class AWS_COMPREHEND_API DetectKeyPhrasesResult
  {
  public:
    DetectKeyPhrasesResult();
    DetectKeyPhrasesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    DetectKeyPhrasesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


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
