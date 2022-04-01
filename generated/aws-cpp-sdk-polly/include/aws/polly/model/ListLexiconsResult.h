/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/polly/Polly_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/polly/model/LexiconDescription.h>
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
  class AWS_POLLY_API ListLexiconsResult
  {
  public:
    ListLexiconsResult();
    ListLexiconsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    ListLexiconsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>A list of lexicon names and attributes.</p>
     */
    inline const Aws::Vector<LexiconDescription>& GetLexicons() const{ return m_lexicons; }

    /**
     * <p>A list of lexicon names and attributes.</p>
     */
    inline void SetLexicons(const Aws::Vector<LexiconDescription>& value) { m_lexicons = value; }

    /**
     * <p>A list of lexicon names and attributes.</p>
     */
    inline void SetLexicons(Aws::Vector<LexiconDescription>&& value) { m_lexicons = std::move(value); }

    /**
     * <p>A list of lexicon names and attributes.</p>
     */
    inline ListLexiconsResult& WithLexicons(const Aws::Vector<LexiconDescription>& value) { SetLexicons(value); return *this;}

    /**
     * <p>A list of lexicon names and attributes.</p>
     */
    inline ListLexiconsResult& WithLexicons(Aws::Vector<LexiconDescription>&& value) { SetLexicons(std::move(value)); return *this;}

    /**
     * <p>A list of lexicon names and attributes.</p>
     */
    inline ListLexiconsResult& AddLexicons(const LexiconDescription& value) { m_lexicons.push_back(value); return *this; }

    /**
     * <p>A list of lexicon names and attributes.</p>
     */
    inline ListLexiconsResult& AddLexicons(LexiconDescription&& value) { m_lexicons.push_back(std::move(value)); return *this; }


    /**
     * <p>The pagination token to use in the next request to continue the listing of
     * lexicons. <code>NextToken</code> is returned only if the response is
     * truncated.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The pagination token to use in the next request to continue the listing of
     * lexicons. <code>NextToken</code> is returned only if the response is
     * truncated.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>The pagination token to use in the next request to continue the listing of
     * lexicons. <code>NextToken</code> is returned only if the response is
     * truncated.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>The pagination token to use in the next request to continue the listing of
     * lexicons. <code>NextToken</code> is returned only if the response is
     * truncated.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>The pagination token to use in the next request to continue the listing of
     * lexicons. <code>NextToken</code> is returned only if the response is
     * truncated.</p>
     */
    inline ListLexiconsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The pagination token to use in the next request to continue the listing of
     * lexicons. <code>NextToken</code> is returned only if the response is
     * truncated.</p>
     */
    inline ListLexiconsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The pagination token to use in the next request to continue the listing of
     * lexicons. <code>NextToken</code> is returned only if the response is
     * truncated.</p>
     */
    inline ListLexiconsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<LexiconDescription> m_lexicons;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace Polly
} // namespace Aws
