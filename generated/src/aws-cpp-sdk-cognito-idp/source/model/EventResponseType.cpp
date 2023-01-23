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

        static const int Pass_HASH = HashingUtils::HashString("Pass");
        static const int Fail_HASH = HashingUtils::HashString("Fail");
        static const int InProgress_HASH = HashingUtils::HashString("InProgress");


        EventResponseType GetEventResponseTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
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
