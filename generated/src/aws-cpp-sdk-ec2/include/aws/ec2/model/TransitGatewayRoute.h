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


    ///@{
    /**
     * <p>The CIDR block used for destination matches.</p>
     */
    inline const Aws::String& GetDestinationCidrBlock() const{ return m_destinationCidrBlock; }
    inline bool DestinationCidrBlockHasBeenSet() const { return m_destinationCidrBlockHasBeenSet; }
    inline void SetDestinationCidrBlock(const Aws::String& value) { m_destinationCidrBlockHasBeenSet = true; m_destinationCidrBlock = value; }
    inline void SetDestinationCidrBlock(Aws::String&& value) { m_destinationCidrBlockHasBeenSet = true; m_destinationCidrBlock = std::move(value); }
    inline void SetDestinationCidrBlock(const char* value) { m_destinationCidrBlockHasBeenSet = true; m_destinationCidrBlock.assign(value); }
    inline TransitGatewayRoute& WithDestinationCidrBlock(const Aws::String& value) { SetDestinationCidrBlock(value); return *this;}
    inline TransitGatewayRoute& WithDestinationCidrBlock(Aws::String&& value) { SetDestinationCidrBlock(std::move(value)); return *this;}
    inline TransitGatewayRoute& WithDestinationCidrBlock(const char* value) { SetDestinationCidrBlock(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the prefix list used for destination matches.</p>
     */
    inline const Aws::String& GetPrefixListId() const{ return m_prefixListId; }
    inline bool PrefixListIdHasBeenSet() const { return m_prefixListIdHasBeenSet; }
    inline void SetPrefixListId(const Aws::String& value) { m_prefixListIdHasBeenSet = true; m_prefixListId = value; }
    inline void SetPrefixListId(Aws::String&& value) { m_prefixListIdHasBeenSet = true; m_prefixListId = std::move(value); }
    inline void SetPrefixListId(const char* value) { m_prefixListIdHasBeenSet = true; m_prefixListId.assign(value); }
    inline TransitGatewayRoute& WithPrefixListId(const Aws::String& value) { SetPrefixListId(value); return *this;}
    inline TransitGatewayRoute& WithPrefixListId(Aws::String&& value) { SetPrefixListId(std::move(value)); return *this;}
    inline TransitGatewayRoute& WithPrefixListId(const char* value) { SetPrefixListId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the transit gateway route table announcement. </p>
     */
    inline const Aws::String& GetTransitGatewayRouteTableAnnouncementId() const{ return m_transitGatewayRouteTableAnnouncementId; }
    inline bool TransitGatewayRouteTableAnnouncementIdHasBeenSet() const { return m_transitGatewayRouteTableAnnouncementIdHasBeenSet; }
    inline void SetTransitGatewayRouteTableAnnouncementId(const Aws::String& value) { m_transitGatewayRouteTableAnnouncementIdHasBeenSet = true; m_transitGatewayRouteTableAnnouncementId = value; }
    inline void SetTransitGatewayRouteTableAnnouncementId(Aws::String&& value) { m_transitGatewayRouteTableAnnouncementIdHasBeenSet = true; m_transitGatewayRouteTableAnnouncementId = std::move(value); }
    inline void SetTransitGatewayRouteTableAnnouncementId(const char* value) { m_transitGatewayRouteTableAnnouncementIdHasBeenSet = true; m_transitGatewayRouteTableAnnouncementId.assign(value); }
    inline TransitGatewayRoute& WithTransitGatewayRouteTableAnnouncementId(const Aws::String& value) { SetTransitGatewayRouteTableAnnouncementId(value); return *this;}
    inline TransitGatewayRoute& WithTransitGatewayRouteTableAnnouncementId(Aws::String&& value) { SetTransitGatewayRouteTableAnnouncementId(std::move(value)); return *this;}
    inline TransitGatewayRoute& WithTransitGatewayRouteTableAnnouncementId(const char* value) { SetTransitGatewayRouteTableAnnouncementId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The attachments.</p>
     */
    inline const Aws::Vector<TransitGatewayRouteAttachment>& GetTransitGatewayAttachments() const{ return m_transitGatewayAttachments; }
    inline bool TransitGatewayAttachmentsHasBeenSet() const { return m_transitGatewayAttachmentsHasBeenSet; }
    inline void SetTransitGatewayAttachments(const Aws::Vector<TransitGatewayRouteAttachment>& value) { m_transitGatewayAttachmentsHasBeenSet = true; m_transitGatewayAttachments = value; }
    inline void SetTransitGatewayAttachments(Aws::Vector<TransitGatewayRouteAttachment>&& value) { m_transitGatewayAttachmentsHasBeenSet = true; m_transitGatewayAttachments = std::move(value); }
    inline TransitGatewayRoute& WithTransitGatewayAttachments(const Aws::Vector<TransitGatewayRouteAttachment>& value) { SetTransitGatewayAttachments(value); return *this;}
    inline TransitGatewayRoute& WithTransitGatewayAttachments(Aws::Vector<TransitGatewayRouteAttachment>&& value) { SetTransitGatewayAttachments(std::move(value)); return *this;}
    inline TransitGatewayRoute& AddTransitGatewayAttachments(const TransitGatewayRouteAttachment& value) { m_transitGatewayAttachmentsHasBeenSet = true; m_transitGatewayAttachments.push_back(value); return *this; }
    inline TransitGatewayRoute& AddTransitGatewayAttachments(TransitGatewayRouteAttachment&& value) { m_transitGatewayAttachmentsHasBeenSet = true; m_transitGatewayAttachments.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The route type.</p>
     */
    inline const TransitGatewayRouteType& GetType() const{ return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(const TransitGatewayRouteType& value) { m_typeHasBeenSet = true; m_type = value; }
    inline void SetType(TransitGatewayRouteType&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }
    inline TransitGatewayRoute& WithType(const TransitGatewayRouteType& value) { SetType(value); return *this;}
    inline TransitGatewayRoute& WithType(TransitGatewayRouteType&& value) { SetType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The state of the route.</p>
     */
    inline const TransitGatewayRouteState& GetState() const{ return m_state; }
    inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }
    inline void SetState(const TransitGatewayRouteState& value) { m_stateHasBeenSet = true; m_state = value; }
    inline void SetState(TransitGatewayRouteState&& value) { m_stateHasBeenSet = true; m_state = std::move(value); }
    inline TransitGatewayRoute& WithState(const TransitGatewayRouteState& value) { SetState(value); return *this;}
    inline TransitGatewayRoute& WithState(TransitGatewayRouteState&& value) { SetState(std::move(value)); return *this;}
    ///@}
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
