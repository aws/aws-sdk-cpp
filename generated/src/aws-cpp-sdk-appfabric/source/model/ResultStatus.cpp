/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/appfabric/model/ResultStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace AppFabric
  {
    namespace Model
    {
      namespace ResultStatusMapper
      {

        static const int IN_PROGRESS_HASH = HashingUtils::HashString("IN_PROGRESS");
        static const int COMPLETED_HASH = HashingUtils::HashString("COMPLETED");
        static const int FAILED_HASH = HashingUtils::HashString("FAILED");
        static const int EXPIRED_HASH = HashingUtils::HashString("EXPIRED");


        ResultStatus GetResultStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == IN_PROGRESS_HASH)
          {
            return ResultStatus::IN_PROGRESS;
          }
          else if (hashCode == COMPLETED_HASH)
          {
            return ResultStatus::COMPLETED;
          }
          else if (hashCode == FAILED_HASH)
          {
            return ResultStatus::FAILED;
          }
          else if (hashCode == EXPIRED_HASH)
          {
            return ResultStatus::EXPIRED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ResultStatus>(hashCode);
          }

          return ResultStatus::NOT_SET;
        }

        Aws::String GetNameForResultStatus(ResultStatus enumValue)
        {
          switch(enumValue)
          {
          case ResultStatus::NOT_SET:
            return {};
          case ResultStatus::IN_PROGRESS:
            return "IN_PROGRESS";
          case ResultStatus::COMPLETED:
            return "COMPLETED";
          case ResultStatus::FAILED:
            return "FAILED";
          case ResultStatus::EXPIRED:
            return "EXPIRED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ResultStatusMapper
    } // namespace Model
  } // namespace AppFabric
} // namespace Aws
