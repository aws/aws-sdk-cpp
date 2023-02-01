/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ec2/model/ResponseMetadata.h>
#include <aws/ec2/model/IpamResourceDiscoveryAssociation.h>
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
  class DescribeIpamResourceDiscoveryAssociationsResponse
  {
  public:
    AWS_EC2_API DescribeIpamResourceDiscoveryAssociationsResponse();
    AWS_EC2_API DescribeIpamResourceDiscoveryAssociationsResponse(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_EC2_API DescribeIpamResourceDiscoveryAssociationsResponse& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    /**
     * <p>The resource discovery associations.</p>
     */
    inline const Aws::Vector<IpamResourceDiscoveryAssociation>& GetIpamResourceDiscoveryAssociations() const{ return m_ipamResourceDiscoveryAssociations; }

    /**
     * <p>The resource discovery associations.</p>
     */
    inline void SetIpamResourceDiscoveryAssociations(const Aws::Vector<IpamResourceDiscoveryAssociation>& value) { m_ipamResourceDiscoveryAssociations = value; }

    /**
     * <p>The resource discovery associations.</p>
     */
    inline void SetIpamResourceDiscoveryAssociations(Aws::Vector<IpamResourceDiscoveryAssociation>&& value) { m_ipamResourceDiscoveryAssociations = std::move(value); }

    /**
     * <p>The resource discovery associations.</p>
     */
    inline DescribeIpamResourceDiscoveryAssociationsResponse& WithIpamResourceDiscoveryAssociations(const Aws::Vector<IpamResourceDiscoveryAssociation>& value) { SetIpamResourceDiscoveryAssociations(value); return *this;}

    /**
     * <p>The resource discovery associations.</p>
     */
    inline DescribeIpamResourceDiscoveryAssociationsResponse& WithIpamResourceDiscoveryAssociations(Aws::Vector<IpamResourceDiscoveryAssociation>&& value) { SetIpamResourceDiscoveryAssociations(std::move(value)); return *this;}

    /**
     * <p>The resource discovery associations.</p>
     */
    inline DescribeIpamResourceDiscoveryAssociationsResponse& AddIpamResourceDiscoveryAssociations(const IpamResourceDiscoveryAssociation& value) { m_ipamResourceDiscoveryAssociations.push_back(value); return *this; }

    /**
     * <p>The resource discovery associations.</p>
     */
    inline DescribeIpamResourceDiscoveryAssociationsResponse& AddIpamResourceDiscoveryAssociations(IpamResourceDiscoveryAssociation&& value) { m_ipamResourceDiscoveryAssociations.push_back(std::move(value)); return *this; }


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
    inline DescribeIpamResourceDiscoveryAssociationsResponse& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>Specify the pagination token from a previous request to retrieve the next
     * page of results.</p>
     */
    inline DescribeIpamResourceDiscoveryAssociationsResponse& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>Specify the pagination token from a previous request to retrieve the next
     * page of results.</p>
     */
    inline DescribeIpamResourceDiscoveryAssociationsResponse& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }

    
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }

    
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = std::move(value); }

    
    inline DescribeIpamResourceDiscoveryAssociationsResponse& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}

    
    inline DescribeIpamResourceDiscoveryAssociationsResponse& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(std::move(value)); return *this;}

  private:

    Aws::Vector<IpamResourceDiscoveryAssociation> m_ipamResourceDiscoveryAssociations;

    Aws::String m_nextToken;

    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
