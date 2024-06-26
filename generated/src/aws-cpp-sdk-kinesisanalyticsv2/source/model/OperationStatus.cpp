/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/kinesisanalyticsv2/model/OperationStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace KinesisAnalyticsV2
  {
    namespace Model
    {
      namespace OperationStatusMapper
      {

        static const int IN_PROGRESS_HASH = HashingUtils::HashString("IN_PROGRESS");
        static const int CANCELLED_HASH = HashingUtils::HashString("CANCELLED");
        static const int SUCCESSFUL_HASH = HashingUtils::HashString("SUCCESSFUL");
        static const int FAILED_HASH = HashingUtils::HashString("FAILED");


        OperationStatus GetOperationStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == IN_PROGRESS_HASH)
          {
            return OperationStatus::IN_PROGRESS;
          }
          else if (hashCode == CANCELLED_HASH)
          {
            return OperationStatus::CANCELLED;
          }
          else if (hashCode == SUCCESSFUL_HASH)
          {
            return OperationStatus::SUCCESSFUL;
          }
          else if (hashCode == FAILED_HASH)
          {
            return OperationStatus::FAILED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<OperationStatus>(hashCode);
          }

          return OperationStatus::NOT_SET;
        }

        Aws::String GetNameForOperationStatus(OperationStatus enumValue)
        {
          switch(enumValue)
          {
          case OperationStatus::NOT_SET:
            return {};
          case OperationStatus::IN_PROGRESS:
            return "IN_PROGRESS";
          case OperationStatus::CANCELLED:
            return "CANCELLED";
          case OperationStatus::SUCCESSFUL:
            return "SUCCESSFUL";
          case OperationStatus::FAILED:
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

      } // namespace OperationStatusMapper
    } // namespace Model
  } // namespace KinesisAnalyticsV2
} // namespace Aws
