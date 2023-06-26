/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cloudformation/model/OperationStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace CloudFormation
  {
    namespace Model
    {
      namespace OperationStatusMapper
      {

        static const int PENDING_HASH = HashingUtils::HashString("PENDING");
        static const int IN_PROGRESS_HASH = HashingUtils::HashString("IN_PROGRESS");
        static const int SUCCESS_HASH = HashingUtils::HashString("SUCCESS");
        static const int FAILED_HASH = HashingUtils::HashString("FAILED");


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
          case OperationStatus::PENDING:
            return "PENDING";
          case OperationStatus::IN_PROGRESS:
            return "IN_PROGRESS";
          case OperationStatus::SUCCESS:
            return "SUCCESS";
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
  } // namespace CloudFormation
} // namespace Aws
