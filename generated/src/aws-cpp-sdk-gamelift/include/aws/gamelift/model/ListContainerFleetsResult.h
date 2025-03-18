/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/gamelift/GameLift_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/gamelift/model/ContainerFleet.h>
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
  class ListContainerFleetsResult
  {
  public:
    AWS_GAMELIFT_API ListContainerFleetsResult() = default;
    AWS_GAMELIFT_API ListContainerFleetsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_GAMELIFT_API ListContainerFleetsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A collection of container fleet objects for all fleets that match the request
     * criteria.</p>
     */
    inline const Aws::Vector<ContainerFleet>& GetContainerFleets() const { return m_containerFleets; }
    template<typename ContainerFleetsT = Aws::Vector<ContainerFleet>>
    void SetContainerFleets(ContainerFleetsT&& value) { m_containerFleetsHasBeenSet = true; m_containerFleets = std::forward<ContainerFleetsT>(value); }
    template<typename ContainerFleetsT = Aws::Vector<ContainerFleet>>
    ListContainerFleetsResult& WithContainerFleets(ContainerFleetsT&& value) { SetContainerFleets(std::forward<ContainerFleetsT>(value)); return *this;}
    template<typename ContainerFleetsT = ContainerFleet>
    ListContainerFleetsResult& AddContainerFleets(ContainerFleetsT&& value) { m_containerFleetsHasBeenSet = true; m_containerFleets.emplace_back(std::forward<ContainerFleetsT>(value)); return *this; }
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
    ListContainerFleetsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListContainerFleetsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<ContainerFleet> m_containerFleets;
    bool m_containerFleetsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace GameLift
} // namespace Aws
