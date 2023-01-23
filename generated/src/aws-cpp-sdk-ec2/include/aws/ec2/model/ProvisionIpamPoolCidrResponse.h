/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/ec2/model/IpamPoolCidr.h>
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
  class ProvisionIpamPoolCidrResponse
  {
  public:
    AWS_EC2_API ProvisionIpamPoolCidrResponse();
    AWS_EC2_API ProvisionIpamPoolCidrResponse(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_EC2_API ProvisionIpamPoolCidrResponse& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    /**
     * <p>Information about the provisioned CIDR.</p>
     */
    inline const IpamPoolCidr& GetIpamPoolCidr() const{ return m_ipamPoolCidr; }

    /**
     * <p>Information about the provisioned CIDR.</p>
     */
    inline void SetIpamPoolCidr(const IpamPoolCidr& value) { m_ipamPoolCidr = value; }

    /**
     * <p>Information about the provisioned CIDR.</p>
     */
    inline void SetIpamPoolCidr(IpamPoolCidr&& value) { m_ipamPoolCidr = std::move(value); }

    /**
     * <p>Information about the provisioned CIDR.</p>
     */
    inline ProvisionIpamPoolCidrResponse& WithIpamPoolCidr(const IpamPoolCidr& value) { SetIpamPoolCidr(value); return *this;}

    /**
     * <p>Information about the provisioned CIDR.</p>
     */
    inline ProvisionIpamPoolCidrResponse& WithIpamPoolCidr(IpamPoolCidr&& value) { SetIpamPoolCidr(std::move(value)); return *this;}


    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }

    
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }

    
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = std::move(value); }

    
    inline ProvisionIpamPoolCidrResponse& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}

    
    inline ProvisionIpamPoolCidrResponse& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(std::move(value)); return *this;}

  private:

    IpamPoolCidr m_ipamPoolCidr;

    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
