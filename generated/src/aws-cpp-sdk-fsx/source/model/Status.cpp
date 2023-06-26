/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/fsx/model/Status.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace FSx
  {
    namespace Model
    {
      namespace StatusMapper
      {

        static const int FAILED_HASH = HashingUtils::HashString("FAILED");
        static const int IN_PROGRESS_HASH = HashingUtils::HashString("IN_PROGRESS");
        static const int PENDING_HASH = HashingUtils::HashString("PENDING");
        static const int COMPLETED_HASH = HashingUtils::HashString("COMPLETED");
        static const int UPDATED_OPTIMIZING_HASH = HashingUtils::HashString("UPDATED_OPTIMIZING");


        Status GetStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == FAILED_HASH)
          {
            return Status::FAILED;
          }
          else if (hashCode == IN_PROGRESS_HASH)
          {
            return Status::IN_PROGRESS;
          }
          else if (hashCode == PENDING_HASH)
          {
            return Status::PENDING;
          }
          else if (hashCode == COMPLETED_HASH)
          {
            return Status::COMPLETED;
          }
          else if (hashCode == UPDATED_OPTIMIZING_HASH)
          {
            return Status::UPDATED_OPTIMIZING;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<Status>(hashCode);
          }

          return Status::NOT_SET;
        }

        Aws::String GetNameForStatus(Status enumValue)
        {
          switch(enumValue)
          {
          case Status::FAILED:
            return "FAILED";
          case Status::IN_PROGRESS:
            return "IN_PROGRESS";
          case Status::PENDING:
            return "PENDING";
          case Status::COMPLETED:
            return "COMPLETED";
          case Status::UPDATED_OPTIMIZING:
            return "UPDATED_OPTIMIZING";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace StatusMapper
    } // namespace Model
  } // namespace FSx
} // namespace Aws
