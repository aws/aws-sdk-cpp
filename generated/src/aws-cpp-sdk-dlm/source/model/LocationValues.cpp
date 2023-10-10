/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/dlm/model/LocationValues.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace DLM
  {
    namespace Model
    {
      namespace LocationValuesMapper
      {

        static const int CLOUD_HASH = HashingUtils::HashString("CLOUD");
        static const int OUTPOST_LOCAL_HASH = HashingUtils::HashString("OUTPOST_LOCAL");


        LocationValues GetLocationValuesForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == CLOUD_HASH)
          {
            return LocationValues::CLOUD;
          }
          else if (hashCode == OUTPOST_LOCAL_HASH)
          {
            return LocationValues::OUTPOST_LOCAL;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<LocationValues>(hashCode);
          }

          return LocationValues::NOT_SET;
        }

        Aws::String GetNameForLocationValues(LocationValues enumValue)
        {
          switch(enumValue)
          {
          case LocationValues::NOT_SET:
            return {};
          case LocationValues::CLOUD:
            return "CLOUD";
          case LocationValues::OUTPOST_LOCAL:
            return "OUTPOST_LOCAL";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace LocationValuesMapper
    } // namespace Model
  } // namespace DLM
} // namespace Aws
