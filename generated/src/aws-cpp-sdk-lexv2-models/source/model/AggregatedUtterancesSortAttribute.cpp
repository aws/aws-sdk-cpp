/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lexv2-models/model/AggregatedUtterancesSortAttribute.h>
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
      namespace AggregatedUtterancesSortAttributeMapper
      {

        static const int HitCount_HASH = HashingUtils::HashString("HitCount");
        static const int MissedCount_HASH = HashingUtils::HashString("MissedCount");


        AggregatedUtterancesSortAttribute GetAggregatedUtterancesSortAttributeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == HitCount_HASH)
          {
            return AggregatedUtterancesSortAttribute::HitCount;
          }
          else if (hashCode == MissedCount_HASH)
          {
            return AggregatedUtterancesSortAttribute::MissedCount;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<AggregatedUtterancesSortAttribute>(hashCode);
          }

          return AggregatedUtterancesSortAttribute::NOT_SET;
        }

        Aws::String GetNameForAggregatedUtterancesSortAttribute(AggregatedUtterancesSortAttribute enumValue)
        {
          switch(enumValue)
          {
          case AggregatedUtterancesSortAttribute::NOT_SET:
            return {};
          case AggregatedUtterancesSortAttribute::HitCount:
            return "HitCount";
          case AggregatedUtterancesSortAttribute::MissedCount:
            return "MissedCount";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace AggregatedUtterancesSortAttributeMapper
    } // namespace Model
  } // namespace LexModelsV2
} // namespace Aws
