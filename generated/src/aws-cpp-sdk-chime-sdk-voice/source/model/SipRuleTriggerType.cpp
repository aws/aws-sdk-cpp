/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/chime-sdk-voice/model/SipRuleTriggerType.h>
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
      namespace SipRuleTriggerTypeMapper
      {

        static const int ToPhoneNumber_HASH = HashingUtils::HashString("ToPhoneNumber");
        static const int RequestUriHostname_HASH = HashingUtils::HashString("RequestUriHostname");


        SipRuleTriggerType GetSipRuleTriggerTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ToPhoneNumber_HASH)
          {
            return SipRuleTriggerType::ToPhoneNumber;
          }
          else if (hashCode == RequestUriHostname_HASH)
          {
            return SipRuleTriggerType::RequestUriHostname;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<SipRuleTriggerType>(hashCode);
          }

          return SipRuleTriggerType::NOT_SET;
        }

        Aws::String GetNameForSipRuleTriggerType(SipRuleTriggerType enumValue)
        {
          switch(enumValue)
          {
          case SipRuleTriggerType::ToPhoneNumber:
            return "ToPhoneNumber";
          case SipRuleTriggerType::RequestUriHostname:
            return "RequestUriHostname";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace SipRuleTriggerTypeMapper
    } // namespace Model
  } // namespace ChimeSDKVoice
} // namespace Aws
