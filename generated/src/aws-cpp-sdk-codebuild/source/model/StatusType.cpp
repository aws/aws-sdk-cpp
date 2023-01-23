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

        static const int SUCCEEDED_HASH = HashingUtils::HashString("SUCCEEDED");
        static const int FAILED_HASH = HashingUtils::HashString("FAILED");
        static const int FAULT_HASH = HashingUtils::HashString("FAULT");
        static const int TIMED_OUT_HASH = HashingUtils::HashString("TIMED_OUT");
        static const int IN_PROGRESS_HASH = HashingUtils::HashString("IN_PROGRESS");
        static const int STOPPED_HASH = HashingUtils::HashString("STOPPED");


        StatusType GetStatusTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
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
