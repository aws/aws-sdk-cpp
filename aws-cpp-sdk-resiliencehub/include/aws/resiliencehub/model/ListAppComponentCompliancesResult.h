/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/resiliencehub/ResilienceHub_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/resiliencehub/model/AppComponentCompliance.h>
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
  class ListAppComponentCompliancesResult
  {
  public:
    AWS_RESILIENCEHUB_API ListAppComponentCompliancesResult();
    AWS_RESILIENCEHUB_API ListAppComponentCompliancesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_RESILIENCEHUB_API ListAppComponentCompliancesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The compliances for an AWS Resilience Hub application component, returned as
     * an object. This object contains component names, compliances, costs, resiliency
     * scores, outage scores, and more.</p>
     */
    inline const Aws::Vector<AppComponentCompliance>& GetComponentCompliances() const{ return m_componentCompliances; }

    /**
     * <p>The compliances for an AWS Resilience Hub application component, returned as
     * an object. This object contains component names, compliances, costs, resiliency
     * scores, outage scores, and more.</p>
     */
    inline void SetComponentCompliances(const Aws::Vector<AppComponentCompliance>& value) { m_componentCompliances = value; }

    /**
     * <p>The compliances for an AWS Resilience Hub application component, returned as
     * an object. This object contains component names, compliances, costs, resiliency
     * scores, outage scores, and more.</p>
     */
    inline void SetComponentCompliances(Aws::Vector<AppComponentCompliance>&& value) { m_componentCompliances = std::move(value); }

    /**
     * <p>The compliances for an AWS Resilience Hub application component, returned as
     * an object. This object contains component names, compliances, costs, resiliency
     * scores, outage scores, and more.</p>
     */
    inline ListAppComponentCompliancesResult& WithComponentCompliances(const Aws::Vector<AppComponentCompliance>& value) { SetComponentCompliances(value); return *this;}

    /**
     * <p>The compliances for an AWS Resilience Hub application component, returned as
     * an object. This object contains component names, compliances, costs, resiliency
     * scores, outage scores, and more.</p>
     */
    inline ListAppComponentCompliancesResult& WithComponentCompliances(Aws::Vector<AppComponentCompliance>&& value) { SetComponentCompliances(std::move(value)); return *this;}

    /**
     * <p>The compliances for an AWS Resilience Hub application component, returned as
     * an object. This object contains component names, compliances, costs, resiliency
     * scores, outage scores, and more.</p>
     */
    inline ListAppComponentCompliancesResult& AddComponentCompliances(const AppComponentCompliance& value) { m_componentCompliances.push_back(value); return *this; }

    /**
     * <p>The compliances for an AWS Resilience Hub application component, returned as
     * an object. This object contains component names, compliances, costs, resiliency
     * scores, outage scores, and more.</p>
     */
    inline ListAppComponentCompliancesResult& AddComponentCompliances(AppComponentCompliance&& value) { m_componentCompliances.push_back(std::move(value)); return *this; }


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
    inline ListAppComponentCompliancesResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The token for the next set of results, or null if there are no more
     * results.</p>
     */
    inline ListAppComponentCompliancesResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The token for the next set of results, or null if there are no more
     * results.</p>
     */
    inline ListAppComponentCompliancesResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<AppComponentCompliance> m_componentCompliances;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace ResilienceHub
} // namespace Aws
