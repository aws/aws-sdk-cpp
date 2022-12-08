/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ec2/model/RouteTableAssociationState.h>
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
  class AssociateRouteTableResponse
  {
  public:
    AWS_EC2_API AssociateRouteTableResponse();
    AWS_EC2_API AssociateRouteTableResponse(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_EC2_API AssociateRouteTableResponse& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    /**
     * <p>The route table association ID. This ID is required for disassociating the
     * route table.</p>
     */
    inline const Aws::String& GetAssociationId() const{ return m_associationId; }

    /**
     * <p>The route table association ID. This ID is required for disassociating the
     * route table.</p>
     */
    inline void SetAssociationId(const Aws::String& value) { m_associationId = value; }

    /**
     * <p>The route table association ID. This ID is required for disassociating the
     * route table.</p>
     */
    inline void SetAssociationId(Aws::String&& value) { m_associationId = std::move(value); }

    /**
     * <p>The route table association ID. This ID is required for disassociating the
     * route table.</p>
     */
    inline void SetAssociationId(const char* value) { m_associationId.assign(value); }

    /**
     * <p>The route table association ID. This ID is required for disassociating the
     * route table.</p>
     */
    inline AssociateRouteTableResponse& WithAssociationId(const Aws::String& value) { SetAssociationId(value); return *this;}

    /**
     * <p>The route table association ID. This ID is required for disassociating the
     * route table.</p>
     */
    inline AssociateRouteTableResponse& WithAssociationId(Aws::String&& value) { SetAssociationId(std::move(value)); return *this;}

    /**
     * <p>The route table association ID. This ID is required for disassociating the
     * route table.</p>
     */
    inline AssociateRouteTableResponse& WithAssociationId(const char* value) { SetAssociationId(value); return *this;}


    /**
     * <p>The state of the association.</p>
     */
    inline const RouteTableAssociationState& GetAssociationState() const{ return m_associationState; }

    /**
     * <p>The state of the association.</p>
     */
    inline void SetAssociationState(const RouteTableAssociationState& value) { m_associationState = value; }

    /**
     * <p>The state of the association.</p>
     */
    inline void SetAssociationState(RouteTableAssociationState&& value) { m_associationState = std::move(value); }

    /**
     * <p>The state of the association.</p>
     */
    inline AssociateRouteTableResponse& WithAssociationState(const RouteTableAssociationState& value) { SetAssociationState(value); return *this;}

    /**
     * <p>The state of the association.</p>
     */
    inline AssociateRouteTableResponse& WithAssociationState(RouteTableAssociationState&& value) { SetAssociationState(std::move(value)); return *this;}


    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }

    
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }

    
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = std::move(value); }

    
    inline AssociateRouteTableResponse& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}

    
    inline AssociateRouteTableResponse& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(std::move(value)); return *this;}

  private:

    Aws::String m_associationId;

    RouteTableAssociationState m_associationState;

    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
