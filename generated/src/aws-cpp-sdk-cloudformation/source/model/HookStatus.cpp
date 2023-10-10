/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cloudformation/model/HookStatus.h>
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
      namespace HookStatusMapper
      {

        static const int HOOK_IN_PROGRESS_HASH = HashingUtils::HashString("HOOK_IN_PROGRESS");
        static const int HOOK_COMPLETE_SUCCEEDED_HASH = HashingUtils::HashString("HOOK_COMPLETE_SUCCEEDED");
        static const int HOOK_COMPLETE_FAILED_HASH = HashingUtils::HashString("HOOK_COMPLETE_FAILED");
        static const int HOOK_FAILED_HASH = HashingUtils::HashString("HOOK_FAILED");


        HookStatus GetHookStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == HOOK_IN_PROGRESS_HASH)
          {
            return HookStatus::HOOK_IN_PROGRESS;
          }
          else if (hashCode == HOOK_COMPLETE_SUCCEEDED_HASH)
          {
            return HookStatus::HOOK_COMPLETE_SUCCEEDED;
          }
          else if (hashCode == HOOK_COMPLETE_FAILED_HASH)
          {
            return HookStatus::HOOK_COMPLETE_FAILED;
          }
          else if (hashCode == HOOK_FAILED_HASH)
          {
            return HookStatus::HOOK_FAILED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<HookStatus>(hashCode);
          }

          return HookStatus::NOT_SET;
        }

        Aws::String GetNameForHookStatus(HookStatus enumValue)
        {
          switch(enumValue)
          {
          case HookStatus::NOT_SET:
            return {};
          case HookStatus::HOOK_IN_PROGRESS:
            return "HOOK_IN_PROGRESS";
          case HookStatus::HOOK_COMPLETE_SUCCEEDED:
            return "HOOK_COMPLETE_SUCCEEDED";
          case HookStatus::HOOK_COMPLETE_FAILED:
            return "HOOK_COMPLETE_FAILED";
          case HookStatus::HOOK_FAILED:
            return "HOOK_FAILED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace HookStatusMapper
    } // namespace Model
  } // namespace CloudFormation
} // namespace Aws
