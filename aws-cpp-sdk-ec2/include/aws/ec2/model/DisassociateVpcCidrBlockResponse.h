﻿/*
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
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ec2/model/VpcIpv6CidrBlockAssociation.h>
#include <aws/ec2/model/ResponseMetadata.h>

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
  class AWS_EC2_API DisassociateVpcCidrBlockResponse
  {
  public:
    DisassociateVpcCidrBlockResponse();
    DisassociateVpcCidrBlockResponse(const AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    DisassociateVpcCidrBlockResponse& operator=(const AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);

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
    inline void SetVpcId(Aws::String&& value) { m_vpcId = value; }

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
    inline DisassociateVpcCidrBlockResponse& WithVpcId(Aws::String&& value) { SetVpcId(value); return *this;}

    /**
     * <p>The ID of the VPC.</p>
     */
    inline DisassociateVpcCidrBlockResponse& WithVpcId(const char* value) { SetVpcId(value); return *this;}

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
    inline void SetIpv6CidrBlockAssociation(VpcIpv6CidrBlockAssociation&& value) { m_ipv6CidrBlockAssociation = value; }

    /**
     * <p>Information about the IPv6 CIDR block association.</p>
     */
    inline DisassociateVpcCidrBlockResponse& WithIpv6CidrBlockAssociation(const VpcIpv6CidrBlockAssociation& value) { SetIpv6CidrBlockAssociation(value); return *this;}

    /**
     * <p>Information about the IPv6 CIDR block association.</p>
     */
    inline DisassociateVpcCidrBlockResponse& WithIpv6CidrBlockAssociation(VpcIpv6CidrBlockAssociation&& value) { SetIpv6CidrBlockAssociation(value); return *this;}

    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }

    
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }

    
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = value; }

    
    inline DisassociateVpcCidrBlockResponse& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}

    
    inline DisassociateVpcCidrBlockResponse& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(value); return *this;}

  private:
    Aws::String m_vpcId;
    VpcIpv6CidrBlockAssociation m_ipv6CidrBlockAssociation;
    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws