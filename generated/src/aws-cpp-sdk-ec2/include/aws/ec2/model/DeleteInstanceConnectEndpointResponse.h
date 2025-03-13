/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/ec2/model/Ec2InstanceConnectEndpoint.h>
#include <aws/ec2/model/ResponseMetadata.h>
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
  class DeleteInstanceConnectEndpointResponse
  {
  public:
    AWS_EC2_API DeleteInstanceConnectEndpointResponse() = default;
    AWS_EC2_API DeleteInstanceConnectEndpointResponse(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_EC2_API DeleteInstanceConnectEndpointResponse& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    /**
     * <p>Information about the EC2 Instance Connect Endpoint.</p>
     */
    inline const Ec2InstanceConnectEndpoint& GetInstanceConnectEndpoint() const { return m_instanceConnectEndpoint; }
    template<typename InstanceConnectEndpointT = Ec2InstanceConnectEndpoint>
    void SetInstanceConnectEndpoint(InstanceConnectEndpointT&& value) { m_instanceConnectEndpointHasBeenSet = true; m_instanceConnectEndpoint = std::forward<InstanceConnectEndpointT>(value); }
    template<typename InstanceConnectEndpointT = Ec2InstanceConnectEndpoint>
    DeleteInstanceConnectEndpointResponse& WithInstanceConnectEndpoint(InstanceConnectEndpointT&& value) { SetInstanceConnectEndpoint(std::forward<InstanceConnectEndpointT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const ResponseMetadata& GetResponseMetadata() const { return m_responseMetadata; }
    template<typename ResponseMetadataT = ResponseMetadata>
    void SetResponseMetadata(ResponseMetadataT&& value) { m_responseMetadataHasBeenSet = true; m_responseMetadata = std::forward<ResponseMetadataT>(value); }
    template<typename ResponseMetadataT = ResponseMetadata>
    DeleteInstanceConnectEndpointResponse& WithResponseMetadata(ResponseMetadataT&& value) { SetResponseMetadata(std::forward<ResponseMetadataT>(value)); return *this;}
    ///@}
  private:

    Ec2InstanceConnectEndpoint m_instanceConnectEndpoint;
    bool m_instanceConnectEndpointHasBeenSet = false;

    ResponseMetadata m_responseMetadata;
    bool m_responseMetadataHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
