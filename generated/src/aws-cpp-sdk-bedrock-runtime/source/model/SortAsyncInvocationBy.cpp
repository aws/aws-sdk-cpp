/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-runtime/model/SortAsyncInvocationBy.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace BedrockRuntime
  {
    namespace Model
    {
      namespace SortAsyncInvocationByMapper
      {

        static const int SubmissionTime_HASH = HashingUtils::HashString("SubmissionTime");


        SortAsyncInvocationBy GetSortAsyncInvocationByForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == SubmissionTime_HASH)
          {
            return SortAsyncInvocationBy::SubmissionTime;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<SortAsyncInvocationBy>(hashCode);
          }

          return SortAsyncInvocationBy::NOT_SET;
        }

        Aws::String GetNameForSortAsyncInvocationBy(SortAsyncInvocationBy enumValue)
        {
          switch(enumValue)
          {
          case SortAsyncInvocationBy::NOT_SET:
            return {};
          case SortAsyncInvocationBy::SubmissionTime:
            return "SubmissionTime";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace SortAsyncInvocationByMapper
    } // namespace Model
  } // namespace BedrockRuntime
} // namespace Aws
