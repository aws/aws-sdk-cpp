/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/medialive/model/InputResolution.h>
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
      namespace InputResolutionMapper
      {

        static const int SD_HASH = HashingUtils::HashString("SD");
        static const int HD_HASH = HashingUtils::HashString("HD");
        static const int UHD_HASH = HashingUtils::HashString("UHD");


        InputResolution GetInputResolutionForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == SD_HASH)
          {
            return InputResolution::SD;
          }
          else if (hashCode == HD_HASH)
          {
            return InputResolution::HD;
          }
          else if (hashCode == UHD_HASH)
          {
            return InputResolution::UHD;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<InputResolution>(hashCode);
          }

          return InputResolution::NOT_SET;
        }

        Aws::String GetNameForInputResolution(InputResolution enumValue)
        {
          switch(enumValue)
          {
          case InputResolution::SD:
            return "SD";
          case InputResolution::HD:
            return "HD";
          case InputResolution::UHD:
            return "UHD";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace InputResolutionMapper
    } // namespace Model
  } // namespace MediaLive
} // namespace Aws
