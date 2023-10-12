/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cognito-idp/model/EventFilterType.h>
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
      namespace EventFilterTypeMapper
      {

        static constexpr uint32_t SIGN_IN_HASH = ConstExprHashingUtils::HashString("SIGN_IN");
        static constexpr uint32_t PASSWORD_CHANGE_HASH = ConstExprHashingUtils::HashString("PASSWORD_CHANGE");
        static constexpr uint32_t SIGN_UP_HASH = ConstExprHashingUtils::HashString("SIGN_UP");


        EventFilterType GetEventFilterTypeForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == SIGN_IN_HASH)
          {
            return EventFilterType::SIGN_IN;
          }
          else if (hashCode == PASSWORD_CHANGE_HASH)
          {
            return EventFilterType::PASSWORD_CHANGE;
          }
          else if (hashCode == SIGN_UP_HASH)
          {
            return EventFilterType::SIGN_UP;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<EventFilterType>(hashCode);
          }

          return EventFilterType::NOT_SET;
        }

        Aws::String GetNameForEventFilterType(EventFilterType enumValue)
        {
          switch(enumValue)
          {
          case EventFilterType::NOT_SET:
            return {};
          case EventFilterType::SIGN_IN:
            return "SIGN_IN";
          case EventFilterType::PASSWORD_CHANGE:
            return "PASSWORD_CHANGE";
          case EventFilterType::SIGN_UP:
            return "SIGN_UP";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace EventFilterTypeMapper
    } // namespace Model
  } // namespace CognitoIdentityProvider
} // namespace Aws
