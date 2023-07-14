/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/inspector/model/PreviewStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Inspector
  {
    namespace Model
    {
      namespace PreviewStatusMapper
      {

        static const int WORK_IN_PROGRESS_HASH = HashingUtils::HashString("WORK_IN_PROGRESS");
        static const int COMPLETED_HASH = HashingUtils::HashString("COMPLETED");


        PreviewStatus GetPreviewStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == WORK_IN_PROGRESS_HASH)
          {
            return PreviewStatus::WORK_IN_PROGRESS;
          }
          else if (hashCode == COMPLETED_HASH)
          {
            return PreviewStatus::COMPLETED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<PreviewStatus>(hashCode);
          }

          return PreviewStatus::NOT_SET;
        }

        Aws::String GetNameForPreviewStatus(PreviewStatus enumValue)
        {
          switch(enumValue)
          {
          case PreviewStatus::WORK_IN_PROGRESS:
            return "WORK_IN_PROGRESS";
          case PreviewStatus::COMPLETED:
            return "COMPLETED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace PreviewStatusMapper
    } // namespace Model
  } // namespace Inspector
} // namespace Aws
