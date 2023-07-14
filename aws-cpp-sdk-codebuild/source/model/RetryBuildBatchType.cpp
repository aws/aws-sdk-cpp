/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/codebuild/model/RetryBuildBatchType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace CodeBuild
  {
    namespace Model
    {
      namespace RetryBuildBatchTypeMapper
      {

        static const int RETRY_ALL_BUILDS_HASH = HashingUtils::HashString("RETRY_ALL_BUILDS");
        static const int RETRY_FAILED_BUILDS_HASH = HashingUtils::HashString("RETRY_FAILED_BUILDS");


        RetryBuildBatchType GetRetryBuildBatchTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == RETRY_ALL_BUILDS_HASH)
          {
            return RetryBuildBatchType::RETRY_ALL_BUILDS;
          }
          else if (hashCode == RETRY_FAILED_BUILDS_HASH)
          {
            return RetryBuildBatchType::RETRY_FAILED_BUILDS;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<RetryBuildBatchType>(hashCode);
          }

          return RetryBuildBatchType::NOT_SET;
        }

        Aws::String GetNameForRetryBuildBatchType(RetryBuildBatchType enumValue)
        {
          switch(enumValue)
          {
          case RetryBuildBatchType::RETRY_ALL_BUILDS:
            return "RETRY_ALL_BUILDS";
          case RetryBuildBatchType::RETRY_FAILED_BUILDS:
            return "RETRY_FAILED_BUILDS";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace RetryBuildBatchTypeMapper
    } // namespace Model
  } // namespace CodeBuild
} // namespace Aws
