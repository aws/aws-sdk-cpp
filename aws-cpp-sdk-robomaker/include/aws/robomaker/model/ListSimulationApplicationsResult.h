/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/robomaker/RoboMaker_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/robomaker/model/SimulationApplicationSummary.h>
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
namespace RoboMaker
{
namespace Model
{
  class ListSimulationApplicationsResult
  {
  public:
    AWS_ROBOMAKER_API ListSimulationApplicationsResult();
    AWS_ROBOMAKER_API ListSimulationApplicationsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_ROBOMAKER_API ListSimulationApplicationsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>A list of simulation application summaries that meet the criteria of the
     * request.</p>
     */
    inline const Aws::Vector<SimulationApplicationSummary>& GetSimulationApplicationSummaries() const{ return m_simulationApplicationSummaries; }

    /**
     * <p>A list of simulation application summaries that meet the criteria of the
     * request.</p>
     */
    inline void SetSimulationApplicationSummaries(const Aws::Vector<SimulationApplicationSummary>& value) { m_simulationApplicationSummaries = value; }

    /**
     * <p>A list of simulation application summaries that meet the criteria of the
     * request.</p>
     */
    inline void SetSimulationApplicationSummaries(Aws::Vector<SimulationApplicationSummary>&& value) { m_simulationApplicationSummaries = std::move(value); }

    /**
     * <p>A list of simulation application summaries that meet the criteria of the
     * request.</p>
     */
    inline ListSimulationApplicationsResult& WithSimulationApplicationSummaries(const Aws::Vector<SimulationApplicationSummary>& value) { SetSimulationApplicationSummaries(value); return *this;}

    /**
     * <p>A list of simulation application summaries that meet the criteria of the
     * request.</p>
     */
    inline ListSimulationApplicationsResult& WithSimulationApplicationSummaries(Aws::Vector<SimulationApplicationSummary>&& value) { SetSimulationApplicationSummaries(std::move(value)); return *this;}

    /**
     * <p>A list of simulation application summaries that meet the criteria of the
     * request.</p>
     */
    inline ListSimulationApplicationsResult& AddSimulationApplicationSummaries(const SimulationApplicationSummary& value) { m_simulationApplicationSummaries.push_back(value); return *this; }

    /**
     * <p>A list of simulation application summaries that meet the criteria of the
     * request.</p>
     */
    inline ListSimulationApplicationsResult& AddSimulationApplicationSummaries(SimulationApplicationSummary&& value) { m_simulationApplicationSummaries.push_back(std::move(value)); return *this; }


    /**
     * <p>If the previous paginated request did not return all of the remaining
     * results, the response object's <code>nextToken</code> parameter value is set to
     * a token. To retrieve the next set of results, call
     * <code>ListSimulationApplications</code> again and assign that token to the
     * request object's <code>nextToken</code> parameter. If there are no remaining
     * results, the previous response object's NextToken parameter is set to null. </p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>If the previous paginated request did not return all of the remaining
     * results, the response object's <code>nextToken</code> parameter value is set to
     * a token. To retrieve the next set of results, call
     * <code>ListSimulationApplications</code> again and assign that token to the
     * request object's <code>nextToken</code> parameter. If there are no remaining
     * results, the previous response object's NextToken parameter is set to null. </p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>If the previous paginated request did not return all of the remaining
     * results, the response object's <code>nextToken</code> parameter value is set to
     * a token. To retrieve the next set of results, call
     * <code>ListSimulationApplications</code> again and assign that token to the
     * request object's <code>nextToken</code> parameter. If there are no remaining
     * results, the previous response object's NextToken parameter is set to null. </p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>If the previous paginated request did not return all of the remaining
     * results, the response object's <code>nextToken</code> parameter value is set to
     * a token. To retrieve the next set of results, call
     * <code>ListSimulationApplications</code> again and assign that token to the
     * request object's <code>nextToken</code> parameter. If there are no remaining
     * results, the previous response object's NextToken parameter is set to null. </p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>If the previous paginated request did not return all of the remaining
     * results, the response object's <code>nextToken</code> parameter value is set to
     * a token. To retrieve the next set of results, call
     * <code>ListSimulationApplications</code> again and assign that token to the
     * request object's <code>nextToken</code> parameter. If there are no remaining
     * results, the previous response object's NextToken parameter is set to null. </p>
     */
    inline ListSimulationApplicationsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>If the previous paginated request did not return all of the remaining
     * results, the response object's <code>nextToken</code> parameter value is set to
     * a token. To retrieve the next set of results, call
     * <code>ListSimulationApplications</code> again and assign that token to the
     * request object's <code>nextToken</code> parameter. If there are no remaining
     * results, the previous response object's NextToken parameter is set to null. </p>
     */
    inline ListSimulationApplicationsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>If the previous paginated request did not return all of the remaining
     * results, the response object's <code>nextToken</code> parameter value is set to
     * a token. To retrieve the next set of results, call
     * <code>ListSimulationApplications</code> again and assign that token to the
     * request object's <code>nextToken</code> parameter. If there are no remaining
     * results, the previous response object's NextToken parameter is set to null. </p>
     */
    inline ListSimulationApplicationsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<SimulationApplicationSummary> m_simulationApplicationSummaries;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace RoboMaker
} // namespace Aws
