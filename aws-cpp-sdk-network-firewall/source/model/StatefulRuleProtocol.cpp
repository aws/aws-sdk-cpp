/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/network-firewall/model/StatefulRuleProtocol.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace NetworkFirewall
  {
    namespace Model
    {
      namespace StatefulRuleProtocolMapper
      {

        static const int IP_HASH = HashingUtils::HashString("IP");
        static const int TCP_HASH = HashingUtils::HashString("TCP");
        static const int UDP_HASH = HashingUtils::HashString("UDP");
        static const int ICMP_HASH = HashingUtils::HashString("ICMP");
        static const int HTTP_HASH = HashingUtils::HashString("HTTP");
        static const int FTP_HASH = HashingUtils::HashString("FTP");
        static const int TLS_HASH = HashingUtils::HashString("TLS");
        static const int SMB_HASH = HashingUtils::HashString("SMB");
        static const int DNS_HASH = HashingUtils::HashString("DNS");
        static const int DCERPC_HASH = HashingUtils::HashString("DCERPC");
        static const int SSH_HASH = HashingUtils::HashString("SSH");
        static const int SMTP_HASH = HashingUtils::HashString("SMTP");
        static const int IMAP_HASH = HashingUtils::HashString("IMAP");
        static const int MSN_HASH = HashingUtils::HashString("MSN");
        static const int KRB5_HASH = HashingUtils::HashString("KRB5");
        static const int IKEV2_HASH = HashingUtils::HashString("IKEV2");
        static const int TFTP_HASH = HashingUtils::HashString("TFTP");
        static const int NTP_HASH = HashingUtils::HashString("NTP");
        static const int DHCP_HASH = HashingUtils::HashString("DHCP");


        StatefulRuleProtocol GetStatefulRuleProtocolForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == IP_HASH)
          {
            return StatefulRuleProtocol::IP;
          }
          else if (hashCode == TCP_HASH)
          {
            return StatefulRuleProtocol::TCP;
          }
          else if (hashCode == UDP_HASH)
          {
            return StatefulRuleProtocol::UDP;
          }
          else if (hashCode == ICMP_HASH)
          {
            return StatefulRuleProtocol::ICMP;
          }
          else if (hashCode == HTTP_HASH)
          {
            return StatefulRuleProtocol::HTTP;
          }
          else if (hashCode == FTP_HASH)
          {
            return StatefulRuleProtocol::FTP;
          }
          else if (hashCode == TLS_HASH)
          {
            return StatefulRuleProtocol::TLS;
          }
          else if (hashCode == SMB_HASH)
          {
            return StatefulRuleProtocol::SMB;
          }
          else if (hashCode == DNS_HASH)
          {
            return StatefulRuleProtocol::DNS;
          }
          else if (hashCode == DCERPC_HASH)
          {
            return StatefulRuleProtocol::DCERPC;
          }
          else if (hashCode == SSH_HASH)
          {
            return StatefulRuleProtocol::SSH;
          }
          else if (hashCode == SMTP_HASH)
          {
            return StatefulRuleProtocol::SMTP;
          }
          else if (hashCode == IMAP_HASH)
          {
            return StatefulRuleProtocol::IMAP;
          }
          else if (hashCode == MSN_HASH)
          {
            return StatefulRuleProtocol::MSN;
          }
          else if (hashCode == KRB5_HASH)
          {
            return StatefulRuleProtocol::KRB5;
          }
          else if (hashCode == IKEV2_HASH)
          {
            return StatefulRuleProtocol::IKEV2;
          }
          else if (hashCode == TFTP_HASH)
          {
            return StatefulRuleProtocol::TFTP;
          }
          else if (hashCode == NTP_HASH)
          {
            return StatefulRuleProtocol::NTP;
          }
          else if (hashCode == DHCP_HASH)
          {
            return StatefulRuleProtocol::DHCP;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<StatefulRuleProtocol>(hashCode);
          }

          return StatefulRuleProtocol::NOT_SET;
        }

        Aws::String GetNameForStatefulRuleProtocol(StatefulRuleProtocol enumValue)
        {
          switch(enumValue)
          {
          case StatefulRuleProtocol::IP:
            return "IP";
          case StatefulRuleProtocol::TCP:
            return "TCP";
          case StatefulRuleProtocol::UDP:
            return "UDP";
          case StatefulRuleProtocol::ICMP:
            return "ICMP";
          case StatefulRuleProtocol::HTTP:
            return "HTTP";
          case StatefulRuleProtocol::FTP:
            return "FTP";
          case StatefulRuleProtocol::TLS:
            return "TLS";
          case StatefulRuleProtocol::SMB:
            return "SMB";
          case StatefulRuleProtocol::DNS:
            return "DNS";
          case StatefulRuleProtocol::DCERPC:
            return "DCERPC";
          case StatefulRuleProtocol::SSH:
            return "SSH";
          case StatefulRuleProtocol::SMTP:
            return "SMTP";
          case StatefulRuleProtocol::IMAP:
            return "IMAP";
          case StatefulRuleProtocol::MSN:
            return "MSN";
          case StatefulRuleProtocol::KRB5:
            return "KRB5";
          case StatefulRuleProtocol::IKEV2:
            return "IKEV2";
          case StatefulRuleProtocol::TFTP:
            return "TFTP";
          case StatefulRuleProtocol::NTP:
            return "NTP";
          case StatefulRuleProtocol::DHCP:
            return "DHCP";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace StatefulRuleProtocolMapper
    } // namespace Model
  } // namespace NetworkFirewall
} // namespace Aws
