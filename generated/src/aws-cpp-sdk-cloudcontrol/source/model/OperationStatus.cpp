/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cloudcontrol/model/OperationStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace CloudControlApi
  {
    namespace Model
    {
      namespace OperationStatusMapper
      {

        static const int PENDING_HASH = HashingUtils::HashString("PENDING");
        static const int IN_PROGRESS_HASH = HashingUtils::HashString("IN_PROGRESS");
        static const int SUCCESS_HASH = HashingUtils::HashString("SUCCESS");
        static const int FAILED_HASH = HashingUtils::HashString("FAILED");
        static const int CANCEL_IN_PROGRESS_HASH = HashingUtils::HashString("CANCEL_IN_PROGRESS");
        static const int CANCEL_COMPLETE_HASH = HashingUtils::HashString("CANCEL_COMPLETE");


        OperationStatus GetOperationStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == PENDING_HASH)
          {
            return OperationStatus::PENDING;
          }
          else if (hashCode == IN_PROGRESS_HASH)
          {
            return OperationStatus::IN_PROGRESS;
          }
          else if (hashCode == SUCCESS_HASH)
          {
            return OperationStatus::SUCCESS;
          }
          else if (hashCode == FAILED_HASH)
          {
            return OperationStatus::FAILED;
          }
          else if (hashCode == CANCEL_IN_PROGRESS_HASH)
          {
            return OperationStatus::CANCEL_IN_PROGRESS;
          }
          else if (hashCode == CANCEL_COMPLETE_HASH)
          {
            return OperationStatus::CANCEL_COMPLETE;
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
          case OperationStatus::PENDING:
            return "PENDING";
          case OperationStatus::IN_PROGRESS:
            return "IN_PROGRESS";
          case OperationStatus::SUCCESS:
            return "SUCCESS";
          case OperationStatus::FAILED:
            return "FAILED";
          case OperationStatus::CANCEL_IN_PROGRESS:
            return "CANCEL_IN_PROGRESS";
          case OperationStatus::CANCEL_COMPLETE:
            return "CANCEL_COMPLETE";
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
  } // namespace CloudControlApi
} // namespace Aws
