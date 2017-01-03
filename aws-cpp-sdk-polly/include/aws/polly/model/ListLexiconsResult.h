﻿/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/polly/Polly_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/polly/model/LexiconDescription.h>

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
    ListLexiconsResult(const AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    ListLexiconsResult& operator=(const AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

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
    inline void SetLexicons(Aws::Vector<LexiconDescription>&& value) { m_lexicons = value; }

    /**
     * <p>A list of lexicon names and attributes.</p>
     */
    inline ListLexiconsResult& WithLexicons(const Aws::Vector<LexiconDescription>& value) { SetLexicons(value); return *this;}

    /**
     * <p>A list of lexicon names and attributes.</p>
     */
    inline ListLexiconsResult& WithLexicons(Aws::Vector<LexiconDescription>&& value) { SetLexicons(value); return *this;}

    /**
     * <p>A list of lexicon names and attributes.</p>
     */
    inline ListLexiconsResult& AddLexicons(const LexiconDescription& value) { m_lexicons.push_back(value); return *this; }

    /**
     * <p>A list of lexicon names and attributes.</p>
     */
    inline ListLexiconsResult& AddLexicons(LexiconDescription&& value) { m_lexicons.push_back(value); return *this; }

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
    inline void SetNextToken(Aws::String&& value) { m_nextToken = value; }

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
    inline ListLexiconsResult& WithNextToken(Aws::String&& value) { SetNextToken(value); return *this;}

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
