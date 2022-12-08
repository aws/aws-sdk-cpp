/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/resiliencehub/ResilienceHub_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/resiliencehub/model/AlarmRecommendation.h>
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
namespace ResilienceHub
{
namespace Model
{
  class ListAlarmRecommendationsResult
  {
  public:
    AWS_RESILIENCEHUB_API ListAlarmRecommendationsResult();
    AWS_RESILIENCEHUB_API ListAlarmRecommendationsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_RESILIENCEHUB_API ListAlarmRecommendationsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The alarm recommendations for an AWS Resilience Hub application, returned as
     * an object. This object includes application component names, descriptions,
     * information about whether a recommendation has already been implemented or not,
     * prerequisites, and more.</p>
     */
    inline const Aws::Vector<AlarmRecommendation>& GetAlarmRecommendations() const{ return m_alarmRecommendations; }

    /**
     * <p>The alarm recommendations for an AWS Resilience Hub application, returned as
     * an object. This object includes application component names, descriptions,
     * information about whether a recommendation has already been implemented or not,
     * prerequisites, and more.</p>
     */
    inline void SetAlarmRecommendations(const Aws::Vector<AlarmRecommendation>& value) { m_alarmRecommendations = value; }

    /**
     * <p>The alarm recommendations for an AWS Resilience Hub application, returned as
     * an object. This object includes application component names, descriptions,
     * information about whether a recommendation has already been implemented or not,
     * prerequisites, and more.</p>
     */
    inline void SetAlarmRecommendations(Aws::Vector<AlarmRecommendation>&& value) { m_alarmRecommendations = std::move(value); }

    /**
     * <p>The alarm recommendations for an AWS Resilience Hub application, returned as
     * an object. This object includes application component names, descriptions,
     * information about whether a recommendation has already been implemented or not,
     * prerequisites, and more.</p>
     */
    inline ListAlarmRecommendationsResult& WithAlarmRecommendations(const Aws::Vector<AlarmRecommendation>& value) { SetAlarmRecommendations(value); return *this;}

    /**
     * <p>The alarm recommendations for an AWS Resilience Hub application, returned as
     * an object. This object includes application component names, descriptions,
     * information about whether a recommendation has already been implemented or not,
     * prerequisites, and more.</p>
     */
    inline ListAlarmRecommendationsResult& WithAlarmRecommendations(Aws::Vector<AlarmRecommendation>&& value) { SetAlarmRecommendations(std::move(value)); return *this;}

    /**
     * <p>The alarm recommendations for an AWS Resilience Hub application, returned as
     * an object. This object includes application component names, descriptions,
     * information about whether a recommendation has already been implemented or not,
     * prerequisites, and more.</p>
     */
    inline ListAlarmRecommendationsResult& AddAlarmRecommendations(const AlarmRecommendation& value) { m_alarmRecommendations.push_back(value); return *this; }

    /**
     * <p>The alarm recommendations for an AWS Resilience Hub application, returned as
     * an object. This object includes application component names, descriptions,
     * information about whether a recommendation has already been implemented or not,
     * prerequisites, and more.</p>
     */
    inline ListAlarmRecommendationsResult& AddAlarmRecommendations(AlarmRecommendation&& value) { m_alarmRecommendations.push_back(std::move(value)); return *this; }


    /**
     * <p>The token for the next set of results, or null if there are no more
     * results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The token for the next set of results, or null if there are no more
     * results.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>The token for the next set of results, or null if there are no more
     * results.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>The token for the next set of results, or null if there are no more
     * results.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>The token for the next set of results, or null if there are no more
     * results.</p>
     */
    inline ListAlarmRecommendationsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The token for the next set of results, or null if there are no more
     * results.</p>
     */
    inline ListAlarmRecommendationsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The token for the next set of results, or null if there are no more
     * results.</p>
     */
    inline ListAlarmRecommendationsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<AlarmRecommendation> m_alarmRecommendations;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace ResilienceHub
} // namespace Aws
