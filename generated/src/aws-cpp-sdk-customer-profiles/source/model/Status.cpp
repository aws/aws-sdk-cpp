/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/customer-profiles/model/Status.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace CustomerProfiles
  {
    namespace Model
    {
      namespace StatusMapper
      {

        static constexpr uint32_t NOT_STARTED_HASH = ConstExprHashingUtils::HashString("NOT_STARTED");
        static constexpr uint32_t IN_PROGRESS_HASH = ConstExprHashingUtils::HashString("IN_PROGRESS");
        static constexpr uint32_t COMPLETE_HASH = ConstExprHashingUtils::HashString("COMPLETE");
        static constexpr uint32_t FAILED_HASH = ConstExprHashingUtils::HashString("FAILED");
        static constexpr uint32_t SPLIT_HASH = ConstExprHashingUtils::HashString("SPLIT");
        static constexpr uint32_t RETRY_HASH = ConstExprHashingUtils::HashString("RETRY");
        static constexpr uint32_t CANCELLED_HASH = ConstExprHashingUtils::HashString("CANCELLED");


        Status GetStatusForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == NOT_STARTED_HASH)
          {
            return Status::NOT_STARTED;
          }
          else if (hashCode == IN_PROGRESS_HASH)
          {
            return Status::IN_PROGRESS;
          }
          else if (hashCode == COMPLETE_HASH)
          {
            return Status::COMPLETE;
          }
          else if (hashCode == FAILED_HASH)
          {
            return Status::FAILED;
          }
          else if (hashCode == SPLIT_HASH)
          {
            return Status::SPLIT;
          }
          else if (hashCode == RETRY_HASH)
          {
            return Status::RETRY;
          }
          else if (hashCode == CANCELLED_HASH)
          {
            return Status::CANCELLED;
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
          case Status::NOT_SET:
            return {};
          case Status::NOT_STARTED:
            return "NOT_STARTED";
          case Status::IN_PROGRESS:
            return "IN_PROGRESS";
          case Status::COMPLETE:
            return "COMPLETE";
          case Status::FAILED:
            return "FAILED";
          case Status::SPLIT:
            return "SPLIT";
          case Status::RETRY:
            return "RETRY";
          case Status::CANCELLED:
            return "CANCELLED";
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
  } // namespace CustomerProfiles
} // namespace Aws
