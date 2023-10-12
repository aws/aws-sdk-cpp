/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/codebuild/model/StatusType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace CodeBuild
  {
    namespace Model
    {
      namespace StatusTypeMapper
      {

        static constexpr uint32_t SUCCEEDED_HASH = ConstExprHashingUtils::HashString("SUCCEEDED");
        static constexpr uint32_t FAILED_HASH = ConstExprHashingUtils::HashString("FAILED");
        static constexpr uint32_t FAULT_HASH = ConstExprHashingUtils::HashString("FAULT");
        static constexpr uint32_t TIMED_OUT_HASH = ConstExprHashingUtils::HashString("TIMED_OUT");
        static constexpr uint32_t IN_PROGRESS_HASH = ConstExprHashingUtils::HashString("IN_PROGRESS");
        static constexpr uint32_t STOPPED_HASH = ConstExprHashingUtils::HashString("STOPPED");


        StatusType GetStatusTypeForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == SUCCEEDED_HASH)
          {
            return StatusType::SUCCEEDED;
          }
          else if (hashCode == FAILED_HASH)
          {
            return StatusType::FAILED;
          }
          else if (hashCode == FAULT_HASH)
          {
            return StatusType::FAULT;
          }
          else if (hashCode == TIMED_OUT_HASH)
          {
            return StatusType::TIMED_OUT;
          }
          else if (hashCode == IN_PROGRESS_HASH)
          {
            return StatusType::IN_PROGRESS;
          }
          else if (hashCode == STOPPED_HASH)
          {
            return StatusType::STOPPED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<StatusType>(hashCode);
          }

          return StatusType::NOT_SET;
        }

        Aws::String GetNameForStatusType(StatusType enumValue)
        {
          switch(enumValue)
          {
          case StatusType::NOT_SET:
            return {};
          case StatusType::SUCCEEDED:
            return "SUCCEEDED";
          case StatusType::FAILED:
            return "FAILED";
          case StatusType::FAULT:
            return "FAULT";
          case StatusType::TIMED_OUT:
            return "TIMED_OUT";
          case StatusType::IN_PROGRESS:
            return "IN_PROGRESS";
          case StatusType::STOPPED:
            return "STOPPED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace StatusTypeMapper
    } // namespace Model
  } // namespace CodeBuild
} // namespace Aws
