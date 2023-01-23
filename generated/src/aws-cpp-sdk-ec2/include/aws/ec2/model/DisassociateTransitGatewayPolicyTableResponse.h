/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/ec2/model/TransitGatewayPolicyTableAssociation.h>
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
  class DisassociateTransitGatewayPolicyTableResponse
  {
  public:
    AWS_EC2_API DisassociateTransitGatewayPolicyTableResponse();
    AWS_EC2_API DisassociateTransitGatewayPolicyTableResponse(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_EC2_API DisassociateTransitGatewayPolicyTableResponse& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    /**
     * <p>Returns details about the transit gateway policy table disassociation.</p>
     */
    inline const TransitGatewayPolicyTableAssociation& GetAssociation() const{ return m_association; }

    /**
     * <p>Returns details about the transit gateway policy table disassociation.</p>
     */
    inline void SetAssociation(const TransitGatewayPolicyTableAssociation& value) { m_association = value; }

    /**
     * <p>Returns details about the transit gateway policy table disassociation.</p>
     */
    inline void SetAssociation(TransitGatewayPolicyTableAssociation&& value) { m_association = std::move(value); }

    /**
     * <p>Returns details about the transit gateway policy table disassociation.</p>
     */
    inline DisassociateTransitGatewayPolicyTableResponse& WithAssociation(const TransitGatewayPolicyTableAssociation& value) { SetAssociation(value); return *this;}

    /**
     * <p>Returns details about the transit gateway policy table disassociation.</p>
     */
    inline DisassociateTransitGatewayPolicyTableResponse& WithAssociation(TransitGatewayPolicyTableAssociation&& value) { SetAssociation(std::move(value)); return *this;}


    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }

    
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }

    
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = std::move(value); }

    
    inline DisassociateTransitGatewayPolicyTableResponse& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}

    
    inline DisassociateTransitGatewayPolicyTableResponse& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(std::move(value)); return *this;}

  private:

    TransitGatewayPolicyTableAssociation m_association;

    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
