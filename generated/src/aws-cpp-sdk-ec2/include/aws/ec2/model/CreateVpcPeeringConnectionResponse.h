/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/ec2/model/VpcPeeringConnection.h>
#include <aws/ec2/model/ResponseMetadata.h>
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
  class CreateVpcPeeringConnectionResponse
  {
  public:
    AWS_EC2_API CreateVpcPeeringConnectionResponse() = default;
    AWS_EC2_API CreateVpcPeeringConnectionResponse(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_EC2_API CreateVpcPeeringConnectionResponse& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    /**
     * <p>Information about the VPC peering connection.</p>
     */
    inline const VpcPeeringConnection& GetVpcPeeringConnection() const { return m_vpcPeeringConnection; }
    template<typename VpcPeeringConnectionT = VpcPeeringConnection>
    void SetVpcPeeringConnection(VpcPeeringConnectionT&& value) { m_vpcPeeringConnectionHasBeenSet = true; m_vpcPeeringConnection = std::forward<VpcPeeringConnectionT>(value); }
    template<typename VpcPeeringConnectionT = VpcPeeringConnection>
    CreateVpcPeeringConnectionResponse& WithVpcPeeringConnection(VpcPeeringConnectionT&& value) { SetVpcPeeringConnection(std::forward<VpcPeeringConnectionT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const ResponseMetadata& GetResponseMetadata() const { return m_responseMetadata; }
    template<typename ResponseMetadataT = ResponseMetadata>
    void SetResponseMetadata(ResponseMetadataT&& value) { m_responseMetadataHasBeenSet = true; m_responseMetadata = std::forward<ResponseMetadataT>(value); }
    template<typename ResponseMetadataT = ResponseMetadata>
    CreateVpcPeeringConnectionResponse& WithResponseMetadata(ResponseMetadataT&& value) { SetResponseMetadata(std::forward<ResponseMetadataT>(value)); return *this;}
    ///@}
  private:

    VpcPeeringConnection m_vpcPeeringConnection;
    bool m_vpcPeeringConnectionHasBeenSet = false;

    ResponseMetadata m_responseMetadata;
    bool m_responseMetadataHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
