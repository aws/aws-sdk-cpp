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
   * <p>Describes a route table propagation.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/TransitGatewayRouteTablePropagation">AWS
   * API Reference</a></p>
   */
  class TransitGatewayRouteTablePropagation
  {
  public:
    AWS_EC2_API TransitGatewayRouteTablePropagation() = default;
    AWS_EC2_API TransitGatewayRouteTablePropagation(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_EC2_API TransitGatewayRouteTablePropagation& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_EC2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_EC2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>The ID of the attachment.</p>
     */
    inline const Aws::String& GetTransitGatewayAttachmentId() const { return m_transitGatewayAttachmentId; }
    inline bool TransitGatewayAttachmentIdHasBeenSet() const { return m_transitGatewayAttachmentIdHasBeenSet; }
    template<typename TransitGatewayAttachmentIdT = Aws::String>
    void SetTransitGatewayAttachmentId(TransitGatewayAttachmentIdT&& value) { m_transitGatewayAttachmentIdHasBeenSet = true; m_transitGatewayAttachmentId = std::forward<TransitGatewayAttachmentIdT>(value); }
    template<typename TransitGatewayAttachmentIdT = Aws::String>
    TransitGatewayRouteTablePropagation& WithTransitGatewayAttachmentId(TransitGatewayAttachmentIdT&& value) { SetTransitGatewayAttachmentId(std::forward<TransitGatewayAttachmentIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the resource.</p>
     */
    inline const Aws::String& GetResourceId() const { return m_resourceId; }
    inline bool ResourceIdHasBeenSet() const { return m_resourceIdHasBeenSet; }
    template<typename ResourceIdT = Aws::String>
    void SetResourceId(ResourceIdT&& value) { m_resourceIdHasBeenSet = true; m_resourceId = std::forward<ResourceIdT>(value); }
    template<typename ResourceIdT = Aws::String>
    TransitGatewayRouteTablePropagation& WithResourceId(ResourceIdT&& value) { SetResourceId(std::forward<ResourceIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of resource. Note that the <code>tgw-peering</code> resource type
     * has been deprecated.</p>
     */
    inline TransitGatewayAttachmentResourceType GetResourceType() const { return m_resourceType; }
    inline bool ResourceTypeHasBeenSet() const { return m_resourceTypeHasBeenSet; }
    inline void SetResourceType(TransitGatewayAttachmentResourceType value) { m_resourceTypeHasBeenSet = true; m_resourceType = value; }
    inline TransitGatewayRouteTablePropagation& WithResourceType(TransitGatewayAttachmentResourceType value) { SetResourceType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The state of the resource.</p>
     */
    inline TransitGatewayPropagationState GetState() const { return m_state; }
    inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }
    inline void SetState(TransitGatewayPropagationState value) { m_stateHasBeenSet = true; m_state = value; }
    inline TransitGatewayRouteTablePropagation& WithState(TransitGatewayPropagationState value) { SetState(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the transit gateway route table announcement.</p>
     */
    inline const Aws::String& GetTransitGatewayRouteTableAnnouncementId() const { return m_transitGatewayRouteTableAnnouncementId; }
    inline bool TransitGatewayRouteTableAnnouncementIdHasBeenSet() const { return m_transitGatewayRouteTableAnnouncementIdHasBeenSet; }
    template<typename TransitGatewayRouteTableAnnouncementIdT = Aws::String>
    void SetTransitGatewayRouteTableAnnouncementId(TransitGatewayRouteTableAnnouncementIdT&& value) { m_transitGatewayRouteTableAnnouncementIdHasBeenSet = true; m_transitGatewayRouteTableAnnouncementId = std::forward<TransitGatewayRouteTableAnnouncementIdT>(value); }
    template<typename TransitGatewayRouteTableAnnouncementIdT = Aws::String>
    TransitGatewayRouteTablePropagation& WithTransitGatewayRouteTableAnnouncementId(TransitGatewayRouteTableAnnouncementIdT&& value) { SetTransitGatewayRouteTableAnnouncementId(std::forward<TransitGatewayRouteTableAnnouncementIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_transitGatewayAttachmentId;
    bool m_transitGatewayAttachmentIdHasBeenSet = false;

    Aws::String m_resourceId;
    bool m_resourceIdHasBeenSet = false;

    TransitGatewayAttachmentResourceType m_resourceType{TransitGatewayAttachmentResourceType::NOT_SET};
    bool m_resourceTypeHasBeenSet = false;

    TransitGatewayPropagationState m_state{TransitGatewayPropagationState::NOT_SET};
    bool m_stateHasBeenSet = false;

    Aws::String m_transitGatewayRouteTableAnnouncementId;
    bool m_transitGatewayRouteTableAnnouncementIdHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
