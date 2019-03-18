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
#include <aws/cloudsearch/CloudSearch_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/cloudsearch/model/AlgorithmicStemming.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Xml
{
  class XmlNode;
} // namespace Xml
} // namespace Utils
namespace CloudSearch
{
namespace Model
{

  /**
   * <p>Synonyms, stopwords, and stemming options for an analysis scheme. Includes
   * tokenization dictionary for Japanese.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cloudsearch-2013-01-01/AnalysisOptions">AWS
   * API Reference</a></p>
   */
  class AWS_CLOUDSEARCH_API AnalysisOptions
  {
  public:
    AnalysisOptions();
    AnalysisOptions(const Aws::Utils::Xml::XmlNode& xmlNode);
    AnalysisOptions& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p>A JSON object that defines synonym groups and aliases. A synonym group is an
     * array of arrays, where each sub-array is a group of terms where each term in the
     * group is considered a synonym of every other term in the group. The aliases
     * value is an object that contains a collection of string:value pairs where the
     * string specifies a term and the array of values specifies each of the aliases
     * for that term. An alias is considered a synonym of the specified term, but the
     * term is not considered a synonym of the alias. For more information about
     * specifying synonyms, see <a
     * href="http://docs.aws.amazon.com/cloudsearch/latest/developerguide/configuring-analysis-schemes.html#synonyms">Synonyms</a>
     * in the <i>Amazon CloudSearch Developer Guide</i>.</p>
     */
    inline const Aws::String& GetSynonyms() const{ return m_synonyms; }

    /**
     * <p>A JSON object that defines synonym groups and aliases. A synonym group is an
     * array of arrays, where each sub-array is a group of terms where each term in the
     * group is considered a synonym of every other term in the group. The aliases
     * value is an object that contains a collection of string:value pairs where the
     * string specifies a term and the array of values specifies each of the aliases
     * for that term. An alias is considered a synonym of the specified term, but the
     * term is not considered a synonym of the alias. For more information about
     * specifying synonyms, see <a
     * href="http://docs.aws.amazon.com/cloudsearch/latest/developerguide/configuring-analysis-schemes.html#synonyms">Synonyms</a>
     * in the <i>Amazon CloudSearch Developer Guide</i>.</p>
     */
    inline bool SynonymsHasBeenSet() const { return m_synonymsHasBeenSet; }

    /**
     * <p>A JSON object that defines synonym groups and aliases. A synonym group is an
     * array of arrays, where each sub-array is a group of terms where each term in the
     * group is considered a synonym of every other term in the group. The aliases
     * value is an object that contains a collection of string:value pairs where the
     * string specifies a term and the array of values specifies each of the aliases
     * for that term. An alias is considered a synonym of the specified term, but the
     * term is not considered a synonym of the alias. For more information about
     * specifying synonyms, see <a
     * href="http://docs.aws.amazon.com/cloudsearch/latest/developerguide/configuring-analysis-schemes.html#synonyms">Synonyms</a>
     * in the <i>Amazon CloudSearch Developer Guide</i>.</p>
     */
    inline void SetSynonyms(const Aws::String& value) { m_synonymsHasBeenSet = true; m_synonyms = value; }

    /**
     * <p>A JSON object that defines synonym groups and aliases. A synonym group is an
     * array of arrays, where each sub-array is a group of terms where each term in the
     * group is considered a synonym of every other term in the group. The aliases
     * value is an object that contains a collection of string:value pairs where the
     * string specifies a term and the array of values specifies each of the aliases
     * for that term. An alias is considered a synonym of the specified term, but the
     * term is not considered a synonym of the alias. For more information about
     * specifying synonyms, see <a
     * href="http://docs.aws.amazon.com/cloudsearch/latest/developerguide/configuring-analysis-schemes.html#synonyms">Synonyms</a>
     * in the <i>Amazon CloudSearch Developer Guide</i>.</p>
     */
    inline void SetSynonyms(Aws::String&& value) { m_synonymsHasBeenSet = true; m_synonyms = std::move(value); }

    /**
     * <p>A JSON object that defines synonym groups and aliases. A synonym group is an
     * array of arrays, where each sub-array is a group of terms where each term in the
     * group is considered a synonym of every other term in the group. The aliases
     * value is an object that contains a collection of string:value pairs where the
     * string specifies a term and the array of values specifies each of the aliases
     * for that term. An alias is considered a synonym of the specified term, but the
     * term is not considered a synonym of the alias. For more information about
     * specifying synonyms, see <a
     * href="http://docs.aws.amazon.com/cloudsearch/latest/developerguide/configuring-analysis-schemes.html#synonyms">Synonyms</a>
     * in the <i>Amazon CloudSearch Developer Guide</i>.</p>
     */
    inline void SetSynonyms(const char* value) { m_synonymsHasBeenSet = true; m_synonyms.assign(value); }

