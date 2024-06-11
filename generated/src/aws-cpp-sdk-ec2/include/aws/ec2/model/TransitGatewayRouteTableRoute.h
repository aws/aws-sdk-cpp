/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
   * <p>Describes a route in a transit gateway route table.</p><p><h3>See Also:</h3> 
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/TransitGatewayRouteTableRoute">AWS
   * API Reference</a></p>
   */
  class TransitGatewayRouteTableRoute
  {
  public:
    AWS_EC2_API TransitGatewayRouteTableRoute();
    AWS_EC2_API TransitGatewayRouteTableRoute(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_EC2_API TransitGatewayRouteTableRoute& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_EC2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_EC2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>The CIDR block used for destination matches.</p>
     */
    inline const Aws::String& GetDestinationCidr() const{ return m_destinationCidr; }
    inline bool DestinationCidrHasBeenSet() const { return m_destinationCidrHasBeenSet; }
    inline void SetDestinationCidr(const Aws::String& value) { m_destinationCidrHasBeenSet = true; m_destinationCidr = value; }
    inline void SetDestinationCidr(Aws::String&& value) { m_destinationCidrHasBeenSet = true; m_destinationCidr = std::move(value); }
    inline void SetDestinationCidr(const char* value) { m_destinationCidrHasBeenSet = true; m_destinationCidr.assign(value); }
    inline TransitGatewayRouteTableRoute& WithDestinationCidr(const Aws::String& value) { SetDestinationCidr(value); return *this;}
    inline TransitGatewayRouteTableRoute& WithDestinationCidr(Aws::String&& value) { SetDestinationCidr(std::move(value)); return *this;}
    inline TransitGatewayRouteTableRoute& WithDestinationCidr(const char* value) { SetDestinationCidr(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The state of the route.</p>
     */
    inline const Aws::String& GetState() const{ return m_state; }
    inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }
    inline void SetState(const Aws::String& value) { m_stateHasBeenSet = true; m_state = value; }
    inline void SetState(Aws::String&& value) { m_stateHasBeenSet = true; m_state = std::move(value); }
    inline void SetState(const char* value) { m_stateHasBeenSet = true; m_state.assign(value); }
    inline TransitGatewayRouteTableRoute& WithState(const Aws::String& value) { SetState(value); return *this;}
    inline TransitGatewayRouteTableRoute& WithState(Aws::String&& value) { SetState(std::move(value)); return *this;}
    inline TransitGatewayRouteTableRoute& WithState(const char* value) { SetState(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The route origin. The following are the possible values:</p> <ul> <li>
     * <p>static</p> </li> <li> <p>propagated</p> </li> </ul>
     */
    inline const Aws::String& GetRouteOrigin() const{ return m_routeOrigin; }
    inline bool RouteOriginHasBeenSet() const { return m_routeOriginHasBeenSet; }
    inline void SetRouteOrigin(const Aws::String& value) { m_routeOriginHasBeenSet = true; m_routeOrigin = value; }
    inline void SetRouteOrigin(Aws::String&& value) { m_routeOriginHasBeenSet = true; m_routeOrigin = std::move(value); }
    inline void SetRouteOrigin(const char* value) { m_routeOriginHasBeenSet = true; m_routeOrigin.assign(value); }
    inline TransitGatewayRouteTableRoute& WithRouteOrigin(const Aws::String& value) { SetRouteOrigin(value); return *this;}
    inline TransitGatewayRouteTableRoute& WithRouteOrigin(Aws::String&& value) { SetRouteOrigin(std::move(value)); return *this;}
    inline TransitGatewayRouteTableRoute& WithRouteOrigin(const char* value) { SetRouteOrigin(value); return *this;}
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
    inline TransitGatewayRouteTableRoute& WithPrefixListId(const Aws::String& value) { SetPrefixListId(value); return *this;}
    inline TransitGatewayRouteTableRoute& WithPrefixListId(Aws::String&& value) { SetPrefixListId(std::move(value)); return *this;}
    inline TransitGatewayRouteTableRoute& WithPrefixListId(const char* value) { SetPrefixListId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the route attachment.</p>
     */
    inline const Aws::String& GetAttachmentId() const{ return m_attachmentId; }
    inline bool AttachmentIdHasBeenSet() const { return m_attachmentIdHasBeenSet; }
    inline void SetAttachmentId(const Aws::String& value) { m_attachmentIdHasBeenSet = true; m_attachmentId = value; }
    inline void SetAttachmentId(Aws::String&& value) { m_attachmentIdHasBeenSet = true; m_attachmentId = std::move(value); }
    inline void SetAttachmentId(const char* value) { m_attachmentIdHasBeenSet = true; m_attachmentId.assign(value); }
    inline TransitGatewayRouteTableRoute& WithAttachmentId(const Aws::String& value) { SetAttachmentId(value); return *this;}
    inline TransitGatewayRouteTableRoute& WithAttachmentId(Aws::String&& value) { SetAttachmentId(std::move(value)); return *this;}
    inline TransitGatewayRouteTableRoute& WithAttachmentId(const char* value) { SetAttachmentId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the resource for the route attachment.</p>
     */
    inline const Aws::String& GetResourceId() const{ return m_resourceId; }
    inline bool ResourceIdHasBeenSet() const { return m_resourceIdHasBeenSet; }
    inline void SetResourceId(const Aws::String& value) { m_resourceIdHasBeenSet = true; m_resourceId = value; }
    inline void SetResourceId(Aws::String&& value) { m_resourceIdHasBeenSet = true; m_resourceId = std::move(value); }
    inline void SetResourceId(const char* value) { m_resourceIdHasBeenSet = true; m_resourceId.assign(value); }
    inline TransitGatewayRouteTableRoute& WithResourceId(const Aws::String& value) { SetResourceId(value); return *this;}
    inline TransitGatewayRouteTableRoute& WithResourceId(Aws::String&& value) { SetResourceId(std::move(value)); return *this;}
    inline TransitGatewayRouteTableRoute& WithResourceId(const char* value) { SetResourceId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The resource type for the route attachment.</p>
     */
    inline const Aws::String& GetResourceType() const{ return m_resourceType; }
    inline bool ResourceTypeHasBeenSet() const { return m_resourceTypeHasBeenSet; }
    inline void SetResourceType(const Aws::String& value) { m_resourceTypeHasBeenSet = true; m_resourceType = value; }
    inline void SetResourceType(Aws::String&& value) { m_resourceTypeHasBeenSet = true; m_resourceType = std::move(value); }
    inline void SetResourceType(const char* value) { m_resourceTypeHasBeenSet = true; m_resourceType.assign(value); }
    inline TransitGatewayRouteTableRoute& WithResourceType(const Aws::String& value) { SetResourceType(value); return *this;}
    inline TransitGatewayRouteTableRoute& WithResourceType(Aws::String&& value) { SetResourceType(std::move(value)); return *this;}
    inline TransitGatewayRouteTableRoute& WithResourceType(const char* value) { SetResourceType(value); return *this;}
    ///@}
  private:

    Aws::String m_destinationCidr;
    bool m_destinationCidrHasBeenSet = false;

    Aws::String m_state;
    bool m_stateHasBeenSet = false;

    Aws::String m_routeOrigin;
    bool m_routeOriginHasBeenSet = false;

    Aws::String m_prefixListId;
    bool m_prefixListIdHasBeenSet = false;

    Aws::String m_attachmentId;
    bool m_attachmentIdHasBeenSet = false;

    Aws::String m_resourceId;
    bool m_resourceIdHasBeenSet = false;

    Aws::String m_resourceType;
    bool m_resourceTypeHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
