/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/deadline/model/CreateJobTargetTaskRunStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace deadline
  {
    namespace Model
    {
      namespace CreateJobTargetTaskRunStatusMapper
      {

        static const int READY_HASH = HashingUtils::HashString("READY");
        static const int SUSPENDED_HASH = HashingUtils::HashString("SUSPENDED");


        CreateJobTargetTaskRunStatus GetCreateJobTargetTaskRunStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == READY_HASH)
          {
            return CreateJobTargetTaskRunStatus::READY;
          }
          else if (hashCode == SUSPENDED_HASH)
          {
            return CreateJobTargetTaskRunStatus::SUSPENDED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<CreateJobTargetTaskRunStatus>(hashCode);
          }

          return CreateJobTargetTaskRunStatus::NOT_SET;
        }

        Aws::String GetNameForCreateJobTargetTaskRunStatus(CreateJobTargetTaskRunStatus enumValue)
        {
          switch(enumValue)
          {
          case CreateJobTargetTaskRunStatus::NOT_SET:
            return {};
          case CreateJobTargetTaskRunStatus::READY:
            return "READY";
          case CreateJobTargetTaskRunStatus::SUSPENDED:
            return "SUSPENDED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace CreateJobTargetTaskRunStatusMapper
    } // namespace Model
  } // namespace deadline
} // namespace Aws
