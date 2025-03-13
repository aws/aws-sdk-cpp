/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/elasticmapreduce/EMR_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/elasticmapreduce/model/InstanceFleet.h>
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
namespace EMR
{
namespace Model
{
  class ListInstanceFleetsResult
  {
  public:
    AWS_EMR_API ListInstanceFleetsResult() = default;
    AWS_EMR_API ListInstanceFleetsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_EMR_API ListInstanceFleetsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The list of instance fleets for the cluster and given filters.</p>
     */
    inline const Aws::Vector<InstanceFleet>& GetInstanceFleets() const { return m_instanceFleets; }
    template<typename InstanceFleetsT = Aws::Vector<InstanceFleet>>
    void SetInstanceFleets(InstanceFleetsT&& value) { m_instanceFleetsHasBeenSet = true; m_instanceFleets = std::forward<InstanceFleetsT>(value); }
    template<typename InstanceFleetsT = Aws::Vector<InstanceFleet>>
    ListInstanceFleetsResult& WithInstanceFleets(InstanceFleetsT&& value) { SetInstanceFleets(std::forward<InstanceFleetsT>(value)); return *this;}
    template<typename InstanceFleetsT = InstanceFleet>
    ListInstanceFleetsResult& AddInstanceFleets(InstanceFleetsT&& value) { m_instanceFleetsHasBeenSet = true; m_instanceFleets.emplace_back(std::forward<InstanceFleetsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The pagination token that indicates the next set of results to retrieve.</p>
     */
    inline const Aws::String& GetMarker() const { return m_marker; }
    template<typename MarkerT = Aws::String>
    void SetMarker(MarkerT&& value) { m_markerHasBeenSet = true; m_marker = std::forward<MarkerT>(value); }
    template<typename MarkerT = Aws::String>
    ListInstanceFleetsResult& WithMarker(MarkerT&& value) { SetMarker(std::forward<MarkerT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListInstanceFleetsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<InstanceFleet> m_instanceFleets;
    bool m_instanceFleetsHasBeenSet = false;

    Aws::String m_marker;
    bool m_markerHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace EMR
} // namespace Aws
