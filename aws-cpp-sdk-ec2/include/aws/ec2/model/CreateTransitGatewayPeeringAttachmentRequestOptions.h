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
   * <p>Describes whether dynamic routing is enabled or disabled for the transit
   * gateway peering request.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/CreateTransitGatewayPeeringAttachmentRequestOptions">AWS
   * API Reference</a></p>
   */
  class CreateTransitGatewayPeeringAttachmentRequestOptions
  {
  public:
    AWS_EC2_API CreateTransitGatewayPeeringAttachmentRequestOptions();
    AWS_EC2_API CreateTransitGatewayPeeringAttachmentRequestOptions(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_EC2_API CreateTransitGatewayPeeringAttachmentRequestOptions& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_EC2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_EC2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p>Indicates whether dynamic routing is enabled or disabled.</p>
     */
    inline const DynamicRoutingValue& GetDynamicRouting() const{ return m_dynamicRouting; }

    /**
     * <p>Indicates whether dynamic routing is enabled or disabled.</p>
     */
    inline bool DynamicRoutingHasBeenSet() const { return m_dynamicRoutingHasBeenSet; }

    /**
     * <p>Indicates whether dynamic routing is enabled or disabled.</p>
     */
    inline void SetDynamicRouting(const DynamicRoutingValue& value) { m_dynamicRoutingHasBeenSet = true; m_dynamicRouting = value; }

    /**
     * <p>Indicates whether dynamic routing is enabled or disabled.</p>
     */
    inline void SetDynamicRouting(DynamicRoutingValue&& value) { m_dynamicRoutingHasBeenSet = true; m_dynamicRouting = std::move(value); }

    /**
     * <p>Indicates whether dynamic routing is enabled or disabled.</p>
     */
    inline CreateTransitGatewayPeeringAttachmentRequestOptions& WithDynamicRouting(const DynamicRoutingValue& value) { SetDynamicRouting(value); return *this;}

    /**
     * <p>Indicates whether dynamic routing is enabled or disabled.</p>
     */
    inline CreateTransitGatewayPeeringAttachmentRequestOptions& WithDynamicRouting(DynamicRoutingValue&& value) { SetDynamicRouting(std::move(value)); return *this;}

  private:

    DynamicRoutingValue m_dynamicRouting;
    bool m_dynamicRoutingHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
