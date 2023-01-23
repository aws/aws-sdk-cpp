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
    AWS_EC2_API TransitGatewayPolicyTableAssociation();
    AWS_EC2_API TransitGatewayPolicyTableAssociation(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_EC2_API TransitGatewayPolicyTableAssociation& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_EC2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_EC2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p>The ID of the transit gateway policy table.</p>
     */
    inline const Aws::String& GetTransitGatewayPolicyTableId() const{ return m_transitGatewayPolicyTableId; }

    /**
     * <p>The ID of the transit gateway policy table.</p>
     */
    inline bool TransitGatewayPolicyTableIdHasBeenSet() const { return m_transitGatewayPolicyTableIdHasBeenSet; }

    /**
     * <p>The ID of the transit gateway policy table.</p>
     */
    inline void SetTransitGatewayPolicyTableId(const Aws::String& value) { m_transitGatewayPolicyTableIdHasBeenSet = true; m_transitGatewayPolicyTableId = value; }

    /**
     * <p>The ID of the transit gateway policy table.</p>
     */
    inline void SetTransitGatewayPolicyTableId(Aws::String&& value) { m_transitGatewayPolicyTableIdHasBeenSet = true; m_transitGatewayPolicyTableId = std::move(value); }

    /**
     * <p>The ID of the transit gateway policy table.</p>
     */
    inline void SetTransitGatewayPolicyTableId(const char* value) { m_transitGatewayPolicyTableIdHasBeenSet = true; m_transitGatewayPolicyTableId.assign(value); }

    /**
     * <p>The ID of the transit gateway policy table.</p>
     */
    inline TransitGatewayPolicyTableAssociation& WithTransitGatewayPolicyTableId(const Aws::String& value) { SetTransitGatewayPolicyTableId(value); return *this;}

    /**
     * <p>The ID of the transit gateway policy table.</p>
     */
    inline TransitGatewayPolicyTableAssociation& WithTransitGatewayPolicyTableId(Aws::String&& value) { SetTransitGatewayPolicyTableId(std::move(value)); return *this;}

    /**
     * <p>The ID of the transit gateway policy table.</p>
     */
    inline TransitGatewayPolicyTableAssociation& WithTransitGatewayPolicyTableId(const char* value) { SetTransitGatewayPolicyTableId(value); return *this;}


    /**
     * <p>The ID of the transit gateway attachment.</p>
     */
    inline const Aws::String& GetTransitGatewayAttachmentId() const{ return m_transitGatewayAttachmentId; }

    /**
     * <p>The ID of the transit gateway attachment.</p>
     */
    inline bool TransitGatewayAttachmentIdHasBeenSet() const { return m_transitGatewayAttachmentIdHasBeenSet; }

    /**
     * <p>The ID of the transit gateway attachment.</p>
     */
    inline void SetTransitGatewayAttachmentId(const Aws::String& value) { m_transitGatewayAttachmentIdHasBeenSet = true; m_transitGatewayAttachmentId = value; }

    /**
     * <p>The ID of the transit gateway attachment.</p>
     */
    inline void SetTransitGatewayAttachmentId(Aws::String&& value) { m_transitGatewayAttachmentIdHasBeenSet = true; m_transitGatewayAttachmentId = std::move(value); }

    /**
     * <p>The ID of the transit gateway attachment.</p>
     */
    inline void SetTransitGatewayAttachmentId(const char* value) { m_transitGatewayAttachmentIdHasBeenSet = true; m_transitGatewayAttachmentId.assign(value); }

    /**
     * <p>The ID of the transit gateway attachment.</p>
     */
    inline TransitGatewayPolicyTableAssociation& WithTransitGatewayAttachmentId(const Aws::String& value) { SetTransitGatewayAttachmentId(value); return *this;}

    /**
     * <p>The ID of the transit gateway attachment.</p>
     */
    inline TransitGatewayPolicyTableAssociation& WithTransitGatewayAttachmentId(Aws::String&& value) { SetTransitGatewayAttachmentId(std::move(value)); return *this;}

    /**
     * <p>The ID of the transit gateway attachment.</p>
     */
    inline TransitGatewayPolicyTableAssociation& WithTransitGatewayAttachmentId(const char* value) { SetTransitGatewayAttachmentId(value); return *this;}


    /**
     * <p>The resource ID of the transit gateway attachment.</p>
     */
    inline const Aws::String& GetResourceId() const{ return m_resourceId; }

    /**
     * <p>The resource ID of the transit gateway attachment.</p>
     */
    inline bool ResourceIdHasBeenSet() const { return m_resourceIdHasBeenSet; }

    /**
     * <p>The resource ID of the transit gateway attachment.</p>
     */
    inline void SetResourceId(const Aws::String& value) { m_resourceIdHasBeenSet = true; m_resourceId = value; }

    /**
     * <p>The resource ID of the transit gateway attachment.</p>
     */
    inline void SetResourceId(Aws::String&& value) { m_resourceIdHasBeenSet = true; m_resourceId = std::move(value); }

    /**
     * <p>The resource ID of the transit gateway attachment.</p>
     */
    inline void SetResourceId(const char* value) { m_resourceIdHasBeenSet = true; m_resourceId.assign(value); }

    /**
     * <p>The resource ID of the transit gateway attachment.</p>
     */
    inline TransitGatewayPolicyTableAssociation& WithResourceId(const Aws::String& value) { SetResourceId(value); return *this;}

    /**
     * <p>The resource ID of the transit gateway attachment.</p>
     */
    inline TransitGatewayPolicyTableAssociation& WithResourceId(Aws::String&& value) { SetResourceId(std::move(value)); return *this;}

    /**
     * <p>The resource ID of the transit gateway attachment.</p>
     */
    inline TransitGatewayPolicyTableAssociation& WithResourceId(const char* value) { SetResourceId(value); return *this;}


    /**
     * <p>The resource type for the transit gateway policy table association.</p>
     */
    inline const TransitGatewayAttachmentResourceType& GetResourceType() const{ return m_resourceType; }

    /**
     * <p>The resource type for the transit gateway policy table association.</p>
     */
    inline bool ResourceTypeHasBeenSet() const { return m_resourceTypeHasBeenSet; }

    /**
     * <p>The resource type for the transit gateway policy table association.</p>
     */
    inline void SetResourceType(const TransitGatewayAttachmentResourceType& value) { m_resourceTypeHasBeenSet = true; m_resourceType = value; }

    /**
     * <p>The resource type for the transit gateway policy table association.</p>
     */
    inline void SetResourceType(TransitGatewayAttachmentResourceType&& value) { m_resourceTypeHasBeenSet = true; m_resourceType = std::move(value); }

    /**
     * <p>The resource type for the transit gateway policy table association.</p>
     */
    inline TransitGatewayPolicyTableAssociation& WithResourceType(const TransitGatewayAttachmentResourceType& value) { SetResourceType(value); return *this;}

    /**
     * <p>The resource type for the transit gateway policy table association.</p>
     */
    inline TransitGatewayPolicyTableAssociation& WithResourceType(TransitGatewayAttachmentResourceType&& value) { SetResourceType(std::move(value)); return *this;}


    /**
     * <p>The state of the transit gateway policy table association.</p>
     */
    inline const TransitGatewayAssociationState& GetState() const{ return m_state; }

    /**
     * <p>The state of the transit gateway policy table association.</p>
     */
    inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }

    /**
     * <p>The state of the transit gateway policy table association.</p>
     */
    inline void SetState(const TransitGatewayAssociationState& value) { m_stateHasBeenSet = true; m_state = value; }

    /**
     * <p>The state of the transit gateway policy table association.</p>
     */
    inline void SetState(TransitGatewayAssociationState&& value) { m_stateHasBeenSet = true; m_state = std::move(value); }

    /**
     * <p>The state of the transit gateway policy table association.</p>
     */
    inline TransitGatewayPolicyTableAssociation& WithState(const TransitGatewayAssociationState& value) { SetState(value); return *this;}

    /**
     * <p>The state of the transit gateway policy table association.</p>
     */
    inline TransitGatewayPolicyTableAssociation& WithState(TransitGatewayAssociationState&& value) { SetState(std::move(value)); return *this;}

  private:

    Aws::String m_transitGatewayPolicyTableId;
    bool m_transitGatewayPolicyTableIdHasBeenSet = false;

    Aws::String m_transitGatewayAttachmentId;
    bool m_transitGatewayAttachmentIdHasBeenSet = false;

    Aws::String m_resourceId;
    bool m_resourceIdHasBeenSet = false;

    TransitGatewayAttachmentResourceType m_resourceType;
    bool m_resourceTypeHasBeenSet = false;

    TransitGatewayAssociationState m_state;
    bool m_stateHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
