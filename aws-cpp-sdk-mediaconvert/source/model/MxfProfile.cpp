/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mediaconvert/model/MxfProfile.h>
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
      namespace MxfProfileMapper
      {

        static const int D_10_HASH = HashingUtils::HashString("D_10");
        static const int XDCAM_HASH = HashingUtils::HashString("XDCAM");
        static const int OP1A_HASH = HashingUtils::HashString("OP1A");


        MxfProfile GetMxfProfileForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == D_10_HASH)
          {
            return MxfProfile::D_10;
          }
          else if (hashCode == XDCAM_HASH)
          {
            return MxfProfile::XDCAM;
          }
          else if (hashCode == OP1A_HASH)
          {
            return MxfProfile::OP1A;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<MxfProfile>(hashCode);
          }

          return MxfProfile::NOT_SET;
        }

        Aws::String GetNameForMxfProfile(MxfProfile enumValue)
        {
          switch(enumValue)
          {
          case MxfProfile::D_10:
            return "D_10";
          case MxfProfile::XDCAM:
            return "XDCAM";
          case MxfProfile::OP1A:
            return "OP1A";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace MxfProfileMapper
    } // namespace Model
  } // namespace MediaConvert
} // namespace Aws
