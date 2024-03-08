/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ec2/model/ResponseMetadata.h>
#include <aws/ec2/model/SecurityGroupForVpc.h>
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
  class GetSecurityGroupsForVpcResponse
  {
  public:
    AWS_EC2_API GetSecurityGroupsForVpcResponse();
    AWS_EC2_API GetSecurityGroupsForVpcResponse(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_EC2_API GetSecurityGroupsForVpcResponse& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    /**
     * <p>The token to include in another request to get the next page of items. This
     * value is <code>null</code> when there are no more items to return.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The token to include in another request to get the next page of items. This
     * value is <code>null</code> when there are no more items to return.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>The token to include in another request to get the next page of items. This
     * value is <code>null</code> when there are no more items to return.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>The token to include in another request to get the next page of items. This
     * value is <code>null</code> when there are no more items to return.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>The token to include in another request to get the next page of items. This
     * value is <code>null</code> when there are no more items to return.</p>
     */
    inline GetSecurityGroupsForVpcResponse& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The token to include in another request to get the next page of items. This
     * value is <code>null</code> when there are no more items to return.</p>
     */
    inline GetSecurityGroupsForVpcResponse& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The token to include in another request to get the next page of items. This
     * value is <code>null</code> when there are no more items to return.</p>
     */
    inline GetSecurityGroupsForVpcResponse& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p>The security group that can be used by interfaces in the VPC.</p>
     */
    inline const Aws::Vector<SecurityGroupForVpc>& GetSecurityGroupForVpcs() const{ return m_securityGroupForVpcs; }

    /**
     * <p>The security group that can be used by interfaces in the VPC.</p>
     */
    inline void SetSecurityGroupForVpcs(const Aws::Vector<SecurityGroupForVpc>& value) { m_securityGroupForVpcs = value; }

    /**
     * <p>The security group that can be used by interfaces in the VPC.</p>
     */
    inline void SetSecurityGroupForVpcs(Aws::Vector<SecurityGroupForVpc>&& value) { m_securityGroupForVpcs = std::move(value); }

    /**
     * <p>The security group that can be used by interfaces in the VPC.</p>
     */
    inline GetSecurityGroupsForVpcResponse& WithSecurityGroupForVpcs(const Aws::Vector<SecurityGroupForVpc>& value) { SetSecurityGroupForVpcs(value); return *this;}

    /**
     * <p>The security group that can be used by interfaces in the VPC.</p>
     */
    inline GetSecurityGroupsForVpcResponse& WithSecurityGroupForVpcs(Aws::Vector<SecurityGroupForVpc>&& value) { SetSecurityGroupForVpcs(std::move(value)); return *this;}

    /**
     * <p>The security group that can be used by interfaces in the VPC.</p>
     */
    inline GetSecurityGroupsForVpcResponse& AddSecurityGroupForVpcs(const SecurityGroupForVpc& value) { m_securityGroupForVpcs.push_back(value); return *this; }

    /**
     * <p>The security group that can be used by interfaces in the VPC.</p>
     */
    inline GetSecurityGroupsForVpcResponse& AddSecurityGroupForVpcs(SecurityGroupForVpc&& value) { m_securityGroupForVpcs.push_back(std::move(value)); return *this; }


    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }

    
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }

    
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = std::move(value); }

    
    inline GetSecurityGroupsForVpcResponse& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}

    
    inline GetSecurityGroupsForVpcResponse& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(std::move(value)); return *this;}

  private:

    Aws::String m_nextToken;

    Aws::Vector<SecurityGroupForVpc> m_securityGroupForVpcs;

    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
