/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iot/model/TargetFieldOrder.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace IoT
  {
    namespace Model
    {
      namespace TargetFieldOrderMapper
      {

        static const int LatLon_HASH = HashingUtils::HashString("LatLon");
        static const int LonLat_HASH = HashingUtils::HashString("LonLat");


        TargetFieldOrder GetTargetFieldOrderForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == LatLon_HASH)
          {
            return TargetFieldOrder::LatLon;
          }
          else if (hashCode == LonLat_HASH)
          {
            return TargetFieldOrder::LonLat;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<TargetFieldOrder>(hashCode);
          }

          return TargetFieldOrder::NOT_SET;
        }

        Aws::String GetNameForTargetFieldOrder(TargetFieldOrder enumValue)
        {
          switch(enumValue)
          {
          case TargetFieldOrder::NOT_SET:
            return {};
          case TargetFieldOrder::LatLon:
            return "LatLon";
          case TargetFieldOrder::LonLat:
            return "LonLat";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace TargetFieldOrderMapper
    } // namespace Model
  } // namespace IoT
} // namespace Aws
