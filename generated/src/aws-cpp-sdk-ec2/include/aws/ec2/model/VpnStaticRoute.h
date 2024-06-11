/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ec2/model/VpnStaticRouteSource.h>
#include <aws/ec2/model/VpnState.h>
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
   * <p>Describes a static route for a VPN connection.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/VpnStaticRoute">AWS
   * API Reference</a></p>
   */
  class VpnStaticRoute
  {
  public:
    AWS_EC2_API VpnStaticRoute();
    AWS_EC2_API VpnStaticRoute(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_EC2_API VpnStaticRoute& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_EC2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_EC2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>The CIDR block associated with the local subnet of the customer data
     * center.</p>
     */
    inline const Aws::String& GetDestinationCidrBlock() const{ return m_destinationCidrBlock; }
    inline bool DestinationCidrBlockHasBeenSet() const { return m_destinationCidrBlockHasBeenSet; }
    inline void SetDestinationCidrBlock(const Aws::String& value) { m_destinationCidrBlockHasBeenSet = true; m_destinationCidrBlock = value; }
    inline void SetDestinationCidrBlock(Aws::String&& value) { m_destinationCidrBlockHasBeenSet = true; m_destinationCidrBlock = std::move(value); }
    inline void SetDestinationCidrBlock(const char* value) { m_destinationCidrBlockHasBeenSet = true; m_destinationCidrBlock.assign(value); }
    inline VpnStaticRoute& WithDestinationCidrBlock(const Aws::String& value) { SetDestinationCidrBlock(value); return *this;}
    inline VpnStaticRoute& WithDestinationCidrBlock(Aws::String&& value) { SetDestinationCidrBlock(std::move(value)); return *this;}
    inline VpnStaticRoute& WithDestinationCidrBlock(const char* value) { SetDestinationCidrBlock(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates how the routes were provided.</p>
     */
    inline const VpnStaticRouteSource& GetSource() const{ return m_source; }
    inline bool SourceHasBeenSet() const { return m_sourceHasBeenSet; }
    inline void SetSource(const VpnStaticRouteSource& value) { m_sourceHasBeenSet = true; m_source = value; }
    inline void SetSource(VpnStaticRouteSource&& value) { m_sourceHasBeenSet = true; m_source = std::move(value); }
    inline VpnStaticRoute& WithSource(const VpnStaticRouteSource& value) { SetSource(value); return *this;}
    inline VpnStaticRoute& WithSource(VpnStaticRouteSource&& value) { SetSource(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The current state of the static route.</p>
     */
    inline const VpnState& GetState() const{ return m_state; }
    inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }
    inline void SetState(const VpnState& value) { m_stateHasBeenSet = true; m_state = value; }
    inline void SetState(VpnState&& value) { m_stateHasBeenSet = true; m_state = std::move(value); }
    inline VpnStaticRoute& WithState(const VpnState& value) { SetState(value); return *this;}
    inline VpnStaticRoute& WithState(VpnState&& value) { SetState(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_destinationCidrBlock;
    bool m_destinationCidrBlockHasBeenSet = false;

    VpnStaticRouteSource m_source;
    bool m_sourceHasBeenSet = false;

    VpnState m_state;
    bool m_stateHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
