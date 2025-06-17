/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/guardduty/model/IndicatorType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace GuardDuty
  {
    namespace Model
    {
      namespace IndicatorTypeMapper
      {

        static const int SUSPICIOUS_USER_AGENT_HASH = HashingUtils::HashString("SUSPICIOUS_USER_AGENT");
        static const int SUSPICIOUS_NETWORK_HASH = HashingUtils::HashString("SUSPICIOUS_NETWORK");
        static const int MALICIOUS_IP_HASH = HashingUtils::HashString("MALICIOUS_IP");
        static const int TOR_IP_HASH = HashingUtils::HashString("TOR_IP");
        static const int ATTACK_TACTIC_HASH = HashingUtils::HashString("ATTACK_TACTIC");
        static const int HIGH_RISK_API_HASH = HashingUtils::HashString("HIGH_RISK_API");
        static const int ATTACK_TECHNIQUE_HASH = HashingUtils::HashString("ATTACK_TECHNIQUE");
        static const int UNUSUAL_API_FOR_ACCOUNT_HASH = HashingUtils::HashString("UNUSUAL_API_FOR_ACCOUNT");
        static const int UNUSUAL_ASN_FOR_ACCOUNT_HASH = HashingUtils::HashString("UNUSUAL_ASN_FOR_ACCOUNT");
        static const int UNUSUAL_ASN_FOR_USER_HASH = HashingUtils::HashString("UNUSUAL_ASN_FOR_USER");
        static const int SUSPICIOUS_PROCESS_HASH = HashingUtils::HashString("SUSPICIOUS_PROCESS");
        static const int MALICIOUS_DOMAIN_HASH = HashingUtils::HashString("MALICIOUS_DOMAIN");
        static const int MALICIOUS_PROCESS_HASH = HashingUtils::HashString("MALICIOUS_PROCESS");
        static const int CRYPTOMINING_IP_HASH = HashingUtils::HashString("CRYPTOMINING_IP");
        static const int CRYPTOMINING_DOMAIN_HASH = HashingUtils::HashString("CRYPTOMINING_DOMAIN");
        static const int CRYPTOMINING_PROCESS_HASH = HashingUtils::HashString("CRYPTOMINING_PROCESS");


        IndicatorType GetIndicatorTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == SUSPICIOUS_USER_AGENT_HASH)
          {
            return IndicatorType::SUSPICIOUS_USER_AGENT;
          }
          else if (hashCode == SUSPICIOUS_NETWORK_HASH)
          {
            return IndicatorType::SUSPICIOUS_NETWORK;
          }
          else if (hashCode == MALICIOUS_IP_HASH)
          {
            return IndicatorType::MALICIOUS_IP;
          }
          else if (hashCode == TOR_IP_HASH)
          {
            return IndicatorType::TOR_IP;
          }
          else if (hashCode == ATTACK_TACTIC_HASH)
          {
            return IndicatorType::ATTACK_TACTIC;
          }
          else if (hashCode == HIGH_RISK_API_HASH)
          {
            return IndicatorType::HIGH_RISK_API;
          }
          else if (hashCode == ATTACK_TECHNIQUE_HASH)
          {
            return IndicatorType::ATTACK_TECHNIQUE;
          }
          else if (hashCode == UNUSUAL_API_FOR_ACCOUNT_HASH)
          {
            return IndicatorType::UNUSUAL_API_FOR_ACCOUNT;
          }
          else if (hashCode == UNUSUAL_ASN_FOR_ACCOUNT_HASH)
          {
            return IndicatorType::UNUSUAL_ASN_FOR_ACCOUNT;
          }
          else if (hashCode == UNUSUAL_ASN_FOR_USER_HASH)
          {
            return IndicatorType::UNUSUAL_ASN_FOR_USER;
          }
          else if (hashCode == SUSPICIOUS_PROCESS_HASH)
          {
            return IndicatorType::SUSPICIOUS_PROCESS;
          }
          else if (hashCode == MALICIOUS_DOMAIN_HASH)
          {
            return IndicatorType::MALICIOUS_DOMAIN;
          }
          else if (hashCode == MALICIOUS_PROCESS_HASH)
          {
            return IndicatorType::MALICIOUS_PROCESS;
          }
          else if (hashCode == CRYPTOMINING_IP_HASH)
          {
            return IndicatorType::CRYPTOMINING_IP;
          }
          else if (hashCode == CRYPTOMINING_DOMAIN_HASH)
          {
            return IndicatorType::CRYPTOMINING_DOMAIN;
          }
          else if (hashCode == CRYPTOMINING_PROCESS_HASH)
          {
            return IndicatorType::CRYPTOMINING_PROCESS;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<IndicatorType>(hashCode);
          }

          return IndicatorType::NOT_SET;
        }

        Aws::String GetNameForIndicatorType(IndicatorType enumValue)
        {
          switch(enumValue)
          {
          case IndicatorType::NOT_SET:
            return {};
          case IndicatorType::SUSPICIOUS_USER_AGENT:
            return "SUSPICIOUS_USER_AGENT";
          case IndicatorType::SUSPICIOUS_NETWORK:
            return "SUSPICIOUS_NETWORK";
          case IndicatorType::MALICIOUS_IP:
            return "MALICIOUS_IP";
          case IndicatorType::TOR_IP:
            return "TOR_IP";
          case IndicatorType::ATTACK_TACTIC:
            return "ATTACK_TACTIC";
          case IndicatorType::HIGH_RISK_API:
            return "HIGH_RISK_API";
          case IndicatorType::ATTACK_TECHNIQUE:
            return "ATTACK_TECHNIQUE";
          case IndicatorType::UNUSUAL_API_FOR_ACCOUNT:
            return "UNUSUAL_API_FOR_ACCOUNT";
          case IndicatorType::UNUSUAL_ASN_FOR_ACCOUNT:
            return "UNUSUAL_ASN_FOR_ACCOUNT";
          case IndicatorType::UNUSUAL_ASN_FOR_USER:
            return "UNUSUAL_ASN_FOR_USER";
          case IndicatorType::SUSPICIOUS_PROCESS:
            return "SUSPICIOUS_PROCESS";
          case IndicatorType::MALICIOUS_DOMAIN:
            return "MALICIOUS_DOMAIN";
          case IndicatorType::MALICIOUS_PROCESS:
            return "MALICIOUS_PROCESS";
          case IndicatorType::CRYPTOMINING_IP:
            return "CRYPTOMINING_IP";
          case IndicatorType::CRYPTOMINING_DOMAIN:
            return "CRYPTOMINING_DOMAIN";
          case IndicatorType::CRYPTOMINING_PROCESS:
            return "CRYPTOMINING_PROCESS";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace IndicatorTypeMapper
    } // namespace Model
  } // namespace GuardDuty
} // namespace Aws
