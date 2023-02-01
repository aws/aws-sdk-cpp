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
  class AssociateTransitGatewayPolicyTableResponse
  {
  public:
    AWS_EC2_API AssociateTransitGatewayPolicyTableResponse();
    AWS_EC2_API AssociateTransitGatewayPolicyTableResponse(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_EC2_API AssociateTransitGatewayPolicyTableResponse& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    /**
     * <p>Describes the association of a transit gateway and a transit gateway policy
     * table.</p>
     */
    inline const TransitGatewayPolicyTableAssociation& GetAssociation() const{ return m_association; }

    /**
     * <p>Describes the association of a transit gateway and a transit gateway policy
     * table.</p>
     */
    inline void SetAssociation(const TransitGatewayPolicyTableAssociation& value) { m_association = value; }

    /**
     * <p>Describes the association of a transit gateway and a transit gateway policy
     * table.</p>
     */
    inline void SetAssociation(TransitGatewayPolicyTableAssociation&& value) { m_association = std::move(value); }

    /**
     * <p>Describes the association of a transit gateway and a transit gateway policy
     * table.</p>
     */
    inline AssociateTransitGatewayPolicyTableResponse& WithAssociation(const TransitGatewayPolicyTableAssociation& value) { SetAssociation(value); return *this;}

    /**
     * <p>Describes the association of a transit gateway and a transit gateway policy
     * table.</p>
     */
    inline AssociateTransitGatewayPolicyTableResponse& WithAssociation(TransitGatewayPolicyTableAssociation&& value) { SetAssociation(std::move(value)); return *this;}


    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }

    
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }

    
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = std::move(value); }

    
    inline AssociateTransitGatewayPolicyTableResponse& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}

    
    inline AssociateTransitGatewayPolicyTableResponse& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(std::move(value)); return *this;}

  private:

    TransitGatewayPolicyTableAssociation m_association;

    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
