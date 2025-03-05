/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/gameliftstreams/model/StreamGroupLocationStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace GameLiftStreams
  {
    namespace Model
    {
      namespace StreamGroupLocationStatusMapper
      {

        static const int ACTIVATING_HASH = HashingUtils::HashString("ACTIVATING");
        static const int ACTIVE_HASH = HashingUtils::HashString("ACTIVE");
        static const int ERROR__HASH = HashingUtils::HashString("ERROR");
        static const int REMOVING_HASH = HashingUtils::HashString("REMOVING");


        StreamGroupLocationStatus GetStreamGroupLocationStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ACTIVATING_HASH)
          {
            return StreamGroupLocationStatus::ACTIVATING;
          }
          else if (hashCode == ACTIVE_HASH)
          {
            return StreamGroupLocationStatus::ACTIVE;
          }
          else if (hashCode == ERROR__HASH)
          {
            return StreamGroupLocationStatus::ERROR_;
          }
          else if (hashCode == REMOVING_HASH)
          {
            return StreamGroupLocationStatus::REMOVING;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<StreamGroupLocationStatus>(hashCode);
          }

          return StreamGroupLocationStatus::NOT_SET;
        }

        Aws::String GetNameForStreamGroupLocationStatus(StreamGroupLocationStatus enumValue)
        {
          switch(enumValue)
          {
          case StreamGroupLocationStatus::NOT_SET:
            return {};
          case StreamGroupLocationStatus::ACTIVATING:
            return "ACTIVATING";
          case StreamGroupLocationStatus::ACTIVE:
            return "ACTIVE";
          case StreamGroupLocationStatus::ERROR_:
            return "ERROR";
          case StreamGroupLocationStatus::REMOVING:
            return "REMOVING";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace StreamGroupLocationStatusMapper
    } // namespace Model
  } // namespace GameLiftStreams
} // namespace Aws
