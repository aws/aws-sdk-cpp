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
   * href="http://docs.aws.amazon.com/goto/WebAPI/comprehend-2017-11-27/BatchDetectDominantLanguageItemResult">AWS
   * API Reference</a></p>
   */
  class AWS_COMPREHEND_API BatchDetectDominantLanguageItemResult
  {
  public:
    BatchDetectDominantLanguageItemResult();
    BatchDetectDominantLanguageItemResult(Aws::Utils::Json::JsonView jsonValue);
    BatchDetectDominantLanguageItemResult& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The zero-based index of the document in the input list.</p>
     */
    inline int GetIndex() const{ return m_index; }

    /**
     * <p>The zero-based index of the document in the input list.</p>
     */
    inline bool IndexHasBeenSet() const { return m_indexHasBeenSet; }

    /**
     * <p>The zero-based index of the document in the input list.</p>
     */
    inline void SetIndex(int value) { m_indexHasBeenSet = true; m_index = value; }

    /**
     * <p>The zero-based index of the document in the input list.</p>
     */
    inline BatchDetectDominantLanguageItemResult& WithIndex(int value) { SetIndex(value); return *this;}


    /**
     * <p>One or more <a>DominantLanguage</a> objects describing the dominant languages
     * in the document.</p>
     */
    inline const Aws::Vector<DominantLanguage>& GetLanguages() const{ return m_languages; }

    /**
     * <p>One or more <a>DominantLanguage</a> objects describing the dominant languages
     * in the document.</p>
     */
    inline bool LanguagesHasBeenSet() const { return m_languagesHasBeenSet; }

    /**
     * <p>One or more <a>DominantLanguage</a> objects describing the dominant languages
     * in the document.</p>
     */
    inline void SetLanguages(const Aws::Vector<DominantLanguage>& value) { m_languagesHasBeenSet = true; m_languages = value; }

    /**
     * <p>One or more <a>DominantLanguage</a> objects describing the dominant languages
     * in the document.</p>
     */
    inline void SetLanguages(Aws::Vector<DominantLanguage>&& value) { m_languagesHasBeenSet = true; m_languages = std::move(value); }

    /**
     * <p>One or more <a>DominantLanguage</a> objects describing the dominant languages
     * in the document.</p>
     */
    inline BatchDetectDominantLanguageItemResult& WithLanguages(const Aws::Vector<DominantLanguage>& value) { SetLanguages(value); return *this;}

    /**
     * <p>One or more <a>DominantLanguage</a> objects describing the dominant languages
     * in the document.</p>
     */
    inline BatchDetectDominantLanguageItemResult& WithLanguages(Aws::Vector<DominantLanguage>&& value) { SetLanguages(std::move(value)); return *this;}

    /**
     * <p>One or more <a>DominantLanguage</a> objects describing the dominant languages
     * in the document.</p>
     */
    inline BatchDetectDominantLanguageItemResult& AddLanguages(const DominantLanguage& value) { m_languagesHasBeenSet = true; m_languages.push_back(value); return *this; }

    /**
     * <p>One or more <a>DominantLanguage</a> objects describing the dominant languages
     * in the document.</p>
     */
    inline BatchDetectDominantLanguageItemResult& AddLanguages(DominantLanguage&& value) { m_languagesHasBeenSet = true; m_languages.push_back(std::move(value)); return *this; }

  private:

    int m_index;
    bool m_indexHasBeenSet;

    Aws::Vector<DominantLanguage> m_languages;
    bool m_languagesHasBeenSet;
  };

} // namespace Model
} // namespace Comprehend
} // namespace Aws