    /**
     * <p>A JSON object that defines synonym groups and aliases. A synonym group is an
     * array of arrays, where each sub-array is a group of terms where each term in the
     * group is considered a synonym of every other term in the group. The aliases
     * value is an object that contains a collection of string:value pairs where the
     * string specifies a term and the array of values specifies each of the aliases
     * for that term. An alias is considered a synonym of the specified term, but the
     * term is not considered a synonym of the alias. For more information about
     * specifying synonyms, see <a
     * href="http://docs.aws.amazon.com/cloudsearch/latest/developerguide/configuring-analysis-schemes.html#synonyms">Synonyms</a>
     * in the <i>Amazon CloudSearch Developer Guide</i>.</p>
     */
    inline AnalysisOptions& WithSynonyms(const Aws::String& value) { SetSynonyms(value); return *this;}

    /**
     * <p>A JSON object that defines synonym groups and aliases. A synonym group is an
     * array of arrays, where each sub-array is a group of terms where each term in the
     * group is considered a synonym of every other term in the group. The aliases
     * value is an object that contains a collection of string:value pairs where the
     * string specifies a term and the array of values specifies each of the aliases
     * for that term. An alias is considered a synonym of the specified term, but the
     * term is not considered a synonym of the alias. For more information about
     * specifying synonyms, see <a
     * href="http://docs.aws.amazon.com/cloudsearch/latest/developerguide/configuring-analysis-schemes.html#synonyms">Synonyms</a>
     * in the <i>Amazon CloudSearch Developer Guide</i>.</p>
     */
    inline AnalysisOptions& WithSynonyms(Aws::String&& value) { SetSynonyms(std::move(value)); return *this;}

    /**
     * <p>A JSON object that defines synonym groups and aliases. A synonym group is an
     * array of arrays, where each sub-array is a group of terms where each term in the
     * group is considered a synonym of every other term in the group. The aliases
     * value is an object that contains a collection of string:value pairs where the
     * string specifies a term and the array of values specifies each of the aliases
     * for that term. An alias is considered a synonym of the specified term, but the
     * term is not considered a synonym of the alias. For more information about
     * specifying synonyms, see <a
     * href="http://docs.aws.amazon.com/cloudsearch/latest/developerguide/configuring-analysis-schemes.html#synonyms">Synonyms</a>
     * in the <i>Amazon CloudSearch Developer Guide</i>.</p>
     */
    inline AnalysisOptions& WithSynonyms(const char* value) { SetSynonyms(value); return *this;}


    /**
     * <p>A JSON array of terms to ignore during indexing and searching. For example,
     * <code>["a", "an", "the", "of"]</code>. The stopwords dictionary must explicitly
     * list each word you want to ignore. Wildcards and regular expressions are not
     * supported. </p>
     */
    inline const Aws::String& GetStopwords() const{ return m_stopwords; }

    /**
     * <p>A JSON array of terms to ignore during indexing and searching. For example,
     * <code>["a", "an", "the", "of"]</code>. The stopwords dictionary must explicitly
     * list each word you want to ignore. Wildcards and regular expressions are not
     * supported. </p>
     */
    inline bool StopwordsHasBeenSet() const { return m_stopwordsHasBeenSet; }

    /**
     * <p>A JSON array of terms to ignore during indexing and searching. For example,
     * <code>["a", "an", "the", "of"]</code>. The stopwords dictionary must explicitly
     * list each word you want to ignore. Wildcards and regular expressions are not
     * supported. </p>
     */
    inline void SetStopwords(const Aws::String& value) { m_stopwordsHasBeenSet = true; m_stopwords = value; }

    /**
     * <p>A JSON array of terms to ignore during indexing and searching. For example,
     * <code>["a", "an", "the", "of"]</code>. The stopwords dictionary must explicitly
     * list each word you want to ignore. Wildcards and regular expressions are not
     * supported. </p>
     */
    inline void SetStopwords(Aws::String&& value) { m_stopwordsHasBeenSet = true; m_stopwords = std::move(value); }

    /**
     * <p>A JSON array of terms to ignore during indexing and searching. For example,
     * <code>["a", "an", "the", "of"]</code>. The stopwords dictionary must explicitly
     * list each word you want to ignore. Wildcards and regular expressions are not
     * supported. </p>
     */
    inline void SetStopwords(const char* value) { m_stopwordsHasBeenSet = true; m_stopwords.assign(value); }

