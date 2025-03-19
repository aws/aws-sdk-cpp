/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/gamelift/GameLift_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/gamelift/model/FleetAttributes.h>
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
  class DescribeFleetAttributesResult
  {
  public:
    AWS_GAMELIFT_API DescribeFleetAttributesResult() = default;
    AWS_GAMELIFT_API DescribeFleetAttributesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_GAMELIFT_API DescribeFleetAttributesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A collection of objects containing attribute metadata for each requested
     * fleet ID. Attribute objects are returned only for fleets that currently
     * exist.</p>
     */
    inline const Aws::Vector<FleetAttributes>& GetFleetAttributes() const { return m_fleetAttributes; }
    template<typename FleetAttributesT = Aws::Vector<FleetAttributes>>
    void SetFleetAttributes(FleetAttributesT&& value) { m_fleetAttributesHasBeenSet = true; m_fleetAttributes = std::forward<FleetAttributesT>(value); }
    template<typename FleetAttributesT = Aws::Vector<FleetAttributes>>
    DescribeFleetAttributesResult& WithFleetAttributes(FleetAttributesT&& value) { SetFleetAttributes(std::forward<FleetAttributesT>(value)); return *this;}
    template<typename FleetAttributesT = FleetAttributes>
    DescribeFleetAttributesResult& AddFleetAttributes(FleetAttributesT&& value) { m_fleetAttributesHasBeenSet = true; m_fleetAttributes.emplace_back(std::forward<FleetAttributesT>(value)); return *this; }
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
    DescribeFleetAttributesResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    DescribeFleetAttributesResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<FleetAttributes> m_fleetAttributes;
    bool m_fleetAttributesHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace GameLift
} // namespace Aws
