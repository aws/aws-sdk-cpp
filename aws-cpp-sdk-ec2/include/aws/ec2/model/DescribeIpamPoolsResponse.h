/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ec2/model/ResponseMetadata.h>
#include <aws/ec2/model/IpamPool.h>
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
  class DescribeIpamPoolsResponse
  {
  public:
    AWS_EC2_API DescribeIpamPoolsResponse();
    AWS_EC2_API DescribeIpamPoolsResponse(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_EC2_API DescribeIpamPoolsResponse& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


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
    inline DescribeIpamPoolsResponse& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The token to use to retrieve the next page of results. This value is
     * <code>null</code> when there are no more results to return.</p>
     */
    inline DescribeIpamPoolsResponse& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The token to use to retrieve the next page of results. This value is
     * <code>null</code> when there are no more results to return.</p>
     */
    inline DescribeIpamPoolsResponse& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p>Information about the IPAM pools.</p>
     */
    inline const Aws::Vector<IpamPool>& GetIpamPools() const{ return m_ipamPools; }

    /**
     * <p>Information about the IPAM pools.</p>
     */
    inline void SetIpamPools(const Aws::Vector<IpamPool>& value) { m_ipamPools = value; }

    /**
     * <p>Information about the IPAM pools.</p>
     */
    inline void SetIpamPools(Aws::Vector<IpamPool>&& value) { m_ipamPools = std::move(value); }

    /**
     * <p>Information about the IPAM pools.</p>
     */
    inline DescribeIpamPoolsResponse& WithIpamPools(const Aws::Vector<IpamPool>& value) { SetIpamPools(value); return *this;}

    /**
     * <p>Information about the IPAM pools.</p>
     */
    inline DescribeIpamPoolsResponse& WithIpamPools(Aws::Vector<IpamPool>&& value) { SetIpamPools(std::move(value)); return *this;}

    /**
     * <p>Information about the IPAM pools.</p>
     */
    inline DescribeIpamPoolsResponse& AddIpamPools(const IpamPool& value) { m_ipamPools.push_back(value); return *this; }

    /**
     * <p>Information about the IPAM pools.</p>
     */
    inline DescribeIpamPoolsResponse& AddIpamPools(IpamPool&& value) { m_ipamPools.push_back(std::move(value)); return *this; }


    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }

    
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }

    
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = std::move(value); }

    
    inline DescribeIpamPoolsResponse& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}

    
    inline DescribeIpamPoolsResponse& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(std::move(value)); return *this;}

  private:

    Aws::String m_nextToken;

    Aws::Vector<IpamPool> m_ipamPools;

    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
