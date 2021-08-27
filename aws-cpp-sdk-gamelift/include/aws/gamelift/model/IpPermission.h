/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/gamelift/GameLift_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/gamelift/model/IpProtocol.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace GameLift
{
namespace Model
{

  /**
   * <p>A range of IP addresses and port settings that allow inbound traffic to
   * connect to server processes on an Amazon GameLift hosting resource. New game
   * sessions that are started on the fleet are assigned an IP address/port number
   * combination, which must fall into the fleet's allowed ranges. For fleets created
   * with a custom game server, the ranges reflect the server's game session
   * assignments. For Realtime Servers fleets, Amazon GameLift automatically opens
   * two port ranges, one for TCP messaging and one for UDP for use by the Realtime
   * servers.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/gamelift-2015-10-01/IpPermission">AWS
   * API Reference</a></p>
   */
  class AWS_GAMELIFT_API IpPermission
  {
  public:
    IpPermission();
    IpPermission(Aws::Utils::Json::JsonView jsonValue);
    IpPermission& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>A starting value for a range of allowed port numbers.</p>
     */
    inline int GetFromPort() const{ return m_fromPort; }

    /**
     * <p>A starting value for a range of allowed port numbers.</p>
     */
    inline bool FromPortHasBeenSet() const { return m_fromPortHasBeenSet; }

    /**
     * <p>A starting value for a range of allowed port numbers.</p>
     */
    inline void SetFromPort(int value) { m_fromPortHasBeenSet = true; m_fromPort = value; }

    /**
     * <p>A starting value for a range of allowed port numbers.</p>
     */
    inline IpPermission& WithFromPort(int value) { SetFromPort(value); return *this;}


    /**
     * <p>An ending value for a range of allowed port numbers. Port numbers are
     * end-inclusive. This value must be higher than <code>FromPort</code>.</p>
     */
    inline int GetToPort() const{ return m_toPort; }

    /**
     * <p>An ending value for a range of allowed port numbers. Port numbers are
     * end-inclusive. This value must be higher than <code>FromPort</code>.</p>
     */
    inline bool ToPortHasBeenSet() const { return m_toPortHasBeenSet; }

    /**
     * <p>An ending value for a range of allowed port numbers. Port numbers are
     * end-inclusive. This value must be higher than <code>FromPort</code>.</p>
     */
    inline void SetToPort(int value) { m_toPortHasBeenSet = true; m_toPort = value; }

    /**
     * <p>An ending value for a range of allowed port numbers. Port numbers are
     * end-inclusive. This value must be higher than <code>FromPort</code>.</p>
     */
    inline IpPermission& WithToPort(int value) { SetToPort(value); return *this;}


    /**
     * <p>A range of allowed IP addresses. This value must be expressed in CIDR
     * notation. Example: "<code>000.000.000.000/[subnet mask]</code>" or optionally
     * the shortened version "<code>0.0.0.0/[subnet mask]</code>".</p>
     */
    inline const Aws::String& GetIpRange() const{ return m_ipRange; }

    /**
     * <p>A range of allowed IP addresses. This value must be expressed in CIDR
     * notation. Example: "<code>000.000.000.000/[subnet mask]</code>" or optionally
     * the shortened version "<code>0.0.0.0/[subnet mask]</code>".</p>
     */
    inline bool IpRangeHasBeenSet() const { return m_ipRangeHasBeenSet; }

    /**
     * <p>A range of allowed IP addresses. This value must be expressed in CIDR
     * notation. Example: "<code>000.000.000.000/[subnet mask]</code>" or optionally
     * the shortened version "<code>0.0.0.0/[subnet mask]</code>".</p>
     */
    inline void SetIpRange(const Aws::String& value) { m_ipRangeHasBeenSet = true; m_ipRange = value; }

    /**
     * <p>A range of allowed IP addresses. This value must be expressed in CIDR
     * notation. Example: "<code>000.000.000.000/[subnet mask]</code>" or optionally
     * the shortened version "<code>0.0.0.0/[subnet mask]</code>".</p>
     */
    inline void SetIpRange(Aws::String&& value) { m_ipRangeHasBeenSet = true; m_ipRange = std::move(value); }

    /**
     * <p>A range of allowed IP addresses. This value must be expressed in CIDR
     * notation. Example: "<code>000.000.000.000/[subnet mask]</code>" or optionally
     * the shortened version "<code>0.0.0.0/[subnet mask]</code>".</p>
     */
    inline void SetIpRange(const char* value) { m_ipRangeHasBeenSet = true; m_ipRange.assign(value); }

    /**
     * <p>A range of allowed IP addresses. This value must be expressed in CIDR
     * notation. Example: "<code>000.000.000.000/[subnet mask]</code>" or optionally
     * the shortened version "<code>0.0.0.0/[subnet mask]</code>".</p>
     */
    inline IpPermission& WithIpRange(const Aws::String& value) { SetIpRange(value); return *this;}

    /**
     * <p>A range of allowed IP addresses. This value must be expressed in CIDR
     * notation. Example: "<code>000.000.000.000/[subnet mask]</code>" or optionally
     * the shortened version "<code>0.0.0.0/[subnet mask]</code>".</p>
     */
    inline IpPermission& WithIpRange(Aws::String&& value) { SetIpRange(std::move(value)); return *this;}

    /**
     * <p>A range of allowed IP addresses. This value must be expressed in CIDR
     * notation. Example: "<code>000.000.000.000/[subnet mask]</code>" or optionally
     * the shortened version "<code>0.0.0.0/[subnet mask]</code>".</p>
     */
    inline IpPermission& WithIpRange(const char* value) { SetIpRange(value); return *this;}


    /**
     * <p>The network communication protocol used by the fleet.</p>
     */
    inline const IpProtocol& GetProtocol() const{ return m_protocol; }

    /**
     * <p>The network communication protocol used by the fleet.</p>
     */
    inline bool ProtocolHasBeenSet() const { return m_protocolHasBeenSet; }

    /**
     * <p>The network communication protocol used by the fleet.</p>
     */
    inline void SetProtocol(const IpProtocol& value) { m_protocolHasBeenSet = true; m_protocol = value; }

    /**
     * <p>The network communication protocol used by the fleet.</p>
     */
    inline void SetProtocol(IpProtocol&& value) { m_protocolHasBeenSet = true; m_protocol = std::move(value); }

    /**
     * <p>The network communication protocol used by the fleet.</p>
     */
    inline IpPermission& WithProtocol(const IpProtocol& value) { SetProtocol(value); return *this;}

    /**
     * <p>The network communication protocol used by the fleet.</p>
     */
    inline IpPermission& WithProtocol(IpProtocol&& value) { SetProtocol(std::move(value)); return *this;}

  private:

    int m_fromPort;
    bool m_fromPortHasBeenSet;

    int m_toPort;
    bool m_toPortHasBeenSet;

    Aws::String m_ipRange;
    bool m_ipRangeHasBeenSet;

    IpProtocol m_protocol;
    bool m_protocolHasBeenSet;
  };

} // namespace Model
} // namespace GameLift
} // namespace Aws
