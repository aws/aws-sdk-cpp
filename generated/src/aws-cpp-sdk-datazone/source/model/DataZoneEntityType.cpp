/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/datazone/model/DataZoneEntityType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace DataZone
  {
    namespace Model
    {
      namespace DataZoneEntityTypeMapper
      {

        static const int DOMAIN_UNIT_HASH = HashingUtils::HashString("DOMAIN_UNIT");


        DataZoneEntityType GetDataZoneEntityTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == DOMAIN_UNIT_HASH)
          {
            return DataZoneEntityType::DOMAIN_UNIT;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<DataZoneEntityType>(hashCode);
          }

          return DataZoneEntityType::NOT_SET;
        }

        Aws::String GetNameForDataZoneEntityType(DataZoneEntityType enumValue)
        {
          switch(enumValue)
          {
          case DataZoneEntityType::NOT_SET:
            return {};
          case DataZoneEntityType::DOMAIN_UNIT:
            return "DOMAIN_UNIT";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace DataZoneEntityTypeMapper
    } // namespace Model
  } // namespace DataZone
} // namespace Aws
