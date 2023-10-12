/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/forecast/model/Condition.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace ForecastService
  {
    namespace Model
    {
      namespace ConditionMapper
      {

        static constexpr uint32_t EQUALS_HASH = ConstExprHashingUtils::HashString("EQUALS");
        static constexpr uint32_t NOT_EQUALS_HASH = ConstExprHashingUtils::HashString("NOT_EQUALS");
        static constexpr uint32_t LESS_THAN_HASH = ConstExprHashingUtils::HashString("LESS_THAN");
        static constexpr uint32_t GREATER_THAN_HASH = ConstExprHashingUtils::HashString("GREATER_THAN");


        Condition GetConditionForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == EQUALS_HASH)
          {
            return Condition::EQUALS;
          }
          else if (hashCode == NOT_EQUALS_HASH)
          {
            return Condition::NOT_EQUALS;
          }
          else if (hashCode == LESS_THAN_HASH)
          {
            return Condition::LESS_THAN;
          }
          else if (hashCode == GREATER_THAN_HASH)
          {
            return Condition::GREATER_THAN;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<Condition>(hashCode);
          }

          return Condition::NOT_SET;
        }

        Aws::String GetNameForCondition(Condition enumValue)
        {
          switch(enumValue)
          {
          case Condition::NOT_SET:
            return {};
          case Condition::EQUALS:
            return "EQUALS";
          case Condition::NOT_EQUALS:
            return "NOT_EQUALS";
          case Condition::LESS_THAN:
            return "LESS_THAN";
          case Condition::GREATER_THAN:
            return "GREATER_THAN";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ConditionMapper
    } // namespace Model
  } // namespace ForecastService
} // namespace Aws
