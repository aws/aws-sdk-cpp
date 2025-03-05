/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/gameliftstreams/model/StreamGroupStatus.h>
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
      namespace StreamGroupStatusMapper
      {

        static const int ACTIVATING_HASH = HashingUtils::HashString("ACTIVATING");
        static const int UPDATING_LOCATIONS_HASH = HashingUtils::HashString("UPDATING_LOCATIONS");
        static const int ACTIVE_HASH = HashingUtils::HashString("ACTIVE");
        static const int ACTIVE_WITH_ERRORS_HASH = HashingUtils::HashString("ACTIVE_WITH_ERRORS");
        static const int ERROR__HASH = HashingUtils::HashString("ERROR");
        static const int DELETING_HASH = HashingUtils::HashString("DELETING");


        StreamGroupStatus GetStreamGroupStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ACTIVATING_HASH)
          {
            return StreamGroupStatus::ACTIVATING;
          }
          else if (hashCode == UPDATING_LOCATIONS_HASH)
          {
            return StreamGroupStatus::UPDATING_LOCATIONS;
          }
          else if (hashCode == ACTIVE_HASH)
          {
            return StreamGroupStatus::ACTIVE;
          }
          else if (hashCode == ACTIVE_WITH_ERRORS_HASH)
          {
            return StreamGroupStatus::ACTIVE_WITH_ERRORS;
          }
          else if (hashCode == ERROR__HASH)
          {
            return StreamGroupStatus::ERROR_;
          }
          else if (hashCode == DELETING_HASH)
          {
            return StreamGroupStatus::DELETING;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<StreamGroupStatus>(hashCode);
          }

          return StreamGroupStatus::NOT_SET;
        }

        Aws::String GetNameForStreamGroupStatus(StreamGroupStatus enumValue)
        {
          switch(enumValue)
          {
          case StreamGroupStatus::NOT_SET:
            return {};
          case StreamGroupStatus::ACTIVATING:
            return "ACTIVATING";
          case StreamGroupStatus::UPDATING_LOCATIONS:
            return "UPDATING_LOCATIONS";
          case StreamGroupStatus::ACTIVE:
            return "ACTIVE";
          case StreamGroupStatus::ACTIVE_WITH_ERRORS:
            return "ACTIVE_WITH_ERRORS";
          case StreamGroupStatus::ERROR_:
            return "ERROR";
          case StreamGroupStatus::DELETING:
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

      } // namespace StreamGroupStatusMapper
    } // namespace Model
  } // namespace GameLiftStreams
} // namespace Aws
