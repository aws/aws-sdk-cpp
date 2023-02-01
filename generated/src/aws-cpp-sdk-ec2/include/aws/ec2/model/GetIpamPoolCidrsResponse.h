/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ec2/model/ResponseMetadata.h>
#include <aws/ec2/model/IpamPoolCidr.h>
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
  class GetIpamPoolCidrsResponse
  {
  public:
    AWS_EC2_API GetIpamPoolCidrsResponse();
    AWS_EC2_API GetIpamPoolCidrsResponse(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_EC2_API GetIpamPoolCidrsResponse& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    /**
     * <p>Information about the CIDRs provisioned to an IPAM pool.</p>
     */
    inline const Aws::Vector<IpamPoolCidr>& GetIpamPoolCidrs() const{ return m_ipamPoolCidrs; }

    /**
     * <p>Information about the CIDRs provisioned to an IPAM pool.</p>
     */
    inline void SetIpamPoolCidrs(const Aws::Vector<IpamPoolCidr>& value) { m_ipamPoolCidrs = value; }

    /**
     * <p>Information about the CIDRs provisioned to an IPAM pool.</p>
     */
    inline void SetIpamPoolCidrs(Aws::Vector<IpamPoolCidr>&& value) { m_ipamPoolCidrs = std::move(value); }

    /**
     * <p>Information about the CIDRs provisioned to an IPAM pool.</p>
     */
    inline GetIpamPoolCidrsResponse& WithIpamPoolCidrs(const Aws::Vector<IpamPoolCidr>& value) { SetIpamPoolCidrs(value); return *this;}

    /**
     * <p>Information about the CIDRs provisioned to an IPAM pool.</p>
     */
    inline GetIpamPoolCidrsResponse& WithIpamPoolCidrs(Aws::Vector<IpamPoolCidr>&& value) { SetIpamPoolCidrs(std::move(value)); return *this;}

    /**
     * <p>Information about the CIDRs provisioned to an IPAM pool.</p>
     */
    inline GetIpamPoolCidrsResponse& AddIpamPoolCidrs(const IpamPoolCidr& value) { m_ipamPoolCidrs.push_back(value); return *this; }

    /**
     * <p>Information about the CIDRs provisioned to an IPAM pool.</p>
     */
    inline GetIpamPoolCidrsResponse& AddIpamPoolCidrs(IpamPoolCidr&& value) { m_ipamPoolCidrs.push_back(std::move(value)); return *this; }


    /**
     * <p>The token to use to retrieve the next page of results. This value is
     * <code>null</code> when there are no more results to return.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The token to use to retrieve the next page of results. This value is
     * <code>null</code> when there are no more results to return.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>The token to use to retrieve the next page of results. This value is
     * <code>null</code> when there are no more results to return.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>The token to use to retrieve the next page of results. This value is
     * <code>null</code> when there are no more results to return.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>The token to use to retrieve the next page of results. This value is
     * <code>null</code> when there are no more results to return.</p>
     */
    inline GetIpamPoolCidrsResponse& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The token to use to retrieve the next page of results. This value is
     * <code>null</code> when there are no more results to return.</p>
     */
    inline GetIpamPoolCidrsResponse& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The token to use to retrieve the next page of results. This value is
     * <code>null</code> when there are no more results to return.</p>
     */
    inline GetIpamPoolCidrsResponse& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }

    
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }

    
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = std::move(value); }

    
    inline GetIpamPoolCidrsResponse& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}

    
    inline GetIpamPoolCidrsResponse& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(std::move(value)); return *this;}

  private:

    Aws::Vector<IpamPoolCidr> m_ipamPoolCidrs;

    Aws::String m_nextToken;

    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
