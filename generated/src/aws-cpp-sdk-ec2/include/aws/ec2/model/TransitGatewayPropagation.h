﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ec2/model/TransitGatewayAttachmentResourceType.h>
#include <aws/ec2/model/TransitGatewayPropagationState.h>
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
   * <p>Describes route propagation.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/TransitGatewayPropagation">AWS
   * API Reference</a></p>
   */
  class TransitGatewayPropagation
  {
  public:
    AWS_EC2_API TransitGatewayPropagation();
    AWS_EC2_API TransitGatewayPropagation(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_EC2_API TransitGatewayPropagation& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_EC2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_EC2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>The ID of the attachment.</p>
     */
    inline const Aws::String& GetTransitGatewayAttachmentId() const{ return m_transitGatewayAttachmentId; }
    inline bool TransitGatewayAttachmentIdHasBeenSet() const { return m_transitGatewayAttachmentIdHasBeenSet; }
    inline void SetTransitGatewayAttachmentId(const Aws::String& value) { m_transitGatewayAttachmentIdHasBeenSet = true; m_transitGatewayAttachmentId = value; }
    inline void SetTransitGatewayAttachmentId(Aws::String&& value) { m_transitGatewayAttachmentIdHasBeenSet = true; m_transitGatewayAttachmentId = std::move(value); }
    inline void SetTransitGatewayAttachmentId(const char* value) { m_transitGatewayAttachmentIdHasBeenSet = true; m_transitGatewayAttachmentId.assign(value); }
    inline TransitGatewayPropagation& WithTransitGatewayAttachmentId(const Aws::String& value) { SetTransitGatewayAttachmentId(value); return *this;}
    inline TransitGatewayPropagation& WithTransitGatewayAttachmentId(Aws::String&& value) { SetTransitGatewayAttachmentId(std::move(value)); return *this;}
    inline TransitGatewayPropagation& WithTransitGatewayAttachmentId(const char* value) { SetTransitGatewayAttachmentId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the resource.</p>
     */
    inline const Aws::String& GetResourceId() const{ return m_resourceId; }
    inline bool ResourceIdHasBeenSet() const { return m_resourceIdHasBeenSet; }
    inline void SetResourceId(const Aws::String& value) { m_resourceIdHasBeenSet = true; m_resourceId = value; }
    inline void SetResourceId(Aws::String&& value) { m_resourceIdHasBeenSet = true; m_resourceId = std::move(value); }
    inline void SetResourceId(const char* value) { m_resourceIdHasBeenSet = true; m_resourceId.assign(value); }
    inline TransitGatewayPropagation& WithResourceId(const Aws::String& value) { SetResourceId(value); return *this;}
    inline TransitGatewayPropagation& WithResourceId(Aws::String&& value) { SetResourceId(std::move(value)); return *this;}
    inline TransitGatewayPropagation& WithResourceId(const char* value) { SetResourceId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The resource type. Note that the <code>tgw-peering</code> resource type has
     * been deprecated.</p>
     */
    inline const TransitGatewayAttachmentResourceType& GetResourceType() const{ return m_resourceType; }
    inline bool ResourceTypeHasBeenSet() const { return m_resourceTypeHasBeenSet; }
    inline void SetResourceType(const TransitGatewayAttachmentResourceType& value) { m_resourceTypeHasBeenSet = true; m_resourceType = value; }
    inline void SetResourceType(TransitGatewayAttachmentResourceType&& value) { m_resourceTypeHasBeenSet = true; m_resourceType = std::move(value); }
    inline TransitGatewayPropagation& WithResourceType(const TransitGatewayAttachmentResourceType& value) { SetResourceType(value); return *this;}
    inline TransitGatewayPropagation& WithResourceType(TransitGatewayAttachmentResourceType&& value) { SetResourceType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the transit gateway route table.</p>
     */
    inline const Aws::String& GetTransitGatewayRouteTableId() const{ return m_transitGatewayRouteTableId; }
    inline bool TransitGatewayRouteTableIdHasBeenSet() const { return m_transitGatewayRouteTableIdHasBeenSet; }
    inline void SetTransitGatewayRouteTableId(const Aws::String& value) { m_transitGatewayRouteTableIdHasBeenSet = true; m_transitGatewayRouteTableId = value; }
    inline void SetTransitGatewayRouteTableId(Aws::String&& value) { m_transitGatewayRouteTableIdHasBeenSet = true; m_transitGatewayRouteTableId = std::move(value); }
    inline void SetTransitGatewayRouteTableId(const char* value) { m_transitGatewayRouteTableIdHasBeenSet = true; m_transitGatewayRouteTableId.assign(value); }
    inline TransitGatewayPropagation& WithTransitGatewayRouteTableId(const Aws::String& value) { SetTransitGatewayRouteTableId(value); return *this;}
    inline TransitGatewayPropagation& WithTransitGatewayRouteTableId(Aws::String&& value) { SetTransitGatewayRouteTableId(std::move(value)); return *this;}
    inline TransitGatewayPropagation& WithTransitGatewayRouteTableId(const char* value) { SetTransitGatewayRouteTableId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The state.</p>
     */
    inline const TransitGatewayPropagationState& GetState() const{ return m_state; }
    inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }
    inline void SetState(const TransitGatewayPropagationState& value) { m_stateHasBeenSet = true; m_state = value; }
    inline void SetState(TransitGatewayPropagationState&& value) { m_stateHasBeenSet = true; m_state = std::move(value); }
    inline TransitGatewayPropagation& WithState(const TransitGatewayPropagationState& value) { SetState(value); return *this;}
    inline TransitGatewayPropagation& WithState(TransitGatewayPropagationState&& value) { SetState(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the transit gateway route table announcement.</p>
     */
    inline const Aws::String& GetTransitGatewayRouteTableAnnouncementId() const{ return m_transitGatewayRouteTableAnnouncementId; }
    inline bool TransitGatewayRouteTableAnnouncementIdHasBeenSet() const { return m_transitGatewayRouteTableAnnouncementIdHasBeenSet; }
    inline void SetTransitGatewayRouteTableAnnouncementId(const Aws::String& value) { m_transitGatewayRouteTableAnnouncementIdHasBeenSet = true; m_transitGatewayRouteTableAnnouncementId = value; }
    inline void SetTransitGatewayRouteTableAnnouncementId(Aws::String&& value) { m_transitGatewayRouteTableAnnouncementIdHasBeenSet = true; m_transitGatewayRouteTableAnnouncementId = std::move(value); }
    inline void SetTransitGatewayRouteTableAnnouncementId(const char* value) { m_transitGatewayRouteTableAnnouncementIdHasBeenSet = true; m_transitGatewayRouteTableAnnouncementId.assign(value); }
    inline TransitGatewayPropagation& WithTransitGatewayRouteTableAnnouncementId(const Aws::String& value) { SetTransitGatewayRouteTableAnnouncementId(value); return *this;}
    inline TransitGatewayPropagation& WithTransitGatewayRouteTableAnnouncementId(Aws::String&& value) { SetTransitGatewayRouteTableAnnouncementId(std::move(value)); return *this;}
    inline TransitGatewayPropagation& WithTransitGatewayRouteTableAnnouncementId(const char* value) { SetTransitGatewayRouteTableAnnouncementId(value); return *this;}
    ///@}
  private:

    Aws::String m_transitGatewayAttachmentId;
    bool m_transitGatewayAttachmentIdHasBeenSet = false;

    Aws::String m_resourceId;
    bool m_resourceIdHasBeenSet = false;

    TransitGatewayAttachmentResourceType m_resourceType;
    bool m_resourceTypeHasBeenSet = false;

    Aws::String m_transitGatewayRouteTableId;
    bool m_transitGatewayRouteTableIdHasBeenSet = false;

    TransitGatewayPropagationState m_state;
    bool m_stateHasBeenSet = false;

    Aws::String m_transitGatewayRouteTableAnnouncementId;
    bool m_transitGatewayRouteTableAnnouncementIdHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
