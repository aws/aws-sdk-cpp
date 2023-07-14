/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mediaconvert/model/Mpeg2CodecProfile.h>
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
      namespace Mpeg2CodecProfileMapper
      {

        static const int MAIN_HASH = HashingUtils::HashString("MAIN");
        static const int PROFILE_422_HASH = HashingUtils::HashString("PROFILE_422");


        Mpeg2CodecProfile GetMpeg2CodecProfileForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == MAIN_HASH)
          {
            return Mpeg2CodecProfile::MAIN;
          }
          else if (hashCode == PROFILE_422_HASH)
          {
            return Mpeg2CodecProfile::PROFILE_422;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<Mpeg2CodecProfile>(hashCode);
          }

          return Mpeg2CodecProfile::NOT_SET;
        }

        Aws::String GetNameForMpeg2CodecProfile(Mpeg2CodecProfile enumValue)
        {
          switch(enumValue)
          {
          case Mpeg2CodecProfile::MAIN:
            return "MAIN";
          case Mpeg2CodecProfile::PROFILE_422:
            return "PROFILE_422";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace Mpeg2CodecProfileMapper
    } // namespace Model
  } // namespace MediaConvert
} // namespace Aws
