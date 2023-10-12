/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/chime-sdk-voice/model/PhoneNumberProductType.h>
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
      namespace PhoneNumberProductTypeMapper
      {

        static constexpr uint32_t VoiceConnector_HASH = ConstExprHashingUtils::HashString("VoiceConnector");
        static constexpr uint32_t SipMediaApplicationDialIn_HASH = ConstExprHashingUtils::HashString("SipMediaApplicationDialIn");


        PhoneNumberProductType GetPhoneNumberProductTypeForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == VoiceConnector_HASH)
          {
            return PhoneNumberProductType::VoiceConnector;
          }
          else if (hashCode == SipMediaApplicationDialIn_HASH)
          {
            return PhoneNumberProductType::SipMediaApplicationDialIn;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<PhoneNumberProductType>(hashCode);
          }

          return PhoneNumberProductType::NOT_SET;
        }

        Aws::String GetNameForPhoneNumberProductType(PhoneNumberProductType enumValue)
        {
          switch(enumValue)
          {
          case PhoneNumberProductType::NOT_SET:
            return {};
          case PhoneNumberProductType::VoiceConnector:
            return "VoiceConnector";
          case PhoneNumberProductType::SipMediaApplicationDialIn:
            return "SipMediaApplicationDialIn";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace PhoneNumberProductTypeMapper
    } // namespace Model
  } // namespace ChimeSDKVoice
} // namespace Aws
