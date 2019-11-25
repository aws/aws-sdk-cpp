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
#include <aws/wafv2/WAFV2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/wafv2/model/RegexPatternSetSummary.h>
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
namespace WAFV2
{
namespace Model
{
  class AWS_WAFV2_API ListRegexPatternSetsResult
  {
  public:
    ListRegexPatternSetsResult();
    ListRegexPatternSetsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    ListRegexPatternSetsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>When you request a list of objects with a <code>Limit</code> setting, if the
     * number of objects that are still available for retrieval exceeds the limit, AWS
     * WAF returns a <code>NextMarker</code> value in the response. To retrieve the
     * next batch of objects, provide the marker from the prior call in your next
     * request.</p>
     */
    inline const Aws::String& GetNextMarker() const{ return m_nextMarker; }

    /**
     * <p>When you request a list of objects with a <code>Limit</code> setting, if the
     * number of objects that are still available for retrieval exceeds the limit, AWS
     * WAF returns a <code>NextMarker</code> value in the response. To retrieve the
     * next batch of objects, provide the marker from the prior call in your next
     * request.</p>
     */
    inline void SetNextMarker(const Aws::String& value) { m_nextMarker = value; }

    /**
     * <p>When you request a list of objects with a <code>Limit</code> setting, if the
     * number of objects that are still available for retrieval exceeds the limit, AWS
     * WAF returns a <code>NextMarker</code> value in the response. To retrieve the
     * next batch of objects, provide the marker from the prior call in your next
     * request.</p>
     */
    inline void SetNextMarker(Aws::String&& value) { m_nextMarker = std::move(value); }

    /**
     * <p>When you request a list of objects with a <code>Limit</code> setting, if the
     * number of objects that are still available for retrieval exceeds the limit, AWS
     * WAF returns a <code>NextMarker</code> value in the response. To retrieve the
     * next batch of objects, provide the marker from the prior call in your next
     * request.</p>
     */
    inline void SetNextMarker(const char* value) { m_nextMarker.assign(value); }

    /**
     * <p>When you request a list of objects with a <code>Limit</code> setting, if the
     * number of objects that are still available for retrieval exceeds the limit, AWS
     * WAF returns a <code>NextMarker</code> value in the response. To retrieve the
     * next batch of objects, provide the marker from the prior call in your next
     * request.</p>
     */
    inline ListRegexPatternSetsResult& WithNextMarker(const Aws::String& value) { SetNextMarker(value); return *this;}

    /**
     * <p>When you request a list of objects with a <code>Limit</code> setting, if the
     * number of objects that are still available for retrieval exceeds the limit, AWS
     * WAF returns a <code>NextMarker</code> value in the response. To retrieve the
     * next batch of objects, provide the marker from the prior call in your next
     * request.</p>
     */
    inline ListRegexPatternSetsResult& WithNextMarker(Aws::String&& value) { SetNextMarker(std::move(value)); return *this;}

    /**
     * <p>When you request a list of objects with a <code>Limit</code> setting, if the
     * number of objects that are still available for retrieval exceeds the limit, AWS
     * WAF returns a <code>NextMarker</code> value in the response. To retrieve the
     * next batch of objects, provide the marker from the prior call in your next
     * request.</p>
     */
    inline ListRegexPatternSetsResult& WithNextMarker(const char* value) { SetNextMarker(value); return *this;}


    /**
     * <p/>
     */
    inline const Aws::Vector<RegexPatternSetSummary>& GetRegexPatternSets() const{ return m_regexPatternSets; }

    /**
     * <p/>
     */
    inline void SetRegexPatternSets(const Aws::Vector<RegexPatternSetSummary>& value) { m_regexPatternSets = value; }

    /**
     * <p/>
     */
    inline void SetRegexPatternSets(Aws::Vector<RegexPatternSetSummary>&& value) { m_regexPatternSets = std::move(value); }

    /**
     * <p/>
     */
    inline ListRegexPatternSetsResult& WithRegexPatternSets(const Aws::Vector<RegexPatternSetSummary>& value) { SetRegexPatternSets(value); return *this;}

    /**
     * <p/>
     */
    inline ListRegexPatternSetsResult& WithRegexPatternSets(Aws::Vector<RegexPatternSetSummary>&& value) { SetRegexPatternSets(std::move(value)); return *this;}

    /**
     * <p/>
     */
    inline ListRegexPatternSetsResult& AddRegexPatternSets(const RegexPatternSetSummary& value) { m_regexPatternSets.push_back(value); return *this; }

    /**
     * <p/>
     */
    inline ListRegexPatternSetsResult& AddRegexPatternSets(RegexPatternSetSummary&& value) { m_regexPatternSets.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_nextMarker;

    Aws::Vector<RegexPatternSetSummary> m_regexPatternSets;
  };

} // namespace Model
} // namespace WAFV2
} // namespace Aws
