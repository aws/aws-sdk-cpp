/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cognito-idp/model/EventResponseType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace CognitoIdentityProvider
  {
    namespace Model
    {
      namespace EventResponseTypeMapper
      {

        static constexpr uint32_t Pass_HASH = ConstExprHashingUtils::HashString("Pass");
        static constexpr uint32_t Fail_HASH = ConstExprHashingUtils::HashString("Fail");
        static constexpr uint32_t InProgress_HASH = ConstExprHashingUtils::HashString("InProgress");


        EventResponseType GetEventResponseTypeForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == Pass_HASH)
          {
            return EventResponseType::Pass;
          }
          else if (hashCode == Fail_HASH)
          {
            return EventResponseType::Fail;
          }
          else if (hashCode == InProgress_HASH)
          {
            return EventResponseType::InProgress;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<EventResponseType>(hashCode);
          }

          return EventResponseType::NOT_SET;
        }

        Aws::String GetNameForEventResponseType(EventResponseType enumValue)
        {
          switch(enumValue)
          {
          case EventResponseType::NOT_SET:
            return {};
          case EventResponseType::Pass:
            return "Pass";
          case EventResponseType::Fail:
            return "Fail";
          case EventResponseType::InProgress:
            return "InProgress";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace EventResponseTypeMapper
    } // namespace Model
  } // namespace CognitoIdentityProvider
} // namespace Aws
