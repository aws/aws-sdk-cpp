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
