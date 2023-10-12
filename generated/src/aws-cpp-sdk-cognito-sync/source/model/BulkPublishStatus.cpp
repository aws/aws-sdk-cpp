/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cognito-sync/model/BulkPublishStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace CognitoSync
  {
    namespace Model
    {
      namespace BulkPublishStatusMapper
      {

        static constexpr uint32_t NOT_STARTED_HASH = ConstExprHashingUtils::HashString("NOT_STARTED");
        static constexpr uint32_t IN_PROGRESS_HASH = ConstExprHashingUtils::HashString("IN_PROGRESS");
        static constexpr uint32_t FAILED_HASH = ConstExprHashingUtils::HashString("FAILED");
        static constexpr uint32_t SUCCEEDED_HASH = ConstExprHashingUtils::HashString("SUCCEEDED");


        BulkPublishStatus GetBulkPublishStatusForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == NOT_STARTED_HASH)
          {
            return BulkPublishStatus::NOT_STARTED;
          }
          else if (hashCode == IN_PROGRESS_HASH)
          {
            return BulkPublishStatus::IN_PROGRESS;
          }
          else if (hashCode == FAILED_HASH)
          {
            return BulkPublishStatus::FAILED;
          }
          else if (hashCode == SUCCEEDED_HASH)
          {
            return BulkPublishStatus::SUCCEEDED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<BulkPublishStatus>(hashCode);
          }

          return BulkPublishStatus::NOT_SET;
        }

        Aws::String GetNameForBulkPublishStatus(BulkPublishStatus enumValue)
        {
          switch(enumValue)
          {
          case BulkPublishStatus::NOT_SET:
            return {};
          case BulkPublishStatus::NOT_STARTED:
            return "NOT_STARTED";
          case BulkPublishStatus::IN_PROGRESS:
            return "IN_PROGRESS";
          case BulkPublishStatus::FAILED:
            return "FAILED";
          case BulkPublishStatus::SUCCEEDED:
            return "SUCCEEDED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace BulkPublishStatusMapper
    } // namespace Model
  } // namespace CognitoSync
} // namespace Aws
