/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/amplifyuibuilder/model/CodegenJobStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace AmplifyUIBuilder
  {
    namespace Model
    {
      namespace CodegenJobStatusMapper
      {

        static const int in_progress_HASH = HashingUtils::HashString("in_progress");
        static const int failed_HASH = HashingUtils::HashString("failed");
        static const int succeeded_HASH = HashingUtils::HashString("succeeded");


        CodegenJobStatus GetCodegenJobStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == in_progress_HASH)
          {
            return CodegenJobStatus::in_progress;
          }
          else if (hashCode == failed_HASH)
          {
            return CodegenJobStatus::failed;
          }
          else if (hashCode == succeeded_HASH)
          {
            return CodegenJobStatus::succeeded;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<CodegenJobStatus>(hashCode);
          }

          return CodegenJobStatus::NOT_SET;
        }

        Aws::String GetNameForCodegenJobStatus(CodegenJobStatus enumValue)
        {
          switch(enumValue)
          {
          case CodegenJobStatus::NOT_SET:
            return {};
          case CodegenJobStatus::in_progress:
            return "in_progress";
          case CodegenJobStatus::failed:
            return "failed";
          case CodegenJobStatus::succeeded:
            return "succeeded";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace CodegenJobStatusMapper
    } // namespace Model
  } // namespace AmplifyUIBuilder
} // namespace Aws
