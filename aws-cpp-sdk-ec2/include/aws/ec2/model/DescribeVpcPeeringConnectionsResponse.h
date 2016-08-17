/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ec2/model/ResponseMetadata.h>
#include <aws/ec2/model/VpcPeeringConnection.h>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Xml
{
  class XmlDocument;
} // namespace Xml
} // namespace Utils
namespace EC2
{
namespace Model
{
  /**
   * <p>Contains the output of DescribeVpcPeeringConnections.</p>
   */
  class AWS_EC2_API DescribeVpcPeeringConnectionsResponse
  {
  public:
    DescribeVpcPeeringConnectionsResponse();
    DescribeVpcPeeringConnectionsResponse(const AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    DescribeVpcPeeringConnectionsResponse& operator=(const AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);

    /**
     * <p>Information about the VPC peering connections.</p>
     */
    inline const Aws::Vector<VpcPeeringConnection>& GetVpcPeeringConnections() const{ return m_vpcPeeringConnections; }

    /**
     * <p>Information about the VPC peering connections.</p>
     */
    inline void SetVpcPeeringConnections(const Aws::Vector<VpcPeeringConnection>& value) { m_vpcPeeringConnections = value; }

    /**
     * <p>Information about the VPC peering connections.</p>
     */
    inline void SetVpcPeeringConnections(Aws::Vector<VpcPeeringConnection>&& value) { m_vpcPeeringConnections = value; }

    /**
     * <p>Information about the VPC peering connections.</p>
     */
    inline DescribeVpcPeeringConnectionsResponse& WithVpcPeeringConnections(const Aws::Vector<VpcPeeringConnection>& value) { SetVpcPeeringConnections(value); return *this;}

    /**
     * <p>Information about the VPC peering connections.</p>
     */
    inline DescribeVpcPeeringConnectionsResponse& WithVpcPeeringConnections(Aws::Vector<VpcPeeringConnection>&& value) { SetVpcPeeringConnections(value); return *this;}

    /**
     * <p>Information about the VPC peering connections.</p>
     */
    inline DescribeVpcPeeringConnectionsResponse& AddVpcPeeringConnections(const VpcPeeringConnection& value) { m_vpcPeeringConnections.push_back(value); return *this; }

    /**
     * <p>Information about the VPC peering connections.</p>
     */
    inline DescribeVpcPeeringConnectionsResponse& AddVpcPeeringConnections(VpcPeeringConnection&& value) { m_vpcPeeringConnections.push_back(value); return *this; }

    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }

    
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }

    
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = value; }

    
    inline DescribeVpcPeeringConnectionsResponse& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}

    
    inline DescribeVpcPeeringConnectionsResponse& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(value); return *this;}

  private:
    Aws::Vector<VpcPeeringConnection> m_vpcPeeringConnections;
    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws