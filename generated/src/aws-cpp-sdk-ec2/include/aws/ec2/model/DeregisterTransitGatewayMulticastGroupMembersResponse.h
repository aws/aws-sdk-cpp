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
    AWS_EC2_API DeregisterTransitGatewayMulticastGroupMembersResponse();
    AWS_EC2_API DeregisterTransitGatewayMulticastGroupMembersResponse(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_EC2_API DeregisterTransitGatewayMulticastGroupMembersResponse& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    /**
     * <p>Information about the deregistered members.</p>
     */
    inline const TransitGatewayMulticastDeregisteredGroupMembers& GetDeregisteredMulticastGroupMembers() const{ return m_deregisteredMulticastGroupMembers; }

    /**
     * <p>Information about the deregistered members.</p>
     */
    inline void SetDeregisteredMulticastGroupMembers(const TransitGatewayMulticastDeregisteredGroupMembers& value) { m_deregisteredMulticastGroupMembers = value; }

    /**
     * <p>Information about the deregistered members.</p>
     */
    inline void SetDeregisteredMulticastGroupMembers(TransitGatewayMulticastDeregisteredGroupMembers&& value) { m_deregisteredMulticastGroupMembers = std::move(value); }

    /**
     * <p>Information about the deregistered members.</p>
     */
    inline DeregisterTransitGatewayMulticastGroupMembersResponse& WithDeregisteredMulticastGroupMembers(const TransitGatewayMulticastDeregisteredGroupMembers& value) { SetDeregisteredMulticastGroupMembers(value); return *this;}

    /**
     * <p>Information about the deregistered members.</p>
     */
    inline DeregisterTransitGatewayMulticastGroupMembersResponse& WithDeregisteredMulticastGroupMembers(TransitGatewayMulticastDeregisteredGroupMembers&& value) { SetDeregisteredMulticastGroupMembers(std::move(value)); return *this;}


    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }

    
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }

    
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = std::move(value); }

    
    inline DeregisterTransitGatewayMulticastGroupMembersResponse& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}

    
    inline DeregisterTransitGatewayMulticastGroupMembersResponse& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(std::move(value)); return *this;}

  private:

    TransitGatewayMulticastDeregisteredGroupMembers m_deregisteredMulticastGroupMembers;

    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
