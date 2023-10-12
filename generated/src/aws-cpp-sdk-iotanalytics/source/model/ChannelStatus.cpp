/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iotanalytics/model/ChannelStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace IoTAnalytics
  {
    namespace Model
    {
      namespace ChannelStatusMapper
      {

        static constexpr uint32_t CREATING_HASH = ConstExprHashingUtils::HashString("CREATING");
        static constexpr uint32_t ACTIVE_HASH = ConstExprHashingUtils::HashString("ACTIVE");
        static constexpr uint32_t DELETING_HASH = ConstExprHashingUtils::HashString("DELETING");


        ChannelStatus GetChannelStatusForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == CREATING_HASH)
          {
            return ChannelStatus::CREATING;
          }
          else if (hashCode == ACTIVE_HASH)
          {
            return ChannelStatus::ACTIVE;
          }
          else if (hashCode == DELETING_HASH)
          {
            return ChannelStatus::DELETING;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ChannelStatus>(hashCode);
          }

          return ChannelStatus::NOT_SET;
        }

        Aws::String GetNameForChannelStatus(ChannelStatus enumValue)
        {
          switch(enumValue)
          {
          case ChannelStatus::NOT_SET:
            return {};
          case ChannelStatus::CREATING:
            return "CREATING";
          case ChannelStatus::ACTIVE:
            return "ACTIVE";
          case ChannelStatus::DELETING:
            return "DELETING";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ChannelStatusMapper
    } // namespace Model
  } // namespace IoTAnalytics
} // namespace Aws
