/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/datasync/model/LocationFilterName.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace DataSync
  {
    namespace Model
    {
      namespace LocationFilterNameMapper
      {

        static constexpr uint32_t LocationUri_HASH = ConstExprHashingUtils::HashString("LocationUri");
        static constexpr uint32_t LocationType_HASH = ConstExprHashingUtils::HashString("LocationType");
        static constexpr uint32_t CreationTime_HASH = ConstExprHashingUtils::HashString("CreationTime");


        LocationFilterName GetLocationFilterNameForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == LocationUri_HASH)
          {
            return LocationFilterName::LocationUri;
          }
          else if (hashCode == LocationType_HASH)
          {
            return LocationFilterName::LocationType;
          }
          else if (hashCode == CreationTime_HASH)
          {
            return LocationFilterName::CreationTime;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<LocationFilterName>(hashCode);
          }

          return LocationFilterName::NOT_SET;
        }

        Aws::String GetNameForLocationFilterName(LocationFilterName enumValue)
        {
          switch(enumValue)
          {
          case LocationFilterName::NOT_SET:
            return {};
          case LocationFilterName::LocationUri:
            return "LocationUri";
          case LocationFilterName::LocationType:
            return "LocationType";
          case LocationFilterName::CreationTime:
            return "CreationTime";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace LocationFilterNameMapper
    } // namespace Model
  } // namespace DataSync
} // namespace Aws
