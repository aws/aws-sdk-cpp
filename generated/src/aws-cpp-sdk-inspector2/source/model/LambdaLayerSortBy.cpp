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

        static const int CRITICAL_HASH = HashingUtils::HashString("CRITICAL");
        static const int HIGH_HASH = HashingUtils::HashString("HIGH");
        static const int ALL_HASH = HashingUtils::HashString("ALL");


        LambdaLayerSortBy GetLambdaLayerSortByForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
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
