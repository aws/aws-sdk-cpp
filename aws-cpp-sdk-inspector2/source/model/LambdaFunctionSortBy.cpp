/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/inspector2/model/LambdaFunctionSortBy.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Inspector2
  {
    namespace Model
    {
      namespace LambdaFunctionSortByMapper
      {

        static const int CRITICAL_HASH = HashingUtils::HashString("CRITICAL");
        static const int HIGH_HASH = HashingUtils::HashString("HIGH");
        static const int ALL_HASH = HashingUtils::HashString("ALL");


        LambdaFunctionSortBy GetLambdaFunctionSortByForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == CRITICAL_HASH)
          {
            return LambdaFunctionSortBy::CRITICAL;
          }
          else if (hashCode == HIGH_HASH)
          {
            return LambdaFunctionSortBy::HIGH;
          }
          else if (hashCode == ALL_HASH)
          {
            return LambdaFunctionSortBy::ALL;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<LambdaFunctionSortBy>(hashCode);
          }

          return LambdaFunctionSortBy::NOT_SET;
        }

        Aws::String GetNameForLambdaFunctionSortBy(LambdaFunctionSortBy enumValue)
        {
          switch(enumValue)
          {
          case LambdaFunctionSortBy::CRITICAL:
            return "CRITICAL";
          case LambdaFunctionSortBy::HIGH:
            return "HIGH";
          case LambdaFunctionSortBy::ALL:
            return "ALL";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace LambdaFunctionSortByMapper
    } // namespace Model
  } // namespace Inspector2
} // namespace Aws
