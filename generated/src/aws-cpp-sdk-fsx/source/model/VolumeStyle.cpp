/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/fsx/model/VolumeStyle.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace FSx
  {
    namespace Model
    {
      namespace VolumeStyleMapper
      {

        static const int FLEXVOL_HASH = HashingUtils::HashString("FLEXVOL");
        static const int FLEXGROUP_HASH = HashingUtils::HashString("FLEXGROUP");


        VolumeStyle GetVolumeStyleForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == FLEXVOL_HASH)
          {
            return VolumeStyle::FLEXVOL;
          }
          else if (hashCode == FLEXGROUP_HASH)
          {
            return VolumeStyle::FLEXGROUP;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<VolumeStyle>(hashCode);
          }

          return VolumeStyle::NOT_SET;
        }

        Aws::String GetNameForVolumeStyle(VolumeStyle enumValue)
        {
          switch(enumValue)
          {
          case VolumeStyle::NOT_SET:
            return {};
          case VolumeStyle::FLEXVOL:
            return "FLEXVOL";
          case VolumeStyle::FLEXGROUP:
            return "FLEXGROUP";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace VolumeStyleMapper
    } // namespace Model
  } // namespace FSx
} // namespace Aws
