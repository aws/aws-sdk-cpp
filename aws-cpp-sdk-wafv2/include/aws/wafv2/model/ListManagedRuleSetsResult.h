/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/wafv2/WAFV2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/wafv2/model/ManagedRuleSetSummary.h>
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
  class ListManagedRuleSetsResult
  {
  public:
    AWS_WAFV2_API ListManagedRuleSetsResult();
    AWS_WAFV2_API ListManagedRuleSetsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_WAFV2_API ListManagedRuleSetsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


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
    inline ListManagedRuleSetsResult& WithNextMarker(const Aws::String& value) { SetNextMarker(value); return *this;}

    /**
     * <p>When you request a list of objects with a <code>Limit</code> setting, if the
     * number of objects that are still available for retrieval exceeds the limit, WAF
     * returns a <code>NextMarker</code> value in the response. To retrieve the next
     * batch of objects, provide the marker from the prior call in your next
     * request.</p>
     */
    inline ListManagedRuleSetsResult& WithNextMarker(Aws::String&& value) { SetNextMarker(std::move(value)); return *this;}

    /**
     * <p>When you request a list of objects with a <code>Limit</code> setting, if the
     * number of objects that are still available for retrieval exceeds the limit, WAF
     * returns a <code>NextMarker</code> value in the response. To retrieve the next
     * batch of objects, provide the marker from the prior call in your next
     * request.</p>
     */
    inline ListManagedRuleSetsResult& WithNextMarker(const char* value) { SetNextMarker(value); return *this;}


    /**
     * <p>Your managed rule sets. </p>
     */
    inline const Aws::Vector<ManagedRuleSetSummary>& GetManagedRuleSets() const{ return m_managedRuleSets; }

    /**
     * <p>Your managed rule sets. </p>
     */
    inline void SetManagedRuleSets(const Aws::Vector<ManagedRuleSetSummary>& value) { m_managedRuleSets = value; }

    /**
     * <p>Your managed rule sets. </p>
     */
    inline void SetManagedRuleSets(Aws::Vector<ManagedRuleSetSummary>&& value) { m_managedRuleSets = std::move(value); }

    /**
     * <p>Your managed rule sets. </p>
     */
    inline ListManagedRuleSetsResult& WithManagedRuleSets(const Aws::Vector<ManagedRuleSetSummary>& value) { SetManagedRuleSets(value); return *this;}

    /**
     * <p>Your managed rule sets. </p>
     */
    inline ListManagedRuleSetsResult& WithManagedRuleSets(Aws::Vector<ManagedRuleSetSummary>&& value) { SetManagedRuleSets(std::move(value)); return *this;}

    /**
     * <p>Your managed rule sets. </p>
     */
    inline ListManagedRuleSetsResult& AddManagedRuleSets(const ManagedRuleSetSummary& value) { m_managedRuleSets.push_back(value); return *this; }

    /**
     * <p>Your managed rule sets. </p>
     */
    inline ListManagedRuleSetsResult& AddManagedRuleSets(ManagedRuleSetSummary&& value) { m_managedRuleSets.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_nextMarker;

    Aws::Vector<ManagedRuleSetSummary> m_managedRuleSets;
  };

} // namespace Model
} // namespace WAFV2
} // namespace Aws
