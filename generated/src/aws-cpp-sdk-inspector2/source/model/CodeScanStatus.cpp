/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/inspector2/model/CodeScanStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Inspector2
  {
    namespace Model
    {
      namespace CodeScanStatusMapper
      {

        static const int IN_PROGRESS_HASH = HashingUtils::HashString("IN_PROGRESS");
        static const int SUCCESSFUL_HASH = HashingUtils::HashString("SUCCESSFUL");
        static const int FAILED_HASH = HashingUtils::HashString("FAILED");
        static const int SKIPPED_HASH = HashingUtils::HashString("SKIPPED");


        CodeScanStatus GetCodeScanStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == IN_PROGRESS_HASH)
          {
            return CodeScanStatus::IN_PROGRESS;
          }
          else if (hashCode == SUCCESSFUL_HASH)
          {
            return CodeScanStatus::SUCCESSFUL;
          }
          else if (hashCode == FAILED_HASH)
          {
            return CodeScanStatus::FAILED;
          }
          else if (hashCode == SKIPPED_HASH)
          {
            return CodeScanStatus::SKIPPED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<CodeScanStatus>(hashCode);
          }

          return CodeScanStatus::NOT_SET;
        }

        Aws::String GetNameForCodeScanStatus(CodeScanStatus enumValue)
        {
          switch(enumValue)
          {
          case CodeScanStatus::NOT_SET:
            return {};
          case CodeScanStatus::IN_PROGRESS:
            return "IN_PROGRESS";
          case CodeScanStatus::SUCCESSFUL:
            return "SUCCESSFUL";
          case CodeScanStatus::FAILED:
            return "FAILED";
          case CodeScanStatus::SKIPPED:
            return "SKIPPED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace CodeScanStatusMapper
    } // namespace Model
  } // namespace Inspector2
} // namespace Aws
