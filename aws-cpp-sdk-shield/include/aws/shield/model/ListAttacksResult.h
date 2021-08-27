/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/shield/Shield_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/shield/model/AttackSummary.h>
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
namespace Shield
{
namespace Model
{
  class AWS_SHIELD_API ListAttacksResult
  {
  public:
    ListAttacksResult();
    ListAttacksResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    ListAttacksResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The attack information for the specified time range.</p>
     */
    inline const Aws::Vector<AttackSummary>& GetAttackSummaries() const{ return m_attackSummaries; }

    /**
     * <p>The attack information for the specified time range.</p>
     */
    inline void SetAttackSummaries(const Aws::Vector<AttackSummary>& value) { m_attackSummaries = value; }

    /**
     * <p>The attack information for the specified time range.</p>
     */
    inline void SetAttackSummaries(Aws::Vector<AttackSummary>&& value) { m_attackSummaries = std::move(value); }

    /**
     * <p>The attack information for the specified time range.</p>
     */
    inline ListAttacksResult& WithAttackSummaries(const Aws::Vector<AttackSummary>& value) { SetAttackSummaries(value); return *this;}

    /**
     * <p>The attack information for the specified time range.</p>
     */
    inline ListAttacksResult& WithAttackSummaries(Aws::Vector<AttackSummary>&& value) { SetAttackSummaries(std::move(value)); return *this;}

    /**
     * <p>The attack information for the specified time range.</p>
     */
    inline ListAttacksResult& AddAttackSummaries(const AttackSummary& value) { m_attackSummaries.push_back(value); return *this; }

    /**
     * <p>The attack information for the specified time range.</p>
     */
    inline ListAttacksResult& AddAttackSummaries(AttackSummary&& value) { m_attackSummaries.push_back(std::move(value)); return *this; }


    /**
     * <p>The token returned by a previous call to indicate that there is more data
     * available. If not null, more results are available. Pass this value for the
     * <code>NextMarker</code> parameter in a subsequent call to
     * <code>ListAttacks</code> to retrieve the next set of items.</p> <p>Shield
     * Advanced might return the list of <a>AttackSummary</a> objects in batches
     * smaller than the number specified by MaxResults. If there are more attack
     * summary objects to return, Shield Advanced will always also return a
     * <code>NextToken</code>.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The token returned by a previous call to indicate that there is more data
     * available. If not null, more results are available. Pass this value for the
     * <code>NextMarker</code> parameter in a subsequent call to
     * <code>ListAttacks</code> to retrieve the next set of items.</p> <p>Shield
     * Advanced might return the list of <a>AttackSummary</a> objects in batches
     * smaller than the number specified by MaxResults. If there are more attack
     * summary objects to return, Shield Advanced will always also return a
     * <code>NextToken</code>.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>The token returned by a previous call to indicate that there is more data
     * available. If not null, more results are available. Pass this value for the
     * <code>NextMarker</code> parameter in a subsequent call to
     * <code>ListAttacks</code> to retrieve the next set of items.</p> <p>Shield
     * Advanced might return the list of <a>AttackSummary</a> objects in batches
     * smaller than the number specified by MaxResults. If there are more attack
     * summary objects to return, Shield Advanced will always also return a
     * <code>NextToken</code>.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>The token returned by a previous call to indicate that there is more data
     * available. If not null, more results are available. Pass this value for the
     * <code>NextMarker</code> parameter in a subsequent call to
     * <code>ListAttacks</code> to retrieve the next set of items.</p> <p>Shield
     * Advanced might return the list of <a>AttackSummary</a> objects in batches
     * smaller than the number specified by MaxResults. If there are more attack
     * summary objects to return, Shield Advanced will always also return a
     * <code>NextToken</code>.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>The token returned by a previous call to indicate that there is more data
     * available. If not null, more results are available. Pass this value for the
     * <code>NextMarker</code> parameter in a subsequent call to
     * <code>ListAttacks</code> to retrieve the next set of items.</p> <p>Shield
     * Advanced might return the list of <a>AttackSummary</a> objects in batches
     * smaller than the number specified by MaxResults. If there are more attack
     * summary objects to return, Shield Advanced will always also return a
     * <code>NextToken</code>.</p>
     */
    inline ListAttacksResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The token returned by a previous call to indicate that there is more data
     * available. If not null, more results are available. Pass this value for the
     * <code>NextMarker</code> parameter in a subsequent call to
     * <code>ListAttacks</code> to retrieve the next set of items.</p> <p>Shield
     * Advanced might return the list of <a>AttackSummary</a> objects in batches
     * smaller than the number specified by MaxResults. If there are more attack
     * summary objects to return, Shield Advanced will always also return a
     * <code>NextToken</code>.</p>
     */
    inline ListAttacksResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The token returned by a previous call to indicate that there is more data
     * available. If not null, more results are available. Pass this value for the
     * <code>NextMarker</code> parameter in a subsequent call to
     * <code>ListAttacks</code> to retrieve the next set of items.</p> <p>Shield
     * Advanced might return the list of <a>AttackSummary</a> objects in batches
     * smaller than the number specified by MaxResults. If there are more attack
     * summary objects to return, Shield Advanced will always also return a
     * <code>NextToken</code>.</p>
     */
    inline ListAttacksResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<AttackSummary> m_attackSummaries;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace Shield
} // namespace Aws
