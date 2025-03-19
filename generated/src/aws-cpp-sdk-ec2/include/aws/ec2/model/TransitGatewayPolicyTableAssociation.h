/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ec2/model/TransitGatewayAttachmentResourceType.h>
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
   * <p>Describes a transit gateway policy table association.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/TransitGatewayPolicyTableAssociation">AWS
   * API Reference</a></p>
   */
  class TransitGatewayPolicyTableAssociation
  {
  public:
    AWS_EC2_API TransitGatewayPolicyTableAssociation() = default;
    AWS_EC2_API TransitGatewayPolicyTableAssociation(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_EC2_API TransitGatewayPolicyTableAssociation& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_EC2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_EC2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>The ID of the transit gateway policy table.</p>
     */
    inline const Aws::String& GetTransitGatewayPolicyTableId() const { return m_transitGatewayPolicyTableId; }
    inline bool TransitGatewayPolicyTableIdHasBeenSet() const { return m_transitGatewayPolicyTableIdHasBeenSet; }
    template<typename TransitGatewayPolicyTableIdT = Aws::String>
    void SetTransitGatewayPolicyTableId(TransitGatewayPolicyTableIdT&& value) { m_transitGatewayPolicyTableIdHasBeenSet = true; m_transitGatewayPolicyTableId = std::forward<TransitGatewayPolicyTableIdT>(value); }
    template<typename TransitGatewayPolicyTableIdT = Aws::String>
    TransitGatewayPolicyTableAssociation& WithTransitGatewayPolicyTableId(TransitGatewayPolicyTableIdT&& value) { SetTransitGatewayPolicyTableId(std::forward<TransitGatewayPolicyTableIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the transit gateway attachment.</p>
     */
    inline const Aws::String& GetTransitGatewayAttachmentId() const { return m_transitGatewayAttachmentId; }
    inline bool TransitGatewayAttachmentIdHasBeenSet() const { return m_transitGatewayAttachmentIdHasBeenSet; }
    template<typename TransitGatewayAttachmentIdT = Aws::String>
    void SetTransitGatewayAttachmentId(TransitGatewayAttachmentIdT&& value) { m_transitGatewayAttachmentIdHasBeenSet = true; m_transitGatewayAttachmentId = std::forward<TransitGatewayAttachmentIdT>(value); }
    template<typename TransitGatewayAttachmentIdT = Aws::String>
    TransitGatewayPolicyTableAssociation& WithTransitGatewayAttachmentId(TransitGatewayAttachmentIdT&& value) { SetTransitGatewayAttachmentId(std::forward<TransitGatewayAttachmentIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The resource ID of the transit gateway attachment.</p>
     */
    inline const Aws::String& GetResourceId() const { return m_resourceId; }
    inline bool ResourceIdHasBeenSet() const { return m_resourceIdHasBeenSet; }
    template<typename ResourceIdT = Aws::String>
    void SetResourceId(ResourceIdT&& value) { m_resourceIdHasBeenSet = true; m_resourceId = std::forward<ResourceIdT>(value); }
    template<typename ResourceIdT = Aws::String>
    TransitGatewayPolicyTableAssociation& WithResourceId(ResourceIdT&& value) { SetResourceId(std::forward<ResourceIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The resource type for the transit gateway policy table association.</p>
     */
    inline TransitGatewayAttachmentResourceType GetResourceType() const { return m_resourceType; }
    inline bool ResourceTypeHasBeenSet() const { return m_resourceTypeHasBeenSet; }
    inline void SetResourceType(TransitGatewayAttachmentResourceType value) { m_resourceTypeHasBeenSet = true; m_resourceType = value; }
    inline TransitGatewayPolicyTableAssociation& WithResourceType(TransitGatewayAttachmentResourceType value) { SetResourceType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The state of the transit gateway policy table association.</p>
     */
    inline TransitGatewayAssociationState GetState() const { return m_state; }
    inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }
    inline void SetState(TransitGatewayAssociationState value) { m_stateHasBeenSet = true; m_state = value; }
    inline TransitGatewayPolicyTableAssociation& WithState(TransitGatewayAssociationState value) { SetState(value); return *this;}
    ///@}
  private:

    Aws::String m_transitGatewayPolicyTableId;
    bool m_transitGatewayPolicyTableIdHasBeenSet = false;

    Aws::String m_transitGatewayAttachmentId;
    bool m_transitGatewayAttachmentIdHasBeenSet = false;

    Aws::String m_resourceId;
    bool m_resourceIdHasBeenSet = false;

    TransitGatewayAttachmentResourceType m_resourceType{TransitGatewayAttachmentResourceType::NOT_SET};
    bool m_resourceTypeHasBeenSet = false;

    TransitGatewayAssociationState m_state{TransitGatewayAssociationState::NOT_SET};
    bool m_stateHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
