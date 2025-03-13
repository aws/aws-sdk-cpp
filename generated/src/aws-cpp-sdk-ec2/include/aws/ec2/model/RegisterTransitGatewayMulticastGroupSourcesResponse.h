/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/ec2/model/TransitGatewayMulticastRegisteredGroupSources.h>
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
  class RegisterTransitGatewayMulticastGroupSourcesResponse
  {
  public:
    AWS_EC2_API RegisterTransitGatewayMulticastGroupSourcesResponse() = default;
    AWS_EC2_API RegisterTransitGatewayMulticastGroupSourcesResponse(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_EC2_API RegisterTransitGatewayMulticastGroupSourcesResponse& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    /**
     * <p>Information about the transit gateway multicast group sources.</p>
     */
    inline const TransitGatewayMulticastRegisteredGroupSources& GetRegisteredMulticastGroupSources() const { return m_registeredMulticastGroupSources; }
    template<typename RegisteredMulticastGroupSourcesT = TransitGatewayMulticastRegisteredGroupSources>
    void SetRegisteredMulticastGroupSources(RegisteredMulticastGroupSourcesT&& value) { m_registeredMulticastGroupSourcesHasBeenSet = true; m_registeredMulticastGroupSources = std::forward<RegisteredMulticastGroupSourcesT>(value); }
    template<typename RegisteredMulticastGroupSourcesT = TransitGatewayMulticastRegisteredGroupSources>
    RegisterTransitGatewayMulticastGroupSourcesResponse& WithRegisteredMulticastGroupSources(RegisteredMulticastGroupSourcesT&& value) { SetRegisteredMulticastGroupSources(std::forward<RegisteredMulticastGroupSourcesT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const ResponseMetadata& GetResponseMetadata() const { return m_responseMetadata; }
    template<typename ResponseMetadataT = ResponseMetadata>
    void SetResponseMetadata(ResponseMetadataT&& value) { m_responseMetadataHasBeenSet = true; m_responseMetadata = std::forward<ResponseMetadataT>(value); }
    template<typename ResponseMetadataT = ResponseMetadata>
    RegisterTransitGatewayMulticastGroupSourcesResponse& WithResponseMetadata(ResponseMetadataT&& value) { SetResponseMetadata(std::forward<ResponseMetadataT>(value)); return *this;}
    ///@}
  private:

    TransitGatewayMulticastRegisteredGroupSources m_registeredMulticastGroupSources;
    bool m_registeredMulticastGroupSourcesHasBeenSet = false;

    ResponseMetadata m_responseMetadata;
    bool m_responseMetadataHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
