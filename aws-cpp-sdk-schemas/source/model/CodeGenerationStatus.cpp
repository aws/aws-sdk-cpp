/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/schemas/model/CodeGenerationStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Schemas
  {
    namespace Model
    {
      namespace CodeGenerationStatusMapper
      {

        static const int CREATE_IN_PROGRESS_HASH = HashingUtils::HashString("CREATE_IN_PROGRESS");
        static const int CREATE_COMPLETE_HASH = HashingUtils::HashString("CREATE_COMPLETE");
        static const int CREATE_FAILED_HASH = HashingUtils::HashString("CREATE_FAILED");


        CodeGenerationStatus GetCodeGenerationStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == CREATE_IN_PROGRESS_HASH)
          {
            return CodeGenerationStatus::CREATE_IN_PROGRESS;
          }
          else if (hashCode == CREATE_COMPLETE_HASH)
          {
            return CodeGenerationStatus::CREATE_COMPLETE;
          }
          else if (hashCode == CREATE_FAILED_HASH)
          {
            return CodeGenerationStatus::CREATE_FAILED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<CodeGenerationStatus>(hashCode);
          }

          return CodeGenerationStatus::NOT_SET;
        }

        Aws::String GetNameForCodeGenerationStatus(CodeGenerationStatus enumValue)
        {
          switch(enumValue)
          {
          case CodeGenerationStatus::CREATE_IN_PROGRESS:
            return "CREATE_IN_PROGRESS";
          case CodeGenerationStatus::CREATE_COMPLETE:
            return "CREATE_COMPLETE";
          case CodeGenerationStatus::CREATE_FAILED:
            return "CREATE_FAILED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace CodeGenerationStatusMapper
    } // namespace Model
  } // namespace Schemas
} // namespace Aws
