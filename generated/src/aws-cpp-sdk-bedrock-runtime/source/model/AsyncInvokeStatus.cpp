/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-runtime/model/AsyncInvokeStatus.h>
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
      namespace AsyncInvokeStatusMapper
      {

        static const int InProgress_HASH = HashingUtils::HashString("InProgress");
        static const int Completed_HASH = HashingUtils::HashString("Completed");
        static const int Failed_HASH = HashingUtils::HashString("Failed");


        AsyncInvokeStatus GetAsyncInvokeStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == InProgress_HASH)
          {
            return AsyncInvokeStatus::InProgress;
          }
          else if (hashCode == Completed_HASH)
          {
            return AsyncInvokeStatus::Completed;
          }
          else if (hashCode == Failed_HASH)
          {
            return AsyncInvokeStatus::Failed;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<AsyncInvokeStatus>(hashCode);
          }

          return AsyncInvokeStatus::NOT_SET;
        }

        Aws::String GetNameForAsyncInvokeStatus(AsyncInvokeStatus enumValue)
        {
          switch(enumValue)
          {
          case AsyncInvokeStatus::NOT_SET:
            return {};
          case AsyncInvokeStatus::InProgress:
            return "InProgress";
          case AsyncInvokeStatus::Completed:
            return "Completed";
          case AsyncInvokeStatus::Failed:
            return "Failed";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace AsyncInvokeStatusMapper
    } // namespace Model
  } // namespace BedrockRuntime
} // namespace Aws
