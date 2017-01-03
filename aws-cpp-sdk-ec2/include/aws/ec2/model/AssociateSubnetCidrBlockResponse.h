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
#include <aws/ec2/model/SubnetIpv6CidrBlockAssociation.h>
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
  class AWS_EC2_API AssociateSubnetCidrBlockResponse
  {
  public:
    AssociateSubnetCidrBlockResponse();
    AssociateSubnetCidrBlockResponse(const AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AssociateSubnetCidrBlockResponse& operator=(const AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);

    /**
     * <p>The ID of the subnet.</p>
     */
    inline const Aws::String& GetSubnetId() const{ return m_subnetId; }

    /**
     * <p>The ID of the subnet.</p>
     */
    inline void SetSubnetId(const Aws::String& value) { m_subnetId = value; }

    /**
     * <p>The ID of the subnet.</p>
     */
    inline void SetSubnetId(Aws::String&& value) { m_subnetId = value; }

    /**
     * <p>The ID of the subnet.</p>
     */
    inline void SetSubnetId(const char* value) { m_subnetId.assign(value); }

    /**
     * <p>The ID of the subnet.</p>
     */
    inline AssociateSubnetCidrBlockResponse& WithSubnetId(const Aws::String& value) { SetSubnetId(value); return *this;}

    /**
     * <p>The ID of the subnet.</p>
     */
    inline AssociateSubnetCidrBlockResponse& WithSubnetId(Aws::String&& value) { SetSubnetId(value); return *this;}

    /**
     * <p>The ID of the subnet.</p>
     */
    inline AssociateSubnetCidrBlockResponse& WithSubnetId(const char* value) { SetSubnetId(value); return *this;}

    /**
     * <p>Information about the IPv6 CIDR block association.</p>
     */
    inline const SubnetIpv6CidrBlockAssociation& GetIpv6CidrBlockAssociation() const{ return m_ipv6CidrBlockAssociation; }

    /**
     * <p>Information about the IPv6 CIDR block association.</p>
     */
    inline void SetIpv6CidrBlockAssociation(const SubnetIpv6CidrBlockAssociation& value) { m_ipv6CidrBlockAssociation = value; }

    /**
     * <p>Information about the IPv6 CIDR block association.</p>
     */
    inline void SetIpv6CidrBlockAssociation(SubnetIpv6CidrBlockAssociation&& value) { m_ipv6CidrBlockAssociation = value; }

    /**
     * <p>Information about the IPv6 CIDR block association.</p>
     */
    inline AssociateSubnetCidrBlockResponse& WithIpv6CidrBlockAssociation(const SubnetIpv6CidrBlockAssociation& value) { SetIpv6CidrBlockAssociation(value); return *this;}

    /**
     * <p>Information about the IPv6 CIDR block association.</p>
     */
    inline AssociateSubnetCidrBlockResponse& WithIpv6CidrBlockAssociation(SubnetIpv6CidrBlockAssociation&& value) { SetIpv6CidrBlockAssociation(value); return *this;}

    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }

    
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }

    
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = value; }

    
    inline AssociateSubnetCidrBlockResponse& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}

    
    inline AssociateSubnetCidrBlockResponse& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(value); return *this;}

  private:
    Aws::String m_subnetId;
    SubnetIpv6CidrBlockAssociation m_ipv6CidrBlockAssociation;
    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws