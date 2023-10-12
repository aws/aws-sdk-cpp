/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/apprunner/model/OperationStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace AppRunner
  {
    namespace Model
    {
      namespace OperationStatusMapper
      {

        static constexpr uint32_t PENDING_HASH = ConstExprHashingUtils::HashString("PENDING");
        static constexpr uint32_t IN_PROGRESS_HASH = ConstExprHashingUtils::HashString("IN_PROGRESS");
        static constexpr uint32_t FAILED_HASH = ConstExprHashingUtils::HashString("FAILED");
        static constexpr uint32_t SUCCEEDED_HASH = ConstExprHashingUtils::HashString("SUCCEEDED");
        static constexpr uint32_t ROLLBACK_IN_PROGRESS_HASH = ConstExprHashingUtils::HashString("ROLLBACK_IN_PROGRESS");
        static constexpr uint32_t ROLLBACK_FAILED_HASH = ConstExprHashingUtils::HashString("ROLLBACK_FAILED");
        static constexpr uint32_t ROLLBACK_SUCCEEDED_HASH = ConstExprHashingUtils::HashString("ROLLBACK_SUCCEEDED");


        OperationStatus GetOperationStatusForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == PENDING_HASH)
          {
            return OperationStatus::PENDING;
          }
          else if (hashCode == IN_PROGRESS_HASH)
          {
            return OperationStatus::IN_PROGRESS;
          }
          else if (hashCode == FAILED_HASH)
          {
            return OperationStatus::FAILED;
          }
          else if (hashCode == SUCCEEDED_HASH)
          {
            return OperationStatus::SUCCEEDED;
          }
          else if (hashCode == ROLLBACK_IN_PROGRESS_HASH)
          {
            return OperationStatus::ROLLBACK_IN_PROGRESS;
          }
          else if (hashCode == ROLLBACK_FAILED_HASH)
          {
            return OperationStatus::ROLLBACK_FAILED;
          }
          else if (hashCode == ROLLBACK_SUCCEEDED_HASH)
          {
            return OperationStatus::ROLLBACK_SUCCEEDED;
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
          case OperationStatus::FAILED:
            return "FAILED";
          case OperationStatus::SUCCEEDED:
            return "SUCCEEDED";
          case OperationStatus::ROLLBACK_IN_PROGRESS:
            return "ROLLBACK_IN_PROGRESS";
          case OperationStatus::ROLLBACK_FAILED:
            return "ROLLBACK_FAILED";
          case OperationStatus::ROLLBACK_SUCCEEDED:
            return "ROLLBACK_SUCCEEDED";
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
  } // namespace AppRunner
} // namespace Aws
