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

        static constexpr uint32_t standard_HASH = ConstExprHashingUtils::HashString("standard");
        static constexpr uint32_t io1_HASH = ConstExprHashingUtils::HashString("io1");
        static constexpr uint32_t io2_HASH = ConstExprHashingUtils::HashString("io2");
        static constexpr uint32_t gp2_HASH = ConstExprHashingUtils::HashString("gp2");
        static constexpr uint32_t gp3_HASH = ConstExprHashingUtils::HashString("gp3");
        static constexpr uint32_t sc1_HASH = ConstExprHashingUtils::HashString("sc1");
        static constexpr uint32_t st1_HASH = ConstExprHashingUtils::HashString("st1");


        EbsVolumeType GetEbsVolumeTypeForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
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
          else if (hashCode == gp3_HASH)
          {
            return EbsVolumeType::gp3;
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
          case EbsVolumeType::NOT_SET:
            return {};
          case EbsVolumeType::standard:
            return "standard";
          case EbsVolumeType::io1:
            return "io1";
          case EbsVolumeType::io2:
            return "io2";
          case EbsVolumeType::gp2:
            return "gp2";
          case EbsVolumeType::gp3:
            return "gp3";
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
