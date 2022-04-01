/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mediaconvert/model/MxfAfdSignaling.h>
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
      namespace MxfAfdSignalingMapper
      {

        static const int NO_COPY_HASH = HashingUtils::HashString("NO_COPY");
        static const int COPY_FROM_VIDEO_HASH = HashingUtils::HashString("COPY_FROM_VIDEO");


        MxfAfdSignaling GetMxfAfdSignalingForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == NO_COPY_HASH)
          {
            return MxfAfdSignaling::NO_COPY;
          }
          else if (hashCode == COPY_FROM_VIDEO_HASH)
          {
            return MxfAfdSignaling::COPY_FROM_VIDEO;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<MxfAfdSignaling>(hashCode);
          }

          return MxfAfdSignaling::NOT_SET;
        }

        Aws::String GetNameForMxfAfdSignaling(MxfAfdSignaling enumValue)
        {
          switch(enumValue)
          {
          case MxfAfdSignaling::NO_COPY:
            return "NO_COPY";
          case MxfAfdSignaling::COPY_FROM_VIDEO:
            return "COPY_FROM_VIDEO";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace MxfAfdSignalingMapper
    } // namespace Model
  } // namespace MediaConvert
} // namespace Aws
