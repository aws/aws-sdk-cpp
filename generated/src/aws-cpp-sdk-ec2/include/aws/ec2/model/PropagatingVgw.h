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
   * <p>Describes a virtual private gateway propagating route.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/PropagatingVgw">AWS
   * API Reference</a></p>
   */
  class PropagatingVgw
  {
  public:
    AWS_EC2_API PropagatingVgw();
    AWS_EC2_API PropagatingVgw(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_EC2_API PropagatingVgw& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_EC2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_EC2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p>The ID of the virtual private gateway.</p>
     */
    inline const Aws::String& GetGatewayId() const{ return m_gatewayId; }

    /**
     * <p>The ID of the virtual private gateway.</p>
     */
    inline bool GatewayIdHasBeenSet() const { return m_gatewayIdHasBeenSet; }

    /**
     * <p>The ID of the virtual private gateway.</p>
     */
    inline void SetGatewayId(const Aws::String& value) { m_gatewayIdHasBeenSet = true; m_gatewayId = value; }

    /**
     * <p>The ID of the virtual private gateway.</p>
     */
    inline void SetGatewayId(Aws::String&& value) { m_gatewayIdHasBeenSet = true; m_gatewayId = std::move(value); }

    /**
     * <p>The ID of the virtual private gateway.</p>
     */
    inline void SetGatewayId(const char* value) { m_gatewayIdHasBeenSet = true; m_gatewayId.assign(value); }

    /**
     * <p>The ID of the virtual private gateway.</p>
     */
    inline PropagatingVgw& WithGatewayId(const Aws::String& value) { SetGatewayId(value); return *this;}

    /**
     * <p>The ID of the virtual private gateway.</p>
     */
    inline PropagatingVgw& WithGatewayId(Aws::String&& value) { SetGatewayId(std::move(value)); return *this;}

    /**
     * <p>The ID of the virtual private gateway.</p>
     */
    inline PropagatingVgw& WithGatewayId(const char* value) { SetGatewayId(value); return *this;}

  private:

    Aws::String m_gatewayId;
    bool m_gatewayIdHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
