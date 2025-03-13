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
  class CreateContainerFleetResult
  {
  public:
    AWS_GAMELIFT_API CreateContainerFleetResult() = default;
    AWS_GAMELIFT_API CreateContainerFleetResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_GAMELIFT_API CreateContainerFleetResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The properties for the new container fleet, including current status. All
     * fleets are initially placed in <code>PENDING</code> status. </p>
     */
    inline const ContainerFleet& GetContainerFleet() const { return m_containerFleet; }
    template<typename ContainerFleetT = ContainerFleet>
    void SetContainerFleet(ContainerFleetT&& value) { m_containerFleetHasBeenSet = true; m_containerFleet = std::forward<ContainerFleetT>(value); }
    template<typename ContainerFleetT = ContainerFleet>
    CreateContainerFleetResult& WithContainerFleet(ContainerFleetT&& value) { SetContainerFleet(std::forward<ContainerFleetT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    CreateContainerFleetResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
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
