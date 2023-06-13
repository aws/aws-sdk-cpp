/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ec2/model/ResponseMetadata.h>
#include <aws/ec2/model/Ec2InstanceConnectEndpoint.h>
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
  class DescribeInstanceConnectEndpointsResponse
  {
  public:
    AWS_EC2_API DescribeInstanceConnectEndpointsResponse();
    AWS_EC2_API DescribeInstanceConnectEndpointsResponse(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_EC2_API DescribeInstanceConnectEndpointsResponse& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    /**
     * <p>Information about the EC2 Instance Connect Endpoints.</p>
     */
    inline const Aws::Vector<Ec2InstanceConnectEndpoint>& GetInstanceConnectEndpoints() const{ return m_instanceConnectEndpoints; }

    /**
     * <p>Information about the EC2 Instance Connect Endpoints.</p>
     */
    inline void SetInstanceConnectEndpoints(const Aws::Vector<Ec2InstanceConnectEndpoint>& value) { m_instanceConnectEndpoints = value; }

    /**
     * <p>Information about the EC2 Instance Connect Endpoints.</p>
     */
    inline void SetInstanceConnectEndpoints(Aws::Vector<Ec2InstanceConnectEndpoint>&& value) { m_instanceConnectEndpoints = std::move(value); }

    /**
     * <p>Information about the EC2 Instance Connect Endpoints.</p>
     */
    inline DescribeInstanceConnectEndpointsResponse& WithInstanceConnectEndpoints(const Aws::Vector<Ec2InstanceConnectEndpoint>& value) { SetInstanceConnectEndpoints(value); return *this;}

    /**
     * <p>Information about the EC2 Instance Connect Endpoints.</p>
     */
    inline DescribeInstanceConnectEndpointsResponse& WithInstanceConnectEndpoints(Aws::Vector<Ec2InstanceConnectEndpoint>&& value) { SetInstanceConnectEndpoints(std::move(value)); return *this;}

    /**
     * <p>Information about the EC2 Instance Connect Endpoints.</p>
     */
    inline DescribeInstanceConnectEndpointsResponse& AddInstanceConnectEndpoints(const Ec2InstanceConnectEndpoint& value) { m_instanceConnectEndpoints.push_back(value); return *this; }

    /**
     * <p>Information about the EC2 Instance Connect Endpoints.</p>
     */
    inline DescribeInstanceConnectEndpointsResponse& AddInstanceConnectEndpoints(Ec2InstanceConnectEndpoint&& value) { m_instanceConnectEndpoints.push_back(std::move(value)); return *this; }


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
    inline DescribeInstanceConnectEndpointsResponse& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The token to include in another request to get the next page of items. This
     * value is <code>null</code> when there are no more items to return.</p>
     */
    inline DescribeInstanceConnectEndpointsResponse& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The token to include in another request to get the next page of items. This
     * value is <code>null</code> when there are no more items to return.</p>
     */
    inline DescribeInstanceConnectEndpointsResponse& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }

    
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }

    
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = std::move(value); }

    
    inline DescribeInstanceConnectEndpointsResponse& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}

    
    inline DescribeInstanceConnectEndpointsResponse& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(std::move(value)); return *this;}

  private:

    Aws::Vector<Ec2InstanceConnectEndpoint> m_instanceConnectEndpoints;

    Aws::String m_nextToken;

    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
