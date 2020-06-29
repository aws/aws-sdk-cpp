/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/shield/model/AttackPropertyIdentifier.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Shield
  {
    namespace Model
    {
      namespace AttackPropertyIdentifierMapper
      {

        static const int DESTINATION_URL_HASH = HashingUtils::HashString("DESTINATION_URL");
        static const int REFERRER_HASH = HashingUtils::HashString("REFERRER");
        static const int SOURCE_ASN_HASH = HashingUtils::HashString("SOURCE_ASN");
        static const int SOURCE_COUNTRY_HASH = HashingUtils::HashString("SOURCE_COUNTRY");
        static const int SOURCE_IP_ADDRESS_HASH = HashingUtils::HashString("SOURCE_IP_ADDRESS");
        static const int SOURCE_USER_AGENT_HASH = HashingUtils::HashString("SOURCE_USER_AGENT");
        static const int WORDPRESS_PINGBACK_REFLECTOR_HASH = HashingUtils::HashString("WORDPRESS_PINGBACK_REFLECTOR");
        static const int WORDPRESS_PINGBACK_SOURCE_HASH = HashingUtils::HashString("WORDPRESS_PINGBACK_SOURCE");


        AttackPropertyIdentifier GetAttackPropertyIdentifierForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == DESTINATION_URL_HASH)
          {
            return AttackPropertyIdentifier::DESTINATION_URL;
          }
          else if (hashCode == REFERRER_HASH)
          {
            return AttackPropertyIdentifier::REFERRER;
          }
          else if (hashCode == SOURCE_ASN_HASH)
          {
            return AttackPropertyIdentifier::SOURCE_ASN;
          }
          else if (hashCode == SOURCE_COUNTRY_HASH)
          {
            return AttackPropertyIdentifier::SOURCE_COUNTRY;
          }
          else if (hashCode == SOURCE_IP_ADDRESS_HASH)
          {
            return AttackPropertyIdentifier::SOURCE_IP_ADDRESS;
          }
          else if (hashCode == SOURCE_USER_AGENT_HASH)
          {
            return AttackPropertyIdentifier::SOURCE_USER_AGENT;
          }
          else if (hashCode == WORDPRESS_PINGBACK_REFLECTOR_HASH)
          {
            return AttackPropertyIdentifier::WORDPRESS_PINGBACK_REFLECTOR;
          }
          else if (hashCode == WORDPRESS_PINGBACK_SOURCE_HASH)
          {
            return AttackPropertyIdentifier::WORDPRESS_PINGBACK_SOURCE;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<AttackPropertyIdentifier>(hashCode);
          }

          return AttackPropertyIdentifier::NOT_SET;
        }

        Aws::String GetNameForAttackPropertyIdentifier(AttackPropertyIdentifier enumValue)
        {
          switch(enumValue)
          {
          case AttackPropertyIdentifier::DESTINATION_URL:
            return "DESTINATION_URL";
          case AttackPropertyIdentifier::REFERRER:
            return "REFERRER";
          case AttackPropertyIdentifier::SOURCE_ASN:
            return "SOURCE_ASN";
          case AttackPropertyIdentifier::SOURCE_COUNTRY:
            return "SOURCE_COUNTRY";
          case AttackPropertyIdentifier::SOURCE_IP_ADDRESS:
            return "SOURCE_IP_ADDRESS";
          case AttackPropertyIdentifier::SOURCE_USER_AGENT:
            return "SOURCE_USER_AGENT";
          case AttackPropertyIdentifier::WORDPRESS_PINGBACK_REFLECTOR:
            return "WORDPRESS_PINGBACK_REFLECTOR";
          case AttackPropertyIdentifier::WORDPRESS_PINGBACK_SOURCE:
            return "WORDPRESS_PINGBACK_SOURCE";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace AttackPropertyIdentifierMapper
    } // namespace Model
  } // namespace Shield
} // namespace Aws
