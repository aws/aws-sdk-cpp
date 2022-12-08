/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codestar-notifications/CodeStarNotifications_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/codestar-notifications/model/TargetSummary.h>
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
namespace CodeStarNotifications
{
namespace Model
{
  class ListTargetsResult
  {
  public:
    AWS_CODESTARNOTIFICATIONS_API ListTargetsResult();
    AWS_CODESTARNOTIFICATIONS_API ListTargetsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CODESTARNOTIFICATIONS_API ListTargetsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The list of notification rule targets. </p>
     */
    inline const Aws::Vector<TargetSummary>& GetTargets() const{ return m_targets; }

    /**
     * <p>The list of notification rule targets. </p>
     */
    inline void SetTargets(const Aws::Vector<TargetSummary>& value) { m_targets = value; }

    /**
     * <p>The list of notification rule targets. </p>
     */
    inline void SetTargets(Aws::Vector<TargetSummary>&& value) { m_targets = std::move(value); }

    /**
     * <p>The list of notification rule targets. </p>
     */
    inline ListTargetsResult& WithTargets(const Aws::Vector<TargetSummary>& value) { SetTargets(value); return *this;}

    /**
     * <p>The list of notification rule targets. </p>
     */
    inline ListTargetsResult& WithTargets(Aws::Vector<TargetSummary>&& value) { SetTargets(std::move(value)); return *this;}

    /**
     * <p>The list of notification rule targets. </p>
     */
    inline ListTargetsResult& AddTargets(const TargetSummary& value) { m_targets.push_back(value); return *this; }

    /**
     * <p>The list of notification rule targets. </p>
     */
    inline ListTargetsResult& AddTargets(TargetSummary&& value) { m_targets.push_back(std::move(value)); return *this; }


    /**
     * <p>An enumeration token that can be used in a request to return the next batch
     * of results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>An enumeration token that can be used in a request to return the next batch
     * of results.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>An enumeration token that can be used in a request to return the next batch
     * of results.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>An enumeration token that can be used in a request to return the next batch
     * of results.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>An enumeration token that can be used in a request to return the next batch
     * of results.</p>
     */
    inline ListTargetsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>An enumeration token that can be used in a request to return the next batch
     * of results.</p>
     */
    inline ListTargetsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>An enumeration token that can be used in a request to return the next batch
     * of results.</p>
     */
    inline ListTargetsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<TargetSummary> m_targets;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace CodeStarNotifications
} // namespace Aws
