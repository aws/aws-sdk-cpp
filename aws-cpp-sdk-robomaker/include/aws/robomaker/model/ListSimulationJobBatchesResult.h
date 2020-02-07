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
#include <aws/robomaker/RoboMaker_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/robomaker/model/SimulationJobBatchSummary.h>
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
  class AWS_ROBOMAKER_API ListSimulationJobBatchesResult
  {
  public:
    ListSimulationJobBatchesResult();
    ListSimulationJobBatchesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    ListSimulationJobBatchesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>A list of simulation job batch summaries.</p>
     */
    inline const Aws::Vector<SimulationJobBatchSummary>& GetSimulationJobBatchSummaries() const{ return m_simulationJobBatchSummaries; }

    /**
     * <p>A list of simulation job batch summaries.</p>
     */
    inline void SetSimulationJobBatchSummaries(const Aws::Vector<SimulationJobBatchSummary>& value) { m_simulationJobBatchSummaries = value; }

    /**
     * <p>A list of simulation job batch summaries.</p>
     */
    inline void SetSimulationJobBatchSummaries(Aws::Vector<SimulationJobBatchSummary>&& value) { m_simulationJobBatchSummaries = std::move(value); }

    /**
     * <p>A list of simulation job batch summaries.</p>
     */
    inline ListSimulationJobBatchesResult& WithSimulationJobBatchSummaries(const Aws::Vector<SimulationJobBatchSummary>& value) { SetSimulationJobBatchSummaries(value); return *this;}

    /**
     * <p>A list of simulation job batch summaries.</p>
     */
    inline ListSimulationJobBatchesResult& WithSimulationJobBatchSummaries(Aws::Vector<SimulationJobBatchSummary>&& value) { SetSimulationJobBatchSummaries(std::move(value)); return *this;}

    /**
     * <p>A list of simulation job batch summaries.</p>
     */
    inline ListSimulationJobBatchesResult& AddSimulationJobBatchSummaries(const SimulationJobBatchSummary& value) { m_simulationJobBatchSummaries.push_back(value); return *this; }

    /**
     * <p>A list of simulation job batch summaries.</p>
     */
    inline ListSimulationJobBatchesResult& AddSimulationJobBatchSummaries(SimulationJobBatchSummary&& value) { m_simulationJobBatchSummaries.push_back(std::move(value)); return *this; }


    /**
     * <p>The <code>nextToken</code> value to include in a future
     * <code>ListSimulationJobBatches</code> request. When the results of a
     * <code>ListSimulationJobBatches</code> request exceed <code>maxResults</code>,
     * this value can be used to retrieve the next page of results. This value is
     * <code>null</code> when there are no more results to return. </p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The <code>nextToken</code> value to include in a future
     * <code>ListSimulationJobBatches</code> request. When the results of a
     * <code>ListSimulationJobBatches</code> request exceed <code>maxResults</code>,
     * this value can be used to retrieve the next page of results. This value is
     * <code>null</code> when there are no more results to return. </p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>The <code>nextToken</code> value to include in a future
     * <code>ListSimulationJobBatches</code> request. When the results of a
     * <code>ListSimulationJobBatches</code> request exceed <code>maxResults</code>,
     * this value can be used to retrieve the next page of results. This value is
     * <code>null</code> when there are no more results to return. </p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>The <code>nextToken</code> value to include in a future
     * <code>ListSimulationJobBatches</code> request. When the results of a
     * <code>ListSimulationJobBatches</code> request exceed <code>maxResults</code>,
     * this value can be used to retrieve the next page of results. This value is
     * <code>null</code> when there are no more results to return. </p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>The <code>nextToken</code> value to include in a future
     * <code>ListSimulationJobBatches</code> request. When the results of a
     * <code>ListSimulationJobBatches</code> request exceed <code>maxResults</code>,
     * this value can be used to retrieve the next page of results. This value is
     * <code>null</code> when there are no more results to return. </p>
     */
    inline ListSimulationJobBatchesResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The <code>nextToken</code> value to include in a future
     * <code>ListSimulationJobBatches</code> request. When the results of a
     * <code>ListSimulationJobBatches</code> request exceed <code>maxResults</code>,
     * this value can be used to retrieve the next page of results. This value is
     * <code>null</code> when there are no more results to return. </p>
     */
    inline ListSimulationJobBatchesResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The <code>nextToken</code> value to include in a future
     * <code>ListSimulationJobBatches</code> request. When the results of a
     * <code>ListSimulationJobBatches</code> request exceed <code>maxResults</code>,
     * this value can be used to retrieve the next page of results. This value is
     * <code>null</code> when there are no more results to return. </p>
     */
    inline ListSimulationJobBatchesResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<SimulationJobBatchSummary> m_simulationJobBatchSummaries;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace RoboMaker
} // namespace Aws
