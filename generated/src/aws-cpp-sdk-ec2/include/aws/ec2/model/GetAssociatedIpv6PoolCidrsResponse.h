/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ec2/model/ResponseMetadata.h>
#include <aws/ec2/model/Ipv6CidrAssociation.h>
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
  class GetAssociatedIpv6PoolCidrsResponse
  {
  public:
    AWS_EC2_API GetAssociatedIpv6PoolCidrsResponse();
    AWS_EC2_API GetAssociatedIpv6PoolCidrsResponse(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_EC2_API GetAssociatedIpv6PoolCidrsResponse& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    /**
     * <p>Information about the IPv6 CIDR block associations.</p>
     */
    inline const Aws::Vector<Ipv6CidrAssociation>& GetIpv6CidrAssociations() const{ return m_ipv6CidrAssociations; }

    /**
     * <p>Information about the IPv6 CIDR block associations.</p>
     */
    inline void SetIpv6CidrAssociations(const Aws::Vector<Ipv6CidrAssociation>& value) { m_ipv6CidrAssociations = value; }

    /**
     * <p>Information about the IPv6 CIDR block associations.</p>
     */
    inline void SetIpv6CidrAssociations(Aws::Vector<Ipv6CidrAssociation>&& value) { m_ipv6CidrAssociations = std::move(value); }

    /**
     * <p>Information about the IPv6 CIDR block associations.</p>
     */
    inline GetAssociatedIpv6PoolCidrsResponse& WithIpv6CidrAssociations(const Aws::Vector<Ipv6CidrAssociation>& value) { SetIpv6CidrAssociations(value); return *this;}

    /**
     * <p>Information about the IPv6 CIDR block associations.</p>
     */
    inline GetAssociatedIpv6PoolCidrsResponse& WithIpv6CidrAssociations(Aws::Vector<Ipv6CidrAssociation>&& value) { SetIpv6CidrAssociations(std::move(value)); return *this;}

    /**
     * <p>Information about the IPv6 CIDR block associations.</p>
     */
    inline GetAssociatedIpv6PoolCidrsResponse& AddIpv6CidrAssociations(const Ipv6CidrAssociation& value) { m_ipv6CidrAssociations.push_back(value); return *this; }

    /**
     * <p>Information about the IPv6 CIDR block associations.</p>
     */
    inline GetAssociatedIpv6PoolCidrsResponse& AddIpv6CidrAssociations(Ipv6CidrAssociation&& value) { m_ipv6CidrAssociations.push_back(std::move(value)); return *this; }


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
    inline GetAssociatedIpv6PoolCidrsResponse& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The token to use to retrieve the next page of results. This value is
     * <code>null</code> when there are no more results to return.</p>
     */
    inline GetAssociatedIpv6PoolCidrsResponse& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The token to use to retrieve the next page of results. This value is
     * <code>null</code> when there are no more results to return.</p>
     */
    inline GetAssociatedIpv6PoolCidrsResponse& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }

    
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }

    
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = std::move(value); }

    
    inline GetAssociatedIpv6PoolCidrsResponse& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}

    
    inline GetAssociatedIpv6PoolCidrsResponse& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(std::move(value)); return *this;}

  private:

    Aws::Vector<Ipv6CidrAssociation> m_ipv6CidrAssociations;

    Aws::String m_nextToken;

    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
