/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/codepipeline/model/ExecutionType.h>
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
      namespace ExecutionTypeMapper
      {

        static const int STANDARD_HASH = HashingUtils::HashString("STANDARD");
        static const int ROLLBACK_HASH = HashingUtils::HashString("ROLLBACK");


        ExecutionType GetExecutionTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == STANDARD_HASH)
          {
            return ExecutionType::STANDARD;
          }
          else if (hashCode == ROLLBACK_HASH)
          {
            return ExecutionType::ROLLBACK;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ExecutionType>(hashCode);
          }

          return ExecutionType::NOT_SET;
        }

        Aws::String GetNameForExecutionType(ExecutionType enumValue)
        {
          switch(enumValue)
          {
          case ExecutionType::NOT_SET:
            return {};
          case ExecutionType::STANDARD:
            return "STANDARD";
          case ExecutionType::ROLLBACK:
            return "ROLLBACK";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ExecutionTypeMapper
    } // namespace Model
  } // namespace CodePipeline
} // namespace Aws
