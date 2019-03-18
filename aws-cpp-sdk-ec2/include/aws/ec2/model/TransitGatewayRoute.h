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
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ec2/model/TransitGatewayRouteType.h>
#include <aws/ec2/model/TransitGatewayRouteState.h>
#include <aws/ec2/model/TransitGatewayRouteAttachment.h>
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
   * <p>Describes a route for a transit gateway route table.</p><p><h3>See Also:</h3>
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/TransitGatewayRoute">AWS
   * API Reference</a></p>
   */
  class AWS_EC2_API TransitGatewayRoute
  {
  public:
    TransitGatewayRoute();
    TransitGatewayRoute(const Aws::Utils::Xml::XmlNode& xmlNode);
    TransitGatewayRoute& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p>The CIDR block used for destination matches.</p>
     */
    inline const Aws::String& GetDestinationCidrBlock() const{ return m_destinationCidrBlock; }

    /**
     * <p>The CIDR block used for destination matches.</p>
     */
    inline bool DestinationCidrBlockHasBeenSet() const { return m_destinationCidrBlockHasBeenSet; }

    /**
     * <p>The CIDR block used for destination matches.</p>
     */
    inline void SetDestinationCidrBlock(const Aws::String& value) { m_destinationCidrBlockHasBeenSet = true; m_destinationCidrBlock = value; }

    /**
     * <p>The CIDR block used for destination matches.</p>
     */
    inline void SetDestinationCidrBlock(Aws::String&& value) { m_destinationCidrBlockHasBeenSet = true; m_destinationCidrBlock = std::move(value); }

    /**
     * <p>The CIDR block used for destination matches.</p>
     */
    inline void SetDestinationCidrBlock(const char* value) { m_destinationCidrBlockHasBeenSet = true; m_destinationCidrBlock.assign(value); }

    /**
     * <p>The CIDR block used for destination matches.</p>
     */
    inline TransitGatewayRoute& WithDestinationCidrBlock(const Aws::String& value) { SetDestinationCidrBlock(value); return *this;}

    /**
     * <p>The CIDR block used for destination matches.</p>
     */
    inline TransitGatewayRoute& WithDestinationCidrBlock(Aws::String&& value) { SetDestinationCidrBlock(std::move(value)); return *this;}

    /**
     * <p>The CIDR block used for destination matches.</p>
     */
    inline TransitGatewayRoute& WithDestinationCidrBlock(const char* value) { SetDestinationCidrBlock(value); return *this;}


    /**
     * <p>The attachments.</p>
     */
    inline const Aws::Vector<TransitGatewayRouteAttachment>& GetTransitGatewayAttachments() const{ return m_transitGatewayAttachments; }

    /**
     * <p>The attachments.</p>
     */
    inline bool TransitGatewayAttachmentsHasBeenSet() const { return m_transitGatewayAttachmentsHasBeenSet; }

    /**
     * <p>The attachments.</p>
     */
    inline void SetTransitGatewayAttachments(const Aws::Vector<TransitGatewayRouteAttachment>& value) { m_transitGatewayAttachmentsHasBeenSet = true; m_transitGatewayAttachments = value; }

    /**
     * <p>The attachments.</p>
     */
    inline void SetTransitGatewayAttachments(Aws::Vector<TransitGatewayRouteAttachment>&& value) { m_transitGatewayAttachmentsHasBeenSet = true; m_transitGatewayAttachments = std::move(value); }

    /**
     * <p>The attachments.</p>
     */
    inline TransitGatewayRoute& WithTransitGatewayAttachments(const Aws::Vector<TransitGatewayRouteAttachment>& value) { SetTransitGatewayAttachments(value); return *this;}

    /**
     * <p>The attachments.</p>
     */
    inline TransitGatewayRoute& WithTransitGatewayAttachments(Aws::Vector<TransitGatewayRouteAttachment>&& value) { SetTransitGatewayAttachments(std::move(value)); return *this;}

    /**
     * <p>The attachments.</p>
     */
    inline TransitGatewayRoute& AddTransitGatewayAttachments(const TransitGatewayRouteAttachment& value) { m_transitGatewayAttachmentsHasBeenSet = true; m_transitGatewayAttachments.push_back(value); return *this; }

    /**
     * <p>The attachments.</p>
     */
    inline TransitGatewayRoute& AddTransitGatewayAttachments(TransitGatewayRouteAttachment&& value) { m_transitGatewayAttachmentsHasBeenSet = true; m_transitGatewayAttachments.push_back(std::move(value)); return *this; }


    /**
     * <p>The route type.</p>
     */
    inline const TransitGatewayRouteType& GetType() const{ return m_type; }

    /**
     * <p>The route type.</p>
     */
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }

    /**
     * <p>The route type.</p>
     */
    inline void SetType(const TransitGatewayRouteType& value) { m_typeHasBeenSet = true; m_type = value; }

    /**
     * <p>The route type.</p>
     */
    inline void SetType(TransitGatewayRouteType&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }

    /**
     * <p>The route type.</p>
     */
    inline TransitGatewayRoute& WithType(const TransitGatewayRouteType& value) { SetType(value); return *this;}

    /**
     * <p>The route type.</p>
     */
    inline TransitGatewayRoute& WithType(TransitGatewayRouteType&& value) { SetType(std::move(value)); return *this;}


    /**
     * <p>The state of the route.</p>
     */
    inline const TransitGatewayRouteState& GetState() const{ return m_state; }

    /**
     * <p>The state of the route.</p>
     */
    inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }

    /**
     * <p>The state of the route.</p>
     */
    inline void SetState(const TransitGatewayRouteState& value) { m_stateHasBeenSet = true; m_state = value; }

    /**
     * <p>The state of the route.</p>
     */
    inline void SetState(TransitGatewayRouteState&& value) { m_stateHasBeenSet = true; m_state = std::move(value); }

    /**
     * <p>The state of the route.</p>
     */
    inline TransitGatewayRoute& WithState(const TransitGatewayRouteState& value) { SetState(value); return *this;}

    /**
     * <p>The state of the route.</p>
     */
    inline TransitGatewayRoute& WithState(TransitGatewayRouteState&& value) { SetState(std::move(value)); return *this;}

  private:

    Aws::String m_destinationCidrBlock;
    bool m_destinationCidrBlockHasBeenSet;

    Aws::Vector<TransitGatewayRouteAttachment> m_transitGatewayAttachments;
    bool m_transitGatewayAttachmentsHasBeenSet;

    TransitGatewayRouteType m_type;
    bool m_typeHasBeenSet;

    TransitGatewayRouteState m_state;
    bool m_stateHasBeenSet;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
