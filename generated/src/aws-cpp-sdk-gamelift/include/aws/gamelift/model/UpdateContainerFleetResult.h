/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/gamelift/GameLift_EXPORTS.h>
#include <aws/gamelift/model/ContainerFleet.h>
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
  class UpdateContainerFleetResult
  {
  public:
    AWS_GAMELIFT_API UpdateContainerFleetResult() = default;
    AWS_GAMELIFT_API UpdateContainerFleetResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_GAMELIFT_API UpdateContainerFleetResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A collection of container fleet objects for all fleets that match the request
     * criteria.</p>
     */
    inline const ContainerFleet& GetContainerFleet() const { return m_containerFleet; }
    template<typename ContainerFleetT = ContainerFleet>
    void SetContainerFleet(ContainerFleetT&& value) { m_containerFleetHasBeenSet = true; m_containerFleet = std::forward<ContainerFleetT>(value); }
    template<typename ContainerFleetT = ContainerFleet>
    UpdateContainerFleetResult& WithContainerFleet(ContainerFleetT&& value) { SetContainerFleet(std::forward<ContainerFleetT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    UpdateContainerFleetResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    ContainerFleet m_containerFleet;
    bool m_containerFleetHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace GameLift
} // namespace Aws
