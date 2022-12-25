/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ec2/model/ResponseMetadata.h>
#include <aws/ec2/model/IpamResourceCidr.h>
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
  class GetIpamResourceCidrsResponse
  {
  public:
    AWS_EC2_API GetIpamResourceCidrsResponse();
    AWS_EC2_API GetIpamResourceCidrsResponse(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_EC2_API GetIpamResourceCidrsResponse& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


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
    inline GetIpamResourceCidrsResponse& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The token to use to retrieve the next page of results. This value is
     * <code>null</code> when there are no more results to return.</p>
     */
    inline GetIpamResourceCidrsResponse& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The token to use to retrieve the next page of results. This value is
     * <code>null</code> when there are no more results to return.</p>
     */
    inline GetIpamResourceCidrsResponse& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p>The resource CIDRs.</p>
     */
    inline const Aws::Vector<IpamResourceCidr>& GetIpamResourceCidrs() const{ return m_ipamResourceCidrs; }

    /**
     * <p>The resource CIDRs.</p>
     */
    inline void SetIpamResourceCidrs(const Aws::Vector<IpamResourceCidr>& value) { m_ipamResourceCidrs = value; }

    /**
     * <p>The resource CIDRs.</p>
     */
    inline void SetIpamResourceCidrs(Aws::Vector<IpamResourceCidr>&& value) { m_ipamResourceCidrs = std::move(value); }

    /**
     * <p>The resource CIDRs.</p>
     */
    inline GetIpamResourceCidrsResponse& WithIpamResourceCidrs(const Aws::Vector<IpamResourceCidr>& value) { SetIpamResourceCidrs(value); return *this;}

    /**
     * <p>The resource CIDRs.</p>
     */
    inline GetIpamResourceCidrsResponse& WithIpamResourceCidrs(Aws::Vector<IpamResourceCidr>&& value) { SetIpamResourceCidrs(std::move(value)); return *this;}

    /**
     * <p>The resource CIDRs.</p>
     */
    inline GetIpamResourceCidrsResponse& AddIpamResourceCidrs(const IpamResourceCidr& value) { m_ipamResourceCidrs.push_back(value); return *this; }

    /**
     * <p>The resource CIDRs.</p>
     */
    inline GetIpamResourceCidrsResponse& AddIpamResourceCidrs(IpamResourceCidr&& value) { m_ipamResourceCidrs.push_back(std::move(value)); return *this; }


    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }

    
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }

    
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = std::move(value); }

    
    inline GetIpamResourceCidrsResponse& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}

    
    inline GetIpamResourceCidrsResponse& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(std::move(value)); return *this;}

  private:

    Aws::String m_nextToken;

    Aws::Vector<IpamResourceCidr> m_ipamResourceCidrs;

    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
