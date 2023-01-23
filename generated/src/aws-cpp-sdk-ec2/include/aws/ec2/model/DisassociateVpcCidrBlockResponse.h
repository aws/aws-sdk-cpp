/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/ec2/model/VpcIpv6CidrBlockAssociation.h>
#include <aws/ec2/model/VpcCidrBlockAssociation.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
  class DisassociateVpcCidrBlockResponse
  {
  public:
    AWS_EC2_API DisassociateVpcCidrBlockResponse();
    AWS_EC2_API DisassociateVpcCidrBlockResponse(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_EC2_API DisassociateVpcCidrBlockResponse& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    /**
     * <p>Information about the IPv6 CIDR block association.</p>
     */
    inline const VpcIpv6CidrBlockAssociation& GetIpv6CidrBlockAssociation() const{ return m_ipv6CidrBlockAssociation; }

    /**
     * <p>Information about the IPv6 CIDR block association.</p>
     */
    inline void SetIpv6CidrBlockAssociation(const VpcIpv6CidrBlockAssociation& value) { m_ipv6CidrBlockAssociation = value; }

    /**
     * <p>Information about the IPv6 CIDR block association.</p>
     */
    inline void SetIpv6CidrBlockAssociation(VpcIpv6CidrBlockAssociation&& value) { m_ipv6CidrBlockAssociation = std::move(value); }

    /**
     * <p>Information about the IPv6 CIDR block association.</p>
     */
    inline DisassociateVpcCidrBlockResponse& WithIpv6CidrBlockAssociation(const VpcIpv6CidrBlockAssociation& value) { SetIpv6CidrBlockAssociation(value); return *this;}

    /**
     * <p>Information about the IPv6 CIDR block association.</p>
     */
    inline DisassociateVpcCidrBlockResponse& WithIpv6CidrBlockAssociation(VpcIpv6CidrBlockAssociation&& value) { SetIpv6CidrBlockAssociation(std::move(value)); return *this;}


    /**
     * <p>Information about the IPv4 CIDR block association.</p>
     */
    inline const VpcCidrBlockAssociation& GetCidrBlockAssociation() const{ return m_cidrBlockAssociation; }

    /**
     * <p>Information about the IPv4 CIDR block association.</p>
     */
    inline void SetCidrBlockAssociation(const VpcCidrBlockAssociation& value) { m_cidrBlockAssociation = value; }

    /**
     * <p>Information about the IPv4 CIDR block association.</p>
     */
    inline void SetCidrBlockAssociation(VpcCidrBlockAssociation&& value) { m_cidrBlockAssociation = std::move(value); }

    /**
     * <p>Information about the IPv4 CIDR block association.</p>
     */
    inline DisassociateVpcCidrBlockResponse& WithCidrBlockAssociation(const VpcCidrBlockAssociation& value) { SetCidrBlockAssociation(value); return *this;}

    /**
     * <p>Information about the IPv4 CIDR block association.</p>
     */
    inline DisassociateVpcCidrBlockResponse& WithCidrBlockAssociation(VpcCidrBlockAssociation&& value) { SetCidrBlockAssociation(std::move(value)); return *this;}


    /**
     * <p>The ID of the VPC.</p>
     */
    inline const Aws::String& GetVpcId() const{ return m_vpcId; }

    /**
     * <p>The ID of the VPC.</p>
     */
    inline void SetVpcId(const Aws::String& value) { m_vpcId = value; }

    /**
     * <p>The ID of the VPC.</p>
     */
    inline void SetVpcId(Aws::String&& value) { m_vpcId = std::move(value); }

    /**
     * <p>The ID of the VPC.</p>
     */
    inline void SetVpcId(const char* value) { m_vpcId.assign(value); }

    /**
     * <p>The ID of the VPC.</p>
     */
    inline DisassociateVpcCidrBlockResponse& WithVpcId(const Aws::String& value) { SetVpcId(value); return *this;}

    /**
     * <p>The ID of the VPC.</p>
     */
    inline DisassociateVpcCidrBlockResponse& WithVpcId(Aws::String&& value) { SetVpcId(std::move(value)); return *this;}

    /**
     * <p>The ID of the VPC.</p>
     */
    inline DisassociateVpcCidrBlockResponse& WithVpcId(const char* value) { SetVpcId(value); return *this;}


    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }

    
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }

    
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = std::move(value); }

    
    inline DisassociateVpcCidrBlockResponse& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}

    
    inline DisassociateVpcCidrBlockResponse& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(std::move(value)); return *this;}

  private:

    VpcIpv6CidrBlockAssociation m_ipv6CidrBlockAssociation;

    VpcCidrBlockAssociation m_cidrBlockAssociation;

    Aws::String m_vpcId;

    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
