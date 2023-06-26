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
    AWS_EC2_API RegisterTransitGatewayMulticastGroupMembersResponse();
    AWS_EC2_API RegisterTransitGatewayMulticastGroupMembersResponse(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_EC2_API RegisterTransitGatewayMulticastGroupMembersResponse& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    /**
     * <p>Information about the registered transit gateway multicast group members.</p>
     */
    inline const TransitGatewayMulticastRegisteredGroupMembers& GetRegisteredMulticastGroupMembers() const{ return m_registeredMulticastGroupMembers; }

    /**
     * <p>Information about the registered transit gateway multicast group members.</p>
     */
    inline void SetRegisteredMulticastGroupMembers(const TransitGatewayMulticastRegisteredGroupMembers& value) { m_registeredMulticastGroupMembers = value; }

    /**
     * <p>Information about the registered transit gateway multicast group members.</p>
     */
    inline void SetRegisteredMulticastGroupMembers(TransitGatewayMulticastRegisteredGroupMembers&& value) { m_registeredMulticastGroupMembers = std::move(value); }

    /**
     * <p>Information about the registered transit gateway multicast group members.</p>
     */
    inline RegisterTransitGatewayMulticastGroupMembersResponse& WithRegisteredMulticastGroupMembers(const TransitGatewayMulticastRegisteredGroupMembers& value) { SetRegisteredMulticastGroupMembers(value); return *this;}

    /**
     * <p>Information about the registered transit gateway multicast group members.</p>
     */
    inline RegisterTransitGatewayMulticastGroupMembersResponse& WithRegisteredMulticastGroupMembers(TransitGatewayMulticastRegisteredGroupMembers&& value) { SetRegisteredMulticastGroupMembers(std::move(value)); return *this;}


    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }

    
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }

    
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = std::move(value); }

    
    inline RegisterTransitGatewayMulticastGroupMembersResponse& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}

    
    inline RegisterTransitGatewayMulticastGroupMembersResponse& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(std::move(value)); return *this;}

  private:

    TransitGatewayMulticastRegisteredGroupMembers m_registeredMulticastGroupMembers;

    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
