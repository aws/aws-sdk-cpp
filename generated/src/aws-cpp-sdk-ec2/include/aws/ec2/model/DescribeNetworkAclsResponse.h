/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ec2/model/ResponseMetadata.h>
#include <aws/ec2/model/NetworkAcl.h>
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
  class DescribeNetworkAclsResponse
  {
  public:
    AWS_EC2_API DescribeNetworkAclsResponse();
    AWS_EC2_API DescribeNetworkAclsResponse(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_EC2_API DescribeNetworkAclsResponse& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    /**
     * <p>Information about one or more network ACLs.</p>
     */
    inline const Aws::Vector<NetworkAcl>& GetNetworkAcls() const{ return m_networkAcls; }

    /**
     * <p>Information about one or more network ACLs.</p>
     */
    inline void SetNetworkAcls(const Aws::Vector<NetworkAcl>& value) { m_networkAcls = value; }

    /**
     * <p>Information about one or more network ACLs.</p>
     */
    inline void SetNetworkAcls(Aws::Vector<NetworkAcl>&& value) { m_networkAcls = std::move(value); }

    /**
     * <p>Information about one or more network ACLs.</p>
     */
    inline DescribeNetworkAclsResponse& WithNetworkAcls(const Aws::Vector<NetworkAcl>& value) { SetNetworkAcls(value); return *this;}

    /**
     * <p>Information about one or more network ACLs.</p>
     */
    inline DescribeNetworkAclsResponse& WithNetworkAcls(Aws::Vector<NetworkAcl>&& value) { SetNetworkAcls(std::move(value)); return *this;}

    /**
     * <p>Information about one or more network ACLs.</p>
     */
    inline DescribeNetworkAclsResponse& AddNetworkAcls(const NetworkAcl& value) { m_networkAcls.push_back(value); return *this; }

    /**
     * <p>Information about one or more network ACLs.</p>
     */
    inline DescribeNetworkAclsResponse& AddNetworkAcls(NetworkAcl&& value) { m_networkAcls.push_back(std::move(value)); return *this; }


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
    inline DescribeNetworkAclsResponse& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The token to use to retrieve the next page of results. This value is
     * <code>null</code> when there are no more results to return.</p>
     */
    inline DescribeNetworkAclsResponse& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The token to use to retrieve the next page of results. This value is
     * <code>null</code> when there are no more results to return.</p>
     */
    inline DescribeNetworkAclsResponse& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }

    
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }

    
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = std::move(value); }

    
    inline DescribeNetworkAclsResponse& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}

    
    inline DescribeNetworkAclsResponse& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(std::move(value)); return *this;}

  private:

    Aws::Vector<NetworkAcl> m_networkAcls;

    Aws::String m_nextToken;

    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
