﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/fms/FMS_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace FMS
{
namespace Model
{

  /**
   * <p>Describes a set of permissions for a security group rule.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/fms-2018-01-01/SecurityGroupRuleDescription">AWS
   * API Reference</a></p>
   */
  class SecurityGroupRuleDescription
  {
  public:
    AWS_FMS_API SecurityGroupRuleDescription();
    AWS_FMS_API SecurityGroupRuleDescription(Aws::Utils::Json::JsonView jsonValue);
    AWS_FMS_API SecurityGroupRuleDescription& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_FMS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The IPv4 ranges for the security group rule.</p>
     */
    inline const Aws::String& GetIPV4Range() const{ return m_iPV4Range; }
    inline bool IPV4RangeHasBeenSet() const { return m_iPV4RangeHasBeenSet; }
    inline void SetIPV4Range(const Aws::String& value) { m_iPV4RangeHasBeenSet = true; m_iPV4Range = value; }
    inline void SetIPV4Range(Aws::String&& value) { m_iPV4RangeHasBeenSet = true; m_iPV4Range = std::move(value); }
    inline void SetIPV4Range(const char* value) { m_iPV4RangeHasBeenSet = true; m_iPV4Range.assign(value); }
    inline SecurityGroupRuleDescription& WithIPV4Range(const Aws::String& value) { SetIPV4Range(value); return *this;}
    inline SecurityGroupRuleDescription& WithIPV4Range(Aws::String&& value) { SetIPV4Range(std::move(value)); return *this;}
    inline SecurityGroupRuleDescription& WithIPV4Range(const char* value) { SetIPV4Range(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The IPv6 ranges for the security group rule.</p>
     */
    inline const Aws::String& GetIPV6Range() const{ return m_iPV6Range; }
    inline bool IPV6RangeHasBeenSet() const { return m_iPV6RangeHasBeenSet; }
    inline void SetIPV6Range(const Aws::String& value) { m_iPV6RangeHasBeenSet = true; m_iPV6Range = value; }
    inline void SetIPV6Range(Aws::String&& value) { m_iPV6RangeHasBeenSet = true; m_iPV6Range = std::move(value); }
    inline void SetIPV6Range(const char* value) { m_iPV6RangeHasBeenSet = true; m_iPV6Range.assign(value); }
    inline SecurityGroupRuleDescription& WithIPV6Range(const Aws::String& value) { SetIPV6Range(value); return *this;}
    inline SecurityGroupRuleDescription& WithIPV6Range(Aws::String&& value) { SetIPV6Range(std::move(value)); return *this;}
    inline SecurityGroupRuleDescription& WithIPV6Range(const char* value) { SetIPV6Range(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the prefix list for the security group rule.</p>
     */
    inline const Aws::String& GetPrefixListId() const{ return m_prefixListId; }
    inline bool PrefixListIdHasBeenSet() const { return m_prefixListIdHasBeenSet; }
    inline void SetPrefixListId(const Aws::String& value) { m_prefixListIdHasBeenSet = true; m_prefixListId = value; }
    inline void SetPrefixListId(Aws::String&& value) { m_prefixListIdHasBeenSet = true; m_prefixListId = std::move(value); }
    inline void SetPrefixListId(const char* value) { m_prefixListIdHasBeenSet = true; m_prefixListId.assign(value); }
    inline SecurityGroupRuleDescription& WithPrefixListId(const Aws::String& value) { SetPrefixListId(value); return *this;}
    inline SecurityGroupRuleDescription& WithPrefixListId(Aws::String&& value) { SetPrefixListId(std::move(value)); return *this;}
    inline SecurityGroupRuleDescription& WithPrefixListId(const char* value) { SetPrefixListId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The IP protocol name (<code>tcp</code>, <code>udp</code>, <code>icmp</code>,
     * <code>icmpv6</code>) or number.</p>
     */
    inline const Aws::String& GetProtocol() const{ return m_protocol; }
    inline bool ProtocolHasBeenSet() const { return m_protocolHasBeenSet; }
    inline void SetProtocol(const Aws::String& value) { m_protocolHasBeenSet = true; m_protocol = value; }
    inline void SetProtocol(Aws::String&& value) { m_protocolHasBeenSet = true; m_protocol = std::move(value); }
    inline void SetProtocol(const char* value) { m_protocolHasBeenSet = true; m_protocol.assign(value); }
    inline SecurityGroupRuleDescription& WithProtocol(const Aws::String& value) { SetProtocol(value); return *this;}
    inline SecurityGroupRuleDescription& WithProtocol(Aws::String&& value) { SetProtocol(std::move(value)); return *this;}
    inline SecurityGroupRuleDescription& WithProtocol(const char* value) { SetProtocol(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The start of the port range for the TCP and UDP protocols, or an ICMP/ICMPv6
     * type number. A value of <code>-1</code> indicates all ICMP/ICMPv6 types.</p>
     */
    inline long long GetFromPort() const{ return m_fromPort; }
    inline bool FromPortHasBeenSet() const { return m_fromPortHasBeenSet; }
    inline void SetFromPort(long long value) { m_fromPortHasBeenSet = true; m_fromPort = value; }
    inline SecurityGroupRuleDescription& WithFromPort(long long value) { SetFromPort(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The end of the port range for the TCP and UDP protocols, or an ICMP/ICMPv6
     * code. A value of <code>-1</code> indicates all ICMP/ICMPv6 codes.</p>
     */
    inline long long GetToPort() const{ return m_toPort; }
    inline bool ToPortHasBeenSet() const { return m_toPortHasBeenSet; }
    inline void SetToPort(long long value) { m_toPortHasBeenSet = true; m_toPort = value; }
    inline SecurityGroupRuleDescription& WithToPort(long long value) { SetToPort(value); return *this;}
    ///@}
  private:

    Aws::String m_iPV4Range;
    bool m_iPV4RangeHasBeenSet = false;

    Aws::String m_iPV6Range;
    bool m_iPV6RangeHasBeenSet = false;

    Aws::String m_prefixListId;
    bool m_prefixListIdHasBeenSet = false;

    Aws::String m_protocol;
    bool m_protocolHasBeenSet = false;

    long long m_fromPort;
    bool m_fromPortHasBeenSet = false;

    long long m_toPort;
    bool m_toPortHasBeenSet = false;
  };

} // namespace Model
} // namespace FMS
} // namespace Aws
