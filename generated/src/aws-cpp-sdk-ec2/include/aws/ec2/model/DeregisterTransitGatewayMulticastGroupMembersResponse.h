/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/ec2/model/TransitGatewayMulticastDeregisteredGroupMembers.h>
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
  class DeregisterTransitGatewayMulticastGroupMembersResponse
  {
  public:
    AWS_EC2_API DeregisterTransitGatewayMulticastGroupMembersResponse() = default;
    AWS_EC2_API DeregisterTransitGatewayMulticastGroupMembersResponse(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_EC2_API DeregisterTransitGatewayMulticastGroupMembersResponse& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    /**
     * <p>Information about the deregistered members.</p>
     */
    inline const TransitGatewayMulticastDeregisteredGroupMembers& GetDeregisteredMulticastGroupMembers() const { return m_deregisteredMulticastGroupMembers; }
    template<typename DeregisteredMulticastGroupMembersT = TransitGatewayMulticastDeregisteredGroupMembers>
    void SetDeregisteredMulticastGroupMembers(DeregisteredMulticastGroupMembersT&& value) { m_deregisteredMulticastGroupMembersHasBeenSet = true; m_deregisteredMulticastGroupMembers = std::forward<DeregisteredMulticastGroupMembersT>(value); }
    template<typename DeregisteredMulticastGroupMembersT = TransitGatewayMulticastDeregisteredGroupMembers>
    DeregisterTransitGatewayMulticastGroupMembersResponse& WithDeregisteredMulticastGroupMembers(DeregisteredMulticastGroupMembersT&& value) { SetDeregisteredMulticastGroupMembers(std::forward<DeregisteredMulticastGroupMembersT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const ResponseMetadata& GetResponseMetadata() const { return m_responseMetadata; }
    template<typename ResponseMetadataT = ResponseMetadata>
    void SetResponseMetadata(ResponseMetadataT&& value) { m_responseMetadataHasBeenSet = true; m_responseMetadata = std::forward<ResponseMetadataT>(value); }
    template<typename ResponseMetadataT = ResponseMetadata>
    DeregisterTransitGatewayMulticastGroupMembersResponse& WithResponseMetadata(ResponseMetadataT&& value) { SetResponseMetadata(std::forward<ResponseMetadataT>(value)); return *this;}
    ///@}
  private:

    TransitGatewayMulticastDeregisteredGroupMembers m_deregisteredMulticastGroupMembers;
    bool m_deregisteredMulticastGroupMembersHasBeenSet = false;

    ResponseMetadata m_responseMetadata;
    bool m_responseMetadataHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
