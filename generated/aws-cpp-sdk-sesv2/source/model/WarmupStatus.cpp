/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sesv2/model/WarmupStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace SESV2
  {
    namespace Model
    {
      namespace WarmupStatusMapper
      {

        static const int IN_PROGRESS_HASH = HashingUtils::HashString("IN_PROGRESS");
        static const int DONE_HASH = HashingUtils::HashString("DONE");


        WarmupStatus GetWarmupStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == IN_PROGRESS_HASH)
          {
            return WarmupStatus::IN_PROGRESS;
          }
          else if (hashCode == DONE_HASH)
          {
            return WarmupStatus::DONE;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<WarmupStatus>(hashCode);
          }

          return WarmupStatus::NOT_SET;
        }

        Aws::String GetNameForWarmupStatus(WarmupStatus enumValue)
        {
          switch(enumValue)
          {
          case WarmupStatus::IN_PROGRESS:
            return "IN_PROGRESS";
          case WarmupStatus::DONE:
            return "DONE";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace WarmupStatusMapper
    } // namespace Model
  } // namespace SESV2
} // namespace Aws
