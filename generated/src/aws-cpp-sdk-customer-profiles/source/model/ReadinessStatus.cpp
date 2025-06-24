/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/customer-profiles/model/ReadinessStatus.h>
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
      namespace ReadinessStatusMapper
      {

        static const int PREPARING_HASH = HashingUtils::HashString("PREPARING");
        static const int IN_PROGRESS_HASH = HashingUtils::HashString("IN_PROGRESS");
        static const int COMPLETED_HASH = HashingUtils::HashString("COMPLETED");
        static const int FAILED_HASH = HashingUtils::HashString("FAILED");


        ReadinessStatus GetReadinessStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == PREPARING_HASH)
          {
            return ReadinessStatus::PREPARING;
          }
          else if (hashCode == IN_PROGRESS_HASH)
          {
            return ReadinessStatus::IN_PROGRESS;
          }
          else if (hashCode == COMPLETED_HASH)
          {
            return ReadinessStatus::COMPLETED;
          }
          else if (hashCode == FAILED_HASH)
          {
            return ReadinessStatus::FAILED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ReadinessStatus>(hashCode);
          }

          return ReadinessStatus::NOT_SET;
        }

        Aws::String GetNameForReadinessStatus(ReadinessStatus enumValue)
        {
          switch(enumValue)
          {
          case ReadinessStatus::NOT_SET:
            return {};
          case ReadinessStatus::PREPARING:
            return "PREPARING";
          case ReadinessStatus::IN_PROGRESS:
            return "IN_PROGRESS";
          case ReadinessStatus::COMPLETED:
            return "COMPLETED";
          case ReadinessStatus::FAILED:
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

      } // namespace ReadinessStatusMapper
    } // namespace Model
  } // namespace CustomerProfiles
} // namespace Aws
