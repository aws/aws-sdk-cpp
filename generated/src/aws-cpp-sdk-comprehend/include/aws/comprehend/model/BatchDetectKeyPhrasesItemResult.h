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
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace Comprehend
{
namespace Model
{

  /**
   * <p>The result of calling the operation. The operation returns one object for
   * each document that is successfully processed by the operation.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/comprehend-2017-11-27/BatchDetectKeyPhrasesItemResult">AWS
   * API Reference</a></p>
   */
  class BatchDetectKeyPhrasesItemResult
  {
  public:
    AWS_COMPREHEND_API BatchDetectKeyPhrasesItemResult();
    AWS_COMPREHEND_API BatchDetectKeyPhrasesItemResult(Aws::Utils::Json::JsonView jsonValue);
    AWS_COMPREHEND_API BatchDetectKeyPhrasesItemResult& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_COMPREHEND_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The zero-based index of the document in the input list.</p>
     */
    inline int GetIndex() const{ return m_index; }
    inline bool IndexHasBeenSet() const { return m_indexHasBeenSet; }
    inline void SetIndex(int value) { m_indexHasBeenSet = true; m_index = value; }
    inline BatchDetectKeyPhrasesItemResult& WithIndex(int value) { SetIndex(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>One or more <a>KeyPhrase</a> objects, one for each key phrase detected in the
     * document.</p>
     */
    inline const Aws::Vector<KeyPhrase>& GetKeyPhrases() const{ return m_keyPhrases; }
    inline bool KeyPhrasesHasBeenSet() const { return m_keyPhrasesHasBeenSet; }
    inline void SetKeyPhrases(const Aws::Vector<KeyPhrase>& value) { m_keyPhrasesHasBeenSet = true; m_keyPhrases = value; }
    inline void SetKeyPhrases(Aws::Vector<KeyPhrase>&& value) { m_keyPhrasesHasBeenSet = true; m_keyPhrases = std::move(value); }
    inline BatchDetectKeyPhrasesItemResult& WithKeyPhrases(const Aws::Vector<KeyPhrase>& value) { SetKeyPhrases(value); return *this;}
    inline BatchDetectKeyPhrasesItemResult& WithKeyPhrases(Aws::Vector<KeyPhrase>&& value) { SetKeyPhrases(std::move(value)); return *this;}
    inline BatchDetectKeyPhrasesItemResult& AddKeyPhrases(const KeyPhrase& value) { m_keyPhrasesHasBeenSet = true; m_keyPhrases.push_back(value); return *this; }
    inline BatchDetectKeyPhrasesItemResult& AddKeyPhrases(KeyPhrase&& value) { m_keyPhrasesHasBeenSet = true; m_keyPhrases.push_back(std::move(value)); return *this; }
    ///@}
  private:

    int m_index;
    bool m_indexHasBeenSet = false;

    Aws::Vector<KeyPhrase> m_keyPhrases;
    bool m_keyPhrasesHasBeenSet = false;
  };

} // namespace Model
} // namespace Comprehend
} // namespace Aws
