/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/medialive/model/Mpeg2ColorSpace.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace MediaLive
  {
    namespace Model
    {
      namespace Mpeg2ColorSpaceMapper
      {

        static const int AUTO_HASH = HashingUtils::HashString("AUTO");
        static const int PASSTHROUGH_HASH = HashingUtils::HashString("PASSTHROUGH");


        Mpeg2ColorSpace GetMpeg2ColorSpaceForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == AUTO_HASH)
          {
            return Mpeg2ColorSpace::AUTO;
          }
          else if (hashCode == PASSTHROUGH_HASH)
          {
            return Mpeg2ColorSpace::PASSTHROUGH;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<Mpeg2ColorSpace>(hashCode);
          }

          return Mpeg2ColorSpace::NOT_SET;
        }

        Aws::String GetNameForMpeg2ColorSpace(Mpeg2ColorSpace enumValue)
        {
          switch(enumValue)
          {
          case Mpeg2ColorSpace::AUTO:
            return "AUTO";
          case Mpeg2ColorSpace::PASSTHROUGH:
            return "PASSTHROUGH";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace Mpeg2ColorSpaceMapper
    } // namespace Model
  } // namespace MediaLive
} // namespace Aws
