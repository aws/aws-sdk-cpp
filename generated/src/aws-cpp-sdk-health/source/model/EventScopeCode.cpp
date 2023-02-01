/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/health/model/EventScopeCode.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Health
  {
    namespace Model
    {
      namespace EventScopeCodeMapper
      {

        static const int PUBLIC__HASH = HashingUtils::HashString("PUBLIC");
        static const int ACCOUNT_SPECIFIC_HASH = HashingUtils::HashString("ACCOUNT_SPECIFIC");
        static const int NONE_HASH = HashingUtils::HashString("NONE");


        EventScopeCode GetEventScopeCodeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == PUBLIC__HASH)
          {
            return EventScopeCode::PUBLIC_;
          }
          else if (hashCode == ACCOUNT_SPECIFIC_HASH)
          {
            return EventScopeCode::ACCOUNT_SPECIFIC;
          }
          else if (hashCode == NONE_HASH)
          {
            return EventScopeCode::NONE;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<EventScopeCode>(hashCode);
          }

          return EventScopeCode::NOT_SET;
        }

        Aws::String GetNameForEventScopeCode(EventScopeCode enumValue)
        {
          switch(enumValue)
          {
          case EventScopeCode::PUBLIC_:
            return "PUBLIC";
          case EventScopeCode::ACCOUNT_SPECIFIC:
            return "ACCOUNT_SPECIFIC";
          case EventScopeCode::NONE:
            return "NONE";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace EventScopeCodeMapper
    } // namespace Model
  } // namespace Health
} // namespace Aws
