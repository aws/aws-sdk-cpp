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
    AWS_IOT_API ListFleetMetricsResult() = default;
    AWS_IOT_API ListFleetMetricsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_IOT_API ListFleetMetricsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The list of fleet metrics objects.</p>
     */
    inline const Aws::Vector<FleetMetricNameAndArn>& GetFleetMetrics() const { return m_fleetMetrics; }
    template<typename FleetMetricsT = Aws::Vector<FleetMetricNameAndArn>>
    void SetFleetMetrics(FleetMetricsT&& value) { m_fleetMetricsHasBeenSet = true; m_fleetMetrics = std::forward<FleetMetricsT>(value); }
    template<typename FleetMetricsT = Aws::Vector<FleetMetricNameAndArn>>
    ListFleetMetricsResult& WithFleetMetrics(FleetMetricsT&& value) { SetFleetMetrics(std::forward<FleetMetricsT>(value)); return *this;}
    template<typename FleetMetricsT = FleetMetricNameAndArn>
    ListFleetMetricsResult& AddFleetMetrics(FleetMetricsT&& value) { m_fleetMetricsHasBeenSet = true; m_fleetMetrics.emplace_back(std::forward<FleetMetricsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The token for the next set of results. Will not be returned if the operation
     * has returned all results.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListFleetMetricsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListFleetMetricsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<FleetMetricNameAndArn> m_fleetMetrics;
    bool m_fleetMetricsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace IoT
} // namespace Aws
