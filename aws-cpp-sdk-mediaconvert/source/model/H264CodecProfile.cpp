/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mediaconvert/model/H264CodecProfile.h>
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
      namespace H264CodecProfileMapper
      {

        static const int BASELINE_HASH = HashingUtils::HashString("BASELINE");
        static const int HIGH_HASH = HashingUtils::HashString("HIGH");
        static const int HIGH_10BIT_HASH = HashingUtils::HashString("HIGH_10BIT");
        static const int HIGH_422_HASH = HashingUtils::HashString("HIGH_422");
        static const int HIGH_422_10BIT_HASH = HashingUtils::HashString("HIGH_422_10BIT");
        static const int MAIN_HASH = HashingUtils::HashString("MAIN");


        H264CodecProfile GetH264CodecProfileForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == BASELINE_HASH)
          {
            return H264CodecProfile::BASELINE;
          }
          else if (hashCode == HIGH_HASH)
          {
            return H264CodecProfile::HIGH;
          }
          else if (hashCode == HIGH_10BIT_HASH)
          {
            return H264CodecProfile::HIGH_10BIT;
          }
          else if (hashCode == HIGH_422_HASH)
          {
            return H264CodecProfile::HIGH_422;
          }
          else if (hashCode == HIGH_422_10BIT_HASH)
          {
            return H264CodecProfile::HIGH_422_10BIT;
          }
          else if (hashCode == MAIN_HASH)
          {
            return H264CodecProfile::MAIN;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<H264CodecProfile>(hashCode);
          }

          return H264CodecProfile::NOT_SET;
        }

        Aws::String GetNameForH264CodecProfile(H264CodecProfile enumValue)
        {
          switch(enumValue)
          {
          case H264CodecProfile::BASELINE:
            return "BASELINE";
          case H264CodecProfile::HIGH:
            return "HIGH";
          case H264CodecProfile::HIGH_10BIT:
            return "HIGH_10BIT";
          case H264CodecProfile::HIGH_422:
            return "HIGH_422";
          case H264CodecProfile::HIGH_422_10BIT:
            return "HIGH_422_10BIT";
          case H264CodecProfile::MAIN:
            return "MAIN";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace H264CodecProfileMapper
    } // namespace Model
  } // namespace MediaConvert
} // namespace Aws
