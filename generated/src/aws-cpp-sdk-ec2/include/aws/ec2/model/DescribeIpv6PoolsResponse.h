/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ec2/model/ResponseMetadata.h>
#include <aws/ec2/model/Ipv6Pool.h>
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
  class DescribeIpv6PoolsResponse
  {
  public:
    AWS_EC2_API DescribeIpv6PoolsResponse();
    AWS_EC2_API DescribeIpv6PoolsResponse(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_EC2_API DescribeIpv6PoolsResponse& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    /**
     * <p>Information about the IPv6 address pools.</p>
     */
    inline const Aws::Vector<Ipv6Pool>& GetIpv6Pools() const{ return m_ipv6Pools; }

    /**
     * <p>Information about the IPv6 address pools.</p>
     */
    inline void SetIpv6Pools(const Aws::Vector<Ipv6Pool>& value) { m_ipv6Pools = value; }

    /**
     * <p>Information about the IPv6 address pools.</p>
     */
    inline void SetIpv6Pools(Aws::Vector<Ipv6Pool>&& value) { m_ipv6Pools = std::move(value); }

    /**
     * <p>Information about the IPv6 address pools.</p>
     */
    inline DescribeIpv6PoolsResponse& WithIpv6Pools(const Aws::Vector<Ipv6Pool>& value) { SetIpv6Pools(value); return *this;}

    /**
     * <p>Information about the IPv6 address pools.</p>
     */
    inline DescribeIpv6PoolsResponse& WithIpv6Pools(Aws::Vector<Ipv6Pool>&& value) { SetIpv6Pools(std::move(value)); return *this;}

    /**
     * <p>Information about the IPv6 address pools.</p>
     */
    inline DescribeIpv6PoolsResponse& AddIpv6Pools(const Ipv6Pool& value) { m_ipv6Pools.push_back(value); return *this; }

    /**
     * <p>Information about the IPv6 address pools.</p>
     */
    inline DescribeIpv6PoolsResponse& AddIpv6Pools(Ipv6Pool&& value) { m_ipv6Pools.push_back(std::move(value)); return *this; }


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
    inline DescribeIpv6PoolsResponse& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The token to use to retrieve the next page of results. This value is
     * <code>null</code> when there are no more results to return.</p>
     */
    inline DescribeIpv6PoolsResponse& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The token to use to retrieve the next page of results. This value is
     * <code>null</code> when there are no more results to return.</p>
     */
    inline DescribeIpv6PoolsResponse& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }

    
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }

    
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = std::move(value); }

    
    inline DescribeIpv6PoolsResponse& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}

    
    inline DescribeIpv6PoolsResponse& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(std::move(value)); return *this;}

  private:

    Aws::Vector<Ipv6Pool> m_ipv6Pools;

    Aws::String m_nextToken;

    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
