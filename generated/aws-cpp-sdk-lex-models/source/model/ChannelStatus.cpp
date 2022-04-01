/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lex-models/model/ChannelStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace LexModelBuildingService
  {
    namespace Model
    {
      namespace ChannelStatusMapper
      {

        static const int IN_PROGRESS_HASH = HashingUtils::HashString("IN_PROGRESS");
        static const int CREATED_HASH = HashingUtils::HashString("CREATED");
        static const int FAILED_HASH = HashingUtils::HashString("FAILED");


        ChannelStatus GetChannelStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == IN_PROGRESS_HASH)
          {
            return ChannelStatus::IN_PROGRESS;
          }
          else if (hashCode == CREATED_HASH)
          {
            return ChannelStatus::CREATED;
          }
          else if (hashCode == FAILED_HASH)
          {
            return ChannelStatus::FAILED;
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
          case ChannelStatus::IN_PROGRESS:
            return "IN_PROGRESS";
          case ChannelStatus::CREATED:
            return "CREATED";
          case ChannelStatus::FAILED:
            return "FAILED";
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
  } // namespace LexModelBuildingService
} // namespace Aws
