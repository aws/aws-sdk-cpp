/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mediaconvert/model/ContainerType.h>
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
      namespace ContainerTypeMapper
      {

        static const int F4V_HASH = HashingUtils::HashString("F4V");
        static const int ISMV_HASH = HashingUtils::HashString("ISMV");
        static const int M2TS_HASH = HashingUtils::HashString("M2TS");
        static const int M3U8_HASH = HashingUtils::HashString("M3U8");
        static const int CMFC_HASH = HashingUtils::HashString("CMFC");
        static const int MOV_HASH = HashingUtils::HashString("MOV");
        static const int MP4_HASH = HashingUtils::HashString("MP4");
        static const int MPD_HASH = HashingUtils::HashString("MPD");
        static const int MXF_HASH = HashingUtils::HashString("MXF");
        static const int WEBM_HASH = HashingUtils::HashString("WEBM");
        static const int RAW_HASH = HashingUtils::HashString("RAW");


        ContainerType GetContainerTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == F4V_HASH)
          {
            return ContainerType::F4V;
          }
          else if (hashCode == ISMV_HASH)
          {
            return ContainerType::ISMV;
          }
          else if (hashCode == M2TS_HASH)
          {
            return ContainerType::M2TS;
          }
          else if (hashCode == M3U8_HASH)
          {
            return ContainerType::M3U8;
          }
          else if (hashCode == CMFC_HASH)
          {
            return ContainerType::CMFC;
          }
          else if (hashCode == MOV_HASH)
          {
            return ContainerType::MOV;
          }
          else if (hashCode == MP4_HASH)
          {
            return ContainerType::MP4;
          }
          else if (hashCode == MPD_HASH)
          {
            return ContainerType::MPD;
          }
          else if (hashCode == MXF_HASH)
          {
            return ContainerType::MXF;
          }
          else if (hashCode == WEBM_HASH)
          {
            return ContainerType::WEBM;
          }
          else if (hashCode == RAW_HASH)
          {
            return ContainerType::RAW;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ContainerType>(hashCode);
          }

          return ContainerType::NOT_SET;
        }

        Aws::String GetNameForContainerType(ContainerType enumValue)
        {
          switch(enumValue)
          {
          case ContainerType::F4V:
            return "F4V";
          case ContainerType::ISMV:
            return "ISMV";
          case ContainerType::M2TS:
            return "M2TS";
          case ContainerType::M3U8:
            return "M3U8";
          case ContainerType::CMFC:
            return "CMFC";
          case ContainerType::MOV:
            return "MOV";
          case ContainerType::MP4:
            return "MP4";
          case ContainerType::MPD:
            return "MPD";
          case ContainerType::MXF:
            return "MXF";
          case ContainerType::WEBM:
            return "WEBM";
          case ContainerType::RAW:
            return "RAW";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ContainerTypeMapper
    } // namespace Model
  } // namespace MediaConvert
} // namespace Aws
