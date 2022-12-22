/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mediaconvert/model/DashIsoMpdManifestBandwidthType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace MediaConvert
  {
    namespace Model
    {
      namespace DashIsoMpdManifestBandwidthTypeMapper
      {

        static const int AVERAGE_HASH = HashingUtils::HashString("AVERAGE");
        static const int MAX_HASH = HashingUtils::HashString("MAX");


        DashIsoMpdManifestBandwidthType GetDashIsoMpdManifestBandwidthTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == AVERAGE_HASH)
          {
            return DashIsoMpdManifestBandwidthType::AVERAGE;
          }
          else if (hashCode == MAX_HASH)
          {
            return DashIsoMpdManifestBandwidthType::MAX;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<DashIsoMpdManifestBandwidthType>(hashCode);
          }

          return DashIsoMpdManifestBandwidthType::NOT_SET;
        }

        Aws::String GetNameForDashIsoMpdManifestBandwidthType(DashIsoMpdManifestBandwidthType enumValue)
        {
          switch(enumValue)
          {
          case DashIsoMpdManifestBandwidthType::AVERAGE:
            return "AVERAGE";
          case DashIsoMpdManifestBandwidthType::MAX:
            return "MAX";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace DashIsoMpdManifestBandwidthTypeMapper
    } // namespace Model
  } // namespace MediaConvert
} // namespace Aws
