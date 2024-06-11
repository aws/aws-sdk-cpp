/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ec2/model/TransitGatewayPrefixListReferenceState.h>
#include <aws/ec2/model/TransitGatewayPrefixListAttachment.h>
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
   * <p>Describes a prefix list reference.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/TransitGatewayPrefixListReference">AWS
   * API Reference</a></p>
   */
  class TransitGatewayPrefixListReference
  {
  public:
    AWS_EC2_API TransitGatewayPrefixListReference();
    AWS_EC2_API TransitGatewayPrefixListReference(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_EC2_API TransitGatewayPrefixListReference& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_EC2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_EC2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>The ID of the transit gateway route table.</p>
     */
    inline const Aws::String& GetTransitGatewayRouteTableId() const{ return m_transitGatewayRouteTableId; }
    inline bool TransitGatewayRouteTableIdHasBeenSet() const { return m_transitGatewayRouteTableIdHasBeenSet; }
    inline void SetTransitGatewayRouteTableId(const Aws::String& value) { m_transitGatewayRouteTableIdHasBeenSet = true; m_transitGatewayRouteTableId = value; }
    inline void SetTransitGatewayRouteTableId(Aws::String&& value) { m_transitGatewayRouteTableIdHasBeenSet = true; m_transitGatewayRouteTableId = std::move(value); }
    inline void SetTransitGatewayRouteTableId(const char* value) { m_transitGatewayRouteTableIdHasBeenSet = true; m_transitGatewayRouteTableId.assign(value); }
    inline TransitGatewayPrefixListReference& WithTransitGatewayRouteTableId(const Aws::String& value) { SetTransitGatewayRouteTableId(value); return *this;}
    inline TransitGatewayPrefixListReference& WithTransitGatewayRouteTableId(Aws::String&& value) { SetTransitGatewayRouteTableId(std::move(value)); return *this;}
    inline TransitGatewayPrefixListReference& WithTransitGatewayRouteTableId(const char* value) { SetTransitGatewayRouteTableId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the prefix list.</p>
     */
    inline const Aws::String& GetPrefixListId() const{ return m_prefixListId; }
    inline bool PrefixListIdHasBeenSet() const { return m_prefixListIdHasBeenSet; }
    inline void SetPrefixListId(const Aws::String& value) { m_prefixListIdHasBeenSet = true; m_prefixListId = value; }
    inline void SetPrefixListId(Aws::String&& value) { m_prefixListIdHasBeenSet = true; m_prefixListId = std::move(value); }
    inline void SetPrefixListId(const char* value) { m_prefixListIdHasBeenSet = true; m_prefixListId.assign(value); }
    inline TransitGatewayPrefixListReference& WithPrefixListId(const Aws::String& value) { SetPrefixListId(value); return *this;}
    inline TransitGatewayPrefixListReference& WithPrefixListId(Aws::String&& value) { SetPrefixListId(std::move(value)); return *this;}
    inline TransitGatewayPrefixListReference& WithPrefixListId(const char* value) { SetPrefixListId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the prefix list owner.</p>
     */
    inline const Aws::String& GetPrefixListOwnerId() const{ return m_prefixListOwnerId; }
    inline bool PrefixListOwnerIdHasBeenSet() const { return m_prefixListOwnerIdHasBeenSet; }
    inline void SetPrefixListOwnerId(const Aws::String& value) { m_prefixListOwnerIdHasBeenSet = true; m_prefixListOwnerId = value; }
    inline void SetPrefixListOwnerId(Aws::String&& value) { m_prefixListOwnerIdHasBeenSet = true; m_prefixListOwnerId = std::move(value); }
    inline void SetPrefixListOwnerId(const char* value) { m_prefixListOwnerIdHasBeenSet = true; m_prefixListOwnerId.assign(value); }
    inline TransitGatewayPrefixListReference& WithPrefixListOwnerId(const Aws::String& value) { SetPrefixListOwnerId(value); return *this;}
    inline TransitGatewayPrefixListReference& WithPrefixListOwnerId(Aws::String&& value) { SetPrefixListOwnerId(std::move(value)); return *this;}
    inline TransitGatewayPrefixListReference& WithPrefixListOwnerId(const char* value) { SetPrefixListOwnerId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The state of the prefix list reference.</p>
     */
    inline const TransitGatewayPrefixListReferenceState& GetState() const{ return m_state; }
    inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }
    inline void SetState(const TransitGatewayPrefixListReferenceState& value) { m_stateHasBeenSet = true; m_state = value; }
    inline void SetState(TransitGatewayPrefixListReferenceState&& value) { m_stateHasBeenSet = true; m_state = std::move(value); }
    inline TransitGatewayPrefixListReference& WithState(const TransitGatewayPrefixListReferenceState& value) { SetState(value); return *this;}
    inline TransitGatewayPrefixListReference& WithState(TransitGatewayPrefixListReferenceState&& value) { SetState(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether traffic that matches this route is dropped.</p>
     */
    inline bool GetBlackhole() const{ return m_blackhole; }
    inline bool BlackholeHasBeenSet() const { return m_blackholeHasBeenSet; }
    inline void SetBlackhole(bool value) { m_blackholeHasBeenSet = true; m_blackhole = value; }
    inline TransitGatewayPrefixListReference& WithBlackhole(bool value) { SetBlackhole(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information about the transit gateway attachment.</p>
     */
    inline const TransitGatewayPrefixListAttachment& GetTransitGatewayAttachment() const{ return m_transitGatewayAttachment; }
    inline bool TransitGatewayAttachmentHasBeenSet() const { return m_transitGatewayAttachmentHasBeenSet; }
    inline void SetTransitGatewayAttachment(const TransitGatewayPrefixListAttachment& value) { m_transitGatewayAttachmentHasBeenSet = true; m_transitGatewayAttachment = value; }
    inline void SetTransitGatewayAttachment(TransitGatewayPrefixListAttachment&& value) { m_transitGatewayAttachmentHasBeenSet = true; m_transitGatewayAttachment = std::move(value); }
    inline TransitGatewayPrefixListReference& WithTransitGatewayAttachment(const TransitGatewayPrefixListAttachment& value) { SetTransitGatewayAttachment(value); return *this;}
    inline TransitGatewayPrefixListReference& WithTransitGatewayAttachment(TransitGatewayPrefixListAttachment&& value) { SetTransitGatewayAttachment(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_transitGatewayRouteTableId;
    bool m_transitGatewayRouteTableIdHasBeenSet = false;

    Aws::String m_prefixListId;
    bool m_prefixListIdHasBeenSet = false;

    Aws::String m_prefixListOwnerId;
    bool m_prefixListOwnerIdHasBeenSet = false;

    TransitGatewayPrefixListReferenceState m_state;
    bool m_stateHasBeenSet = false;

    bool m_blackhole;
    bool m_blackholeHasBeenSet = false;

    TransitGatewayPrefixListAttachment m_transitGatewayAttachment;
    bool m_transitGatewayAttachmentHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
