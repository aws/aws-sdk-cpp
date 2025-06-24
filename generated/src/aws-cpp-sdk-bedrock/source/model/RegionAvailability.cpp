/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock/model/RegionAvailability.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Bedrock
  {
    namespace Model
    {
      namespace RegionAvailabilityMapper
      {

        static const int AVAILABLE_HASH = HashingUtils::HashString("AVAILABLE");
        static const int NOT_AVAILABLE_HASH = HashingUtils::HashString("NOT_AVAILABLE");


        RegionAvailability GetRegionAvailabilityForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == AVAILABLE_HASH)
          {
            return RegionAvailability::AVAILABLE;
          }
          else if (hashCode == NOT_AVAILABLE_HASH)
          {
            return RegionAvailability::NOT_AVAILABLE;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<RegionAvailability>(hashCode);
          }

          return RegionAvailability::NOT_SET;
        }

        Aws::String GetNameForRegionAvailability(RegionAvailability enumValue)
        {
          switch(enumValue)
          {
          case RegionAvailability::NOT_SET:
            return {};
          case RegionAvailability::AVAILABLE:
            return "AVAILABLE";
          case RegionAvailability::NOT_AVAILABLE:
            return "NOT_AVAILABLE";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace RegionAvailabilityMapper
    } // namespace Model
  } // namespace Bedrock
} // namespace Aws
