/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/medialive/model/AacCodingMode.h>
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
      namespace AacCodingModeMapper
      {

        static const int AD_RECEIVER_MIX_HASH = HashingUtils::HashString("AD_RECEIVER_MIX");
        static const int CODING_MODE_1_0_HASH = HashingUtils::HashString("CODING_MODE_1_0");
        static const int CODING_MODE_1_1_HASH = HashingUtils::HashString("CODING_MODE_1_1");
        static const int CODING_MODE_2_0_HASH = HashingUtils::HashString("CODING_MODE_2_0");
        static const int CODING_MODE_5_1_HASH = HashingUtils::HashString("CODING_MODE_5_1");


        AacCodingMode GetAacCodingModeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == AD_RECEIVER_MIX_HASH)
          {
            return AacCodingMode::AD_RECEIVER_MIX;
          }
          else if (hashCode == CODING_MODE_1_0_HASH)
          {
            return AacCodingMode::CODING_MODE_1_0;
          }
          else if (hashCode == CODING_MODE_1_1_HASH)
          {
            return AacCodingMode::CODING_MODE_1_1;
          }
          else if (hashCode == CODING_MODE_2_0_HASH)
          {
            return AacCodingMode::CODING_MODE_2_0;
          }
          else if (hashCode == CODING_MODE_5_1_HASH)
          {
            return AacCodingMode::CODING_MODE_5_1;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<AacCodingMode>(hashCode);
          }

          return AacCodingMode::NOT_SET;
        }

        Aws::String GetNameForAacCodingMode(AacCodingMode enumValue)
        {
          switch(enumValue)
          {
          case AacCodingMode::AD_RECEIVER_MIX:
            return "AD_RECEIVER_MIX";
          case AacCodingMode::CODING_MODE_1_0:
            return "CODING_MODE_1_0";
          case AacCodingMode::CODING_MODE_1_1:
            return "CODING_MODE_1_1";
          case AacCodingMode::CODING_MODE_2_0:
            return "CODING_MODE_2_0";
          case AacCodingMode::CODING_MODE_5_1:
            return "CODING_MODE_5_1";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace AacCodingModeMapper
    } // namespace Model
  } // namespace MediaLive
} // namespace Aws