    /**
     * <p>A JSON array of terms to ignore during indexing and searching. For example,
     * <code>["a", "an", "the", "of"]</code>. The stopwords dictionary must explicitly
     * list each word you want to ignore. Wildcards and regular expressions are not
     * supported. </p>
     */
    inline AnalysisOptions& WithStopwords(const Aws::String& value) { SetStopwords(value); return *this;}

    /**
     * <p>A JSON array of terms to ignore during indexing and searching. For example,
     * <code>["a", "an", "the", "of"]</code>. The stopwords dictionary must explicitly
     * list each word you want to ignore. Wildcards and regular expressions are not
     * supported. </p>
     */
    inline AnalysisOptions& WithStopwords(Aws::String&& value) { SetStopwords(std::move(value)); return *this;}

    /**
     * <p>A JSON array of terms to ignore during indexing and searching. For example,
     * <code>["a", "an", "the", "of"]</code>. The stopwords dictionary must explicitly
     * list each word you want to ignore. Wildcards and regular expressions are not
     * supported. </p>
     */
    inline AnalysisOptions& WithStopwords(const char* value) { SetStopwords(value); return *this;}


    /**
     * <p>A JSON object that contains a collection of string:value pairs that each map
     * a term to its stem. For example, <code>{"term1": "stem1", "term2": "stem2",
     * "term3": "stem3"}</code>. The stemming dictionary is applied in addition to any
     * algorithmic stemming. This enables you to override the results of the
     * algorithmic stemming to correct specific cases of overstemming or understemming.
     * The maximum size of a stemming dictionary is 500 KB.</p>
     */
    inline const Aws::String& GetStemmingDictionary() const{ return m_stemmingDictionary; }

    /**
     * <p>A JSON object that contains a collection of string:value pairs that each map
     * a term to its stem. For example, <code>{"term1": "stem1", "term2": "stem2",
     * "term3": "stem3"}</code>. The stemming dictionary is applied in addition to any
     * algorithmic stemming. This enables you to override the results of the
     * algorithmic stemming to correct specific cases of overstemming or understemming.
     * The maximum size of a stemming dictionary is 500 KB.</p>
     */
    inline bool StemmingDictionaryHasBeenSet() const { return m_stemmingDictionaryHasBeenSet; }

    /**
     * <p>A JSON object that contains a collection of string:value pairs that each map
     * a term to its stem. For example, <code>{"term1": "stem1", "term2": "stem2",
     * "term3": "stem3"}</code>. The stemming dictionary is applied in addition to any
     * algorithmic stemming. This enables you to override the results of the
     * algorithmic stemming to correct specific cases of overstemming or understemming.
     * The maximum size of a stemming dictionary is 500 KB.</p>
     */
    inline void SetStemmingDictionary(const Aws::String& value) { m_stemmingDictionaryHasBeenSet = true; m_stemmingDictionary = value; }

    /**
     * <p>A JSON object that contains a collection of string:value pairs that each map
     * a term to its stem. For example, <code>{"term1": "stem1", "term2": "stem2",
     * "term3": "stem3"}</code>. The stemming dictionary is applied in addition to any
     * algorithmic stemming. This enables you to override the results of the
     * algorithmic stemming to correct specific cases of overstemming or understemming.
     * The maximum size of a stemming dictionary is 500 KB.</p>
     */
    inline void SetStemmingDictionary(Aws::String&& value) { m_stemmingDictionaryHasBeenSet = true; m_stemmingDictionary = std::move(value); }

    /**
     * <p>A JSON object that contains a collection of string:value pairs that each map
     * a term to its stem. For example, <code>{"term1": "stem1", "term2": "stem2",
     * "term3": "stem3"}</code>. The stemming dictionary is applied in addition to any
     * algorithmic stemming. This enables you to override the results of the
     * algorithmic stemming to correct specific cases of overstemming or understemming.
     * The maximum size of a stemming dictionary is 500 KB.</p>
     */
    inline void SetStemmingDictionary(const char* value) { m_stemmingDictionaryHasBeenSet = true; m_stemmingDictionary.assign(value); }

    /**
     * <p>A JSON object that contains a collection of string:value pairs that each map
     * a term to its stem. For example, <code>{"term1": "stem1", "term2": "stem2",
     * "term3": "stem3"}</code>. The stemming dictionary is applied in addition to any
     * algorithmic stemming. This enables you to override the results of the
     * algorithmic stemming to correct specific cases of overstemming or understemming.
     * The maximum size of a stemming dictionary is 500 KB.</p>
     */
    inline AnalysisOptions& WithStemmingDictionary(const Aws::String& value) { SetStemmingDictionary(value); return *this;}

