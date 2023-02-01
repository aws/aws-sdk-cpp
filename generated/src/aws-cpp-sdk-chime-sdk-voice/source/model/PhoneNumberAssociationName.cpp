/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/chime-sdk-voice/model/PhoneNumberAssociationName.h>
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
      namespace PhoneNumberAssociationNameMapper
      {

        static const int VoiceConnectorId_HASH = HashingUtils::HashString("VoiceConnectorId");
        static const int VoiceConnectorGroupId_HASH = HashingUtils::HashString("VoiceConnectorGroupId");
        static const int SipRuleId_HASH = HashingUtils::HashString("SipRuleId");


        PhoneNumberAssociationName GetPhoneNumberAssociationNameForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == VoiceConnectorId_HASH)
          {
            return PhoneNumberAssociationName::VoiceConnectorId;
          }
          else if (hashCode == VoiceConnectorGroupId_HASH)
          {
            return PhoneNumberAssociationName::VoiceConnectorGroupId;
          }
          else if (hashCode == SipRuleId_HASH)
          {
            return PhoneNumberAssociationName::SipRuleId;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<PhoneNumberAssociationName>(hashCode);
          }

          return PhoneNumberAssociationName::NOT_SET;
        }

        Aws::String GetNameForPhoneNumberAssociationName(PhoneNumberAssociationName enumValue)
        {
          switch(enumValue)
          {
          case PhoneNumberAssociationName::VoiceConnectorId:
            return "VoiceConnectorId";
          case PhoneNumberAssociationName::VoiceConnectorGroupId:
            return "VoiceConnectorGroupId";
          case PhoneNumberAssociationName::SipRuleId:
            return "SipRuleId";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace PhoneNumberAssociationNameMapper
    } // namespace Model
  } // namespace ChimeSDKVoice
} // namespace Aws
