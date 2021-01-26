/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/network-firewall/NetworkFirewall_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace NetworkFirewall
{
namespace Model
{
  enum class StatefulRuleProtocol
  {
    NOT_SET,
    IP,
    TCP,
    UDP,
    ICMP,
    HTTP,
    FTP,
    TLS,
    SMB,
    DNS,
    DCERPC,
    SSH,
    SMTP,
    IMAP,
    MSN,
    KRB5,
    IKEV2,
    TFTP,
    NTP,
    DHCP
  };

namespace StatefulRuleProtocolMapper
{
AWS_NETWORKFIREWALL_API StatefulRuleProtocol GetStatefulRuleProtocolForName(const Aws::String& name);

AWS_NETWORKFIREWALL_API Aws::String GetNameForStatefulRuleProtocol(StatefulRuleProtocol value);
} // namespace StatefulRuleProtocolMapper
} // namespace Model
} // namespace NetworkFirewall
} // namespace Aws
