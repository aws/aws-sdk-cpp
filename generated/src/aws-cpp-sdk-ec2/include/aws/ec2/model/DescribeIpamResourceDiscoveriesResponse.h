/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ec2/model/ResponseMetadata.h>
#include <aws/ec2/model/IpamResourceDiscovery.h>
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
  class DescribeIpamResourceDiscoveriesResponse
  {
  public:
    AWS_EC2_API DescribeIpamResourceDiscoveriesResponse();
    AWS_EC2_API DescribeIpamResourceDiscoveriesResponse(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_EC2_API DescribeIpamResourceDiscoveriesResponse& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    /**
     * <p>The resource discoveries.</p>
     */
    inline const Aws::Vector<IpamResourceDiscovery>& GetIpamResourceDiscoveries() const{ return m_ipamResourceDiscoveries; }
    inline void SetIpamResourceDiscoveries(const Aws::Vector<IpamResourceDiscovery>& value) { m_ipamResourceDiscoveries = value; }
    inline void SetIpamResourceDiscoveries(Aws::Vector<IpamResourceDiscovery>&& value) { m_ipamResourceDiscoveries = std::move(value); }
    inline DescribeIpamResourceDiscoveriesResponse& WithIpamResourceDiscoveries(const Aws::Vector<IpamResourceDiscovery>& value) { SetIpamResourceDiscoveries(value); return *this;}
    inline DescribeIpamResourceDiscoveriesResponse& WithIpamResourceDiscoveries(Aws::Vector<IpamResourceDiscovery>&& value) { SetIpamResourceDiscoveries(std::move(value)); return *this;}
    inline DescribeIpamResourceDiscoveriesResponse& AddIpamResourceDiscoveries(const IpamResourceDiscovery& value) { m_ipamResourceDiscoveries.push_back(value); return *this; }
    inline DescribeIpamResourceDiscoveriesResponse& AddIpamResourceDiscoveries(IpamResourceDiscovery&& value) { m_ipamResourceDiscoveries.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Specify the pagination token from a previous request to retrieve the next
     * page of results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }
    inline DescribeIpamResourceDiscoveriesResponse& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline DescribeIpamResourceDiscoveriesResponse& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline DescribeIpamResourceDiscoveriesResponse& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = std::move(value); }
    inline DescribeIpamResourceDiscoveriesResponse& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}
    inline DescribeIpamResourceDiscoveriesResponse& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(std::move(value)); return *this;}
    ///@}
  private:

    Aws::Vector<IpamResourceDiscovery> m_ipamResourceDiscoveries;

    Aws::String m_nextToken;

    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
