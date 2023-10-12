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

        static constexpr uint32_t CRITICAL_HASH = ConstExprHashingUtils::HashString("CRITICAL");
        static constexpr uint32_t HIGH_HASH = ConstExprHashingUtils::HashString("HIGH");
        static constexpr uint32_t ALL_HASH = ConstExprHashingUtils::HashString("ALL");


        LambdaFunctionSortBy GetLambdaFunctionSortByForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
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
          case LambdaFunctionSortBy::NOT_SET:
            return {};
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
