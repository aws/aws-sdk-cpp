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
    AWS_EC2_API TransitGatewayRoute() = default;
    AWS_EC2_API TransitGatewayRoute(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_EC2_API TransitGatewayRoute& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_EC2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_EC2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>The CIDR block used for destination matches.</p>
     */
    inline const Aws::String& GetDestinationCidrBlock() const { return m_destinationCidrBlock; }
    inline bool DestinationCidrBlockHasBeenSet() const { return m_destinationCidrBlockHasBeenSet; }
    template<typename DestinationCidrBlockT = Aws::String>
    void SetDestinationCidrBlock(DestinationCidrBlockT&& value) { m_destinationCidrBlockHasBeenSet = true; m_destinationCidrBlock = std::forward<DestinationCidrBlockT>(value); }
    template<typename DestinationCidrBlockT = Aws::String>
    TransitGatewayRoute& WithDestinationCidrBlock(DestinationCidrBlockT&& value) { SetDestinationCidrBlock(std::forward<DestinationCidrBlockT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the prefix list used for destination matches.</p>
     */
    inline const Aws::String& GetPrefixListId() const { return m_prefixListId; }
    inline bool PrefixListIdHasBeenSet() const { return m_prefixListIdHasBeenSet; }
    template<typename PrefixListIdT = Aws::String>
    void SetPrefixListId(PrefixListIdT&& value) { m_prefixListIdHasBeenSet = true; m_prefixListId = std::forward<PrefixListIdT>(value); }
    template<typename PrefixListIdT = Aws::String>
    TransitGatewayRoute& WithPrefixListId(PrefixListIdT&& value) { SetPrefixListId(std::forward<PrefixListIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the transit gateway route table announcement. </p>
     */
    inline const Aws::String& GetTransitGatewayRouteTableAnnouncementId() const { return m_transitGatewayRouteTableAnnouncementId; }
    inline bool TransitGatewayRouteTableAnnouncementIdHasBeenSet() const { return m_transitGatewayRouteTableAnnouncementIdHasBeenSet; }
    template<typename TransitGatewayRouteTableAnnouncementIdT = Aws::String>
    void SetTransitGatewayRouteTableAnnouncementId(TransitGatewayRouteTableAnnouncementIdT&& value) { m_transitGatewayRouteTableAnnouncementIdHasBeenSet = true; m_transitGatewayRouteTableAnnouncementId = std::forward<TransitGatewayRouteTableAnnouncementIdT>(value); }
    template<typename TransitGatewayRouteTableAnnouncementIdT = Aws::String>
    TransitGatewayRoute& WithTransitGatewayRouteTableAnnouncementId(TransitGatewayRouteTableAnnouncementIdT&& value) { SetTransitGatewayRouteTableAnnouncementId(std::forward<TransitGatewayRouteTableAnnouncementIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The attachments.</p>
     */
    inline const Aws::Vector<TransitGatewayRouteAttachment>& GetTransitGatewayAttachments() const { return m_transitGatewayAttachments; }
    inline bool TransitGatewayAttachmentsHasBeenSet() const { return m_transitGatewayAttachmentsHasBeenSet; }
    template<typename TransitGatewayAttachmentsT = Aws::Vector<TransitGatewayRouteAttachment>>
    void SetTransitGatewayAttachments(TransitGatewayAttachmentsT&& value) { m_transitGatewayAttachmentsHasBeenSet = true; m_transitGatewayAttachments = std::forward<TransitGatewayAttachmentsT>(value); }
    template<typename TransitGatewayAttachmentsT = Aws::Vector<TransitGatewayRouteAttachment>>
    TransitGatewayRoute& WithTransitGatewayAttachments(TransitGatewayAttachmentsT&& value) { SetTransitGatewayAttachments(std::forward<TransitGatewayAttachmentsT>(value)); return *this;}
    template<typename TransitGatewayAttachmentsT = TransitGatewayRouteAttachment>
    TransitGatewayRoute& AddTransitGatewayAttachments(TransitGatewayAttachmentsT&& value) { m_transitGatewayAttachmentsHasBeenSet = true; m_transitGatewayAttachments.emplace_back(std::forward<TransitGatewayAttachmentsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The route type.</p>
     */
    inline TransitGatewayRouteType GetType() const { return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(TransitGatewayRouteType value) { m_typeHasBeenSet = true; m_type = value; }
    inline TransitGatewayRoute& WithType(TransitGatewayRouteType value) { SetType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The state of the route.</p>
     */
    inline TransitGatewayRouteState GetState() const { return m_state; }
    inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }
    inline void SetState(TransitGatewayRouteState value) { m_stateHasBeenSet = true; m_state = value; }
    inline TransitGatewayRoute& WithState(TransitGatewayRouteState value) { SetState(value); return *this;}
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

    TransitGatewayRouteType m_type{TransitGatewayRouteType::NOT_SET};
    bool m_typeHasBeenSet = false;

    TransitGatewayRouteState m_state{TransitGatewayRouteState::NOT_SET};
    bool m_stateHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
