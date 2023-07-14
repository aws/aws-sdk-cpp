/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mediaconvert/model/DeinterlacerMode.h>
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
      namespace DeinterlacerModeMapper
      {

        static const int DEINTERLACE_HASH = HashingUtils::HashString("DEINTERLACE");
        static const int INVERSE_TELECINE_HASH = HashingUtils::HashString("INVERSE_TELECINE");
        static const int ADAPTIVE_HASH = HashingUtils::HashString("ADAPTIVE");


        DeinterlacerMode GetDeinterlacerModeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == DEINTERLACE_HASH)
          {
            return DeinterlacerMode::DEINTERLACE;
          }
          else if (hashCode == INVERSE_TELECINE_HASH)
          {
            return DeinterlacerMode::INVERSE_TELECINE;
          }
          else if (hashCode == ADAPTIVE_HASH)
          {
            return DeinterlacerMode::ADAPTIVE;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<DeinterlacerMode>(hashCode);
          }

          return DeinterlacerMode::NOT_SET;
        }

        Aws::String GetNameForDeinterlacerMode(DeinterlacerMode enumValue)
        {
          switch(enumValue)
          {
          case DeinterlacerMode::DEINTERLACE:
            return "DEINTERLACE";
          case DeinterlacerMode::INVERSE_TELECINE:
            return "INVERSE_TELECINE";
          case DeinterlacerMode::ADAPTIVE:
            return "ADAPTIVE";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace DeinterlacerModeMapper
    } // namespace Model
  } // namespace MediaConvert
} // namespace Aws
