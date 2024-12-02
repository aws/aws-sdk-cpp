/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/chime-sdk-voice/model/ContactCenterSystemType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace ChimeSDKVoice
  {
    namespace Model
    {
      namespace ContactCenterSystemTypeMapper
      {

        static const int GENESYS_ENGAGE_ON_PREMISES_HASH = HashingUtils::HashString("GENESYS_ENGAGE_ON_PREMISES");
        static const int AVAYA_AURA_CALL_CENTER_ELITE_HASH = HashingUtils::HashString("AVAYA_AURA_CALL_CENTER_ELITE");
        static const int AVAYA_AURA_CONTACT_CENTER_HASH = HashingUtils::HashString("AVAYA_AURA_CONTACT_CENTER");
        static const int CISCO_UNIFIED_CONTACT_CENTER_ENTERPRISE_HASH = HashingUtils::HashString("CISCO_UNIFIED_CONTACT_CENTER_ENTERPRISE");


        ContactCenterSystemType GetContactCenterSystemTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == GENESYS_ENGAGE_ON_PREMISES_HASH)
          {
            return ContactCenterSystemType::GENESYS_ENGAGE_ON_PREMISES;
          }
          else if (hashCode == AVAYA_AURA_CALL_CENTER_ELITE_HASH)
          {
            return ContactCenterSystemType::AVAYA_AURA_CALL_CENTER_ELITE;
          }
          else if (hashCode == AVAYA_AURA_CONTACT_CENTER_HASH)
          {
            return ContactCenterSystemType::AVAYA_AURA_CONTACT_CENTER;
          }
          else if (hashCode == CISCO_UNIFIED_CONTACT_CENTER_ENTERPRISE_HASH)
          {
            return ContactCenterSystemType::CISCO_UNIFIED_CONTACT_CENTER_ENTERPRISE;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ContactCenterSystemType>(hashCode);
          }

          return ContactCenterSystemType::NOT_SET;
        }

        Aws::String GetNameForContactCenterSystemType(ContactCenterSystemType enumValue)
        {
          switch(enumValue)
          {
          case ContactCenterSystemType::NOT_SET:
            return {};
          case ContactCenterSystemType::GENESYS_ENGAGE_ON_PREMISES:
            return "GENESYS_ENGAGE_ON_PREMISES";
          case ContactCenterSystemType::AVAYA_AURA_CALL_CENTER_ELITE:
            return "AVAYA_AURA_CALL_CENTER_ELITE";
          case ContactCenterSystemType::AVAYA_AURA_CONTACT_CENTER:
            return "AVAYA_AURA_CONTACT_CENTER";
          case ContactCenterSystemType::CISCO_UNIFIED_CONTACT_CENTER_ENTERPRISE:
            return "CISCO_UNIFIED_CONTACT_CENTER_ENTERPRISE";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ContactCenterSystemTypeMapper
    } // namespace Model
  } // namespace ChimeSDKVoice
} // namespace Aws
