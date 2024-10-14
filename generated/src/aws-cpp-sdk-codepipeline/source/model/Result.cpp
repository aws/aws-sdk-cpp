/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/codepipeline/model/Result.h>
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
      namespace ResultMapper
      {

        static const int ROLLBACK_HASH = HashingUtils::HashString("ROLLBACK");
        static const int FAIL_HASH = HashingUtils::HashString("FAIL");
        static const int RETRY_HASH = HashingUtils::HashString("RETRY");
        static const int SKIP_HASH = HashingUtils::HashString("SKIP");


        Result GetResultForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ROLLBACK_HASH)
          {
            return Result::ROLLBACK;
          }
          else if (hashCode == FAIL_HASH)
          {
            return Result::FAIL;
          }
          else if (hashCode == RETRY_HASH)
          {
            return Result::RETRY;
          }
          else if (hashCode == SKIP_HASH)
          {
            return Result::SKIP;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<Result>(hashCode);
          }

          return Result::NOT_SET;
        }

        Aws::String GetNameForResult(Result enumValue)
        {
          switch(enumValue)
          {
          case Result::NOT_SET:
            return {};
          case Result::ROLLBACK:
            return "ROLLBACK";
          case Result::FAIL:
            return "FAIL";
          case Result::RETRY:
            return "RETRY";
          case Result::SKIP:
            return "SKIP";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ResultMapper
    } // namespace Model
  } // namespace CodePipeline
} // namespace Aws
