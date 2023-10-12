/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/inspector2/model/LambdaLayerSortBy.h>
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
      namespace LambdaLayerSortByMapper
      {

        static constexpr uint32_t CRITICAL_HASH = ConstExprHashingUtils::HashString("CRITICAL");
        static constexpr uint32_t HIGH_HASH = ConstExprHashingUtils::HashString("HIGH");
        static constexpr uint32_t ALL_HASH = ConstExprHashingUtils::HashString("ALL");


        LambdaLayerSortBy GetLambdaLayerSortByForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == CRITICAL_HASH)
          {
            return LambdaLayerSortBy::CRITICAL;
          }
          else if (hashCode == HIGH_HASH)
          {
            return LambdaLayerSortBy::HIGH;
          }
          else if (hashCode == ALL_HASH)
          {
            return LambdaLayerSortBy::ALL;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<LambdaLayerSortBy>(hashCode);
          }

          return LambdaLayerSortBy::NOT_SET;
        }

        Aws::String GetNameForLambdaLayerSortBy(LambdaLayerSortBy enumValue)
        {
          switch(enumValue)
          {
          case LambdaLayerSortBy::NOT_SET:
            return {};
          case LambdaLayerSortBy::CRITICAL:
            return "CRITICAL";
          case LambdaLayerSortBy::HIGH:
            return "HIGH";
          case LambdaLayerSortBy::ALL:
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

      } // namespace LambdaLayerSortByMapper
    } // namespace Model
  } // namespace Inspector2
} // namespace Aws
