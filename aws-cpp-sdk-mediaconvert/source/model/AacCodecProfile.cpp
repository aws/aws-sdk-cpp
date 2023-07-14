/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mediaconvert/model/AacCodecProfile.h>
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
      namespace AacCodecProfileMapper
      {

        static const int LC_HASH = HashingUtils::HashString("LC");
        static const int HEV1_HASH = HashingUtils::HashString("HEV1");
        static const int HEV2_HASH = HashingUtils::HashString("HEV2");


        AacCodecProfile GetAacCodecProfileForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == LC_HASH)
          {
            return AacCodecProfile::LC;
          }
          else if (hashCode == HEV1_HASH)
          {
            return AacCodecProfile::HEV1;
          }
          else if (hashCode == HEV2_HASH)
          {
            return AacCodecProfile::HEV2;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<AacCodecProfile>(hashCode);
          }

          return AacCodecProfile::NOT_SET;
        }

        Aws::String GetNameForAacCodecProfile(AacCodecProfile enumValue)
        {
          switch(enumValue)
          {
          case AacCodecProfile::LC:
            return "LC";
          case AacCodecProfile::HEV1:
            return "HEV1";
          case AacCodecProfile::HEV2:
            return "HEV2";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace AacCodecProfileMapper
    } // namespace Model
  } // namespace MediaConvert
} // namespace Aws
