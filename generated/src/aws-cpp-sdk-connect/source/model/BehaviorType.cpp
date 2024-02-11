/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connect/model/BehaviorType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Connect
  {
    namespace Model
    {
      namespace BehaviorTypeMapper
      {

        static const int ROUTE_CURRENT_CHANNEL_ONLY_HASH = HashingUtils::HashString("ROUTE_CURRENT_CHANNEL_ONLY");
        static const int ROUTE_ANY_CHANNEL_HASH = HashingUtils::HashString("ROUTE_ANY_CHANNEL");


        BehaviorType GetBehaviorTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ROUTE_CURRENT_CHANNEL_ONLY_HASH)
          {
            return BehaviorType::ROUTE_CURRENT_CHANNEL_ONLY;
          }
          else if (hashCode == ROUTE_ANY_CHANNEL_HASH)
          {
            return BehaviorType::ROUTE_ANY_CHANNEL;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<BehaviorType>(hashCode);
          }

          return BehaviorType::NOT_SET;
        }

        Aws::String GetNameForBehaviorType(BehaviorType enumValue)
        {
          switch(enumValue)
          {
          case BehaviorType::NOT_SET:
            return {};
          case BehaviorType::ROUTE_CURRENT_CHANNEL_ONLY:
            return "ROUTE_CURRENT_CHANNEL_ONLY";
          case BehaviorType::ROUTE_ANY_CHANNEL:
            return "ROUTE_ANY_CHANNEL";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace BehaviorTypeMapper
    } // namespace Model
  } // namespace Connect
} // namespace Aws
