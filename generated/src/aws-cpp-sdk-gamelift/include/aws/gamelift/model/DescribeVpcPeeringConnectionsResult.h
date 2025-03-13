/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/gamelift/GameLift_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/gamelift/model/VpcPeeringConnection.h>
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
  class DescribeVpcPeeringConnectionsResult
  {
  public:
    AWS_GAMELIFT_API DescribeVpcPeeringConnectionsResult() = default;
    AWS_GAMELIFT_API DescribeVpcPeeringConnectionsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_GAMELIFT_API DescribeVpcPeeringConnectionsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A collection of VPC peering connection records that match the request.</p>
     */
    inline const Aws::Vector<VpcPeeringConnection>& GetVpcPeeringConnections() const { return m_vpcPeeringConnections; }
    template<typename VpcPeeringConnectionsT = Aws::Vector<VpcPeeringConnection>>
    void SetVpcPeeringConnections(VpcPeeringConnectionsT&& value) { m_vpcPeeringConnectionsHasBeenSet = true; m_vpcPeeringConnections = std::forward<VpcPeeringConnectionsT>(value); }
    template<typename VpcPeeringConnectionsT = Aws::Vector<VpcPeeringConnection>>
    DescribeVpcPeeringConnectionsResult& WithVpcPeeringConnections(VpcPeeringConnectionsT&& value) { SetVpcPeeringConnections(std::forward<VpcPeeringConnectionsT>(value)); return *this;}
    template<typename VpcPeeringConnectionsT = VpcPeeringConnection>
    DescribeVpcPeeringConnectionsResult& AddVpcPeeringConnections(VpcPeeringConnectionsT&& value) { m_vpcPeeringConnectionsHasBeenSet = true; m_vpcPeeringConnections.emplace_back(std::forward<VpcPeeringConnectionsT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    DescribeVpcPeeringConnectionsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<VpcPeeringConnection> m_vpcPeeringConnections;
    bool m_vpcPeeringConnectionsHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace GameLift
} // namespace Aws
