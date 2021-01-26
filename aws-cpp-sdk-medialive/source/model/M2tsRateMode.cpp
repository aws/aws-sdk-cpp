/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/medialive/model/M2tsRateMode.h>
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
      namespace M2tsRateModeMapper
      {

        static const int CBR_HASH = HashingUtils::HashString("CBR");
        static const int VBR_HASH = HashingUtils::HashString("VBR");


        M2tsRateMode GetM2tsRateModeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == CBR_HASH)
          {
            return M2tsRateMode::CBR;
          }
          else if (hashCode == VBR_HASH)
          {
            return M2tsRateMode::VBR;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<M2tsRateMode>(hashCode);
          }

          return M2tsRateMode::NOT_SET;
        }

        Aws::String GetNameForM2tsRateMode(M2tsRateMode enumValue)
        {
          switch(enumValue)
          {
          case M2tsRateMode::CBR:
            return "CBR";
          case M2tsRateMode::VBR:
            return "VBR";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace M2tsRateModeMapper
    } // namespace Model
  } // namespace MediaLive
} // namespace Aws
