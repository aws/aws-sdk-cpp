/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/chime-sdk-voice/model/PhoneNumberOrderType.h>
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
      namespace PhoneNumberOrderTypeMapper
      {

        static constexpr uint32_t New_HASH = ConstExprHashingUtils::HashString("New");
        static constexpr uint32_t Porting_HASH = ConstExprHashingUtils::HashString("Porting");


        PhoneNumberOrderType GetPhoneNumberOrderTypeForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == New_HASH)
          {
            return PhoneNumberOrderType::New;
          }
          else if (hashCode == Porting_HASH)
          {
            return PhoneNumberOrderType::Porting;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<PhoneNumberOrderType>(hashCode);
          }

          return PhoneNumberOrderType::NOT_SET;
        }

        Aws::String GetNameForPhoneNumberOrderType(PhoneNumberOrderType enumValue)
        {
          switch(enumValue)
          {
          case PhoneNumberOrderType::NOT_SET:
            return {};
          case PhoneNumberOrderType::New:
            return "New";
          case PhoneNumberOrderType::Porting:
            return "Porting";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace PhoneNumberOrderTypeMapper
    } // namespace Model
  } // namespace ChimeSDKVoice
} // namespace Aws
