/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/wafv2/WAFV2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/wafv2/model/IPSetSummary.h>
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
  class ListIPSetsResult
  {
  public:
    AWS_WAFV2_API ListIPSetsResult();
    AWS_WAFV2_API ListIPSetsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_WAFV2_API ListIPSetsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>When you request a list of objects with a <code>Limit</code> setting, if the
     * number of objects that are still available for retrieval exceeds the limit, WAF
     * returns a <code>NextMarker</code> value in the response. To retrieve the next
     * batch of objects, provide the marker from the prior call in your next
     * request.</p>
     */
    inline const Aws::String& GetNextMarker() const{ return m_nextMarker; }

    /**
     * <p>When you request a list of objects with a <code>Limit</code> setting, if the
     * number of objects that are still available for retrieval exceeds the limit, WAF
     * returns a <code>NextMarker</code> value in the response. To retrieve the next
     * batch of objects, provide the marker from the prior call in your next
     * request.</p>
     */
    inline void SetNextMarker(const Aws::String& value) { m_nextMarker = value; }

    /**
     * <p>When you request a list of objects with a <code>Limit</code> setting, if the
     * number of objects that are still available for retrieval exceeds the limit, WAF
     * returns a <code>NextMarker</code> value in the response. To retrieve the next
     * batch of objects, provide the marker from the prior call in your next
     * request.</p>
     */
    inline void SetNextMarker(Aws::String&& value) { m_nextMarker = std::move(value); }

    /**
     * <p>When you request a list of objects with a <code>Limit</code> setting, if the
     * number of objects that are still available for retrieval exceeds the limit, WAF
     * returns a <code>NextMarker</code> value in the response. To retrieve the next
     * batch of objects, provide the marker from the prior call in your next
     * request.</p>
     */
    inline void SetNextMarker(const char* value) { m_nextMarker.assign(value); }

    /**
     * <p>When you request a list of objects with a <code>Limit</code> setting, if the
     * number of objects that are still available for retrieval exceeds the limit, WAF
     * returns a <code>NextMarker</code> value in the response. To retrieve the next
     * batch of objects, provide the marker from the prior call in your next
     * request.</p>
     */
    inline ListIPSetsResult& WithNextMarker(const Aws::String& value) { SetNextMarker(value); return *this;}

    /**
     * <p>When you request a list of objects with a <code>Limit</code> setting, if the
     * number of objects that are still available for retrieval exceeds the limit, WAF
     * returns a <code>NextMarker</code> value in the response. To retrieve the next
     * batch of objects, provide the marker from the prior call in your next
     * request.</p>
     */
    inline ListIPSetsResult& WithNextMarker(Aws::String&& value) { SetNextMarker(std::move(value)); return *this;}

    /**
     * <p>When you request a list of objects with a <code>Limit</code> setting, if the
     * number of objects that are still available for retrieval exceeds the limit, WAF
     * returns a <code>NextMarker</code> value in the response. To retrieve the next
     * batch of objects, provide the marker from the prior call in your next
     * request.</p>
     */
    inline ListIPSetsResult& WithNextMarker(const char* value) { SetNextMarker(value); return *this;}


    /**
     * <p>Array of IPSets. This may not be the full list of IPSets that you have
     * defined. See the <code>Limit</code> specification for this request.</p>
     */
    inline const Aws::Vector<IPSetSummary>& GetIPSets() const{ return m_iPSets; }

    /**
     * <p>Array of IPSets. This may not be the full list of IPSets that you have
     * defined. See the <code>Limit</code> specification for this request.</p>
     */
    inline void SetIPSets(const Aws::Vector<IPSetSummary>& value) { m_iPSets = value; }

    /**
     * <p>Array of IPSets. This may not be the full list of IPSets that you have
     * defined. See the <code>Limit</code> specification for this request.</p>
     */
    inline void SetIPSets(Aws::Vector<IPSetSummary>&& value) { m_iPSets = std::move(value); }

    /**
     * <p>Array of IPSets. This may not be the full list of IPSets that you have
     * defined. See the <code>Limit</code> specification for this request.</p>
     */
    inline ListIPSetsResult& WithIPSets(const Aws::Vector<IPSetSummary>& value) { SetIPSets(value); return *this;}

    /**
     * <p>Array of IPSets. This may not be the full list of IPSets that you have
     * defined. See the <code>Limit</code> specification for this request.</p>
     */
    inline ListIPSetsResult& WithIPSets(Aws::Vector<IPSetSummary>&& value) { SetIPSets(std::move(value)); return *this;}

    /**
     * <p>Array of IPSets. This may not be the full list of IPSets that you have
     * defined. See the <code>Limit</code> specification for this request.</p>
     */
    inline ListIPSetsResult& AddIPSets(const IPSetSummary& value) { m_iPSets.push_back(value); return *this; }

    /**
     * <p>Array of IPSets. This may not be the full list of IPSets that you have
     * defined. See the <code>Limit</code> specification for this request.</p>
     */
    inline ListIPSetsResult& AddIPSets(IPSetSummary&& value) { m_iPSets.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_nextMarker;

    Aws::Vector<IPSetSummary> m_iPSets;
  };

} // namespace Model
} // namespace WAFV2
} // namespace Aws
