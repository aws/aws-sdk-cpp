/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/ec2/model/TransitGatewayMulticastRegisteredGroupMembers.h>
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
  class RegisterTransitGatewayMulticastGroupMembersResponse
  {
  public:
    AWS_EC2_API RegisterTransitGatewayMulticastGroupMembersResponse() = default;
    AWS_EC2_API RegisterTransitGatewayMulticastGroupMembersResponse(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_EC2_API RegisterTransitGatewayMulticastGroupMembersResponse& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    /**
     * <p>Information about the registered transit gateway multicast group members.</p>
     */
    inline const TransitGatewayMulticastRegisteredGroupMembers& GetRegisteredMulticastGroupMembers() const { return m_registeredMulticastGroupMembers; }
    template<typename RegisteredMulticastGroupMembersT = TransitGatewayMulticastRegisteredGroupMembers>
    void SetRegisteredMulticastGroupMembers(RegisteredMulticastGroupMembersT&& value) { m_registeredMulticastGroupMembersHasBeenSet = true; m_registeredMulticastGroupMembers = std::forward<RegisteredMulticastGroupMembersT>(value); }
    template<typename RegisteredMulticastGroupMembersT = TransitGatewayMulticastRegisteredGroupMembers>
    RegisterTransitGatewayMulticastGroupMembersResponse& WithRegisteredMulticastGroupMembers(RegisteredMulticastGroupMembersT&& value) { SetRegisteredMulticastGroupMembers(std::forward<RegisteredMulticastGroupMembersT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const ResponseMetadata& GetResponseMetadata() const { return m_responseMetadata; }
    template<typename ResponseMetadataT = ResponseMetadata>
    void SetResponseMetadata(ResponseMetadataT&& value) { m_responseMetadataHasBeenSet = true; m_responseMetadata = std::forward<ResponseMetadataT>(value); }
    template<typename ResponseMetadataT = ResponseMetadata>
    RegisterTransitGatewayMulticastGroupMembersResponse& WithResponseMetadata(ResponseMetadataT&& value) { SetResponseMetadata(std::forward<ResponseMetadataT>(value)); return *this;}
    ///@}
  private:

    TransitGatewayMulticastRegisteredGroupMembers m_registeredMulticastGroupMembers;
    bool m_registeredMulticastGroupMembersHasBeenSet = false;

    ResponseMetadata m_responseMetadata;
    bool m_responseMetadataHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
