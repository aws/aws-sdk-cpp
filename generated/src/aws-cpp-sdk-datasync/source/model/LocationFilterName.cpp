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

        static const int LocationUri_HASH = HashingUtils::HashString("LocationUri");
        static const int LocationType_HASH = HashingUtils::HashString("LocationType");
        static const int CreationTime_HASH = HashingUtils::HashString("CreationTime");


        LocationFilterName GetLocationFilterNameForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
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
