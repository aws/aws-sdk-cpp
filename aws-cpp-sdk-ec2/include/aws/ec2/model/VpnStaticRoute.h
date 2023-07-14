﻿/**
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
  class AWS_EC2_API VpnStaticRoute
  {
  public:
    VpnStaticRoute();
    VpnStaticRoute(const Aws::Utils::Xml::XmlNode& xmlNode);
    VpnStaticRoute& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p>The CIDR block associated with the local subnet of the customer data
     * center.</p>
     */
    inline const Aws::String& GetDestinationCidrBlock() const{ return m_destinationCidrBlock; }

    /**
     * <p>The CIDR block associated with the local subnet of the customer data
     * center.</p>
     */
    inline bool DestinationCidrBlockHasBeenSet() const { return m_destinationCidrBlockHasBeenSet; }

    /**
     * <p>The CIDR block associated with the local subnet of the customer data
     * center.</p>
     */
    inline void SetDestinationCidrBlock(const Aws::String& value) { m_destinationCidrBlockHasBeenSet = true; m_destinationCidrBlock = value; }

    /**
     * <p>The CIDR block associated with the local subnet of the customer data
     * center.</p>
     */
    inline void SetDestinationCidrBlock(Aws::String&& value) { m_destinationCidrBlockHasBeenSet = true; m_destinationCidrBlock = std::move(value); }

    /**
     * <p>The CIDR block associated with the local subnet of the customer data
     * center.</p>
     */
    inline void SetDestinationCidrBlock(const char* value) { m_destinationCidrBlockHasBeenSet = true; m_destinationCidrBlock.assign(value); }

    /**
     * <p>The CIDR block associated with the local subnet of the customer data
     * center.</p>
     */
    inline VpnStaticRoute& WithDestinationCidrBlock(const Aws::String& value) { SetDestinationCidrBlock(value); return *this;}

    /**
     * <p>The CIDR block associated with the local subnet of the customer data
     * center.</p>
     */
    inline VpnStaticRoute& WithDestinationCidrBlock(Aws::String&& value) { SetDestinationCidrBlock(std::move(value)); return *this;}

    /**
     * <p>The CIDR block associated with the local subnet of the customer data
     * center.</p>
     */
    inline VpnStaticRoute& WithDestinationCidrBlock(const char* value) { SetDestinationCidrBlock(value); return *this;}


    /**
     * <p>Indicates how the routes were provided.</p>
     */
    inline const VpnStaticRouteSource& GetSource() const{ return m_source; }

    /**
     * <p>Indicates how the routes were provided.</p>
     */
    inline bool SourceHasBeenSet() const { return m_sourceHasBeenSet; }

    /**
     * <p>Indicates how the routes were provided.</p>
     */
    inline void SetSource(const VpnStaticRouteSource& value) { m_sourceHasBeenSet = true; m_source = value; }

    /**
     * <p>Indicates how the routes were provided.</p>
     */
    inline void SetSource(VpnStaticRouteSource&& value) { m_sourceHasBeenSet = true; m_source = std::move(value); }

    /**
     * <p>Indicates how the routes were provided.</p>
     */
    inline VpnStaticRoute& WithSource(const VpnStaticRouteSource& value) { SetSource(value); return *this;}

    /**
     * <p>Indicates how the routes were provided.</p>
     */
    inline VpnStaticRoute& WithSource(VpnStaticRouteSource&& value) { SetSource(std::move(value)); return *this;}


    /**
     * <p>The current state of the static route.</p>
     */
    inline const VpnState& GetState() const{ return m_state; }

    /**
     * <p>The current state of the static route.</p>
     */
    inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }

    /**
     * <p>The current state of the static route.</p>
     */
    inline void SetState(const VpnState& value) { m_stateHasBeenSet = true; m_state = value; }

    /**
     * <p>The current state of the static route.</p>
     */
    inline void SetState(VpnState&& value) { m_stateHasBeenSet = true; m_state = std::move(value); }

    /**
     * <p>The current state of the static route.</p>
     */
    inline VpnStaticRoute& WithState(const VpnState& value) { SetState(value); return *this;}

    /**
     * <p>The current state of the static route.</p>
     */
    inline VpnStaticRoute& WithState(VpnState&& value) { SetState(std::move(value)); return *this;}

  private:

    Aws::String m_destinationCidrBlock;
    bool m_destinationCidrBlockHasBeenSet;

    VpnStaticRouteSource m_source;
    bool m_sourceHasBeenSet;

    VpnState m_state;
    bool m_stateHasBeenSet;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
