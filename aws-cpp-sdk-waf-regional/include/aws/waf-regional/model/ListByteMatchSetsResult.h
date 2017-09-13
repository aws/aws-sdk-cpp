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
#include <aws/waf-regional/model/ByteMatchSetSummary.h>
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
  class AWS_WAFREGIONAL_API ListByteMatchSetsResult
  {
  public:
    ListByteMatchSetsResult();
    ListByteMatchSetsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    ListByteMatchSetsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>If you have more <code>ByteMatchSet</code> objects than the number that you
     * specified for <code>Limit</code> in the request, the response includes a
     * <code>NextMarker</code> value. To list more <code>ByteMatchSet</code> objects,
     * submit another <code>ListByteMatchSets</code> request, and specify the
     * <code>NextMarker</code> value from the response in the <code>NextMarker</code>
     * value in the next request.</p>
     */
    inline const Aws::String& GetNextMarker() const{ return m_nextMarker; }

    /**
     * <p>If you have more <code>ByteMatchSet</code> objects than the number that you
     * specified for <code>Limit</code> in the request, the response includes a
     * <code>NextMarker</code> value. To list more <code>ByteMatchSet</code> objects,
     * submit another <code>ListByteMatchSets</code> request, and specify the
     * <code>NextMarker</code> value from the response in the <code>NextMarker</code>
     * value in the next request.</p>
     */
    inline void SetNextMarker(const Aws::String& value) { m_nextMarker = value; }

    /**
     * <p>If you have more <code>ByteMatchSet</code> objects than the number that you
     * specified for <code>Limit</code> in the request, the response includes a
     * <code>NextMarker</code> value. To list more <code>ByteMatchSet</code> objects,
     * submit another <code>ListByteMatchSets</code> request, and specify the
     * <code>NextMarker</code> value from the response in the <code>NextMarker</code>
     * value in the next request.</p>
     */
    inline void SetNextMarker(Aws::String&& value) { m_nextMarker = std::move(value); }

    /**
     * <p>If you have more <code>ByteMatchSet</code> objects than the number that you
     * specified for <code>Limit</code> in the request, the response includes a
     * <code>NextMarker</code> value. To list more <code>ByteMatchSet</code> objects,
     * submit another <code>ListByteMatchSets</code> request, and specify the
     * <code>NextMarker</code> value from the response in the <code>NextMarker</code>
     * value in the next request.</p>
     */
    inline void SetNextMarker(const char* value) { m_nextMarker.assign(value); }

    /**
     * <p>If you have more <code>ByteMatchSet</code> objects than the number that you
     * specified for <code>Limit</code> in the request, the response includes a
     * <code>NextMarker</code> value. To list more <code>ByteMatchSet</code> objects,
     * submit another <code>ListByteMatchSets</code> request, and specify the
     * <code>NextMarker</code> value from the response in the <code>NextMarker</code>
     * value in the next request.</p>
     */
    inline ListByteMatchSetsResult& WithNextMarker(const Aws::String& value) { SetNextMarker(value); return *this;}

    /**
     * <p>If you have more <code>ByteMatchSet</code> objects than the number that you
     * specified for <code>Limit</code> in the request, the response includes a
     * <code>NextMarker</code> value. To list more <code>ByteMatchSet</code> objects,
     * submit another <code>ListByteMatchSets</code> request, and specify the
     * <code>NextMarker</code> value from the response in the <code>NextMarker</code>
     * value in the next request.</p>
     */
    inline ListByteMatchSetsResult& WithNextMarker(Aws::String&& value) { SetNextMarker(std::move(value)); return *this;}

    /**
     * <p>If you have more <code>ByteMatchSet</code> objects than the number that you
     * specified for <code>Limit</code> in the request, the response includes a
     * <code>NextMarker</code> value. To list more <code>ByteMatchSet</code> objects,
     * submit another <code>ListByteMatchSets</code> request, and specify the
     * <code>NextMarker</code> value from the response in the <code>NextMarker</code>
     * value in the next request.</p>
     */
    inline ListByteMatchSetsResult& WithNextMarker(const char* value) { SetNextMarker(value); return *this;}


    /**
     * <p>An array of <a>ByteMatchSetSummary</a> objects.</p>
     */
    inline const Aws::Vector<ByteMatchSetSummary>& GetByteMatchSets() const{ return m_byteMatchSets; }

    /**
     * <p>An array of <a>ByteMatchSetSummary</a> objects.</p>
     */
    inline void SetByteMatchSets(const Aws::Vector<ByteMatchSetSummary>& value) { m_byteMatchSets = value; }

    /**
     * <p>An array of <a>ByteMatchSetSummary</a> objects.</p>
     */
    inline void SetByteMatchSets(Aws::Vector<ByteMatchSetSummary>&& value) { m_byteMatchSets = std::move(value); }

    /**
     * <p>An array of <a>ByteMatchSetSummary</a> objects.</p>
     */
    inline ListByteMatchSetsResult& WithByteMatchSets(const Aws::Vector<ByteMatchSetSummary>& value) { SetByteMatchSets(value); return *this;}

    /**
     * <p>An array of <a>ByteMatchSetSummary</a> objects.</p>
     */
    inline ListByteMatchSetsResult& WithByteMatchSets(Aws::Vector<ByteMatchSetSummary>&& value) { SetByteMatchSets(std::move(value)); return *this;}

    /**
     * <p>An array of <a>ByteMatchSetSummary</a> objects.</p>
     */
    inline ListByteMatchSetsResult& AddByteMatchSets(const ByteMatchSetSummary& value) { m_byteMatchSets.push_back(value); return *this; }

    /**
     * <p>An array of <a>ByteMatchSetSummary</a> objects.</p>
     */
    inline ListByteMatchSetsResult& AddByteMatchSets(ByteMatchSetSummary&& value) { m_byteMatchSets.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_nextMarker;

    Aws::Vector<ByteMatchSetSummary> m_byteMatchSets;
  };

} // namespace Model
} // namespace WAFRegional
} // namespace Aws
