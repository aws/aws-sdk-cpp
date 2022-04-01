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

        static const int EQUALS_HASH = HashingUtils::HashString("EQUALS");
        static const int NOT_EQUALS_HASH = HashingUtils::HashString("NOT_EQUALS");
        static const int LESS_THAN_HASH = HashingUtils::HashString("LESS_THAN");
        static const int GREATER_THAN_HASH = HashingUtils::HashString("GREATER_THAN");


        Condition GetConditionForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
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
