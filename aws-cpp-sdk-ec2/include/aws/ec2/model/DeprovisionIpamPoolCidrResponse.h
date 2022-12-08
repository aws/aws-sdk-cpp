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
  class DeprovisionIpamPoolCidrResponse
  {
  public:
    AWS_EC2_API DeprovisionIpamPoolCidrResponse();
    AWS_EC2_API DeprovisionIpamPoolCidrResponse(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_EC2_API DeprovisionIpamPoolCidrResponse& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    /**
     * <p>The deprovisioned pool CIDR.</p>
     */
    inline const IpamPoolCidr& GetIpamPoolCidr() const{ return m_ipamPoolCidr; }

    /**
     * <p>The deprovisioned pool CIDR.</p>
     */
    inline void SetIpamPoolCidr(const IpamPoolCidr& value) { m_ipamPoolCidr = value; }

    /**
     * <p>The deprovisioned pool CIDR.</p>
     */
    inline void SetIpamPoolCidr(IpamPoolCidr&& value) { m_ipamPoolCidr = std::move(value); }

    /**
     * <p>The deprovisioned pool CIDR.</p>
     */
    inline DeprovisionIpamPoolCidrResponse& WithIpamPoolCidr(const IpamPoolCidr& value) { SetIpamPoolCidr(value); return *this;}

    /**
     * <p>The deprovisioned pool CIDR.</p>
     */
    inline DeprovisionIpamPoolCidrResponse& WithIpamPoolCidr(IpamPoolCidr&& value) { SetIpamPoolCidr(std::move(value)); return *this;}


    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }

    
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }

    
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = std::move(value); }

    
    inline DeprovisionIpamPoolCidrResponse& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}

    
    inline DeprovisionIpamPoolCidrResponse& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(std::move(value)); return *this;}

  private:

    IpamPoolCidr m_ipamPoolCidr;

    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
