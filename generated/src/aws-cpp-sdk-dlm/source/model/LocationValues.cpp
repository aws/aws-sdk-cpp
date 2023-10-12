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

        static constexpr uint32_t CLOUD_HASH = ConstExprHashingUtils::HashString("CLOUD");
        static constexpr uint32_t OUTPOST_LOCAL_HASH = ConstExprHashingUtils::HashString("OUTPOST_LOCAL");


        LocationValues GetLocationValuesForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
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
