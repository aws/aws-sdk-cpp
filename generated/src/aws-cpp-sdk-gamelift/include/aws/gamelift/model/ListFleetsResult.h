﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/gamelift/GameLift_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace GameLift
{
namespace Model
{
  class ListFleetsResult
  {
  public:
    AWS_GAMELIFT_API ListFleetsResult() = default;
    AWS_GAMELIFT_API ListFleetsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_GAMELIFT_API ListFleetsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A set of fleet IDs that match the list request.</p>
     */
    inline const Aws::Vector<Aws::String>& GetFleetIds() const { return m_fleetIds; }
    template<typename FleetIdsT = Aws::Vector<Aws::String>>
    void SetFleetIds(FleetIdsT&& value) { m_fleetIdsHasBeenSet = true; m_fleetIds = std::forward<FleetIdsT>(value); }
    template<typename FleetIdsT = Aws::Vector<Aws::String>>
    ListFleetsResult& WithFleetIds(FleetIdsT&& value) { SetFleetIds(std::forward<FleetIdsT>(value)); return *this;}
    template<typename FleetIdsT = Aws::String>
    ListFleetsResult& AddFleetIds(FleetIdsT&& value) { m_fleetIdsHasBeenSet = true; m_fleetIds.emplace_back(std::forward<FleetIdsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A token that indicates where to resume retrieving results on the next call to
     * this operation. If no token is returned, these results represent the end of the
     * list.</p>
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

    Aws::Vector<Aws::String> m_fleetIds;
    bool m_fleetIdsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace GameLift
} // namespace Aws
