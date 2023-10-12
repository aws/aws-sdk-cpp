/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/appstream/model/FleetType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace AppStream
  {
    namespace Model
    {
      namespace FleetTypeMapper
      {

        static constexpr uint32_t ALWAYS_ON_HASH = ConstExprHashingUtils::HashString("ALWAYS_ON");
        static constexpr uint32_t ON_DEMAND_HASH = ConstExprHashingUtils::HashString("ON_DEMAND");
        static constexpr uint32_t ELASTIC_HASH = ConstExprHashingUtils::HashString("ELASTIC");


        FleetType GetFleetTypeForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ALWAYS_ON_HASH)
          {
            return FleetType::ALWAYS_ON;
          }
          else if (hashCode == ON_DEMAND_HASH)
          {
            return FleetType::ON_DEMAND;
          }
          else if (hashCode == ELASTIC_HASH)
          {
            return FleetType::ELASTIC;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<FleetType>(hashCode);
          }

          return FleetType::NOT_SET;
        }

        Aws::String GetNameForFleetType(FleetType enumValue)
        {
          switch(enumValue)
          {
          case FleetType::NOT_SET:
            return {};
          case FleetType::ALWAYS_ON:
            return "ALWAYS_ON";
          case FleetType::ON_DEMAND:
            return "ON_DEMAND";
          case FleetType::ELASTIC:
            return "ELASTIC";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace FleetTypeMapper
    } // namespace Model
  } // namespace AppStream
} // namespace Aws
