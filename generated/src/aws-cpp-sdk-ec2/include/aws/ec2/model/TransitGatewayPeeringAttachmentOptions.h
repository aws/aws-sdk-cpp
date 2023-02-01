/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/ec2/model/DynamicRoutingValue.h>
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
   * <p>Describes dynamic routing for the transit gateway peering
   * attachment.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/TransitGatewayPeeringAttachmentOptions">AWS
   * API Reference</a></p>
   */
  class TransitGatewayPeeringAttachmentOptions
  {
  public:
    AWS_EC2_API TransitGatewayPeeringAttachmentOptions();
    AWS_EC2_API TransitGatewayPeeringAttachmentOptions(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_EC2_API TransitGatewayPeeringAttachmentOptions& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_EC2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_EC2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p>Describes whether dynamic routing is enabled or disabled for the transit
     * gateway peering attachment.</p>
     */
    inline const DynamicRoutingValue& GetDynamicRouting() const{ return m_dynamicRouting; }

    /**
     * <p>Describes whether dynamic routing is enabled or disabled for the transit
     * gateway peering attachment.</p>
     */
    inline bool DynamicRoutingHasBeenSet() const { return m_dynamicRoutingHasBeenSet; }

    /**
     * <p>Describes whether dynamic routing is enabled or disabled for the transit
     * gateway peering attachment.</p>
     */
    inline void SetDynamicRouting(const DynamicRoutingValue& value) { m_dynamicRoutingHasBeenSet = true; m_dynamicRouting = value; }

    /**
     * <p>Describes whether dynamic routing is enabled or disabled for the transit
     * gateway peering attachment.</p>
     */
    inline void SetDynamicRouting(DynamicRoutingValue&& value) { m_dynamicRoutingHasBeenSet = true; m_dynamicRouting = std::move(value); }

    /**
     * <p>Describes whether dynamic routing is enabled or disabled for the transit
     * gateway peering attachment.</p>
     */
    inline TransitGatewayPeeringAttachmentOptions& WithDynamicRouting(const DynamicRoutingValue& value) { SetDynamicRouting(value); return *this;}

    /**
     * <p>Describes whether dynamic routing is enabled or disabled for the transit
     * gateway peering attachment.</p>
     */
    inline TransitGatewayPeeringAttachmentOptions& WithDynamicRouting(DynamicRoutingValue&& value) { SetDynamicRouting(std::move(value)); return *this;}

  private:

    DynamicRoutingValue m_dynamicRouting;
    bool m_dynamicRoutingHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
