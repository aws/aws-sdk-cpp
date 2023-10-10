/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/codepipeline/model/ExecutorType.h>
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
      namespace ExecutorTypeMapper
      {

        static const int JobWorker_HASH = HashingUtils::HashString("JobWorker");
        static const int Lambda_HASH = HashingUtils::HashString("Lambda");


        ExecutorType GetExecutorTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == JobWorker_HASH)
          {
            return ExecutorType::JobWorker;
          }
          else if (hashCode == Lambda_HASH)
          {
            return ExecutorType::Lambda;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ExecutorType>(hashCode);
          }

          return ExecutorType::NOT_SET;
        }

        Aws::String GetNameForExecutorType(ExecutorType enumValue)
        {
          switch(enumValue)
          {
          case ExecutorType::NOT_SET:
            return {};
          case ExecutorType::JobWorker:
            return "JobWorker";
          case ExecutorType::Lambda:
            return "Lambda";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ExecutorTypeMapper
    } // namespace Model
  } // namespace CodePipeline
} // namespace Aws
