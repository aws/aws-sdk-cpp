/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mgn/model/VolumeType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace mgn
  {
    namespace Model
    {
      namespace VolumeTypeMapper
      {

        static const int io1_HASH = HashingUtils::HashString("io1");
        static const int io2_HASH = HashingUtils::HashString("io2");
        static const int gp3_HASH = HashingUtils::HashString("gp3");
        static const int gp2_HASH = HashingUtils::HashString("gp2");
        static const int st1_HASH = HashingUtils::HashString("st1");
        static const int sc1_HASH = HashingUtils::HashString("sc1");
        static const int standard_HASH = HashingUtils::HashString("standard");


        VolumeType GetVolumeTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == io1_HASH)
          {
            return VolumeType::io1;
          }
          else if (hashCode == io2_HASH)
          {
            return VolumeType::io2;
          }
          else if (hashCode == gp3_HASH)
          {
            return VolumeType::gp3;
          }
          else if (hashCode == gp2_HASH)
          {
            return VolumeType::gp2;
          }
          else if (hashCode == st1_HASH)
          {
            return VolumeType::st1;
          }
          else if (hashCode == sc1_HASH)
          {
            return VolumeType::sc1;
          }
          else if (hashCode == standard_HASH)
          {
            return VolumeType::standard;
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
          case VolumeType::io1:
            return "io1";
          case VolumeType::io2:
            return "io2";
          case VolumeType::gp3:
            return "gp3";
          case VolumeType::gp2:
            return "gp2";
          case VolumeType::st1:
            return "st1";
          case VolumeType::sc1:
            return "sc1";
          case VolumeType::standard:
            return "standard";
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
  } // namespace mgn
} // namespace Aws
