/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/drs/model/VolumeStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace drs
  {
    namespace Model
    {
      namespace VolumeStatusMapper
      {

        static const int REGULAR_HASH = HashingUtils::HashString("REGULAR");
        static const int CONTAINS_MARKETPLACE_PRODUCT_CODES_HASH = HashingUtils::HashString("CONTAINS_MARKETPLACE_PRODUCT_CODES");
        static const int MISSING_VOLUME_ATTRIBUTES_HASH = HashingUtils::HashString("MISSING_VOLUME_ATTRIBUTES");
        static const int MISSING_VOLUME_ATTRIBUTES_AND_PRECHECK_UNAVAILABLE_HASH = HashingUtils::HashString("MISSING_VOLUME_ATTRIBUTES_AND_PRECHECK_UNAVAILABLE");


        VolumeStatus GetVolumeStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == REGULAR_HASH)
          {
            return VolumeStatus::REGULAR;
          }
          else if (hashCode == CONTAINS_MARKETPLACE_PRODUCT_CODES_HASH)
          {
            return VolumeStatus::CONTAINS_MARKETPLACE_PRODUCT_CODES;
          }
          else if (hashCode == MISSING_VOLUME_ATTRIBUTES_HASH)
          {
            return VolumeStatus::MISSING_VOLUME_ATTRIBUTES;
          }
          else if (hashCode == MISSING_VOLUME_ATTRIBUTES_AND_PRECHECK_UNAVAILABLE_HASH)
          {
            return VolumeStatus::MISSING_VOLUME_ATTRIBUTES_AND_PRECHECK_UNAVAILABLE;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<VolumeStatus>(hashCode);
          }

          return VolumeStatus::NOT_SET;
        }

        Aws::String GetNameForVolumeStatus(VolumeStatus enumValue)
        {
          switch(enumValue)
          {
          case VolumeStatus::NOT_SET:
            return {};
          case VolumeStatus::REGULAR:
            return "REGULAR";
          case VolumeStatus::CONTAINS_MARKETPLACE_PRODUCT_CODES:
            return "CONTAINS_MARKETPLACE_PRODUCT_CODES";
          case VolumeStatus::MISSING_VOLUME_ATTRIBUTES:
            return "MISSING_VOLUME_ATTRIBUTES";
          case VolumeStatus::MISSING_VOLUME_ATTRIBUTES_AND_PRECHECK_UNAVAILABLE:
            return "MISSING_VOLUME_ATTRIBUTES_AND_PRECHECK_UNAVAILABLE";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace VolumeStatusMapper
    } // namespace Model
  } // namespace drs
} // namespace Aws
