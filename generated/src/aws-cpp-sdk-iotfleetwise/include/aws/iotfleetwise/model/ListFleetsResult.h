/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotfleetwise/IoTFleetWise_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/iotfleetwise/model/FleetSummary.h>
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
namespace IoTFleetWise
{
namespace Model
{
  class ListFleetsResult
  {
  public:
    AWS_IOTFLEETWISE_API ListFleetsResult() = default;
    AWS_IOTFLEETWISE_API ListFleetsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_IOTFLEETWISE_API ListFleetsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p> A list of information for each fleet. </p>
     */
    inline const Aws::Vector<FleetSummary>& GetFleetSummaries() const { return m_fleetSummaries; }
    template<typename FleetSummariesT = Aws::Vector<FleetSummary>>
    void SetFleetSummaries(FleetSummariesT&& value) { m_fleetSummariesHasBeenSet = true; m_fleetSummaries = std::forward<FleetSummariesT>(value); }
    template<typename FleetSummariesT = Aws::Vector<FleetSummary>>
    ListFleetsResult& WithFleetSummaries(FleetSummariesT&& value) { SetFleetSummaries(std::forward<FleetSummariesT>(value)); return *this;}
    template<typename FleetSummariesT = FleetSummary>
    ListFleetsResult& AddFleetSummaries(FleetSummariesT&& value) { m_fleetSummariesHasBeenSet = true; m_fleetSummaries.emplace_back(std::forward<FleetSummariesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p> The token to retrieve the next set of results, or <code>null</code> if there
     * are no more results. </p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListFleetsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListFleetsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<FleetSummary> m_fleetSummaries;
    bool m_fleetSummariesHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTFleetWise
} // namespace Aws
