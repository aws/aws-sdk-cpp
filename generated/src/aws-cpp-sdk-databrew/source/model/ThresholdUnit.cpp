/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/databrew/model/ThresholdUnit.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace GlueDataBrew
  {
    namespace Model
    {
      namespace ThresholdUnitMapper
      {

        static constexpr uint32_t COUNT_HASH = ConstExprHashingUtils::HashString("COUNT");
        static constexpr uint32_t PERCENTAGE_HASH = ConstExprHashingUtils::HashString("PERCENTAGE");


        ThresholdUnit GetThresholdUnitForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == COUNT_HASH)
          {
            return ThresholdUnit::COUNT;
          }
          else if (hashCode == PERCENTAGE_HASH)
          {
            return ThresholdUnit::PERCENTAGE;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ThresholdUnit>(hashCode);
          }

          return ThresholdUnit::NOT_SET;
        }

        Aws::String GetNameForThresholdUnit(ThresholdUnit enumValue)
        {
          switch(enumValue)
          {
          case ThresholdUnit::NOT_SET:
            return {};
          case ThresholdUnit::COUNT:
            return "COUNT";
          case ThresholdUnit::PERCENTAGE:
            return "PERCENTAGE";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ThresholdUnitMapper
    } // namespace Model
  } // namespace GlueDataBrew
} // namespace Aws
