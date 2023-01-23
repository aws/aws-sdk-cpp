/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/ec2/model/IpamPoolAllocation.h>
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
  class AllocateIpamPoolCidrResponse
  {
  public:
    AWS_EC2_API AllocateIpamPoolCidrResponse();
    AWS_EC2_API AllocateIpamPoolCidrResponse(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_EC2_API AllocateIpamPoolCidrResponse& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    /**
     * <p>Information about the allocation created.</p>
     */
    inline const IpamPoolAllocation& GetIpamPoolAllocation() const{ return m_ipamPoolAllocation; }

    /**
     * <p>Information about the allocation created.</p>
     */
    inline void SetIpamPoolAllocation(const IpamPoolAllocation& value) { m_ipamPoolAllocation = value; }

    /**
     * <p>Information about the allocation created.</p>
     */
    inline void SetIpamPoolAllocation(IpamPoolAllocation&& value) { m_ipamPoolAllocation = std::move(value); }

    /**
     * <p>Information about the allocation created.</p>
     */
    inline AllocateIpamPoolCidrResponse& WithIpamPoolAllocation(const IpamPoolAllocation& value) { SetIpamPoolAllocation(value); return *this;}

    /**
     * <p>Information about the allocation created.</p>
     */
    inline AllocateIpamPoolCidrResponse& WithIpamPoolAllocation(IpamPoolAllocation&& value) { SetIpamPoolAllocation(std::move(value)); return *this;}


    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }

    
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }

    
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = std::move(value); }

    
    inline AllocateIpamPoolCidrResponse& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}

    
    inline AllocateIpamPoolCidrResponse& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(std::move(value)); return *this;}

  private:

    IpamPoolAllocation m_ipamPoolAllocation;

    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
