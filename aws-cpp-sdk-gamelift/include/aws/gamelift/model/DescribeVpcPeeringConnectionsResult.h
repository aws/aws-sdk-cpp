/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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
   * <p>Represents the returned data in response to a request action.</p><p><h3>See
   * Also:</h3>   <a
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
     * <p>Collection of VPC peering connection records that match the request.</p>
     */
    inline const Aws::Vector<VpcPeeringConnection>& GetVpcPeeringConnections() const{ return m_vpcPeeringConnections; }

    /**
     * <p>Collection of VPC peering connection records that match the request.</p>
     */
    inline void SetVpcPeeringConnections(const Aws::Vector<VpcPeeringConnection>& value) { m_vpcPeeringConnections = value; }

    /**
     * <p>Collection of VPC peering connection records that match the request.</p>
     */
    inline void SetVpcPeeringConnections(Aws::Vector<VpcPeeringConnection>&& value) { m_vpcPeeringConnections = std::move(value); }

    /**
     * <p>Collection of VPC peering connection records that match the request.</p>
     */
    inline DescribeVpcPeeringConnectionsResult& WithVpcPeeringConnections(const Aws::Vector<VpcPeeringConnection>& value) { SetVpcPeeringConnections(value); return *this;}

    /**
     * <p>Collection of VPC peering connection records that match the request.</p>
     */
    inline DescribeVpcPeeringConnectionsResult& WithVpcPeeringConnections(Aws::Vector<VpcPeeringConnection>&& value) { SetVpcPeeringConnections(std::move(value)); return *this;}

    /**
     * <p>Collection of VPC peering connection records that match the request.</p>
     */
    inline DescribeVpcPeeringConnectionsResult& AddVpcPeeringConnections(const VpcPeeringConnection& value) { m_vpcPeeringConnections.push_back(value); return *this; }

    /**
     * <p>Collection of VPC peering connection records that match the request.</p>
     */
    inline DescribeVpcPeeringConnectionsResult& AddVpcPeeringConnections(VpcPeeringConnection&& value) { m_vpcPeeringConnections.push_back(std::move(value)); return *this; }

  private:

    Aws::Vector<VpcPeeringConnection> m_vpcPeeringConnections;
  };

} // namespace Model
} // namespace GameLift
} // namespace Aws
