/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ec2/model/ResponseMetadata.h>
#include <aws/ec2/model/IpamDiscoveredResourceCidr.h>
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
  class GetIpamDiscoveredResourceCidrsResponse
  {
  public:
    AWS_EC2_API GetIpamDiscoveredResourceCidrsResponse();
    AWS_EC2_API GetIpamDiscoveredResourceCidrsResponse(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_EC2_API GetIpamDiscoveredResourceCidrsResponse& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    /**
     * <p>Discovered resource CIDRs.</p>
     */
    inline const Aws::Vector<IpamDiscoveredResourceCidr>& GetIpamDiscoveredResourceCidrs() const{ return m_ipamDiscoveredResourceCidrs; }

    /**
     * <p>Discovered resource CIDRs.</p>
     */
    inline void SetIpamDiscoveredResourceCidrs(const Aws::Vector<IpamDiscoveredResourceCidr>& value) { m_ipamDiscoveredResourceCidrs = value; }

    /**
     * <p>Discovered resource CIDRs.</p>
     */
    inline void SetIpamDiscoveredResourceCidrs(Aws::Vector<IpamDiscoveredResourceCidr>&& value) { m_ipamDiscoveredResourceCidrs = std::move(value); }

    /**
     * <p>Discovered resource CIDRs.</p>
     */
    inline GetIpamDiscoveredResourceCidrsResponse& WithIpamDiscoveredResourceCidrs(const Aws::Vector<IpamDiscoveredResourceCidr>& value) { SetIpamDiscoveredResourceCidrs(value); return *this;}

    /**
     * <p>Discovered resource CIDRs.</p>
     */
    inline GetIpamDiscoveredResourceCidrsResponse& WithIpamDiscoveredResourceCidrs(Aws::Vector<IpamDiscoveredResourceCidr>&& value) { SetIpamDiscoveredResourceCidrs(std::move(value)); return *this;}

    /**
     * <p>Discovered resource CIDRs.</p>
     */
    inline GetIpamDiscoveredResourceCidrsResponse& AddIpamDiscoveredResourceCidrs(const IpamDiscoveredResourceCidr& value) { m_ipamDiscoveredResourceCidrs.push_back(value); return *this; }

    /**
     * <p>Discovered resource CIDRs.</p>
     */
    inline GetIpamDiscoveredResourceCidrsResponse& AddIpamDiscoveredResourceCidrs(IpamDiscoveredResourceCidr&& value) { m_ipamDiscoveredResourceCidrs.push_back(std::move(value)); return *this; }


    /**
     * <p>Specify the pagination token from a previous request to retrieve the next
     * page of results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>Specify the pagination token from a previous request to retrieve the next
     * page of results.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>Specify the pagination token from a previous request to retrieve the next
     * page of results.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>Specify the pagination token from a previous request to retrieve the next
     * page of results.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>Specify the pagination token from a previous request to retrieve the next
     * page of results.</p>
     */
    inline GetIpamDiscoveredResourceCidrsResponse& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>Specify the pagination token from a previous request to retrieve the next
     * page of results.</p>
     */
    inline GetIpamDiscoveredResourceCidrsResponse& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>Specify the pagination token from a previous request to retrieve the next
     * page of results.</p>
     */
    inline GetIpamDiscoveredResourceCidrsResponse& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }

    
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }

    
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = std::move(value); }

    
    inline GetIpamDiscoveredResourceCidrsResponse& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}

    
    inline GetIpamDiscoveredResourceCidrsResponse& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(std::move(value)); return *this;}

  private:

    Aws::Vector<IpamDiscoveredResourceCidr> m_ipamDiscoveredResourceCidrs;

    Aws::String m_nextToken;

    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
