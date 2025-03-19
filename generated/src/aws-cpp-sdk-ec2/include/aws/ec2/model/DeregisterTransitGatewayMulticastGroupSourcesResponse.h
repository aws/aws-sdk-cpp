/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/ec2/model/TransitGatewayMulticastDeregisteredGroupSources.h>
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
  class DeregisterTransitGatewayMulticastGroupSourcesResponse
  {
  public:
    AWS_EC2_API DeregisterTransitGatewayMulticastGroupSourcesResponse() = default;
    AWS_EC2_API DeregisterTransitGatewayMulticastGroupSourcesResponse(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_EC2_API DeregisterTransitGatewayMulticastGroupSourcesResponse& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    /**
     * <p>Information about the deregistered group sources.</p>
     */
    inline const TransitGatewayMulticastDeregisteredGroupSources& GetDeregisteredMulticastGroupSources() const { return m_deregisteredMulticastGroupSources; }
    template<typename DeregisteredMulticastGroupSourcesT = TransitGatewayMulticastDeregisteredGroupSources>
    void SetDeregisteredMulticastGroupSources(DeregisteredMulticastGroupSourcesT&& value) { m_deregisteredMulticastGroupSourcesHasBeenSet = true; m_deregisteredMulticastGroupSources = std::forward<DeregisteredMulticastGroupSourcesT>(value); }
    template<typename DeregisteredMulticastGroupSourcesT = TransitGatewayMulticastDeregisteredGroupSources>
    DeregisterTransitGatewayMulticastGroupSourcesResponse& WithDeregisteredMulticastGroupSources(DeregisteredMulticastGroupSourcesT&& value) { SetDeregisteredMulticastGroupSources(std::forward<DeregisteredMulticastGroupSourcesT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const ResponseMetadata& GetResponseMetadata() const { return m_responseMetadata; }
    template<typename ResponseMetadataT = ResponseMetadata>
    void SetResponseMetadata(ResponseMetadataT&& value) { m_responseMetadataHasBeenSet = true; m_responseMetadata = std::forward<ResponseMetadataT>(value); }
    template<typename ResponseMetadataT = ResponseMetadata>
    DeregisterTransitGatewayMulticastGroupSourcesResponse& WithResponseMetadata(ResponseMetadataT&& value) { SetResponseMetadata(std::forward<ResponseMetadataT>(value)); return *this;}
    ///@}
  private:

    TransitGatewayMulticastDeregisteredGroupSources m_deregisteredMulticastGroupSources;
    bool m_deregisteredMulticastGroupSourcesHasBeenSet = false;

    ResponseMetadata m_responseMetadata;
    bool m_responseMetadataHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
