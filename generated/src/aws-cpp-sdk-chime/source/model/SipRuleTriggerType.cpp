/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/chime/model/SipRuleTriggerType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Chime
  {
    namespace Model
    {
      namespace SipRuleTriggerTypeMapper
      {

        static constexpr uint32_t ToPhoneNumber_HASH = ConstExprHashingUtils::HashString("ToPhoneNumber");
        static constexpr uint32_t RequestUriHostname_HASH = ConstExprHashingUtils::HashString("RequestUriHostname");


        SipRuleTriggerType GetSipRuleTriggerTypeForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
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
          case SipRuleTriggerType::NOT_SET:
            return {};
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
  } // namespace Chime
} // namespace Aws
