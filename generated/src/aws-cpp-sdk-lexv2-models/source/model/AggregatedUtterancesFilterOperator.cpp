/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lexv2-models/model/AggregatedUtterancesFilterOperator.h>
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
      namespace AggregatedUtterancesFilterOperatorMapper
      {

        static const int CO_HASH = HashingUtils::HashString("CO");
        static const int EQ_HASH = HashingUtils::HashString("EQ");


        AggregatedUtterancesFilterOperator GetAggregatedUtterancesFilterOperatorForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == CO_HASH)
          {
            return AggregatedUtterancesFilterOperator::CO;
          }
          else if (hashCode == EQ_HASH)
          {
            return AggregatedUtterancesFilterOperator::EQ;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<AggregatedUtterancesFilterOperator>(hashCode);
          }

          return AggregatedUtterancesFilterOperator::NOT_SET;
        }

        Aws::String GetNameForAggregatedUtterancesFilterOperator(AggregatedUtterancesFilterOperator enumValue)
        {
          switch(enumValue)
          {
          case AggregatedUtterancesFilterOperator::NOT_SET:
            return {};
          case AggregatedUtterancesFilterOperator::CO:
            return "CO";
          case AggregatedUtterancesFilterOperator::EQ:
            return "EQ";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace AggregatedUtterancesFilterOperatorMapper
    } // namespace Model
  } // namespace LexModelsV2
} // namespace Aws
