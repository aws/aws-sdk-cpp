/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/ec2/model/IpamResourceCidr.h>
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
  class ModifyIpamResourceCidrResponse
  {
  public:
    AWS_EC2_API ModifyIpamResourceCidrResponse();
    AWS_EC2_API ModifyIpamResourceCidrResponse(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_EC2_API ModifyIpamResourceCidrResponse& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    /**
     * <p>The CIDR of the resource.</p>
     */
    inline const IpamResourceCidr& GetIpamResourceCidr() const{ return m_ipamResourceCidr; }

    /**
     * <p>The CIDR of the resource.</p>
     */
    inline void SetIpamResourceCidr(const IpamResourceCidr& value) { m_ipamResourceCidr = value; }

    /**
     * <p>The CIDR of the resource.</p>
     */
    inline void SetIpamResourceCidr(IpamResourceCidr&& value) { m_ipamResourceCidr = std::move(value); }

    /**
     * <p>The CIDR of the resource.</p>
     */
    inline ModifyIpamResourceCidrResponse& WithIpamResourceCidr(const IpamResourceCidr& value) { SetIpamResourceCidr(value); return *this;}

    /**
     * <p>The CIDR of the resource.</p>
     */
    inline ModifyIpamResourceCidrResponse& WithIpamResourceCidr(IpamResourceCidr&& value) { SetIpamResourceCidr(std::move(value)); return *this;}


    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }

    
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }

    
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = std::move(value); }

    
    inline ModifyIpamResourceCidrResponse& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}

    
    inline ModifyIpamResourceCidrResponse& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(std::move(value)); return *this;}

  private:

    IpamResourceCidr m_ipamResourceCidr;

    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
