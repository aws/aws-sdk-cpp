﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/gamelift/GameLift_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
  /**
   * <p>Represents the returned data in response to a request
   * operation.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/gamelift-2015-10-01/DescribeVpcPeeringConnectionsOutput">AWS
   * API Reference</a></p>
   */
  class AWS_GAMELIFT_API DescribeVpcPeeringConnectionsResult
  {
  public:
    DescribeVpcPeeringConnectionsResult();
    DescribeVpcPeeringConnectionsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    DescribeVpcPeeringConnectionsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>A collection of VPC peering connection records that match the request.</p>
     */
    inline const Aws::Vector<VpcPeeringConnection>& GetVpcPeeringConnections() const{ return m_vpcPeeringConnections; }

    /**
     * <p>A collection of VPC peering connection records that match the request.</p>
     */
    inline void SetVpcPeeringConnections(const Aws::Vector<VpcPeeringConnection>& value) { m_vpcPeeringConnections = value; }

    /**
     * <p>A collection of VPC peering connection records that match the request.</p>
     */
    inline void SetVpcPeeringConnections(Aws::Vector<VpcPeeringConnection>&& value) { m_vpcPeeringConnections = std::move(value); }

    /**
     * <p>A collection of VPC peering connection records that match the request.</p>
     */
    inline DescribeVpcPeeringConnectionsResult& WithVpcPeeringConnections(const Aws::Vector<VpcPeeringConnection>& value) { SetVpcPeeringConnections(value); return *this;}

    /**
     * <p>A collection of VPC peering connection records that match the request.</p>
     */
    inline DescribeVpcPeeringConnectionsResult& WithVpcPeeringConnections(Aws::Vector<VpcPeeringConnection>&& value) { SetVpcPeeringConnections(std::move(value)); return *this;}

    /**
     * <p>A collection of VPC peering connection records that match the request.</p>
     */
    inline DescribeVpcPeeringConnectionsResult& AddVpcPeeringConnections(const VpcPeeringConnection& value) { m_vpcPeeringConnections.push_back(value); return *this; }

    /**
     * <p>A collection of VPC peering connection records that match the request.</p>
     */
    inline DescribeVpcPeeringConnectionsResult& AddVpcPeeringConnections(VpcPeeringConnection&& value) { m_vpcPeeringConnections.push_back(std::move(value)); return *this; }

  private:

    Aws::Vector<VpcPeeringConnection> m_vpcPeeringConnections;
  };

} // namespace Model
} // namespace GameLift
} // namespace Aws
