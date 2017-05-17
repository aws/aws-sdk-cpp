/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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
} // namespace Json
} // namespace Utils
namespace GameLift
{
namespace Model
{

  /**
   * <p>A range of IP addresses and port settings that allow inbound traffic to
   * connect to server processes on Amazon GameLift. Each game session hosted on a
   * fleet is assigned a unique combination of IP address and port number, which must
   * fall into the fleet's allowed ranges. This combination is included in the
   * <a>GameSession</a> object. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/gamelift-2015-10-01/IpPermission">AWS
   * API Reference</a></p>
   */
  class AWS_GAMELIFT_API IpPermission
  {
  public:
    IpPermission();
    IpPermission(const Aws::Utils::Json::JsonValue& jsonValue);
    IpPermission& operator=(const Aws::Utils::Json::JsonValue& jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;

    /**
     * <p>Starting value for a range of allowed port numbers.</p>
     */
    inline int GetFromPort() const{ return m_fromPort; }

    /**
     * <p>Starting value for a range of allowed port numbers.</p>
     */
    inline void SetFromPort(int value) { m_fromPortHasBeenSet = true; m_fromPort = value; }

    /**
     * <p>Starting value for a range of allowed port numbers.</p>
     */
    inline IpPermission& WithFromPort(int value) { SetFromPort(value); return *this;}

    /**
     * <p>Ending value for a range of allowed port numbers. Port numbers are
     * end-inclusive. This value must be higher than <code>FromPort</code>.</p>
     */
    inline int GetToPort() const{ return m_toPort; }

    /**
     * <p>Ending value for a range of allowed port numbers. Port numbers are
     * end-inclusive. This value must be higher than <code>FromPort</code>.</p>
     */
    inline void SetToPort(int value) { m_toPortHasBeenSet = true; m_toPort = value; }

    /**
     * <p>Ending value for a range of allowed port numbers. Port numbers are
     * end-inclusive. This value must be higher than <code>FromPort</code>.</p>
     */
    inline IpPermission& WithToPort(int value) { SetToPort(value); return *this;}

    /**
     * <p>Range of allowed IP addresses. This value must be expressed in CIDR notation.
     * Example: "<code>000.000.000.000/[subnet mask]</code>" or optionally the
     * shortened version "<code>0.0.0.0/[subnet mask]</code>".</p>
     */
    inline const Aws::String& GetIpRange() const{ return m_ipRange; }

    /**
     * <p>Range of allowed IP addresses. This value must be expressed in CIDR notation.
     * Example: "<code>000.000.000.000/[subnet mask]</code>" or optionally the
     * shortened version "<code>0.0.0.0/[subnet mask]</code>".</p>
     */
    inline void SetIpRange(const Aws::String& value) { m_ipRangeHasBeenSet = true; m_ipRange = value; }

    /**
     * <p>Range of allowed IP addresses. This value must be expressed in CIDR notation.
     * Example: "<code>000.000.000.000/[subnet mask]</code>" or optionally the
     * shortened version "<code>0.0.0.0/[subnet mask]</code>".</p>
     */
    inline void SetIpRange(Aws::String&& value) { m_ipRangeHasBeenSet = true; m_ipRange = std::move(value); }

    /**
     * <p>Range of allowed IP addresses. This value must be expressed in CIDR notation.
     * Example: "<code>000.000.000.000/[subnet mask]</code>" or optionally the
     * shortened version "<code>0.0.0.0/[subnet mask]</code>".</p>
     */
    inline void SetIpRange(const char* value) { m_ipRangeHasBeenSet = true; m_ipRange.assign(value); }

    /**
     * <p>Range of allowed IP addresses. This value must be expressed in CIDR notation.
     * Example: "<code>000.000.000.000/[subnet mask]</code>" or optionally the
     * shortened version "<code>0.0.0.0/[subnet mask]</code>".</p>
     */
    inline IpPermission& WithIpRange(const Aws::String& value) { SetIpRange(value); return *this;}

    /**
     * <p>Range of allowed IP addresses. This value must be expressed in CIDR notation.
     * Example: "<code>000.000.000.000/[subnet mask]</code>" or optionally the
     * shortened version "<code>0.0.0.0/[subnet mask]</code>".</p>
     */
    inline IpPermission& WithIpRange(Aws::String&& value) { SetIpRange(std::move(value)); return *this;}

    /**
     * <p>Range of allowed IP addresses. This value must be expressed in CIDR notation.
     * Example: "<code>000.000.000.000/[subnet mask]</code>" or optionally the
     * shortened version "<code>0.0.0.0/[subnet mask]</code>".</p>
     */
    inline IpPermission& WithIpRange(const char* value) { SetIpRange(value); return *this;}

    /**
     * <p>Network communication protocol used by the fleet.</p>
     */
    inline const IpProtocol& GetProtocol() const{ return m_protocol; }

    /**
     * <p>Network communication protocol used by the fleet.</p>
     */
    inline void SetProtocol(const IpProtocol& value) { m_protocolHasBeenSet = true; m_protocol = value; }

    /**
     * <p>Network communication protocol used by the fleet.</p>
     */
    inline void SetProtocol(IpProtocol&& value) { m_protocolHasBeenSet = true; m_protocol = std::move(value); }

    /**
     * <p>Network communication protocol used by the fleet.</p>
     */
    inline IpPermission& WithProtocol(const IpProtocol& value) { SetProtocol(value); return *this;}

    /**
     * <p>Network communication protocol used by the fleet.</p>
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
