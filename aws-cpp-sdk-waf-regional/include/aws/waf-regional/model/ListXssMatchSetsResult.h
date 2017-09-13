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
#include <aws/waf-regional/WAFRegional_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/waf-regional/model/XssMatchSetSummary.h>
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
namespace WAFRegional
{
namespace Model
{
  /**
   * <p>The response to a <a>ListXssMatchSets</a> request.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/waf-regional-2016-11-28/ListXssMatchSetsResponse">AWS
   * API Reference</a></p>
   */
  class AWS_WAFREGIONAL_API ListXssMatchSetsResult
  {
  public:
    ListXssMatchSetsResult();
    ListXssMatchSetsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    ListXssMatchSetsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>If you have more <a>XssMatchSet</a> objects than the number that you
     * specified for <code>Limit</code> in the request, the response includes a
     * <code>NextMarker</code> value. To list more <code>XssMatchSet</code> objects,
     * submit another <code>ListXssMatchSets</code> request, and specify the
     * <code>NextMarker</code> value from the response in the <code>NextMarker</code>
     * value in the next request.</p>
     */
    inline const Aws::String& GetNextMarker() const{ return m_nextMarker; }

    /**
     * <p>If you have more <a>XssMatchSet</a> objects than the number that you
     * specified for <code>Limit</code> in the request, the response includes a
     * <code>NextMarker</code> value. To list more <code>XssMatchSet</code> objects,
     * submit another <code>ListXssMatchSets</code> request, and specify the
     * <code>NextMarker</code> value from the response in the <code>NextMarker</code>
     * value in the next request.</p>
     */
    inline void SetNextMarker(const Aws::String& value) { m_nextMarker = value; }

    /**
     * <p>If you have more <a>XssMatchSet</a> objects than the number that you
     * specified for <code>Limit</code> in the request, the response includes a
     * <code>NextMarker</code> value. To list more <code>XssMatchSet</code> objects,
     * submit another <code>ListXssMatchSets</code> request, and specify the
     * <code>NextMarker</code> value from the response in the <code>NextMarker</code>
     * value in the next request.</p>
     */
    inline void SetNextMarker(Aws::String&& value) { m_nextMarker = std::move(value); }

    /**
     * <p>If you have more <a>XssMatchSet</a> objects than the number that you
     * specified for <code>Limit</code> in the request, the response includes a
     * <code>NextMarker</code> value. To list more <code>XssMatchSet</code> objects,
     * submit another <code>ListXssMatchSets</code> request, and specify the
     * <code>NextMarker</code> value from the response in the <code>NextMarker</code>
     * value in the next request.</p>
     */
    inline void SetNextMarker(const char* value) { m_nextMarker.assign(value); }

    /**
     * <p>If you have more <a>XssMatchSet</a> objects than the number that you
     * specified for <code>Limit</code> in the request, the response includes a
     * <code>NextMarker</code> value. To list more <code>XssMatchSet</code> objects,
     * submit another <code>ListXssMatchSets</code> request, and specify the
     * <code>NextMarker</code> value from the response in the <code>NextMarker</code>
     * value in the next request.</p>
     */
    inline ListXssMatchSetsResult& WithNextMarker(const Aws::String& value) { SetNextMarker(value); return *this;}

    /**
     * <p>If you have more <a>XssMatchSet</a> objects than the number that you
     * specified for <code>Limit</code> in the request, the response includes a
     * <code>NextMarker</code> value. To list more <code>XssMatchSet</code> objects,
     * submit another <code>ListXssMatchSets</code> request, and specify the
     * <code>NextMarker</code> value from the response in the <code>NextMarker</code>
     * value in the next request.</p>
     */
    inline ListXssMatchSetsResult& WithNextMarker(Aws::String&& value) { SetNextMarker(std::move(value)); return *this;}

    /**
     * <p>If you have more <a>XssMatchSet</a> objects than the number that you
     * specified for <code>Limit</code> in the request, the response includes a
     * <code>NextMarker</code> value. To list more <code>XssMatchSet</code> objects,
     * submit another <code>ListXssMatchSets</code> request, and specify the
     * <code>NextMarker</code> value from the response in the <code>NextMarker</code>
     * value in the next request.</p>
     */
    inline ListXssMatchSetsResult& WithNextMarker(const char* value) { SetNextMarker(value); return *this;}


    /**
     * <p>An array of <a>XssMatchSetSummary</a> objects.</p>
     */
    inline const Aws::Vector<XssMatchSetSummary>& GetXssMatchSets() const{ return m_xssMatchSets; }

    /**
     * <p>An array of <a>XssMatchSetSummary</a> objects.</p>
     */
    inline void SetXssMatchSets(const Aws::Vector<XssMatchSetSummary>& value) { m_xssMatchSets = value; }

    /**
     * <p>An array of <a>XssMatchSetSummary</a> objects.</p>
     */
    inline void SetXssMatchSets(Aws::Vector<XssMatchSetSummary>&& value) { m_xssMatchSets = std::move(value); }

    /**
     * <p>An array of <a>XssMatchSetSummary</a> objects.</p>
     */
    inline ListXssMatchSetsResult& WithXssMatchSets(const Aws::Vector<XssMatchSetSummary>& value) { SetXssMatchSets(value); return *this;}

    /**
     * <p>An array of <a>XssMatchSetSummary</a> objects.</p>
     */
    inline ListXssMatchSetsResult& WithXssMatchSets(Aws::Vector<XssMatchSetSummary>&& value) { SetXssMatchSets(std::move(value)); return *this;}

    /**
     * <p>An array of <a>XssMatchSetSummary</a> objects.</p>
     */
    inline ListXssMatchSetsResult& AddXssMatchSets(const XssMatchSetSummary& value) { m_xssMatchSets.push_back(value); return *this; }

    /**
     * <p>An array of <a>XssMatchSetSummary</a> objects.</p>
     */
    inline ListXssMatchSetsResult& AddXssMatchSets(XssMatchSetSummary&& value) { m_xssMatchSets.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_nextMarker;

    Aws::Vector<XssMatchSetSummary> m_xssMatchSets;
  };

} // namespace Model
} // namespace WAFRegional
} // namespace Aws
