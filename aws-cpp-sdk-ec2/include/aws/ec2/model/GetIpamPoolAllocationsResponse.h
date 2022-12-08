/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ec2/model/ResponseMetadata.h>
#include <aws/ec2/model/IpamPoolAllocation.h>
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
  class GetIpamPoolAllocationsResponse
  {
  public:
    AWS_EC2_API GetIpamPoolAllocationsResponse();
    AWS_EC2_API GetIpamPoolAllocationsResponse(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_EC2_API GetIpamPoolAllocationsResponse& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    /**
     * <p>The IPAM pool allocations you want information on.</p>
     */
    inline const Aws::Vector<IpamPoolAllocation>& GetIpamPoolAllocations() const{ return m_ipamPoolAllocations; }

    /**
     * <p>The IPAM pool allocations you want information on.</p>
     */
    inline void SetIpamPoolAllocations(const Aws::Vector<IpamPoolAllocation>& value) { m_ipamPoolAllocations = value; }

    /**
     * <p>The IPAM pool allocations you want information on.</p>
     */
    inline void SetIpamPoolAllocations(Aws::Vector<IpamPoolAllocation>&& value) { m_ipamPoolAllocations = std::move(value); }

    /**
     * <p>The IPAM pool allocations you want information on.</p>
     */
    inline GetIpamPoolAllocationsResponse& WithIpamPoolAllocations(const Aws::Vector<IpamPoolAllocation>& value) { SetIpamPoolAllocations(value); return *this;}

    /**
     * <p>The IPAM pool allocations you want information on.</p>
     */
    inline GetIpamPoolAllocationsResponse& WithIpamPoolAllocations(Aws::Vector<IpamPoolAllocation>&& value) { SetIpamPoolAllocations(std::move(value)); return *this;}

    /**
     * <p>The IPAM pool allocations you want information on.</p>
     */
    inline GetIpamPoolAllocationsResponse& AddIpamPoolAllocations(const IpamPoolAllocation& value) { m_ipamPoolAllocations.push_back(value); return *this; }

    /**
     * <p>The IPAM pool allocations you want information on.</p>
     */
    inline GetIpamPoolAllocationsResponse& AddIpamPoolAllocations(IpamPoolAllocation&& value) { m_ipamPoolAllocations.push_back(std::move(value)); return *this; }


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
    inline GetIpamPoolAllocationsResponse& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The token to use to retrieve the next page of results. This value is
     * <code>null</code> when there are no more results to return.</p>
     */
    inline GetIpamPoolAllocationsResponse& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The token to use to retrieve the next page of results. This value is
     * <code>null</code> when there are no more results to return.</p>
     */
    inline GetIpamPoolAllocationsResponse& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }

    
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }

    
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = std::move(value); }

    
    inline GetIpamPoolAllocationsResponse& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}

    
    inline GetIpamPoolAllocationsResponse& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(std::move(value)); return *this;}

  private:

    Aws::Vector<IpamPoolAllocation> m_ipamPoolAllocations;

    Aws::String m_nextToken;

    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
