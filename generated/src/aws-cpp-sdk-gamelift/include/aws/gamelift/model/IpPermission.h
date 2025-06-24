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
   * connect to processes on an instance in a fleet. Processes are assigned an IP
   * address/port number combination, which must fall into the fleet's allowed
   * ranges. </p> <p>For Amazon GameLift Servers Realtime fleets, Amazon GameLift
   * Servers automatically opens two port ranges, one for TCP messaging and one for
   * UDP.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/gamelift-2015-10-01/IpPermission">AWS
   * API Reference</a></p>
   */
  class IpPermission
  {
  public:
    AWS_GAMELIFT_API IpPermission() = default;
    AWS_GAMELIFT_API IpPermission(Aws::Utils::Json::JsonView jsonValue);
    AWS_GAMELIFT_API IpPermission& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GAMELIFT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>A starting value for a range of allowed port numbers.</p> <p>For fleets using
     * Linux builds, only ports <code>22</code> and <code>1026-60000</code> are
     * valid.</p> <p>For fleets using Windows builds, only ports
     * <code>1026-60000</code> are valid.</p>
     */
    inline int GetFromPort() const { return m_fromPort; }
    inline bool FromPortHasBeenSet() const { return m_fromPortHasBeenSet; }
    inline void SetFromPort(int value) { m_fromPortHasBeenSet = true; m_fromPort = value; }
    inline IpPermission& WithFromPort(int value) { SetFromPort(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>An ending value for a range of allowed port numbers. Port numbers are
     * end-inclusive. This value must be equal to or greater than
     * <code>FromPort</code>.</p> <p>For fleets using Linux builds, only ports
     * <code>22</code> and <code>1026-60000</code> are valid.</p> <p>For fleets using
     * Windows builds, only ports <code>1026-60000</code> are valid.</p>
     */
    inline int GetToPort() const { return m_toPort; }
    inline bool ToPortHasBeenSet() const { return m_toPortHasBeenSet; }
    inline void SetToPort(int value) { m_toPortHasBeenSet = true; m_toPort = value; }
    inline IpPermission& WithToPort(int value) { SetToPort(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A range of allowed IP addresses. This value must be expressed in CIDR
     * notation. Example: "<code>000.000.000.000/[subnet mask]</code>" or optionally
     * the shortened version "<code>0.0.0.0/[subnet mask]</code>".</p>
     */
    inline const Aws::String& GetIpRange() const { return m_ipRange; }
    inline bool IpRangeHasBeenSet() const { return m_ipRangeHasBeenSet; }
    template<typename IpRangeT = Aws::String>
    void SetIpRange(IpRangeT&& value) { m_ipRangeHasBeenSet = true; m_ipRange = std::forward<IpRangeT>(value); }
    template<typename IpRangeT = Aws::String>
    IpPermission& WithIpRange(IpRangeT&& value) { SetIpRange(std::forward<IpRangeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The network communication protocol used by the fleet.</p>
     */
    inline IpProtocol GetProtocol() const { return m_protocol; }
    inline bool ProtocolHasBeenSet() const { return m_protocolHasBeenSet; }
    inline void SetProtocol(IpProtocol value) { m_protocolHasBeenSet = true; m_protocol = value; }
    inline IpPermission& WithProtocol(IpProtocol value) { SetProtocol(value); return *this;}
    ///@}
  private:

    int m_fromPort{0};
    bool m_fromPortHasBeenSet = false;

    int m_toPort{0};
    bool m_toPortHasBeenSet = false;

    Aws::String m_ipRange;
    bool m_ipRangeHasBeenSet = false;

    IpProtocol m_protocol{IpProtocol::NOT_SET};
    bool m_protocolHasBeenSet = false;
  };

} // namespace Model
} // namespace GameLift
} // namespace Aws
