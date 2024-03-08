/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/codepipeline/model/ExecutionMode.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace CodePipeline
  {
    namespace Model
    {
      namespace ExecutionModeMapper
      {

        static const int QUEUED_HASH = HashingUtils::HashString("QUEUED");
        static const int SUPERSEDED_HASH = HashingUtils::HashString("SUPERSEDED");
        static const int PARALLEL_HASH = HashingUtils::HashString("PARALLEL");


        ExecutionMode GetExecutionModeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == QUEUED_HASH)
          {
            return ExecutionMode::QUEUED;
          }
          else if (hashCode == SUPERSEDED_HASH)
          {
            return ExecutionMode::SUPERSEDED;
          }
          else if (hashCode == PARALLEL_HASH)
          {
            return ExecutionMode::PARALLEL;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ExecutionMode>(hashCode);
          }

          return ExecutionMode::NOT_SET;
        }

        Aws::String GetNameForExecutionMode(ExecutionMode enumValue)
        {
          switch(enumValue)
          {
          case ExecutionMode::NOT_SET:
            return {};
          case ExecutionMode::QUEUED:
            return "QUEUED";
          case ExecutionMode::SUPERSEDED:
            return "SUPERSEDED";
          case ExecutionMode::PARALLEL:
            return "PARALLEL";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ExecutionModeMapper
    } // namespace Model
  } // namespace CodePipeline
} // namespace Aws