    /**
     * <p>A JSON object that contains a collection of string:value pairs that each map
     * a term to its stem. For example, <code>{"term1": "stem1", "term2": "stem2",
     * "term3": "stem3"}</code>. The stemming dictionary is applied in addition to any
     * algorithmic stemming. This enables you to override the results of the
     * algorithmic stemming to correct specific cases of overstemming or understemming.
     * The maximum size of a stemming dictionary is 500 KB.</p>
     */
    inline AnalysisOptions& WithStemmingDictionary(Aws::String&& value) { SetStemmingDictionary(std::move(value)); return *this;}

    /**
     * <p>A JSON object that contains a collection of string:value pairs that each map
     * a term to its stem. For example, <code>{"term1": "stem1", "term2": "stem2",
     * "term3": "stem3"}</code>. The stemming dictionary is applied in addition to any
     * algorithmic stemming. This enables you to override the results of the
     * algorithmic stemming to correct specific cases of overstemming or understemming.
     * The maximum size of a stemming dictionary is 500 KB.</p>
     */
    inline AnalysisOptions& WithStemmingDictionary(const char* value) { SetStemmingDictionary(value); return *this;}


    /**
     * <p>A JSON array that contains a collection of terms, tokens, readings and part
     * of speech for Japanese Tokenizaiton. The Japanese tokenization dictionary
     * enables you to override the default tokenization for selected terms. This is
     * only valid for Japanese language fields.</p>
     */
    inline const Aws::String& GetJapaneseTokenizationDictionary() const{ return m_japaneseTokenizationDictionary; }

    /**
     * <p>A JSON array that contains a collection of terms, tokens, readings and part
     * of speech for Japanese Tokenizaiton. The Japanese tokenization dictionary
     * enables you to override the default tokenization for selected terms. This is
     * only valid for Japanese language fields.</p>
     */
    inline bool JapaneseTokenizationDictionaryHasBeenSet() const { return m_japaneseTokenizationDictionaryHasBeenSet; }

    /**
     * <p>A JSON array that contains a collection of terms, tokens, readings and part
     * of speech for Japanese Tokenizaiton. The Japanese tokenization dictionary
     * enables you to override the default tokenization for selected terms. This is
     * only valid for Japanese language fields.</p>
     */
    inline void SetJapaneseTokenizationDictionary(const Aws::String& value) { m_japaneseTokenizationDictionaryHasBeenSet = true; m_japaneseTokenizationDictionary = value; }

    /**
     * <p>A JSON array that contains a collection of terms, tokens, readings and part
     * of speech for Japanese Tokenizaiton. The Japanese tokenization dictionary
     * enables you to override the default tokenization for selected terms. This is
     * only valid for Japanese language fields.</p>
     */
    inline void SetJapaneseTokenizationDictionary(Aws::String&& value) { m_japaneseTokenizationDictionaryHasBeenSet = true; m_japaneseTokenizationDictionary = std::move(value); }

    /**
     * <p>A JSON array that contains a collection of terms, tokens, readings and part
     * of speech for Japanese Tokenizaiton. The Japanese tokenization dictionary
     * enables you to override the default tokenization for selected terms. This is
     * only valid for Japanese language fields.</p>
     */
    inline void SetJapaneseTokenizationDictionary(const char* value) { m_japaneseTokenizationDictionaryHasBeenSet = true; m_japaneseTokenizationDictionary.assign(value); }

    /**
     * <p>A JSON array that contains a collection of terms, tokens, readings and part
     * of speech for Japanese Tokenizaiton. The Japanese tokenization dictionary
     * enables you to override the default tokenization for selected terms. This is
     * only valid for Japanese language fields.</p>
     */
    inline AnalysisOptions& WithJapaneseTokenizationDictionary(const Aws::String& value) { SetJapaneseTokenizationDictionary(value); return *this;}

    /**
     * <p>A JSON array that contains a collection of terms, tokens, readings and part
     * of speech for Japanese Tokenizaiton. The Japanese tokenization dictionary
     * enables you to override the default tokenization for selected terms. This is
     * only valid for Japanese language fields.</p>
     */
    inline AnalysisOptions& WithJapaneseTokenizationDictionary(Aws::String&& value) { SetJapaneseTokenizationDictionary(std::move(value)); return *this;}

    /**
     * <p>A JSON array that contains a collection of terms, tokens, readings and part
     * of speech for Japanese Tokenizaiton. The Japanese tokenization dictionary
     * enables you to override the default tokenization for selected terms. This is
     * only valid for Japanese language fields.</p>
     */
    inline AnalysisOptions& WithJapaneseTokenizationDictionary(const char* value) { SetJapaneseTokenizationDictionary(value); return *this;}


