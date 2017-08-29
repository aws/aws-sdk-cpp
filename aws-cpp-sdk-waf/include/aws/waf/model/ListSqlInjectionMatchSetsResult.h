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
#include <aws/waf/WAF_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/waf/model/SqlInjectionMatchSetSummary.h>
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
namespace WAF
{
namespace Model
{
  /**
   * <p>The response to a <a>ListSqlInjectionMatchSets</a> request.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/waf-2015-08-24/ListSqlInjectionMatchSetsResponse">AWS
   * API Reference</a></p>
   */
  class AWS_WAF_API ListSqlInjectionMatchSetsResult
  {
  public:
    ListSqlInjectionMatchSetsResult();
    ListSqlInjectionMatchSetsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    ListSqlInjectionMatchSetsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>If you have more <a>SqlInjectionMatchSet</a> objects than the number that you
     * specified for <code>Limit</code> in the request, the response includes a
     * <code>NextMarker</code> value. To list more <code>SqlInjectionMatchSet</code>
     * objects, submit another <code>ListSqlInjectionMatchSets</code> request, and
     * specify the <code>NextMarker</code> value from the response in the
     * <code>NextMarker</code> value in the next request.</p>
     */
    inline const Aws::String& GetNextMarker() const{ return m_nextMarker; }

    /**
     * <p>If you have more <a>SqlInjectionMatchSet</a> objects than the number that you
     * specified for <code>Limit</code> in the request, the response includes a
     * <code>NextMarker</code> value. To list more <code>SqlInjectionMatchSet</code>
     * objects, submit another <code>ListSqlInjectionMatchSets</code> request, and
     * specify the <code>NextMarker</code> value from the response in the
     * <code>NextMarker</code> value in the next request.</p>
     */
    inline void SetNextMarker(const Aws::String& value) { m_nextMarker = value; }

    /**
     * <p>If you have more <a>SqlInjectionMatchSet</a> objects than the number that you
     * specified for <code>Limit</code> in the request, the response includes a
     * <code>NextMarker</code> value. To list more <code>SqlInjectionMatchSet</code>
     * objects, submit another <code>ListSqlInjectionMatchSets</code> request, and
     * specify the <code>NextMarker</code> value from the response in the
     * <code>NextMarker</code> value in the next request.</p>
     */
    inline void SetNextMarker(Aws::String&& value) { m_nextMarker = std::move(value); }

    /**
     * <p>If you have more <a>SqlInjectionMatchSet</a> objects than the number that you
     * specified for <code>Limit</code> in the request, the response includes a
     * <code>NextMarker</code> value. To list more <code>SqlInjectionMatchSet</code>
     * objects, submit another <code>ListSqlInjectionMatchSets</code> request, and
     * specify the <code>NextMarker</code> value from the response in the
     * <code>NextMarker</code> value in the next request.</p>
     */
    inline void SetNextMarker(const char* value) { m_nextMarker.assign(value); }

    /**
     * <p>If you have more <a>SqlInjectionMatchSet</a> objects than the number that you
     * specified for <code>Limit</code> in the request, the response includes a
     * <code>NextMarker</code> value. To list more <code>SqlInjectionMatchSet</code>
     * objects, submit another <code>ListSqlInjectionMatchSets</code> request, and
     * specify the <code>NextMarker</code> value from the response in the
     * <code>NextMarker</code> value in the next request.</p>
     */
    inline ListSqlInjectionMatchSetsResult& WithNextMarker(const Aws::String& value) { SetNextMarker(value); return *this;}

    /**
     * <p>If you have more <a>SqlInjectionMatchSet</a> objects than the number that you
     * specified for <code>Limit</code> in the request, the response includes a
     * <code>NextMarker</code> value. To list more <code>SqlInjectionMatchSet</code>
     * objects, submit another <code>ListSqlInjectionMatchSets</code> request, and
     * specify the <code>NextMarker</code> value from the response in the
     * <code>NextMarker</code> value in the next request.</p>
     */
    inline ListSqlInjectionMatchSetsResult& WithNextMarker(Aws::String&& value) { SetNextMarker(std::move(value)); return *this;}

    /**
     * <p>If you have more <a>SqlInjectionMatchSet</a> objects than the number that you
     * specified for <code>Limit</code> in the request, the response includes a
     * <code>NextMarker</code> value. To list more <code>SqlInjectionMatchSet</code>
     * objects, submit another <code>ListSqlInjectionMatchSets</code> request, and
     * specify the <code>NextMarker</code> value from the response in the
     * <code>NextMarker</code> value in the next request.</p>
     */
    inline ListSqlInjectionMatchSetsResult& WithNextMarker(const char* value) { SetNextMarker(value); return *this;}


    /**
     * <p>An array of <a>SqlInjectionMatchSetSummary</a> objects.</p>
     */
    inline const Aws::Vector<SqlInjectionMatchSetSummary>& GetSqlInjectionMatchSets() const{ return m_sqlInjectionMatchSets; }

    /**
     * <p>An array of <a>SqlInjectionMatchSetSummary</a> objects.</p>
     */
    inline void SetSqlInjectionMatchSets(const Aws::Vector<SqlInjectionMatchSetSummary>& value) { m_sqlInjectionMatchSets = value; }

    /**
     * <p>An array of <a>SqlInjectionMatchSetSummary</a> objects.</p>
     */
    inline void SetSqlInjectionMatchSets(Aws::Vector<SqlInjectionMatchSetSummary>&& value) { m_sqlInjectionMatchSets = std::move(value); }

    /**
     * <p>An array of <a>SqlInjectionMatchSetSummary</a> objects.</p>
     */
    inline ListSqlInjectionMatchSetsResult& WithSqlInjectionMatchSets(const Aws::Vector<SqlInjectionMatchSetSummary>& value) { SetSqlInjectionMatchSets(value); return *this;}

    /**
     * <p>An array of <a>SqlInjectionMatchSetSummary</a> objects.</p>
     */
    inline ListSqlInjectionMatchSetsResult& WithSqlInjectionMatchSets(Aws::Vector<SqlInjectionMatchSetSummary>&& value) { SetSqlInjectionMatchSets(std::move(value)); return *this;}

    /**
     * <p>An array of <a>SqlInjectionMatchSetSummary</a> objects.</p>
     */
    inline ListSqlInjectionMatchSetsResult& AddSqlInjectionMatchSets(const SqlInjectionMatchSetSummary& value) { m_sqlInjectionMatchSets.push_back(value); return *this; }

    /**
     * <p>An array of <a>SqlInjectionMatchSetSummary</a> objects.</p>
     */
    inline ListSqlInjectionMatchSetsResult& AddSqlInjectionMatchSets(SqlInjectionMatchSetSummary&& value) { m_sqlInjectionMatchSets.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_nextMarker;

    Aws::Vector<SqlInjectionMatchSetSummary> m_sqlInjectionMatchSets;
  };

} // namespace Model
} // namespace WAF
} // namespace Aws
