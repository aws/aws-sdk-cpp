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


    /**
     * <p>The CIDR block used for destination matches.</p>
     */
    inline const Aws::String& GetDestinationCidr() const{ return m_destinationCidr; }

    /**
     * <p>The CIDR block used for destination matches.</p>
     */
    inline bool DestinationCidrHasBeenSet() const { return m_destinationCidrHasBeenSet; }

    /**
     * <p>The CIDR block used for destination matches.</p>
     */
    inline void SetDestinationCidr(const Aws::String& value) { m_destinationCidrHasBeenSet = true; m_destinationCidr = value; }

    /**
     * <p>The CIDR block used for destination matches.</p>
     */
    inline void SetDestinationCidr(Aws::String&& value) { m_destinationCidrHasBeenSet = true; m_destinationCidr = std::move(value); }

    /**
     * <p>The CIDR block used for destination matches.</p>
     */
    inline void SetDestinationCidr(const char* value) { m_destinationCidrHasBeenSet = true; m_destinationCidr.assign(value); }

    /**
     * <p>The CIDR block used for destination matches.</p>
     */
    inline TransitGatewayRouteTableRoute& WithDestinationCidr(const Aws::String& value) { SetDestinationCidr(value); return *this;}

    /**
     * <p>The CIDR block used for destination matches.</p>
     */
    inline TransitGatewayRouteTableRoute& WithDestinationCidr(Aws::String&& value) { SetDestinationCidr(std::move(value)); return *this;}

    /**
     * <p>The CIDR block used for destination matches.</p>
     */
    inline TransitGatewayRouteTableRoute& WithDestinationCidr(const char* value) { SetDestinationCidr(value); return *this;}


    /**
     * <p>The state of the route.</p>
     */
    inline const Aws::String& GetState() const{ return m_state; }

    /**
     * <p>The state of the route.</p>
     */
    inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }

    /**
     * <p>The state of the route.</p>
     */
    inline void SetState(const Aws::String& value) { m_stateHasBeenSet = true; m_state = value; }

    /**
     * <p>The state of the route.</p>
     */
    inline void SetState(Aws::String&& value) { m_stateHasBeenSet = true; m_state = std::move(value); }

    /**
     * <p>The state of the route.</p>
     */
    inline void SetState(const char* value) { m_stateHasBeenSet = true; m_state.assign(value); }

    /**
     * <p>The state of the route.</p>
     */
    inline TransitGatewayRouteTableRoute& WithState(const Aws::String& value) { SetState(value); return *this;}

    /**
     * <p>The state of the route.</p>
     */
    inline TransitGatewayRouteTableRoute& WithState(Aws::String&& value) { SetState(std::move(value)); return *this;}

    /**
     * <p>The state of the route.</p>
     */
    inline TransitGatewayRouteTableRoute& WithState(const char* value) { SetState(value); return *this;}


    /**
     * <p>The route origin. The following are the possible values:</p> <ul> <li>
     * <p>static</p> </li> <li> <p>propagated</p> </li> </ul>
     */
    inline const Aws::String& GetRouteOrigin() const{ return m_routeOrigin; }

    /**
     * <p>The route origin. The following are the possible values:</p> <ul> <li>
     * <p>static</p> </li> <li> <p>propagated</p> </li> </ul>
     */
    inline bool RouteOriginHasBeenSet() const { return m_routeOriginHasBeenSet; }

    /**
     * <p>The route origin. The following are the possible values:</p> <ul> <li>
     * <p>static</p> </li> <li> <p>propagated</p> </li> </ul>
     */
    inline void SetRouteOrigin(const Aws::String& value) { m_routeOriginHasBeenSet = true; m_routeOrigin = value; }

    /**
     * <p>The route origin. The following are the possible values:</p> <ul> <li>
     * <p>static</p> </li> <li> <p>propagated</p> </li> </ul>
     */
    inline void SetRouteOrigin(Aws::String&& value) { m_routeOriginHasBeenSet = true; m_routeOrigin = std::move(value); }

    /**
     * <p>The route origin. The following are the possible values:</p> <ul> <li>
     * <p>static</p> </li> <li> <p>propagated</p> </li> </ul>
     */
    inline void SetRouteOrigin(const char* value) { m_routeOriginHasBeenSet = true; m_routeOrigin.assign(value); }

    /**
     * <p>The route origin. The following are the possible values:</p> <ul> <li>
     * <p>static</p> </li> <li> <p>propagated</p> </li> </ul>
     */
    inline TransitGatewayRouteTableRoute& WithRouteOrigin(const Aws::String& value) { SetRouteOrigin(value); return *this;}

    /**
     * <p>The route origin. The following are the possible values:</p> <ul> <li>
     * <p>static</p> </li> <li> <p>propagated</p> </li> </ul>
     */
    inline TransitGatewayRouteTableRoute& WithRouteOrigin(Aws::String&& value) { SetRouteOrigin(std::move(value)); return *this;}

    /**
     * <p>The route origin. The following are the possible values:</p> <ul> <li>
     * <p>static</p> </li> <li> <p>propagated</p> </li> </ul>
     */
    inline TransitGatewayRouteTableRoute& WithRouteOrigin(const char* value) { SetRouteOrigin(value); return *this;}


    /**
     * <p>The ID of the prefix list.</p>
     */
    inline const Aws::String& GetPrefixListId() const{ return m_prefixListId; }

    /**
     * <p>The ID of the prefix list.</p>
     */
    inline bool PrefixListIdHasBeenSet() const { return m_prefixListIdHasBeenSet; }

    /**
     * <p>The ID of the prefix list.</p>
     */
    inline void SetPrefixListId(const Aws::String& value) { m_prefixListIdHasBeenSet = true; m_prefixListId = value; }

    /**
     * <p>The ID of the prefix list.</p>
     */
    inline void SetPrefixListId(Aws::String&& value) { m_prefixListIdHasBeenSet = true; m_prefixListId = std::move(value); }

    /**
     * <p>The ID of the prefix list.</p>
     */
    inline void SetPrefixListId(const char* value) { m_prefixListIdHasBeenSet = true; m_prefixListId.assign(value); }

    /**
     * <p>The ID of the prefix list.</p>
     */
    inline TransitGatewayRouteTableRoute& WithPrefixListId(const Aws::String& value) { SetPrefixListId(value); return *this;}

    /**
     * <p>The ID of the prefix list.</p>
     */
    inline TransitGatewayRouteTableRoute& WithPrefixListId(Aws::String&& value) { SetPrefixListId(std::move(value)); return *this;}

    /**
     * <p>The ID of the prefix list.</p>
     */
    inline TransitGatewayRouteTableRoute& WithPrefixListId(const char* value) { SetPrefixListId(value); return *this;}


    /**
     * <p>The ID of the route attachment.</p>
     */
    inline const Aws::String& GetAttachmentId() const{ return m_attachmentId; }

    /**
     * <p>The ID of the route attachment.</p>
     */
    inline bool AttachmentIdHasBeenSet() const { return m_attachmentIdHasBeenSet; }

    /**
     * <p>The ID of the route attachment.</p>
     */
    inline void SetAttachmentId(const Aws::String& value) { m_attachmentIdHasBeenSet = true; m_attachmentId = value; }

    /**
     * <p>The ID of the route attachment.</p>
     */
    inline void SetAttachmentId(Aws::String&& value) { m_attachmentIdHasBeenSet = true; m_attachmentId = std::move(value); }

    /**
     * <p>The ID of the route attachment.</p>
     */
    inline void SetAttachmentId(const char* value) { m_attachmentIdHasBeenSet = true; m_attachmentId.assign(value); }

    /**
     * <p>The ID of the route attachment.</p>
     */
    inline TransitGatewayRouteTableRoute& WithAttachmentId(const Aws::String& value) { SetAttachmentId(value); return *this;}

    /**
     * <p>The ID of the route attachment.</p>
     */
    inline TransitGatewayRouteTableRoute& WithAttachmentId(Aws::String&& value) { SetAttachmentId(std::move(value)); return *this;}

    /**
     * <p>The ID of the route attachment.</p>
     */
    inline TransitGatewayRouteTableRoute& WithAttachmentId(const char* value) { SetAttachmentId(value); return *this;}


    /**
     * <p>The ID of the resource for the route attachment.</p>
     */
    inline const Aws::String& GetResourceId() const{ return m_resourceId; }

    /**
     * <p>The ID of the resource for the route attachment.</p>
     */
    inline bool ResourceIdHasBeenSet() const { return m_resourceIdHasBeenSet; }

    /**
     * <p>The ID of the resource for the route attachment.</p>
     */
    inline void SetResourceId(const Aws::String& value) { m_resourceIdHasBeenSet = true; m_resourceId = value; }

    /**
     * <p>The ID of the resource for the route attachment.</p>
     */
    inline void SetResourceId(Aws::String&& value) { m_resourceIdHasBeenSet = true; m_resourceId = std::move(value); }

    /**
     * <p>The ID of the resource for the route attachment.</p>
     */
    inline void SetResourceId(const char* value) { m_resourceIdHasBeenSet = true; m_resourceId.assign(value); }

    /**
     * <p>The ID of the resource for the route attachment.</p>
     */
    inline TransitGatewayRouteTableRoute& WithResourceId(const Aws::String& value) { SetResourceId(value); return *this;}

    /**
     * <p>The ID of the resource for the route attachment.</p>
     */
    inline TransitGatewayRouteTableRoute& WithResourceId(Aws::String&& value) { SetResourceId(std::move(value)); return *this;}

    /**
     * <p>The ID of the resource for the route attachment.</p>
     */
    inline TransitGatewayRouteTableRoute& WithResourceId(const char* value) { SetResourceId(value); return *this;}


    /**
     * <p>The resource type for the route attachment.</p>
     */
    inline const Aws::String& GetResourceType() const{ return m_resourceType; }

    /**
     * <p>The resource type for the route attachment.</p>
     */
    inline bool ResourceTypeHasBeenSet() const { return m_resourceTypeHasBeenSet; }

    /**
     * <p>The resource type for the route attachment.</p>
     */
    inline void SetResourceType(const Aws::String& value) { m_resourceTypeHasBeenSet = true; m_resourceType = value; }

    /**
     * <p>The resource type for the route attachment.</p>
     */
    inline void SetResourceType(Aws::String&& value) { m_resourceTypeHasBeenSet = true; m_resourceType = std::move(value); }

    /**
     * <p>The resource type for the route attachment.</p>
     */
    inline void SetResourceType(const char* value) { m_resourceTypeHasBeenSet = true; m_resourceType.assign(value); }

    /**
     * <p>The resource type for the route attachment.</p>
     */
    inline TransitGatewayRouteTableRoute& WithResourceType(const Aws::String& value) { SetResourceType(value); return *this;}

    /**
     * <p>The resource type for the route attachment.</p>
     */
    inline TransitGatewayRouteTableRoute& WithResourceType(Aws::String&& value) { SetResourceType(std::move(value)); return *this;}

    /**
     * <p>The resource type for the route attachment.</p>
     */
    inline TransitGatewayRouteTableRoute& WithResourceType(const char* value) { SetResourceType(value); return *this;}

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
