/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ec2/model/ResponseMetadata.h>
#include <aws/ec2/model/VpcPeeringConnection.h>
#include <utility>

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
  class DescribeVpcPeeringConnectionsResponse
  {
  public:
    AWS_EC2_API DescribeVpcPeeringConnectionsResponse() = default;
    AWS_EC2_API DescribeVpcPeeringConnectionsResponse(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_EC2_API DescribeVpcPeeringConnectionsResponse& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    /**
     * <p>Information about the VPC peering connections.</p>
     */
    inline const Aws::Vector<VpcPeeringConnection>& GetVpcPeeringConnections() const { return m_vpcPeeringConnections; }
    template<typename VpcPeeringConnectionsT = Aws::Vector<VpcPeeringConnection>>
    void SetVpcPeeringConnections(VpcPeeringConnectionsT&& value) { m_vpcPeeringConnectionsHasBeenSet = true; m_vpcPeeringConnections = std::forward<VpcPeeringConnectionsT>(value); }
    template<typename VpcPeeringConnectionsT = Aws::Vector<VpcPeeringConnection>>
    DescribeVpcPeeringConnectionsResponse& WithVpcPeeringConnections(VpcPeeringConnectionsT&& value) { SetVpcPeeringConnections(std::forward<VpcPeeringConnectionsT>(value)); return *this;}
    template<typename VpcPeeringConnectionsT = VpcPeeringConnection>
    DescribeVpcPeeringConnectionsResponse& AddVpcPeeringConnections(VpcPeeringConnectionsT&& value) { m_vpcPeeringConnectionsHasBeenSet = true; m_vpcPeeringConnections.emplace_back(std::forward<VpcPeeringConnectionsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The token to include in another request to get the next page of items. This
     * value is <code>null</code> when there are no more items to return.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    DescribeVpcPeeringConnectionsResponse& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const ResponseMetadata& GetResponseMetadata() const { return m_responseMetadata; }
    template<typename ResponseMetadataT = ResponseMetadata>
    void SetResponseMetadata(ResponseMetadataT&& value) { m_responseMetadataHasBeenSet = true; m_responseMetadata = std::forward<ResponseMetadataT>(value); }
    template<typename ResponseMetadataT = ResponseMetadata>
    DescribeVpcPeeringConnectionsResponse& WithResponseMetadata(ResponseMetadataT&& value) { SetResponseMetadata(std::forward<ResponseMetadataT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<VpcPeeringConnection> m_vpcPeeringConnections;
    bool m_vpcPeeringConnectionsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    ResponseMetadata m_responseMetadata;
    bool m_responseMetadataHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
