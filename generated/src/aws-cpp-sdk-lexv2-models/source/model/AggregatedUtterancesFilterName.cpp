/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lexv2-models/model/AggregatedUtterancesFilterName.h>
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
      namespace AggregatedUtterancesFilterNameMapper
      {

        static const int Utterance_HASH = HashingUtils::HashString("Utterance");


        AggregatedUtterancesFilterName GetAggregatedUtterancesFilterNameForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == Utterance_HASH)
          {
            return AggregatedUtterancesFilterName::Utterance;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<AggregatedUtterancesFilterName>(hashCode);
          }

          return AggregatedUtterancesFilterName::NOT_SET;
        }

        Aws::String GetNameForAggregatedUtterancesFilterName(AggregatedUtterancesFilterName enumValue)
        {
          switch(enumValue)
          {
          case AggregatedUtterancesFilterName::NOT_SET:
            return {};
          case AggregatedUtterancesFilterName::Utterance:
            return "Utterance";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace AggregatedUtterancesFilterNameMapper
    } // namespace Model
  } // namespace LexModelsV2
} // namespace Aws
