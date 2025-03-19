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
    AWS_EC2_API DescribeInstanceConnectEndpointsResponse() = default;
    AWS_EC2_API DescribeInstanceConnectEndpointsResponse(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_EC2_API DescribeInstanceConnectEndpointsResponse& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    /**
     * <p>Information about the EC2 Instance Connect Endpoints.</p>
     */
    inline const Aws::Vector<Ec2InstanceConnectEndpoint>& GetInstanceConnectEndpoints() const { return m_instanceConnectEndpoints; }
    template<typename InstanceConnectEndpointsT = Aws::Vector<Ec2InstanceConnectEndpoint>>
    void SetInstanceConnectEndpoints(InstanceConnectEndpointsT&& value) { m_instanceConnectEndpointsHasBeenSet = true; m_instanceConnectEndpoints = std::forward<InstanceConnectEndpointsT>(value); }
    template<typename InstanceConnectEndpointsT = Aws::Vector<Ec2InstanceConnectEndpoint>>
    DescribeInstanceConnectEndpointsResponse& WithInstanceConnectEndpoints(InstanceConnectEndpointsT&& value) { SetInstanceConnectEndpoints(std::forward<InstanceConnectEndpointsT>(value)); return *this;}
    template<typename InstanceConnectEndpointsT = Ec2InstanceConnectEndpoint>
    DescribeInstanceConnectEndpointsResponse& AddInstanceConnectEndpoints(InstanceConnectEndpointsT&& value) { m_instanceConnectEndpointsHasBeenSet = true; m_instanceConnectEndpoints.emplace_back(std::forward<InstanceConnectEndpointsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The token to include in another request to get the next page of items. This
     * value is <code>null</code> when there are no more items to return.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    DescribeInstanceConnectEndpointsResponse& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const ResponseMetadata& GetResponseMetadata() const { return m_responseMetadata; }
    template<typename ResponseMetadataT = ResponseMetadata>
    void SetResponseMetadata(ResponseMetadataT&& value) { m_responseMetadataHasBeenSet = true; m_responseMetadata = std::forward<ResponseMetadataT>(value); }
    template<typename ResponseMetadataT = ResponseMetadata>
    DescribeInstanceConnectEndpointsResponse& WithResponseMetadata(ResponseMetadataT&& value) { SetResponseMetadata(std::forward<ResponseMetadataT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<Ec2InstanceConnectEndpoint> m_instanceConnectEndpoints;
    bool m_instanceConnectEndpointsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    ResponseMetadata m_responseMetadata;
    bool m_responseMetadataHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
