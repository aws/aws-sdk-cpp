/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/acm/model/ExtendedKeyUsageName.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace ACM
  {
    namespace Model
    {
      namespace ExtendedKeyUsageNameMapper
      {

        static const int TLS_WEB_SERVER_AUTHENTICATION_HASH = HashingUtils::HashString("TLS_WEB_SERVER_AUTHENTICATION");
        static const int TLS_WEB_CLIENT_AUTHENTICATION_HASH = HashingUtils::HashString("TLS_WEB_CLIENT_AUTHENTICATION");
        static const int CODE_SIGNING_HASH = HashingUtils::HashString("CODE_SIGNING");
        static const int EMAIL_PROTECTION_HASH = HashingUtils::HashString("EMAIL_PROTECTION");
        static const int TIME_STAMPING_HASH = HashingUtils::HashString("TIME_STAMPING");
        static const int OCSP_SIGNING_HASH = HashingUtils::HashString("OCSP_SIGNING");
        static const int IPSEC_END_SYSTEM_HASH = HashingUtils::HashString("IPSEC_END_SYSTEM");
        static const int IPSEC_TUNNEL_HASH = HashingUtils::HashString("IPSEC_TUNNEL");
        static const int IPSEC_USER_HASH = HashingUtils::HashString("IPSEC_USER");
        static const int ANY_HASH = HashingUtils::HashString("ANY");
        static const int NONE_HASH = HashingUtils::HashString("NONE");
        static const int CUSTOM_HASH = HashingUtils::HashString("CUSTOM");


        ExtendedKeyUsageName GetExtendedKeyUsageNameForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == TLS_WEB_SERVER_AUTHENTICATION_HASH)
          {
            return ExtendedKeyUsageName::TLS_WEB_SERVER_AUTHENTICATION;
          }
          else if (hashCode == TLS_WEB_CLIENT_AUTHENTICATION_HASH)
          {
            return ExtendedKeyUsageName::TLS_WEB_CLIENT_AUTHENTICATION;
          }
          else if (hashCode == CODE_SIGNING_HASH)
          {
            return ExtendedKeyUsageName::CODE_SIGNING;
          }
          else if (hashCode == EMAIL_PROTECTION_HASH)
          {
            return ExtendedKeyUsageName::EMAIL_PROTECTION;
          }
          else if (hashCode == TIME_STAMPING_HASH)
          {
            return ExtendedKeyUsageName::TIME_STAMPING;
          }
          else if (hashCode == OCSP_SIGNING_HASH)
          {
            return ExtendedKeyUsageName::OCSP_SIGNING;
          }
          else if (hashCode == IPSEC_END_SYSTEM_HASH)
          {
            return ExtendedKeyUsageName::IPSEC_END_SYSTEM;
          }
          else if (hashCode == IPSEC_TUNNEL_HASH)
          {
            return ExtendedKeyUsageName::IPSEC_TUNNEL;
          }
          else if (hashCode == IPSEC_USER_HASH)
          {
            return ExtendedKeyUsageName::IPSEC_USER;
          }
          else if (hashCode == ANY_HASH)
          {
            return ExtendedKeyUsageName::ANY;
          }
          else if (hashCode == NONE_HASH)
          {
            return ExtendedKeyUsageName::NONE;
          }
          else if (hashCode == CUSTOM_HASH)
          {
            return ExtendedKeyUsageName::CUSTOM;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ExtendedKeyUsageName>(hashCode);
          }

          return ExtendedKeyUsageName::NOT_SET;
        }

        Aws::String GetNameForExtendedKeyUsageName(ExtendedKeyUsageName enumValue)
        {
          switch(enumValue)
          {
          case ExtendedKeyUsageName::TLS_WEB_SERVER_AUTHENTICATION:
            return "TLS_WEB_SERVER_AUTHENTICATION";
          case ExtendedKeyUsageName::TLS_WEB_CLIENT_AUTHENTICATION:
            return "TLS_WEB_CLIENT_AUTHENTICATION";
          case ExtendedKeyUsageName::CODE_SIGNING:
            return "CODE_SIGNING";
          case ExtendedKeyUsageName::EMAIL_PROTECTION:
            return "EMAIL_PROTECTION";
          case ExtendedKeyUsageName::TIME_STAMPING:
            return "TIME_STAMPING";
          case ExtendedKeyUsageName::OCSP_SIGNING:
            return "OCSP_SIGNING";
          case ExtendedKeyUsageName::IPSEC_END_SYSTEM:
            return "IPSEC_END_SYSTEM";
          case ExtendedKeyUsageName::IPSEC_TUNNEL:
            return "IPSEC_TUNNEL";
          case ExtendedKeyUsageName::IPSEC_USER:
            return "IPSEC_USER";
          case ExtendedKeyUsageName::ANY:
            return "ANY";
          case ExtendedKeyUsageName::NONE:
            return "NONE";
          case ExtendedKeyUsageName::CUSTOM:
            return "CUSTOM";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ExtendedKeyUsageNameMapper
    } // namespace Model
  } // namespace ACM
} // namespace Aws
