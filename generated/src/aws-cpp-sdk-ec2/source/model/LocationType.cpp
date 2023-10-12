/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/LocationType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace EC2
  {
    namespace Model
    {
      namespace LocationTypeMapper
      {

        static constexpr uint32_t region_HASH = ConstExprHashingUtils::HashString("region");
        static constexpr uint32_t availability_zone_HASH = ConstExprHashingUtils::HashString("availability-zone");
        static constexpr uint32_t availability_zone_id_HASH = ConstExprHashingUtils::HashString("availability-zone-id");
        static constexpr uint32_t outpost_HASH = ConstExprHashingUtils::HashString("outpost");


        LocationType GetLocationTypeForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == region_HASH)
          {
            return LocationType::region;
          }
          else if (hashCode == availability_zone_HASH)
          {
            return LocationType::availability_zone;
          }
          else if (hashCode == availability_zone_id_HASH)
          {
            return LocationType::availability_zone_id;
          }
          else if (hashCode == outpost_HASH)
          {
            return LocationType::outpost;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<LocationType>(hashCode);
          }

          return LocationType::NOT_SET;
        }

        Aws::String GetNameForLocationType(LocationType enumValue)
        {
          switch(enumValue)
          {
          case LocationType::NOT_SET:
            return {};
          case LocationType::region:
            return "region";
          case LocationType::availability_zone:
            return "availability-zone";
          case LocationType::availability_zone_id:
            return "availability-zone-id";
          case LocationType::outpost:
            return "outpost";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace LocationTypeMapper
    } // namespace Model
  } // namespace EC2
} // namespace Aws
