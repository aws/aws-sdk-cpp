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

        static constexpr uint32_t IN_PROGRESS_HASH = ConstExprHashingUtils::HashString("IN_PROGRESS");
        static constexpr uint32_t COMPLETED_HASH = ConstExprHashingUtils::HashString("COMPLETED");
        static constexpr uint32_t FAILED_HASH = ConstExprHashingUtils::HashString("FAILED");
        static constexpr uint32_t EXPIRED_HASH = ConstExprHashingUtils::HashString("EXPIRED");


        ResultStatus GetResultStatusForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
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
