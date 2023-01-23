/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connect/model/Grouping.h>
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
      namespace GroupingMapper
      {

        static const int QUEUE_HASH = HashingUtils::HashString("QUEUE");
        static const int CHANNEL_HASH = HashingUtils::HashString("CHANNEL");
        static const int ROUTING_PROFILE_HASH = HashingUtils::HashString("ROUTING_PROFILE");


        Grouping GetGroupingForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == QUEUE_HASH)
          {
            return Grouping::QUEUE;
          }
          else if (hashCode == CHANNEL_HASH)
          {
            return Grouping::CHANNEL;
          }
          else if (hashCode == ROUTING_PROFILE_HASH)
          {
            return Grouping::ROUTING_PROFILE;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<Grouping>(hashCode);
          }

          return Grouping::NOT_SET;
        }

        Aws::String GetNameForGrouping(Grouping enumValue)
        {
          switch(enumValue)
          {
          case Grouping::QUEUE:
            return "QUEUE";
          case Grouping::CHANNEL:
            return "CHANNEL";
          case Grouping::ROUTING_PROFILE:
            return "ROUTING_PROFILE";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace GroupingMapper
    } // namespace Model
  } // namespace Connect
} // namespace Aws
