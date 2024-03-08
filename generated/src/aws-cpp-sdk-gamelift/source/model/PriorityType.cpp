/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/gamelift/model/PriorityType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace GameLift
  {
    namespace Model
    {
      namespace PriorityTypeMapper
      {

        static const int LATENCY_HASH = HashingUtils::HashString("LATENCY");
        static const int COST_HASH = HashingUtils::HashString("COST");
        static const int DESTINATION_HASH = HashingUtils::HashString("DESTINATION");
        static const int LOCATION_HASH = HashingUtils::HashString("LOCATION");


        PriorityType GetPriorityTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == LATENCY_HASH)
          {
            return PriorityType::LATENCY;
          }
          else if (hashCode == COST_HASH)
          {
            return PriorityType::COST;
          }
          else if (hashCode == DESTINATION_HASH)
          {
            return PriorityType::DESTINATION;
          }
          else if (hashCode == LOCATION_HASH)
          {
            return PriorityType::LOCATION;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<PriorityType>(hashCode);
          }

          return PriorityType::NOT_SET;
        }

        Aws::String GetNameForPriorityType(PriorityType enumValue)
        {
          switch(enumValue)
          {
          case PriorityType::NOT_SET:
            return {};
          case PriorityType::LATENCY:
            return "LATENCY";
          case PriorityType::COST:
            return "COST";
          case PriorityType::DESTINATION:
            return "DESTINATION";
          case PriorityType::LOCATION:
            return "LOCATION";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace PriorityTypeMapper
    } // namespace Model
  } // namespace GameLift
} // namespace Aws
