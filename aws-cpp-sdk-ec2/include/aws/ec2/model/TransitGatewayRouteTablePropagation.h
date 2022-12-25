/**
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
   * <p>Describes a route table propagation.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/TransitGatewayRouteTablePropagation">AWS
   * API Reference</a></p>
   */
  class TransitGatewayRouteTablePropagation
  {
  public:
    AWS_EC2_API TransitGatewayRouteTablePropagation();
    AWS_EC2_API TransitGatewayRouteTablePropagation(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_EC2_API TransitGatewayRouteTablePropagation& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_EC2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_EC2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p>The ID of the attachment.</p>
     */
    inline const Aws::String& GetTransitGatewayAttachmentId() const{ return m_transitGatewayAttachmentId; }

    /**
     * <p>The ID of the attachment.</p>
     */
    inline bool TransitGatewayAttachmentIdHasBeenSet() const { return m_transitGatewayAttachmentIdHasBeenSet; }

    /**
     * <p>The ID of the attachment.</p>
     */
    inline void SetTransitGatewayAttachmentId(const Aws::String& value) { m_transitGatewayAttachmentIdHasBeenSet = true; m_transitGatewayAttachmentId = value; }

    /**
     * <p>The ID of the attachment.</p>
     */
    inline void SetTransitGatewayAttachmentId(Aws::String&& value) { m_transitGatewayAttachmentIdHasBeenSet = true; m_transitGatewayAttachmentId = std::move(value); }

    /**
     * <p>The ID of the attachment.</p>
     */
    inline void SetTransitGatewayAttachmentId(const char* value) { m_transitGatewayAttachmentIdHasBeenSet = true; m_transitGatewayAttachmentId.assign(value); }

    /**
     * <p>The ID of the attachment.</p>
     */
    inline TransitGatewayRouteTablePropagation& WithTransitGatewayAttachmentId(const Aws::String& value) { SetTransitGatewayAttachmentId(value); return *this;}

    /**
     * <p>The ID of the attachment.</p>
     */
    inline TransitGatewayRouteTablePropagation& WithTransitGatewayAttachmentId(Aws::String&& value) { SetTransitGatewayAttachmentId(std::move(value)); return *this;}

    /**
     * <p>The ID of the attachment.</p>
     */
    inline TransitGatewayRouteTablePropagation& WithTransitGatewayAttachmentId(const char* value) { SetTransitGatewayAttachmentId(value); return *this;}


    /**
     * <p>The ID of the resource.</p>
     */
    inline const Aws::String& GetResourceId() const{ return m_resourceId; }

    /**
     * <p>The ID of the resource.</p>
     */
    inline bool ResourceIdHasBeenSet() const { return m_resourceIdHasBeenSet; }

    /**
     * <p>The ID of the resource.</p>
     */
    inline void SetResourceId(const Aws::String& value) { m_resourceIdHasBeenSet = true; m_resourceId = value; }

    /**
     * <p>The ID of the resource.</p>
     */
    inline void SetResourceId(Aws::String&& value) { m_resourceIdHasBeenSet = true; m_resourceId = std::move(value); }

    /**
     * <p>The ID of the resource.</p>
     */
    inline void SetResourceId(const char* value) { m_resourceIdHasBeenSet = true; m_resourceId.assign(value); }

    /**
     * <p>The ID of the resource.</p>
     */
    inline TransitGatewayRouteTablePropagation& WithResourceId(const Aws::String& value) { SetResourceId(value); return *this;}

    /**
     * <p>The ID of the resource.</p>
     */
    inline TransitGatewayRouteTablePropagation& WithResourceId(Aws::String&& value) { SetResourceId(std::move(value)); return *this;}

    /**
     * <p>The ID of the resource.</p>
     */
    inline TransitGatewayRouteTablePropagation& WithResourceId(const char* value) { SetResourceId(value); return *this;}


    /**
     * <p>The type of resource. Note that the <code>tgw-peering</code> resource type
     * has been deprecated.</p>
     */
    inline const TransitGatewayAttachmentResourceType& GetResourceType() const{ return m_resourceType; }

    /**
     * <p>The type of resource. Note that the <code>tgw-peering</code> resource type
     * has been deprecated.</p>
     */
    inline bool ResourceTypeHasBeenSet() const { return m_resourceTypeHasBeenSet; }

    /**
     * <p>The type of resource. Note that the <code>tgw-peering</code> resource type
     * has been deprecated.</p>
     */
    inline void SetResourceType(const TransitGatewayAttachmentResourceType& value) { m_resourceTypeHasBeenSet = true; m_resourceType = value; }

    /**
     * <p>The type of resource. Note that the <code>tgw-peering</code> resource type
     * has been deprecated.</p>
     */
    inline void SetResourceType(TransitGatewayAttachmentResourceType&& value) { m_resourceTypeHasBeenSet = true; m_resourceType = std::move(value); }

    /**
     * <p>The type of resource. Note that the <code>tgw-peering</code> resource type
     * has been deprecated.</p>
     */
    inline TransitGatewayRouteTablePropagation& WithResourceType(const TransitGatewayAttachmentResourceType& value) { SetResourceType(value); return *this;}

    /**
     * <p>The type of resource. Note that the <code>tgw-peering</code> resource type
     * has been deprecated.</p>
     */
    inline TransitGatewayRouteTablePropagation& WithResourceType(TransitGatewayAttachmentResourceType&& value) { SetResourceType(std::move(value)); return *this;}


    /**
     * <p>The state of the resource.</p>
     */
    inline const TransitGatewayPropagationState& GetState() const{ return m_state; }

    /**
     * <p>The state of the resource.</p>
     */
    inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }

    /**
     * <p>The state of the resource.</p>
     */
    inline void SetState(const TransitGatewayPropagationState& value) { m_stateHasBeenSet = true; m_state = value; }

    /**
     * <p>The state of the resource.</p>
     */
    inline void SetState(TransitGatewayPropagationState&& value) { m_stateHasBeenSet = true; m_state = std::move(value); }

    /**
     * <p>The state of the resource.</p>
     */
    inline TransitGatewayRouteTablePropagation& WithState(const TransitGatewayPropagationState& value) { SetState(value); return *this;}

    /**
     * <p>The state of the resource.</p>
     */
    inline TransitGatewayRouteTablePropagation& WithState(TransitGatewayPropagationState&& value) { SetState(std::move(value)); return *this;}


    /**
     * <p>The ID of the transit gateway route table announcement.</p>
     */
    inline const Aws::String& GetTransitGatewayRouteTableAnnouncementId() const{ return m_transitGatewayRouteTableAnnouncementId; }

    /**
     * <p>The ID of the transit gateway route table announcement.</p>
     */
    inline bool TransitGatewayRouteTableAnnouncementIdHasBeenSet() const { return m_transitGatewayRouteTableAnnouncementIdHasBeenSet; }

    /**
     * <p>The ID of the transit gateway route table announcement.</p>
     */
    inline void SetTransitGatewayRouteTableAnnouncementId(const Aws::String& value) { m_transitGatewayRouteTableAnnouncementIdHasBeenSet = true; m_transitGatewayRouteTableAnnouncementId = value; }

    /**
     * <p>The ID of the transit gateway route table announcement.</p>
     */
    inline void SetTransitGatewayRouteTableAnnouncementId(Aws::String&& value) { m_transitGatewayRouteTableAnnouncementIdHasBeenSet = true; m_transitGatewayRouteTableAnnouncementId = std::move(value); }

    /**
     * <p>The ID of the transit gateway route table announcement.</p>
     */
    inline void SetTransitGatewayRouteTableAnnouncementId(const char* value) { m_transitGatewayRouteTableAnnouncementIdHasBeenSet = true; m_transitGatewayRouteTableAnnouncementId.assign(value); }

    /**
     * <p>The ID of the transit gateway route table announcement.</p>
     */
    inline TransitGatewayRouteTablePropagation& WithTransitGatewayRouteTableAnnouncementId(const Aws::String& value) { SetTransitGatewayRouteTableAnnouncementId(value); return *this;}

    /**
     * <p>The ID of the transit gateway route table announcement.</p>
     */
    inline TransitGatewayRouteTablePropagation& WithTransitGatewayRouteTableAnnouncementId(Aws::String&& value) { SetTransitGatewayRouteTableAnnouncementId(std::move(value)); return *this;}

    /**
     * <p>The ID of the transit gateway route table announcement.</p>
     */
    inline TransitGatewayRouteTablePropagation& WithTransitGatewayRouteTableAnnouncementId(const char* value) { SetTransitGatewayRouteTableAnnouncementId(value); return *this;}

  private:

    Aws::String m_transitGatewayAttachmentId;
    bool m_transitGatewayAttachmentIdHasBeenSet = false;

    Aws::String m_resourceId;
    bool m_resourceIdHasBeenSet = false;

    TransitGatewayAttachmentResourceType m_resourceType;
    bool m_resourceTypeHasBeenSet = false;

    TransitGatewayPropagationState m_state;
    bool m_stateHasBeenSet = false;

    Aws::String m_transitGatewayRouteTableAnnouncementId;
    bool m_transitGatewayRouteTableAnnouncementIdHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
