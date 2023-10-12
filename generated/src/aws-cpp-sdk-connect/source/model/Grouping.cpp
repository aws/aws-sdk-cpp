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

        static constexpr uint32_t QUEUE_HASH = ConstExprHashingUtils::HashString("QUEUE");
        static constexpr uint32_t CHANNEL_HASH = ConstExprHashingUtils::HashString("CHANNEL");
        static constexpr uint32_t ROUTING_PROFILE_HASH = ConstExprHashingUtils::HashString("ROUTING_PROFILE");


        Grouping GetGroupingForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
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
          case Grouping::NOT_SET:
            return {};
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
