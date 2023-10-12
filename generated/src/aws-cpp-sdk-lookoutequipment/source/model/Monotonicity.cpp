/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lookoutequipment/model/Monotonicity.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace LookoutEquipment
  {
    namespace Model
    {
      namespace MonotonicityMapper
      {

        static constexpr uint32_t DECREASING_HASH = ConstExprHashingUtils::HashString("DECREASING");
        static constexpr uint32_t INCREASING_HASH = ConstExprHashingUtils::HashString("INCREASING");
        static constexpr uint32_t STATIC__HASH = ConstExprHashingUtils::HashString("STATIC");


        Monotonicity GetMonotonicityForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == DECREASING_HASH)
          {
            return Monotonicity::DECREASING;
          }
          else if (hashCode == INCREASING_HASH)
          {
            return Monotonicity::INCREASING;
          }
          else if (hashCode == STATIC__HASH)
          {
            return Monotonicity::STATIC_;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<Monotonicity>(hashCode);
          }

          return Monotonicity::NOT_SET;
        }

        Aws::String GetNameForMonotonicity(Monotonicity enumValue)
        {
          switch(enumValue)
          {
          case Monotonicity::NOT_SET:
            return {};
          case Monotonicity::DECREASING:
            return "DECREASING";
          case Monotonicity::INCREASING:
            return "INCREASING";
          case Monotonicity::STATIC_:
            return "STATIC";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace MonotonicityMapper
    } // namespace Model
  } // namespace LookoutEquipment
} // namespace Aws
