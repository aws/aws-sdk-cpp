/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ec2/model/TransitGatewayAssociationState.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Xml
{
  class XmlNode;
} // namespace Xml
} // namespace Utils
namespace EC2
{
namespace Model
{

  /**
   * <p>Describes an association.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/TransitGatewayAttachmentAssociation">AWS
   * API Reference</a></p>
   */
  class AWS_EC2_API TransitGatewayAttachmentAssociation
  {
  public:
    TransitGatewayAttachmentAssociation();
    TransitGatewayAttachmentAssociation(const Aws::Utils::Xml::XmlNode& xmlNode);
    TransitGatewayAttachmentAssociation& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p>The ID of the route table for the transit gateway.</p>
     */
    inline const Aws::String& GetTransitGatewayRouteTableId() const{ return m_transitGatewayRouteTableId; }

    /**
     * <p>The ID of the route table for the transit gateway.</p>
     */
    inline bool TransitGatewayRouteTableIdHasBeenSet() const { return m_transitGatewayRouteTableIdHasBeenSet; }

    /**
     * <p>The ID of the route table for the transit gateway.</p>
     */
    inline void SetTransitGatewayRouteTableId(const Aws::String& value) { m_transitGatewayRouteTableIdHasBeenSet = true; m_transitGatewayRouteTableId = value; }

    /**
     * <p>The ID of the route table for the transit gateway.</p>
     */
    inline void SetTransitGatewayRouteTableId(Aws::String&& value) { m_transitGatewayRouteTableIdHasBeenSet = true; m_transitGatewayRouteTableId = std::move(value); }

    /**
     * <p>The ID of the route table for the transit gateway.</p>
     */
    inline void SetTransitGatewayRouteTableId(const char* value) { m_transitGatewayRouteTableIdHasBeenSet = true; m_transitGatewayRouteTableId.assign(value); }

    /**
     * <p>The ID of the route table for the transit gateway.</p>
     */
    inline TransitGatewayAttachmentAssociation& WithTransitGatewayRouteTableId(const Aws::String& value) { SetTransitGatewayRouteTableId(value); return *this;}

    /**
     * <p>The ID of the route table for the transit gateway.</p>
     */
    inline TransitGatewayAttachmentAssociation& WithTransitGatewayRouteTableId(Aws::String&& value) { SetTransitGatewayRouteTableId(std::move(value)); return *this;}

    /**
     * <p>The ID of the route table for the transit gateway.</p>
     */
    inline TransitGatewayAttachmentAssociation& WithTransitGatewayRouteTableId(const char* value) { SetTransitGatewayRouteTableId(value); return *this;}


    /**
     * <p>The state of the association.</p>
     */
    inline const TransitGatewayAssociationState& GetState() const{ return m_state; }

    /**
     * <p>The state of the association.</p>
     */
    inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }

    /**
     * <p>The state of the association.</p>
     */
    inline void SetState(const TransitGatewayAssociationState& value) { m_stateHasBeenSet = true; m_state = value; }

    /**
     * <p>The state of the association.</p>
     */
    inline void SetState(TransitGatewayAssociationState&& value) { m_stateHasBeenSet = true; m_state = std::move(value); }

    /**
     * <p>The state of the association.</p>
     */
    inline TransitGatewayAttachmentAssociation& WithState(const TransitGatewayAssociationState& value) { SetState(value); return *this;}

    /**
     * <p>The state of the association.</p>
     */
    inline TransitGatewayAttachmentAssociation& WithState(TransitGatewayAssociationState&& value) { SetState(std::move(value)); return *this;}

  private:

    Aws::String m_transitGatewayRouteTableId;
    bool m_transitGatewayRouteTableIdHasBeenSet;

    TransitGatewayAssociationState m_state;
    bool m_stateHasBeenSet;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
