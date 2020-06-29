/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/securityhub/model/ThreatIntelIndicatorType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace SecurityHub
  {
    namespace Model
    {
      namespace ThreatIntelIndicatorTypeMapper
      {

        static const int DOMAIN__HASH = HashingUtils::HashString("DOMAIN");
        static const int EMAIL_ADDRESS_HASH = HashingUtils::HashString("EMAIL_ADDRESS");
        static const int HASH_MD5_HASH = HashingUtils::HashString("HASH_MD5");
        static const int HASH_SHA1_HASH = HashingUtils::HashString("HASH_SHA1");
        static const int HASH_SHA256_HASH = HashingUtils::HashString("HASH_SHA256");
        static const int HASH_SHA512_HASH = HashingUtils::HashString("HASH_SHA512");
        static const int IPV4_ADDRESS_HASH = HashingUtils::HashString("IPV4_ADDRESS");
        static const int IPV6_ADDRESS_HASH = HashingUtils::HashString("IPV6_ADDRESS");
        static const int MUTEX_HASH = HashingUtils::HashString("MUTEX");
        static const int PROCESS_HASH = HashingUtils::HashString("PROCESS");
        static const int URL_HASH = HashingUtils::HashString("URL");


        ThreatIntelIndicatorType GetThreatIntelIndicatorTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == DOMAIN__HASH)
          {
            return ThreatIntelIndicatorType::DOMAIN_;
          }
          else if (hashCode == EMAIL_ADDRESS_HASH)
          {
            return ThreatIntelIndicatorType::EMAIL_ADDRESS;
          }
          else if (hashCode == HASH_MD5_HASH)
          {
            return ThreatIntelIndicatorType::HASH_MD5;
          }
          else if (hashCode == HASH_SHA1_HASH)
          {
            return ThreatIntelIndicatorType::HASH_SHA1;
          }
          else if (hashCode == HASH_SHA256_HASH)
          {
            return ThreatIntelIndicatorType::HASH_SHA256;
          }
          else if (hashCode == HASH_SHA512_HASH)
          {
            return ThreatIntelIndicatorType::HASH_SHA512;
          }
          else if (hashCode == IPV4_ADDRESS_HASH)
          {
            return ThreatIntelIndicatorType::IPV4_ADDRESS;
          }
          else if (hashCode == IPV6_ADDRESS_HASH)
          {
            return ThreatIntelIndicatorType::IPV6_ADDRESS;
          }
          else if (hashCode == MUTEX_HASH)
          {
            return ThreatIntelIndicatorType::MUTEX;
          }
          else if (hashCode == PROCESS_HASH)
          {
            return ThreatIntelIndicatorType::PROCESS;
          }
          else if (hashCode == URL_HASH)
          {
            return ThreatIntelIndicatorType::URL;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ThreatIntelIndicatorType>(hashCode);
          }

          return ThreatIntelIndicatorType::NOT_SET;
        }

        Aws::String GetNameForThreatIntelIndicatorType(ThreatIntelIndicatorType enumValue)
        {
          switch(enumValue)
          {
          case ThreatIntelIndicatorType::DOMAIN_:
            return "DOMAIN";
          case ThreatIntelIndicatorType::EMAIL_ADDRESS:
            return "EMAIL_ADDRESS";
          case ThreatIntelIndicatorType::HASH_MD5:
            return "HASH_MD5";
          case ThreatIntelIndicatorType::HASH_SHA1:
            return "HASH_SHA1";
          case ThreatIntelIndicatorType::HASH_SHA256:
            return "HASH_SHA256";
          case ThreatIntelIndicatorType::HASH_SHA512:
            return "HASH_SHA512";
          case ThreatIntelIndicatorType::IPV4_ADDRESS:
            return "IPV4_ADDRESS";
          case ThreatIntelIndicatorType::IPV6_ADDRESS:
            return "IPV6_ADDRESS";
          case ThreatIntelIndicatorType::MUTEX:
            return "MUTEX";
          case ThreatIntelIndicatorType::PROCESS:
            return "PROCESS";
          case ThreatIntelIndicatorType::URL:
            return "URL";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ThreatIntelIndicatorTypeMapper
    } // namespace Model
  } // namespace SecurityHub
} // namespace Aws
