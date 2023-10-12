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

        static constexpr uint32_t WORK_IN_PROGRESS_HASH = ConstExprHashingUtils::HashString("WORK_IN_PROGRESS");
        static constexpr uint32_t COMPLETED_HASH = ConstExprHashingUtils::HashString("COMPLETED");


        PreviewStatus GetPreviewStatusForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
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
          case PreviewStatus::NOT_SET:
            return {};
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
