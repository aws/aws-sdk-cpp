/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cleanroomsml/model/MLInputChannelStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace CleanRoomsML
  {
    namespace Model
    {
      namespace MLInputChannelStatusMapper
      {

        static const int CREATE_PENDING_HASH = HashingUtils::HashString("CREATE_PENDING");
        static const int CREATE_IN_PROGRESS_HASH = HashingUtils::HashString("CREATE_IN_PROGRESS");
        static const int CREATE_FAILED_HASH = HashingUtils::HashString("CREATE_FAILED");
        static const int ACTIVE_HASH = HashingUtils::HashString("ACTIVE");
        static const int DELETE_PENDING_HASH = HashingUtils::HashString("DELETE_PENDING");
        static const int DELETE_IN_PROGRESS_HASH = HashingUtils::HashString("DELETE_IN_PROGRESS");
        static const int DELETE_FAILED_HASH = HashingUtils::HashString("DELETE_FAILED");
        static const int INACTIVE_HASH = HashingUtils::HashString("INACTIVE");


        MLInputChannelStatus GetMLInputChannelStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == CREATE_PENDING_HASH)
          {
            return MLInputChannelStatus::CREATE_PENDING;
          }
          else if (hashCode == CREATE_IN_PROGRESS_HASH)
          {
            return MLInputChannelStatus::CREATE_IN_PROGRESS;
          }
          else if (hashCode == CREATE_FAILED_HASH)
          {
            return MLInputChannelStatus::CREATE_FAILED;
          }
          else if (hashCode == ACTIVE_HASH)
          {
            return MLInputChannelStatus::ACTIVE;
          }
          else if (hashCode == DELETE_PENDING_HASH)
          {
            return MLInputChannelStatus::DELETE_PENDING;
          }
          else if (hashCode == DELETE_IN_PROGRESS_HASH)
          {
            return MLInputChannelStatus::DELETE_IN_PROGRESS;
          }
          else if (hashCode == DELETE_FAILED_HASH)
          {
            return MLInputChannelStatus::DELETE_FAILED;
          }
          else if (hashCode == INACTIVE_HASH)
          {
            return MLInputChannelStatus::INACTIVE;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<MLInputChannelStatus>(hashCode);
          }

          return MLInputChannelStatus::NOT_SET;
        }

        Aws::String GetNameForMLInputChannelStatus(MLInputChannelStatus enumValue)
        {
          switch(enumValue)
          {
          case MLInputChannelStatus::NOT_SET:
            return {};
          case MLInputChannelStatus::CREATE_PENDING:
            return "CREATE_PENDING";
          case MLInputChannelStatus::CREATE_IN_PROGRESS:
            return "CREATE_IN_PROGRESS";
          case MLInputChannelStatus::CREATE_FAILED:
            return "CREATE_FAILED";
          case MLInputChannelStatus::ACTIVE:
            return "ACTIVE";
          case MLInputChannelStatus::DELETE_PENDING:
            return "DELETE_PENDING";
          case MLInputChannelStatus::DELETE_IN_PROGRESS:
            return "DELETE_IN_PROGRESS";
          case MLInputChannelStatus::DELETE_FAILED:
            return "DELETE_FAILED";
          case MLInputChannelStatus::INACTIVE:
            return "INACTIVE";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace MLInputChannelStatusMapper
    } // namespace Model
  } // namespace CleanRoomsML
} // namespace Aws
