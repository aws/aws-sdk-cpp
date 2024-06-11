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
    AWS_GAMELIFT_API DescribeVpcPeeringConnectionsResult();
    AWS_GAMELIFT_API DescribeVpcPeeringConnectionsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_GAMELIFT_API DescribeVpcPeeringConnectionsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A collection of VPC peering connection records that match the request.</p>
     */
    inline const Aws::Vector<VpcPeeringConnection>& GetVpcPeeringConnections() const{ return m_vpcPeeringConnections; }
    inline void SetVpcPeeringConnections(const Aws::Vector<VpcPeeringConnection>& value) { m_vpcPeeringConnections = value; }
    inline void SetVpcPeeringConnections(Aws::Vector<VpcPeeringConnection>&& value) { m_vpcPeeringConnections = std::move(value); }
    inline DescribeVpcPeeringConnectionsResult& WithVpcPeeringConnections(const Aws::Vector<VpcPeeringConnection>& value) { SetVpcPeeringConnections(value); return *this;}
    inline DescribeVpcPeeringConnectionsResult& WithVpcPeeringConnections(Aws::Vector<VpcPeeringConnection>&& value) { SetVpcPeeringConnections(std::move(value)); return *this;}
    inline DescribeVpcPeeringConnectionsResult& AddVpcPeeringConnections(const VpcPeeringConnection& value) { m_vpcPeeringConnections.push_back(value); return *this; }
    inline DescribeVpcPeeringConnectionsResult& AddVpcPeeringConnections(VpcPeeringConnection&& value) { m_vpcPeeringConnections.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline DescribeVpcPeeringConnectionsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline DescribeVpcPeeringConnectionsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline DescribeVpcPeeringConnectionsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<VpcPeeringConnection> m_vpcPeeringConnections;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace GameLift
} // namespace Aws
