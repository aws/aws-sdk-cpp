/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/polly/Polly_EXPORTS.h>
#include <aws/polly/model/Lexicon.h>
#include <aws/polly/model/LexiconAttributes.h>
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
namespace Polly
{
namespace Model
{
  class AWS_POLLY_API GetLexiconResult
  {
  public:
    GetLexiconResult();
    GetLexiconResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    GetLexiconResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Lexicon object that provides name and the string content of the lexicon. </p>
     */
    inline const Lexicon& GetLexicon() const{ return m_lexicon; }

    /**
     * <p>Lexicon object that provides name and the string content of the lexicon. </p>
     */
    inline void SetLexicon(const Lexicon& value) { m_lexicon = value; }

    /**
     * <p>Lexicon object that provides name and the string content of the lexicon. </p>
     */
    inline void SetLexicon(Lexicon&& value) { m_lexicon = std::move(value); }

    /**
     * <p>Lexicon object that provides name and the string content of the lexicon. </p>
     */
    inline GetLexiconResult& WithLexicon(const Lexicon& value) { SetLexicon(value); return *this;}

    /**
     * <p>Lexicon object that provides name and the string content of the lexicon. </p>
     */
    inline GetLexiconResult& WithLexicon(Lexicon&& value) { SetLexicon(std::move(value)); return *this;}


    /**
     * <p>Metadata of the lexicon, including phonetic alphabetic used, language code,
     * lexicon ARN, number of lexemes defined in the lexicon, and size of lexicon in
     * bytes.</p>
     */
    inline const LexiconAttributes& GetLexiconAttributes() const{ return m_lexiconAttributes; }

    /**
     * <p>Metadata of the lexicon, including phonetic alphabetic used, language code,
     * lexicon ARN, number of lexemes defined in the lexicon, and size of lexicon in
     * bytes.</p>
     */
    inline void SetLexiconAttributes(const LexiconAttributes& value) { m_lexiconAttributes = value; }

    /**
     * <p>Metadata of the lexicon, including phonetic alphabetic used, language code,
     * lexicon ARN, number of lexemes defined in the lexicon, and size of lexicon in
     * bytes.</p>
     */
    inline void SetLexiconAttributes(LexiconAttributes&& value) { m_lexiconAttributes = std::move(value); }

    /**
     * <p>Metadata of the lexicon, including phonetic alphabetic used, language code,
     * lexicon ARN, number of lexemes defined in the lexicon, and size of lexicon in
     * bytes.</p>
     */
    inline GetLexiconResult& WithLexiconAttributes(const LexiconAttributes& value) { SetLexiconAttributes(value); return *this;}

    /**
     * <p>Metadata of the lexicon, including phonetic alphabetic used, language code,
     * lexicon ARN, number of lexemes defined in the lexicon, and size of lexicon in
     * bytes.</p>
     */
    inline GetLexiconResult& WithLexiconAttributes(LexiconAttributes&& value) { SetLexiconAttributes(std::move(value)); return *this;}

  private:

    Lexicon m_lexicon;

    LexiconAttributes m_lexiconAttributes;
  };

} // namespace Model
} // namespace Polly
} // namespace Aws
