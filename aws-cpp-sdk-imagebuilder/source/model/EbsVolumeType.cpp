/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/imagebuilder/model/EbsVolumeType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace imagebuilder
  {
    namespace Model
    {
      namespace EbsVolumeTypeMapper
      {

        static const int standard_HASH = HashingUtils::HashString("standard");
        static const int io1_HASH = HashingUtils::HashString("io1");
        static const int io2_HASH = HashingUtils::HashString("io2");
        static const int gp2_HASH = HashingUtils::HashString("gp2");
        static const int sc1_HASH = HashingUtils::HashString("sc1");
        static const int st1_HASH = HashingUtils::HashString("st1");


        EbsVolumeType GetEbsVolumeTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == standard_HASH)
          {
            return EbsVolumeType::standard;
          }
          else if (hashCode == io1_HASH)
          {
            return EbsVolumeType::io1;
          }
          else if (hashCode == io2_HASH)
          {
            return EbsVolumeType::io2;
          }
          else if (hashCode == gp2_HASH)
          {
            return EbsVolumeType::gp2;
          }
          else if (hashCode == sc1_HASH)
          {
            return EbsVolumeType::sc1;
          }
          else if (hashCode == st1_HASH)
          {
            return EbsVolumeType::st1;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<EbsVolumeType>(hashCode);
          }

          return EbsVolumeType::NOT_SET;
        }

        Aws::String GetNameForEbsVolumeType(EbsVolumeType enumValue)
        {
          switch(enumValue)
          {
          case EbsVolumeType::standard:
            return "standard";
          case EbsVolumeType::io1:
            return "io1";
          case EbsVolumeType::io2:
            return "io2";
          case EbsVolumeType::gp2:
            return "gp2";
          case EbsVolumeType::sc1:
            return "sc1";
          case EbsVolumeType::st1:
            return "st1";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace EbsVolumeTypeMapper
    } // namespace Model
  } // namespace imagebuilder
} // namespace Aws