    /**
     * <p>The level of algorithmic stemming to perform: <code>none</code>,
     * <code>minimal</code>, <code>light</code>, or <code>full</code>. The available
     * levels vary depending on the language. For more information, see <a
     * href="http://docs.aws.amazon.com/cloudsearch/latest/developerguide/text-processing.html#text-processing-settings"
     * target="_blank">Language Specific Text Processing Settings</a> in the <i>Amazon
     * CloudSearch Developer Guide</i> </p>
     */
    inline const AlgorithmicStemming& GetAlgorithmicStemming() const{ return m_algorithmicStemming; }

    /**
     * <p>The level of algorithmic stemming to perform: <code>none</code>,
     * <code>minimal</code>, <code>light</code>, or <code>full</code>. The available
     * levels vary depending on the language. For more information, see <a
     * href="http://docs.aws.amazon.com/cloudsearch/latest/developerguide/text-processing.html#text-processing-settings"
     * target="_blank">Language Specific Text Processing Settings</a> in the <i>Amazon
     * CloudSearch Developer Guide</i> </p>
     */
    inline bool AlgorithmicStemmingHasBeenSet() const { return m_algorithmicStemmingHasBeenSet; }

    /**
     * <p>The level of algorithmic stemming to perform: <code>none</code>,
     * <code>minimal</code>, <code>light</code>, or <code>full</code>. The available
     * levels vary depending on the language. For more information, see <a
     * href="http://docs.aws.amazon.com/cloudsearch/latest/developerguide/text-processing.html#text-processing-settings"
     * target="_blank">Language Specific Text Processing Settings</a> in the <i>Amazon
     * CloudSearch Developer Guide</i> </p>
     */
    inline void SetAlgorithmicStemming(const AlgorithmicStemming& value) { m_algorithmicStemmingHasBeenSet = true; m_algorithmicStemming = value; }

    /**
     * <p>The level of algorithmic stemming to perform: <code>none</code>,
     * <code>minimal</code>, <code>light</code>, or <code>full</code>. The available
     * levels vary depending on the language. For more information, see <a
     * href="http://docs.aws.amazon.com/cloudsearch/latest/developerguide/text-processing.html#text-processing-settings"
     * target="_blank">Language Specific Text Processing Settings</a> in the <i>Amazon
     * CloudSearch Developer Guide</i> </p>
     */
    inline void SetAlgorithmicStemming(AlgorithmicStemming&& value) { m_algorithmicStemmingHasBeenSet = true; m_algorithmicStemming = std::move(value); }

    /**
     * <p>The level of algorithmic stemming to perform: <code>none</code>,
     * <code>minimal</code>, <code>light</code>, or <code>full</code>. The available
     * levels vary depending on the language. For more information, see <a
     * href="http://docs.aws.amazon.com/cloudsearch/latest/developerguide/text-processing.html#text-processing-settings"
     * target="_blank">Language Specific Text Processing Settings</a> in the <i>Amazon
     * CloudSearch Developer Guide</i> </p>
     */
    inline AnalysisOptions& WithAlgorithmicStemming(const AlgorithmicStemming& value) { SetAlgorithmicStemming(value); return *this;}

    /**
     * <p>The level of algorithmic stemming to perform: <code>none</code>,
     * <code>minimal</code>, <code>light</code>, or <code>full</code>. The available
     * levels vary depending on the language. For more information, see <a
     * href="http://docs.aws.amazon.com/cloudsearch/latest/developerguide/text-processing.html#text-processing-settings"
     * target="_blank">Language Specific Text Processing Settings</a> in the <i>Amazon
     * CloudSearch Developer Guide</i> </p>
     */
    inline AnalysisOptions& WithAlgorithmicStemming(AlgorithmicStemming&& value) { SetAlgorithmicStemming(std::move(value)); return *this;}

  private:

    Aws::String m_synonyms;
    bool m_synonymsHasBeenSet;

    Aws::String m_stopwords;
    bool m_stopwordsHasBeenSet;

    Aws::String m_stemmingDictionary;
    bool m_stemmingDictionaryHasBeenSet;

    Aws::String m_japaneseTokenizationDictionary;
    bool m_japaneseTokenizationDictionaryHasBeenSet;

    AlgorithmicStemming m_algorithmicStemming;
    bool m_algorithmicStemmingHasBeenSet;
  };

} // namespace Model
} // namespace CloudSearch
} // namespace Aws
