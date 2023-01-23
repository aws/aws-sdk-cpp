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
  class AcceptVpcPeeringConnectionResponse
  {
  public:
    AWS_EC2_API AcceptVpcPeeringConnectionResponse();
    AWS_EC2_API AcceptVpcPeeringConnectionResponse(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_EC2_API AcceptVpcPeeringConnectionResponse& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    /**
     * <p>Information about the VPC peering connection.</p>
     */
    inline const VpcPeeringConnection& GetVpcPeeringConnection() const{ return m_vpcPeeringConnection; }

    /**
     * <p>Information about the VPC peering connection.</p>
     */
    inline void SetVpcPeeringConnection(const VpcPeeringConnection& value) { m_vpcPeeringConnection = value; }

    /**
     * <p>Information about the VPC peering connection.</p>
     */
    inline void SetVpcPeeringConnection(VpcPeeringConnection&& value) { m_vpcPeeringConnection = std::move(value); }

    /**
     * <p>Information about the VPC peering connection.</p>
     */
    inline AcceptVpcPeeringConnectionResponse& WithVpcPeeringConnection(const VpcPeeringConnection& value) { SetVpcPeeringConnection(value); return *this;}

    /**
     * <p>Information about the VPC peering connection.</p>
     */
    inline AcceptVpcPeeringConnectionResponse& WithVpcPeeringConnection(VpcPeeringConnection&& value) { SetVpcPeeringConnection(std::move(value)); return *this;}


    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }

    
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }

    
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = std::move(value); }

    
    inline AcceptVpcPeeringConnectionResponse& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}

    
    inline AcceptVpcPeeringConnectionResponse& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(std::move(value)); return *this;}

  private:

    VpcPeeringConnection m_vpcPeeringConnection;

    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
