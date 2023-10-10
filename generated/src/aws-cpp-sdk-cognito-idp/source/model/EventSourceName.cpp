/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cognito-idp/model/EventSourceName.h>
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
      namespace EventSourceNameMapper
      {

        static const int userNotification_HASH = HashingUtils::HashString("userNotification");


        EventSourceName GetEventSourceNameForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == userNotification_HASH)
          {
            return EventSourceName::userNotification;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<EventSourceName>(hashCode);
          }

          return EventSourceName::NOT_SET;
        }

        Aws::String GetNameForEventSourceName(EventSourceName enumValue)
        {
          switch(enumValue)
          {
          case EventSourceName::NOT_SET:
            return {};
          case EventSourceName::userNotification:
            return "userNotification";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace EventSourceNameMapper
    } // namespace Model
  } // namespace CognitoIdentityProvider
} // namespace Aws
