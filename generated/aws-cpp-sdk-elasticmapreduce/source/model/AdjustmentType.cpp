/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/elasticmapreduce/model/AdjustmentType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace EMR
  {
    namespace Model
    {
      namespace AdjustmentTypeMapper
      {

        static const int CHANGE_IN_CAPACITY_HASH = HashingUtils::HashString("CHANGE_IN_CAPACITY");
        static const int PERCENT_CHANGE_IN_CAPACITY_HASH = HashingUtils::HashString("PERCENT_CHANGE_IN_CAPACITY");
        static const int EXACT_CAPACITY_HASH = HashingUtils::HashString("EXACT_CAPACITY");


        AdjustmentType GetAdjustmentTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == CHANGE_IN_CAPACITY_HASH)
          {
            return AdjustmentType::CHANGE_IN_CAPACITY;
          }
          else if (hashCode == PERCENT_CHANGE_IN_CAPACITY_HASH)
          {
            return AdjustmentType::PERCENT_CHANGE_IN_CAPACITY;
          }
          else if (hashCode == EXACT_CAPACITY_HASH)
          {
            return AdjustmentType::EXACT_CAPACITY;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<AdjustmentType>(hashCode);
          }

          return AdjustmentType::NOT_SET;
        }

        Aws::String GetNameForAdjustmentType(AdjustmentType enumValue)
        {
          switch(enumValue)
          {
          case AdjustmentType::CHANGE_IN_CAPACITY:
            return "CHANGE_IN_CAPACITY";
          case AdjustmentType::PERCENT_CHANGE_IN_CAPACITY:
            return "PERCENT_CHANGE_IN_CAPACITY";
          case AdjustmentType::EXACT_CAPACITY:
            return "EXACT_CAPACITY";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace AdjustmentTypeMapper
    } // namespace Model
  } // namespace EMR
} // namespace Aws
