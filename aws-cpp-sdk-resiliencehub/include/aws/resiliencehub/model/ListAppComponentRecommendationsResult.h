/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/resiliencehub/ResilienceHub_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/resiliencehub/model/ComponentRecommendation.h>
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
  class ListAppComponentRecommendationsResult
  {
  public:
    AWS_RESILIENCEHUB_API ListAppComponentRecommendationsResult();
    AWS_RESILIENCEHUB_API ListAppComponentRecommendationsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_RESILIENCEHUB_API ListAppComponentRecommendationsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The recommendations for an Resilience Hub application component, returned as
     * an object. This object contains component names, configuration recommendations,
     * and recommendation statuses.</p>
     */
    inline const Aws::Vector<ComponentRecommendation>& GetComponentRecommendations() const{ return m_componentRecommendations; }

    /**
     * <p>The recommendations for an Resilience Hub application component, returned as
     * an object. This object contains component names, configuration recommendations,
     * and recommendation statuses.</p>
     */
    inline void SetComponentRecommendations(const Aws::Vector<ComponentRecommendation>& value) { m_componentRecommendations = value; }

    /**
     * <p>The recommendations for an Resilience Hub application component, returned as
     * an object. This object contains component names, configuration recommendations,
     * and recommendation statuses.</p>
     */
    inline void SetComponentRecommendations(Aws::Vector<ComponentRecommendation>&& value) { m_componentRecommendations = std::move(value); }

    /**
     * <p>The recommendations for an Resilience Hub application component, returned as
     * an object. This object contains component names, configuration recommendations,
     * and recommendation statuses.</p>
     */
    inline ListAppComponentRecommendationsResult& WithComponentRecommendations(const Aws::Vector<ComponentRecommendation>& value) { SetComponentRecommendations(value); return *this;}

    /**
     * <p>The recommendations for an Resilience Hub application component, returned as
     * an object. This object contains component names, configuration recommendations,
     * and recommendation statuses.</p>
     */
    inline ListAppComponentRecommendationsResult& WithComponentRecommendations(Aws::Vector<ComponentRecommendation>&& value) { SetComponentRecommendations(std::move(value)); return *this;}

    /**
     * <p>The recommendations for an Resilience Hub application component, returned as
     * an object. This object contains component names, configuration recommendations,
     * and recommendation statuses.</p>
     */
    inline ListAppComponentRecommendationsResult& AddComponentRecommendations(const ComponentRecommendation& value) { m_componentRecommendations.push_back(value); return *this; }

    /**
     * <p>The recommendations for an Resilience Hub application component, returned as
     * an object. This object contains component names, configuration recommendations,
     * and recommendation statuses.</p>
     */
    inline ListAppComponentRecommendationsResult& AddComponentRecommendations(ComponentRecommendation&& value) { m_componentRecommendations.push_back(std::move(value)); return *this; }


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
    inline ListAppComponentRecommendationsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The token for the next set of results, or null if there are no more
     * results.</p>
     */
    inline ListAppComponentRecommendationsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The token for the next set of results, or null if there are no more
     * results.</p>
     */
    inline ListAppComponentRecommendationsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<ComponentRecommendation> m_componentRecommendations;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace ResilienceHub
} // namespace Aws
