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
   * <p>Information about the transit gateway in the peering
   * attachment.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/PeeringTgwInfo">AWS
   * API Reference</a></p>
   */
  class PeeringTgwInfo
  {
  public:
    AWS_EC2_API PeeringTgwInfo();
    AWS_EC2_API PeeringTgwInfo(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_EC2_API PeeringTgwInfo& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_EC2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_EC2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p>The ID of the transit gateway.</p>
     */
    inline const Aws::String& GetTransitGatewayId() const{ return m_transitGatewayId; }

    /**
     * <p>The ID of the transit gateway.</p>
     */
    inline bool TransitGatewayIdHasBeenSet() const { return m_transitGatewayIdHasBeenSet; }

    /**
     * <p>The ID of the transit gateway.</p>
     */
    inline void SetTransitGatewayId(const Aws::String& value) { m_transitGatewayIdHasBeenSet = true; m_transitGatewayId = value; }

    /**
     * <p>The ID of the transit gateway.</p>
     */
    inline void SetTransitGatewayId(Aws::String&& value) { m_transitGatewayIdHasBeenSet = true; m_transitGatewayId = std::move(value); }

    /**
     * <p>The ID of the transit gateway.</p>
     */
    inline void SetTransitGatewayId(const char* value) { m_transitGatewayIdHasBeenSet = true; m_transitGatewayId.assign(value); }

    /**
     * <p>The ID of the transit gateway.</p>
     */
    inline PeeringTgwInfo& WithTransitGatewayId(const Aws::String& value) { SetTransitGatewayId(value); return *this;}

    /**
     * <p>The ID of the transit gateway.</p>
     */
    inline PeeringTgwInfo& WithTransitGatewayId(Aws::String&& value) { SetTransitGatewayId(std::move(value)); return *this;}

    /**
     * <p>The ID of the transit gateway.</p>
     */
    inline PeeringTgwInfo& WithTransitGatewayId(const char* value) { SetTransitGatewayId(value); return *this;}


    /**
     * <p>The ID of the core network where the transit gateway peer is located.</p>
     */
    inline const Aws::String& GetCoreNetworkId() const{ return m_coreNetworkId; }

    /**
     * <p>The ID of the core network where the transit gateway peer is located.</p>
     */
    inline bool CoreNetworkIdHasBeenSet() const { return m_coreNetworkIdHasBeenSet; }

    /**
     * <p>The ID of the core network where the transit gateway peer is located.</p>
     */
    inline void SetCoreNetworkId(const Aws::String& value) { m_coreNetworkIdHasBeenSet = true; m_coreNetworkId = value; }

    /**
     * <p>The ID of the core network where the transit gateway peer is located.</p>
     */
    inline void SetCoreNetworkId(Aws::String&& value) { m_coreNetworkIdHasBeenSet = true; m_coreNetworkId = std::move(value); }

    /**
     * <p>The ID of the core network where the transit gateway peer is located.</p>
     */
    inline void SetCoreNetworkId(const char* value) { m_coreNetworkIdHasBeenSet = true; m_coreNetworkId.assign(value); }

    /**
     * <p>The ID of the core network where the transit gateway peer is located.</p>
     */
    inline PeeringTgwInfo& WithCoreNetworkId(const Aws::String& value) { SetCoreNetworkId(value); return *this;}

    /**
     * <p>The ID of the core network where the transit gateway peer is located.</p>
     */
    inline PeeringTgwInfo& WithCoreNetworkId(Aws::String&& value) { SetCoreNetworkId(std::move(value)); return *this;}

    /**
     * <p>The ID of the core network where the transit gateway peer is located.</p>
     */
    inline PeeringTgwInfo& WithCoreNetworkId(const char* value) { SetCoreNetworkId(value); return *this;}


    /**
     * <p>The ID of the Amazon Web Services account that owns the transit gateway.</p>
     */
    inline const Aws::String& GetOwnerId() const{ return m_ownerId; }

    /**
     * <p>The ID of the Amazon Web Services account that owns the transit gateway.</p>
     */
    inline bool OwnerIdHasBeenSet() const { return m_ownerIdHasBeenSet; }

    /**
     * <p>The ID of the Amazon Web Services account that owns the transit gateway.</p>
     */
    inline void SetOwnerId(const Aws::String& value) { m_ownerIdHasBeenSet = true; m_ownerId = value; }

    /**
     * <p>The ID of the Amazon Web Services account that owns the transit gateway.</p>
     */
    inline void SetOwnerId(Aws::String&& value) { m_ownerIdHasBeenSet = true; m_ownerId = std::move(value); }

    /**
     * <p>The ID of the Amazon Web Services account that owns the transit gateway.</p>
     */
    inline void SetOwnerId(const char* value) { m_ownerIdHasBeenSet = true; m_ownerId.assign(value); }

    /**
     * <p>The ID of the Amazon Web Services account that owns the transit gateway.</p>
     */
    inline PeeringTgwInfo& WithOwnerId(const Aws::String& value) { SetOwnerId(value); return *this;}

    /**
     * <p>The ID of the Amazon Web Services account that owns the transit gateway.</p>
     */
    inline PeeringTgwInfo& WithOwnerId(Aws::String&& value) { SetOwnerId(std::move(value)); return *this;}

    /**
     * <p>The ID of the Amazon Web Services account that owns the transit gateway.</p>
     */
    inline PeeringTgwInfo& WithOwnerId(const char* value) { SetOwnerId(value); return *this;}


    /**
     * <p>The Region of the transit gateway.</p>
     */
    inline const Aws::String& GetRegion() const{ return m_region; }

    /**
     * <p>The Region of the transit gateway.</p>
     */
    inline bool RegionHasBeenSet() const { return m_regionHasBeenSet; }

    /**
     * <p>The Region of the transit gateway.</p>
     */
    inline void SetRegion(const Aws::String& value) { m_regionHasBeenSet = true; m_region = value; }

    /**
     * <p>The Region of the transit gateway.</p>
     */
    inline void SetRegion(Aws::String&& value) { m_regionHasBeenSet = true; m_region = std::move(value); }

    /**
     * <p>The Region of the transit gateway.</p>
     */
    inline void SetRegion(const char* value) { m_regionHasBeenSet = true; m_region.assign(value); }

    /**
     * <p>The Region of the transit gateway.</p>
     */
    inline PeeringTgwInfo& WithRegion(const Aws::String& value) { SetRegion(value); return *this;}

    /**
     * <p>The Region of the transit gateway.</p>
     */
    inline PeeringTgwInfo& WithRegion(Aws::String&& value) { SetRegion(std::move(value)); return *this;}

    /**
     * <p>The Region of the transit gateway.</p>
     */
    inline PeeringTgwInfo& WithRegion(const char* value) { SetRegion(value); return *this;}

  private:

    Aws::String m_transitGatewayId;
    bool m_transitGatewayIdHasBeenSet = false;

    Aws::String m_coreNetworkId;
    bool m_coreNetworkIdHasBeenSet = false;

    Aws::String m_ownerId;
    bool m_ownerIdHasBeenSet = false;

    Aws::String m_region;
    bool m_regionHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
