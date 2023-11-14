/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/backup/model/RestoreJobState.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Backup
  {
    namespace Model
    {
      namespace RestoreJobStateMapper
      {

        static const int CREATED_HASH = HashingUtils::HashString("CREATED");
        static const int PENDING_HASH = HashingUtils::HashString("PENDING");
        static const int RUNNING_HASH = HashingUtils::HashString("RUNNING");
        static const int ABORTED_HASH = HashingUtils::HashString("ABORTED");
        static const int COMPLETED_HASH = HashingUtils::HashString("COMPLETED");
        static const int FAILED_HASH = HashingUtils::HashString("FAILED");
        static const int AGGREGATE_ALL_HASH = HashingUtils::HashString("AGGREGATE_ALL");
        static const int ANY_HASH = HashingUtils::HashString("ANY");


        RestoreJobState GetRestoreJobStateForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == CREATED_HASH)
          {
            return RestoreJobState::CREATED;
          }
          else if (hashCode == PENDING_HASH)
          {
            return RestoreJobState::PENDING;
          }
          else if (hashCode == RUNNING_HASH)
          {
            return RestoreJobState::RUNNING;
          }
          else if (hashCode == ABORTED_HASH)
          {
            return RestoreJobState::ABORTED;
          }
          else if (hashCode == COMPLETED_HASH)
          {
            return RestoreJobState::COMPLETED;
          }
          else if (hashCode == FAILED_HASH)
          {
            return RestoreJobState::FAILED;
          }
          else if (hashCode == AGGREGATE_ALL_HASH)
          {
            return RestoreJobState::AGGREGATE_ALL;
          }
          else if (hashCode == ANY_HASH)
          {
            return RestoreJobState::ANY;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<RestoreJobState>(hashCode);
          }

          return RestoreJobState::NOT_SET;
        }

        Aws::String GetNameForRestoreJobState(RestoreJobState enumValue)
        {
          switch(enumValue)
          {
          case RestoreJobState::NOT_SET:
            return {};
          case RestoreJobState::CREATED:
            return "CREATED";
          case RestoreJobState::PENDING:
            return "PENDING";
          case RestoreJobState::RUNNING:
            return "RUNNING";
          case RestoreJobState::ABORTED:
            return "ABORTED";
          case RestoreJobState::COMPLETED:
            return "COMPLETED";
          case RestoreJobState::FAILED:
            return "FAILED";
          case RestoreJobState::AGGREGATE_ALL:
            return "AGGREGATE_ALL";
          case RestoreJobState::ANY:
            return "ANY";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace RestoreJobStateMapper
    } // namespace Model
  } // namespace Backup
} // namespace Aws
