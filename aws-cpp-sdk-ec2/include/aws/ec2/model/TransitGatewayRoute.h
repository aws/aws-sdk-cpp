/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
  class TransitGatewayRoute
  {
  public:
    AWS_EC2_API TransitGatewayRoute();
    AWS_EC2_API TransitGatewayRoute(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_EC2_API TransitGatewayRoute& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_EC2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_EC2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


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
     * <p>The ID of the prefix list used for destination matches.</p>
     */
    inline const Aws::String& GetPrefixListId() const{ return m_prefixListId; }

    /**
     * <p>The ID of the prefix list used for destination matches.</p>
     */
    inline bool PrefixListIdHasBeenSet() const { return m_prefixListIdHasBeenSet; }

    /**
     * <p>The ID of the prefix list used for destination matches.</p>
     */
    inline void SetPrefixListId(const Aws::String& value) { m_prefixListIdHasBeenSet = true; m_prefixListId = value; }

    /**
     * <p>The ID of the prefix list used for destination matches.</p>
     */
    inline void SetPrefixListId(Aws::String&& value) { m_prefixListIdHasBeenSet = true; m_prefixListId = std::move(value); }

    /**
     * <p>The ID of the prefix list used for destination matches.</p>
     */
    inline void SetPrefixListId(const char* value) { m_prefixListIdHasBeenSet = true; m_prefixListId.assign(value); }

    /**
     * <p>The ID of the prefix list used for destination matches.</p>
     */
    inline TransitGatewayRoute& WithPrefixListId(const Aws::String& value) { SetPrefixListId(value); return *this;}

    /**
     * <p>The ID of the prefix list used for destination matches.</p>
     */
    inline TransitGatewayRoute& WithPrefixListId(Aws::String&& value) { SetPrefixListId(std::move(value)); return *this;}

    /**
     * <p>The ID of the prefix list used for destination matches.</p>
     */
    inline TransitGatewayRoute& WithPrefixListId(const char* value) { SetPrefixListId(value); return *this;}


    /**
     * <p>The ID of the transit gateway route table announcement. </p>
     */
    inline const Aws::String& GetTransitGatewayRouteTableAnnouncementId() const{ return m_transitGatewayRouteTableAnnouncementId; }

    /**
     * <p>The ID of the transit gateway route table announcement. </p>
     */
    inline bool TransitGatewayRouteTableAnnouncementIdHasBeenSet() const { return m_transitGatewayRouteTableAnnouncementIdHasBeenSet; }

    /**
     * <p>The ID of the transit gateway route table announcement. </p>
     */
    inline void SetTransitGatewayRouteTableAnnouncementId(const Aws::String& value) { m_transitGatewayRouteTableAnnouncementIdHasBeenSet = true; m_transitGatewayRouteTableAnnouncementId = value; }

    /**
     * <p>The ID of the transit gateway route table announcement. </p>
     */
    inline void SetTransitGatewayRouteTableAnnouncementId(Aws::String&& value) { m_transitGatewayRouteTableAnnouncementIdHasBeenSet = true; m_transitGatewayRouteTableAnnouncementId = std::move(value); }

    /**
     * <p>The ID of the transit gateway route table announcement. </p>
     */
    inline void SetTransitGatewayRouteTableAnnouncementId(const char* value) { m_transitGatewayRouteTableAnnouncementIdHasBeenSet = true; m_transitGatewayRouteTableAnnouncementId.assign(value); }

    /**
     * <p>The ID of the transit gateway route table announcement. </p>
     */
    inline TransitGatewayRoute& WithTransitGatewayRouteTableAnnouncementId(const Aws::String& value) { SetTransitGatewayRouteTableAnnouncementId(value); return *this;}

    /**
     * <p>The ID of the transit gateway route table announcement. </p>
     */
    inline TransitGatewayRoute& WithTransitGatewayRouteTableAnnouncementId(Aws::String&& value) { SetTransitGatewayRouteTableAnnouncementId(std::move(value)); return *this;}

    /**
     * <p>The ID of the transit gateway route table announcement. </p>
     */
    inline TransitGatewayRoute& WithTransitGatewayRouteTableAnnouncementId(const char* value) { SetTransitGatewayRouteTableAnnouncementId(value); return *this;}


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
    bool m_destinationCidrBlockHasBeenSet = false;

    Aws::String m_prefixListId;
    bool m_prefixListIdHasBeenSet = false;

    Aws::String m_transitGatewayRouteTableAnnouncementId;
    bool m_transitGatewayRouteTableAnnouncementIdHasBeenSet = false;

    Aws::Vector<TransitGatewayRouteAttachment> m_transitGatewayAttachments;
    bool m_transitGatewayAttachmentsHasBeenSet = false;

    TransitGatewayRouteType m_type;
    bool m_typeHasBeenSet = false;

    TransitGatewayRouteState m_state;
    bool m_stateHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
