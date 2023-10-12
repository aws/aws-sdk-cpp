/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lexv2-models/model/AnalyticsFilterOperator.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace LexModelsV2
  {
    namespace Model
    {
      namespace AnalyticsFilterOperatorMapper
      {

        static constexpr uint32_t EQ_HASH = ConstExprHashingUtils::HashString("EQ");
        static constexpr uint32_t GT_HASH = ConstExprHashingUtils::HashString("GT");
        static constexpr uint32_t LT_HASH = ConstExprHashingUtils::HashString("LT");


        AnalyticsFilterOperator GetAnalyticsFilterOperatorForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == EQ_HASH)
          {
            return AnalyticsFilterOperator::EQ;
          }
          else if (hashCode == GT_HASH)
          {
            return AnalyticsFilterOperator::GT;
          }
          else if (hashCode == LT_HASH)
          {
            return AnalyticsFilterOperator::LT;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<AnalyticsFilterOperator>(hashCode);
          }

          return AnalyticsFilterOperator::NOT_SET;
        }

        Aws::String GetNameForAnalyticsFilterOperator(AnalyticsFilterOperator enumValue)
        {
          switch(enumValue)
          {
          case AnalyticsFilterOperator::NOT_SET:
            return {};
          case AnalyticsFilterOperator::EQ:
            return "EQ";
          case AnalyticsFilterOperator::GT:
            return "GT";
          case AnalyticsFilterOperator::LT:
            return "LT";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace AnalyticsFilterOperatorMapper
    } // namespace Model
  } // namespace LexModelsV2
} // namespace Aws
