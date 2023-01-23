/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iot/IoT_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/iot/model/FleetMetricNameAndArn.h>
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
namespace IoT
{
namespace Model
{
  class ListFleetMetricsResult
  {
  public:
    AWS_IOT_API ListFleetMetricsResult();
    AWS_IOT_API ListFleetMetricsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_IOT_API ListFleetMetricsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The list of fleet metrics objects.</p>
     */
    inline const Aws::Vector<FleetMetricNameAndArn>& GetFleetMetrics() const{ return m_fleetMetrics; }

    /**
     * <p>The list of fleet metrics objects.</p>
     */
    inline void SetFleetMetrics(const Aws::Vector<FleetMetricNameAndArn>& value) { m_fleetMetrics = value; }

    /**
     * <p>The list of fleet metrics objects.</p>
     */
    inline void SetFleetMetrics(Aws::Vector<FleetMetricNameAndArn>&& value) { m_fleetMetrics = std::move(value); }

    /**
     * <p>The list of fleet metrics objects.</p>
     */
    inline ListFleetMetricsResult& WithFleetMetrics(const Aws::Vector<FleetMetricNameAndArn>& value) { SetFleetMetrics(value); return *this;}

    /**
     * <p>The list of fleet metrics objects.</p>
     */
    inline ListFleetMetricsResult& WithFleetMetrics(Aws::Vector<FleetMetricNameAndArn>&& value) { SetFleetMetrics(std::move(value)); return *this;}

    /**
     * <p>The list of fleet metrics objects.</p>
     */
    inline ListFleetMetricsResult& AddFleetMetrics(const FleetMetricNameAndArn& value) { m_fleetMetrics.push_back(value); return *this; }

    /**
     * <p>The list of fleet metrics objects.</p>
     */
    inline ListFleetMetricsResult& AddFleetMetrics(FleetMetricNameAndArn&& value) { m_fleetMetrics.push_back(std::move(value)); return *this; }


    /**
     * <p>The token for the next set of results. Will not be returned if the operation
     * has returned all results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The token for the next set of results. Will not be returned if the operation
     * has returned all results.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>The token for the next set of results. Will not be returned if the operation
     * has returned all results.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>The token for the next set of results. Will not be returned if the operation
     * has returned all results.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>The token for the next set of results. Will not be returned if the operation
     * has returned all results.</p>
     */
    inline ListFleetMetricsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The token for the next set of results. Will not be returned if the operation
     * has returned all results.</p>
     */
    inline ListFleetMetricsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The token for the next set of results. Will not be returned if the operation
     * has returned all results.</p>
     */
    inline ListFleetMetricsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<FleetMetricNameAndArn> m_fleetMetrics;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace IoT
} // namespace Aws
