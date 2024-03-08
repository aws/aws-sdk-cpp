/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/fsx/model/VolumeType.h>
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
      namespace VolumeTypeMapper
      {

        static const int ONTAP_HASH = HashingUtils::HashString("ONTAP");
        static const int OPENZFS_HASH = HashingUtils::HashString("OPENZFS");


        VolumeType GetVolumeTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ONTAP_HASH)
          {
            return VolumeType::ONTAP;
          }
          else if (hashCode == OPENZFS_HASH)
          {
            return VolumeType::OPENZFS;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<VolumeType>(hashCode);
          }

          return VolumeType::NOT_SET;
        }

        Aws::String GetNameForVolumeType(VolumeType enumValue)
        {
          switch(enumValue)
          {
          case VolumeType::NOT_SET:
            return {};
          case VolumeType::ONTAP:
            return "ONTAP";
          case VolumeType::OPENZFS:
            return "OPENZFS";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace VolumeTypeMapper
    } // namespace Model
  } // namespace FSx
} // namespace Aws
