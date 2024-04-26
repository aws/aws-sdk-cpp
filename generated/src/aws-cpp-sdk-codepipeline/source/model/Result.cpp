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


        Result GetResultForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ROLLBACK_HASH)
          {
            return Result::ROLLBACK;
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
